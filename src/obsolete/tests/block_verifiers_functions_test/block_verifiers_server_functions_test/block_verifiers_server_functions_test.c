#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "define_macro_functions.h"
#include "define_macros.h"
#include "structures.h"
#include "define_macros_test.h"

#include "delete_database_functions.h"
#include "read_database_functions.h"
#include "count_database_functions.h"
#include "network_functions.h"
#include "network_security_functions.h"
#include "variables_test.h"
#include "string_functions.h"
#include "block_verifiers_server_functions_test.h"

/*
-----------------------------------------------------------------------------------------------------------
Functions
-----------------------------------------------------------------------------------------------------------
*/

/*
-----------------------------------------------------------------------------------------------------------
Name: block_verifiers_server_functions_test
Description: Test the block_verifiers_server functions
Return: The number of passed block_verifiers_server_functions test
-----------------------------------------------------------------------------------------------------------
*/

int block_verifiers_server_functions_test(void)
{
  // define macros
  #define RESET_INVALID_RESERVE_PROOFS_DATA \
  for (count = 0; count < invalid_reserve_proofs.count; count++) \
  { \
    pointer_reset(invalid_reserve_proofs.block_verifier_public_address[count]); \
    pointer_reset(invalid_reserve_proofs.public_address_created_reserve_proof[count]); \
    pointer_reset(invalid_reserve_proofs.public_address_voted_for[count]); \
    pointer_reset(invalid_reserve_proofs.reserve_proof[count]); \
  } \
  invalid_reserve_proofs.count = 0;

  // reset the variables
  memset(result_test,0,sizeof(result_test));
  memset(data_test,0,sizeof(data_test));
  count_test = 0;
  network_functions_test_error_settings = 2;
  RESET_ERROR_MESSAGES;
 
  // write the start test message
  fprintf(stderr,"\033[1;34m%s\nblock verifiers server functions test - Total test: %d\n%s\n\n\033[0m",TEST_OUTLINE,BLOCK_VERIFIERS_SERVER_FUNCTIONS_TOTAL_TEST,TEST_OUTLINE);
 
  // run the test
  main_network_data_node_create_block = 1;
  memset(result_test,0,sizeof(result_test));
  memset(data_test,0,sizeof(data_test));
  delete_database(database_name);
  memcpy(data_test,SERVER_RECEIVE_DATA_SOCKET_MAIN_NETWORK_DATA_NODE_TO_BLOCK_VERIFIER_START_BLOCK_TEST_DATA,sizeof(SERVER_RECEIVE_DATA_SOCKET_MAIN_NETWORK_DATA_NODE_TO_BLOCK_VERIFIER_START_BLOCK_TEST_DATA)-1);
  sign_data(data_test);
  send_data_socket(XCASH_DPOPS_delegates_IP_address,SEND_DATA_PORT,data_test,SEND_OR_RECEIVE_SOCKET_DATA_TIMEOUT_SETTINGS);
  sleep(5);
  if (count_documents_in_collection(database_name,"reserve_bytes_1","{\"block_height\":\"" XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT_TEST "\"}") == 1)
  {
    color_print("PASSED! Test for server_receive_data_socket_main_network_data_node_to_block_verifier_start_block","green");
    count_test++;
  }
  else
  {
    color_print("FAILED! Test for server_receive_data_socket_main_network_data_node_to_block_verifier_start_block","red");
  }
  RESET_ERROR_MESSAGES;
  delete_database(database_name);
  main_network_data_node_create_block = 0;
  
  // set the current_round_part and current_round_part_backup_node
  memset(current_round_part_backup_node,0,sizeof(current_round_part_backup_node));
  memcpy(current_round_part_backup_node,"1",sizeof(char));
  main_network_data_node_create_block = 1;
  memset(network_data_nodes_list.network_data_nodes_public_address[0],0,sizeof(network_data_nodes_list.network_data_nodes_public_address[0]));
  memcpy(network_data_nodes_list.network_data_nodes_public_address[0],xcash_wallet_public_address,XCASH_WALLET_LENGTH);
  network_functions_test_error_settings = 0;
  CHECK_SERVER_FUNCTIONS("server_receive_data_socket_main_network_data_node_to_block_verifier_create_new_block",SERVER_RECEIVE_DATA_SOCKET_MAIN_NETWORK_DATA_NODE_TO_BLOCK_VERIFIER_CREATE_NEW_BLOCK_TEST_DATA);
  network_functions_test_error_settings = 1;
  CHECK_SERVER_FUNCTIONS("server_receive_data_socket_block_verifier_to_main_network_data_node_create_new_block",SERVER_RECEIVE_DATA_SOCKET_BLOCK_VERIFIER_TO_MAIN_NETWORK_DATA_NODE_CREATE_NEW_BLOCK_TEST_DATA);
  network_functions_test_error_settings = 2;

  memset(data_test,0,sizeof(data_test));
  RESET_ERROR_MESSAGES;
  memcpy(data_test,SERVER_RECEIVE_DATA_SOCKET_MAIN_NODE_TO_NODE_MESSAGE_PART_4_TEST_DATA,sizeof(SERVER_RECEIVE_DATA_SOCKET_MAIN_NODE_TO_NODE_MESSAGE_PART_4_TEST_DATA)-1);
  if (sign_data(data_test) == 1 && send_data_socket(XCASH_DPOPS_delegates_IP_address,SEND_DATA_PORT,data_test,SEND_OR_RECEIVE_SOCKET_DATA_TIMEOUT_SETTINGS) == 1 && sleep(5) == 0 && strncmp(VRF_data.block_blob,NETWORK_BLOCK,sizeof(NETWORK_BLOCK)) == 0)
  {
    color_print("PASSED! Test for server_receive_data_socket_main_node_to_node_message_part_4","green");
    count_test++;
  }
  else
  {
    color_print("FAILED! Test for server_receive_data_socket_main_node_to_node_message_part_4","red");
  }
  RESET_ERROR_MESSAGES;
  
  CHECK_SERVER_FUNCTIONS("server_receive_data_socket_node_to_node",SERVER_RECEIVE_DATA_SOCKET_NODE_TO_NODE_TEST_DATA);
  CHECK_SERVER_FUNCTIONS("server_receive_data_socket_block_verifiers_to_block_verifiers_vrf_data",SERVER_RECEIVE_DATA_SOCKET_BLOCK_VERIFIERS_TO_BLOCK_VERIFIERS_VRF_DATA_TEST_DATA);
  CHECK_SERVER_FUNCTIONS("server_receive_data_socket_block_verifiers_to_block_verifiers_block_blob_signature",SERVER_RECEIVE_DATA_SOCKET_BLOCK_VERIFIERS_TO_BLOCK_VERIFIERS_BLOCK_BLOB_SIGNATURE_TEST_DATA);

  // write the end test message
  fprintf(stderr,"\033[1;33m\n\n%s\nblock verifiers server functions test - Passed test: %d, Failed test: %d\n%s\n\n\n\033[0m",TEST_OUTLINE,count_test,BLOCK_VERIFIERS_SERVER_FUNCTIONS_TOTAL_TEST-count_test,TEST_OUTLINE);
  return count_test;

  #undef RESET_INVALID_RESERVE_PROOFS_DATA
}
