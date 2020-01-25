#include <stdio.h>
#include <stdlib.h>
#include <mongoc/mongoc.h>
#include <bson/bson.h>

#include "define_macro_functions.h"
#include "define_macros.h"
#include "structures.h"
#include "variables.h"

#include "update_database_functions.h"
#include "database_functions.h"
#include "network_functions.h"
#include "string_functions.h"
#include "vrf.h"
#include "crypto_vrf.h"
#include "VRF_functions.h"
#include "sha512EL.h"

/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: update_document_from_collection
Description: Updates a document from the collection
Parameters:
  DATABASE - The database name
  COLLECTION - The collection name
  DATA - The json data to use to search the collection for
  FIELD_NAME_AND_DATA - The json data to use to update the document
  THREAD_SETTINGS - 1 to use a separate thread, otherwise 0
Return: 0 if an error has occured, 1 if successfull
-----------------------------------------------------------------------------------------------------------
*/

int update_document_from_collection(const char* DATABASE, const char* COLLECTION, const char* DATA, const char* FIELD_NAME_AND_DATA, const int THREAD_SETTINGS)
{
  // Variables
  char* data2 = (char*)calloc(BUFFER_SIZE,sizeof(char));
  char buffer[1024];
  time_t current_date_and_time;
  struct tm current_UTC_date_and_time;
  mongoc_client_t* database_client_thread = NULL;
  mongoc_collection_t* collection;
  bson_error_t error;
  bson_t* update = NULL;
  bson_t* update_settings = NULL;

  // define macros
  #define database_reset_all \
  bson_destroy(update); \
  bson_destroy(update_settings); \
  mongoc_collection_destroy(collection); \
  if (THREAD_SETTINGS == 1) \
  { \
    mongoc_client_pool_push(database_client_thread_pool, database_client_thread); \
  }

  // check if the memory needed was allocated on the heap successfully
  if (data2 == NULL)
  {
    memcpy(error_message.function[error_message.total],"update_document_from_collection",31);
    memcpy(error_message.data[error_message.total],"Could not allocate the memory needed on the heap",48);
    error_message.total++;
    print_error_message(current_date_and_time,current_UTC_date_and_time,buffer);  
    exit(0);
  } 

   // check if we need to create a database connection, or use the global database connection
  if (THREAD_SETTINGS == 0)
  {
    // set the collection
    collection = mongoc_client_get_collection(database_client, DATABASE, COLLECTION);
  }
  else
  {
    database_client_thread = mongoc_client_pool_pop(database_client_thread_pool);
    if (!database_client_thread)
    {
      pointer_reset(data2);
      return 0;
    }
    // set the collection
    collection = mongoc_client_get_collection(database_client_thread, DATABASE, COLLECTION);
  }

  // check if the database collection exist
  if (check_if_database_collection_exist(DATABASE,COLLECTION,THREAD_SETTINGS) == 0)
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }
  
  update = bson_new_from_json((const uint8_t *)DATA, -1, &error);
  if (!update)
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }
 
  const size_t FIELD_NAME_AND_DATA_LENGTH = strnlen(FIELD_NAME_AND_DATA,BUFFER_SIZE)-1;
  memcpy(data2,"{\"$set\":",8);
  memcpy(data2+8,FIELD_NAME_AND_DATA,FIELD_NAME_AND_DATA_LENGTH);
  memcpy(data2+8+FIELD_NAME_AND_DATA_LENGTH,"}}",2);

  update_settings = bson_new_from_json((const uint8_t *)data2, -1, &error);
  if (!update_settings)
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }
  
  if (!mongoc_collection_update_one(collection, update, update_settings, NULL, NULL, &error))
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }

  pointer_reset(data2);
  database_reset_all;
  return 1;

  #undef database_reset_all
}



/*
-----------------------------------------------------------------------------------------------------------
Name: update_all_documents_from_collection
Description: Updates all documents in a collection
Parameters:
  DATABASE - The database name
  COLLECTION - The collection name
  DATA - The json data to use to update the documents
  THREAD_SETTINGS - 1 to use a separate thread, otherwise 0
Return: 0 if an error has occured, 1 if successfull
-----------------------------------------------------------------------------------------------------------
*/

int update_all_documents_from_collection(const char* DATABASE, const char* COLLECTION, const char* DATA, const int THREAD_SETTINGS)
{
  // Variables
  char* data2 = (char*)calloc(BUFFER_SIZE,sizeof(char));
  char buffer[1024];
  time_t current_date_and_time;
  struct tm current_UTC_date_and_time;
  mongoc_client_t* database_client_thread = NULL;
  mongoc_collection_t* collection;
  bson_error_t error;
  bson_t* update = NULL;
  bson_t* update_settings = NULL;

  // define macros
  #define database_reset_all \
  bson_destroy(update); \
  bson_destroy(update_settings); \
  mongoc_collection_destroy(collection); \
  if (THREAD_SETTINGS == 1) \
  { \
    mongoc_client_pool_push(database_client_thread_pool, database_client_thread); \
  }

  // check if the memory needed was allocated on the heap successfully
  if (data2 == NULL)
  {
    memcpy(error_message.function[error_message.total],"update_all_documents_from_collection",36);
    memcpy(error_message.data[error_message.total],"Could not allocate the memory needed on the heap",48);
    error_message.total++;
    print_error_message(current_date_and_time,current_UTC_date_and_time,buffer);  
    exit(0);
  } 

   // check if we need to create a database connection, or use the global database connection
  if (THREAD_SETTINGS == 0)
  {
    // set the collection
    collection = mongoc_client_get_collection(database_client, DATABASE, COLLECTION);
  }
  else
  {
    database_client_thread = mongoc_client_pool_pop(database_client_thread_pool);
    if (!database_client_thread)
    {
      pointer_reset(data2);
      return 0;
    }
    // set the collection
    collection = mongoc_client_get_collection(database_client_thread, DATABASE, COLLECTION);
  }

  // check if the database collection exist
  if (check_if_database_collection_exist(DATABASE,COLLECTION,THREAD_SETTINGS) == 0)
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }
  
  // set the document to empty so it will get each document in the collection  
  update = bson_new();
  if (!update)
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }
 
  const size_t DATA_LENGTH = strnlen(DATA,BUFFER_SIZE)-1;
  memcpy(data2,"{\"$set\":",8);
  memcpy(data2+8,DATA,DATA_LENGTH);
  memcpy(data2+8+DATA_LENGTH,"}}",2);

  update_settings = bson_new_from_json((const uint8_t *)data2, -1, &error);
  if (!update_settings)
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }
  
  if (!mongoc_collection_update_many(collection, update, update_settings, NULL, NULL, &error))
  {
    pointer_reset(data2);
    database_reset_all;
    return 0;
  }

  pointer_reset(data2);
  database_reset_all;
  return 1;

  #undef database_reset_all
}