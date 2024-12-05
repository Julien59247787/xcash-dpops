#ifndef DEFINE_MACROS_H_   /* Include guard */
#define DEFINE_MACROS_H_

/*
-----------------------------------------------------------------------------------------------------------
Using define statements instead of constants for increased efficiency
-----------------------------------------------------------------------------------------------------------
*/

// Blockchain
#define XCASH_WALLET_LENGTH 98 // The length of a XCA addres
#define XCASH_WALLET_PREFIX "XCA" // The prefix of a XCA address
#define XCASH_TOTAL_SUPPLY 100000000000 // The total supply
#define XCASH_PREMINE_TOTAL_SUPPLY 40000000000 // The total supply of the premine
#define XCASH_PREMINE_CIRCULATING_SUPPLY 14200000000 // The circulating supply of the premine
#define XCASH_WALLET_DECIMAL_PLACES_AMOUNT 1000000
#define XCASH_EMMISION_FACTOR 524288 // The emmision factor (2^19)
#define XCASH_DPOPS_EMMISION_FACTOR 262144 // The xcash-dpops emmision factor (2^18)
#define FIRST_BLOCK_MINING_REWARD 190734.863281 // The first blocks mining reward
#define XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT 800000 // The start block height for X-CASH proof of stake
#define XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT_DATA "800000" // The start block height for X-CASH proof of stake
#define BLOCK_TIME 5 // The block time in minutes
#define BLOCK_TIME_SEC (BLOCK_TIME*60) // The block time in seconds

#define BLOCKS_PER_DAY_FIVE_MINUTE_BLOCK_TIME 288 // The blocks per day with a 5 minute block time
#define UNLOCK_BLOCK_AMOUNT 60 // The default unlock block amount for a block reward transaction
#define MAXIMUM_TRANSACATIONS_PER_BLOCK 500 // The maximum amount of transaction per block
#define XCASH_SIGN_DATA_PREFIX "SigV1" // The prefix of a XCASH_DPOPS_signature for the signed data
#define XCASH_SIGN_DATA_LENGTH 93 // The length of a XCASH_DPOPS_signature for the signed data
#define MAXIMUM_UNSPENTS_PER_TRANSACTION 15 // The maximum amount of unspents per transaction

// Network block string 
#define BLOCK_PRODUCER_NETWORK_BLOCK_NONCE "00000000" // The network block nonce used when the block producer creates the block
#define CONSENSUS_NODE_NETWORK_BLOCK_NONCE "11111111" // The network block nonce used when the consensus node creates the block
#define NETWORK_VERSION "0d0d" // The network version
#define TIMESTAMP_LENGTH 10 // The length of the timestamp
#define BLOCK_HASH_LENGTH 64 // The length of the block hash
#define TRANSACTION_HASH_LENGTH 64 // The length of the transaction hash
#define STEALTH_ADDRESS_OUTPUT_LENGTH 64 // The length of the stealth address output
#define TRANSACTION_PUBLIC_KEY_LENGTH 66 // The length of the transaction public key
#define TRANSACTION_LENGTH 64 // The length of a transaction
#define BLOCK_REWARD_TRANSACTION_VERSION "02"
#define BLOCK_REWARD_INPUT "01"
#define VIN_TYPE "ff"
#define BLOCK_REWARD_OUTPUT "01"
#define STEALTH_ADDRESS_OUTPUT_TAG "02"
#define TRANSACTION_PUBLIC_KEY_TAG "01"
#define EXTRA_NONCE_TAG "02"
#define RINGCT_VERSION "00"
#define BLOCKCHAIN_RESERVED_BYTES_START "7c424c4f434b434841494e5f52455345525645445f42595445535f53544152547c"
#define BLOCKCHAIN_RESERVED_BYTES_DATA_HASH "02800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" // the reserve bytes data hash
#define BLOCKCHAIN_DATA_SEGMENT_STRING "7c424c4f434b434841494e5f444154415f5345474d454e545f535452494e477c"
#define BLOCKCHAIN_DATA_SEGMENT_PUBLIC_ADDRESS_STRING "|BLOCKCHAIN_DATA_SEGMENT_STRING_PUBLIC_KEY|"
#define BLOCKCHAIN_DATA_SEGMENT_PUBLIC_ADDRESS_STRING_DATA "7c424c4f434b434841494e5f444154415f5345474d454e545f535452494e475f5055424c49435f4b45597c"
#define BLOCKCHAIN_RESERVED_BYTES_END "7c424c4f434b434841494e5f52455345525645445f42595445535f454e447c"
#define BLOCKCHAIN_RESERVED_BYTES_START_DATA "424c4f434b434841494e5f52455345525645445f42595445535f5354415254"
#define BLOCKCHAIN_RESERVED_BYTES_END_DATA "424c4f434b434841494e5f52455345525645445f42595445535f454e44"
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_VRF_SECRET_KEY_DATA "30303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030" // The place holder bytes for a block verifier that does not create a VRF secret key, for the VRF secret key data
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_VRF_SECRET_KEY "0000000000000000000000000000000000000000000000000000000000000000" // The place holder bytes for a block verifier that does not create a VRF secret key
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_VRF_PUBLIC_KEY_DATA "3030303030303030303030303030303030303030303030303030303030303030" // The place holder bytes for a block verifier that does not create a VRF public key, for the VRF public key data
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_VRF_PUBLIC_KEY "00000000000000000000000000000000" // The place holder bytes for a block verifier that does not create a VRF public key
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_RANDOM_STRING_DATA "30303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030" // The place holder bytes for a block verifier that does not create a random string, for the random string data
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_RANDOM_STRING "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" // The place holder bytes for a block verifier that does not create a random string
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_SIGNATURE_DATA "303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030303030" // The place holder bytes for a block verifier that does not create a block verifier signature, for the block verifier signature data
#define GET_BLOCK_TEMPLATE_BLOCK_VERIFIERS_SIGNATURE "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000" // The place holder bytes for a block verifier that does not create a block verifier signature
#define BLOCK_VERIFIER_MAJORITY_VRF_DATA_TEMPLATE "0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"
#define BLOCK_VERIFIER_MAJORITY_BLOCK_VERIFIERS_SIGNATURE_TEMPLATE "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"

#define BLOCKCHAIN_STEALTH_ADDRESS_END "a30101"

// XCASH DPOPS
// Note the BLOCK_VERIFIERS_TOTAL_AMOUNT and BLOCK_VERIFIERS_AMOUNT should be a number that is a multiple of 4 or of 5 or BLOCK_VERIFIERS_TOTAL_AMOUNT should be lower than 50, otherwise it will not have enough time in the round to verify all of the block verifiers signatures
#define XCASH_DPOPS_CURRENT_VERSION "xcash-dpops - Version 1.2.1\n"
#define BLOCK_VERIFIERS_TOTAL_AMOUNT 100 // The total amount of block verifiers
#define BLOCK_VERIFIERS_AMOUNT 50 // The amount of block verifiers in a round
#define BLOCK_VERIFIERS_VALID_AMOUNT 7 // The amount of block verifiers that need to vote true for the part of the round to be valid
#define MAXIMUM_AMOUNT_OF_DELEGATES 150 // The maximum amount of delegates that can be registered
#define MAXIMUM_AMOUNT_OF_VOTERS_PER_DELEGATE 1000 // The maximum amount of voters that a delegate can have
#define MAXIMUM_AMOUNT_OF_VOTERS_PER_DELEGATE_PRIVATE_GROUP 300 // The maximum amount of voters that a delegate can have for a private group
#define BLOCK_PRODUCERS_BACKUP_AMOUNT 5 // The amount of backup block producers for a network
#define INVALID_BLOCK_VERIFIERS_AMOUNT 10 // The maximum amount of times your node did not receive the block from the main network backup node, to indicate if your node is not syncing
#define MINIMUM_AMOUNT_RESERVE_PROOF 2000000000000 // The minimum amount to create a reserve proof, 2M xcash
#define MINIMUM_AMOUNT_REGISTER_DELEGATE 20000000000000 // The minimum amount to keep a registered delegate from being removed from the inactive delegates timer thread, if the delegate has not mined a block yet, 20M xcash
#define DATABASE_DATA_SYNC_DELEGATE_MINIMUM_AMOUNT 0 // The minimum amount to sync the database. This is used for delegates below the top 100 delegates that want to leave the xcash-dpops program running to sync in case they move to the top 100, 100M xcash
#define MINIMUM_AMOUNT_SHARED_DELEGATE_SEND_PAYMENT_AMOUNT 500000000000 // The minimum amount the shared delegate needs to keep in the wallet in order for payments to be sent (500K)
#define START_TIME_MINUTE_BLOCK_VERIFIERS_SYNCHRONIZE_DATABASE 1 // the start time in minutes that the block verifiers synchronize the database each round
#define START_TIME_SECONDS_BLOCK_VERIFIERS_SYNCHRONIZE_DATABASE 10 // the start time in seconds that the block verifiers synchronize the database each round
#define SUBMIT_NETWORK_BLOCK_TIME_SECONDS 25 // The time to submit the network block
#define START_TIME_SECONDS_INVALID_RESERVE_PROOFS_PART_2 20 // the start time of part 2 of the invalid reserve proofs
#define START_TIME_SECONDS_INVALID_RESERVE_PROOFS_PART_3 35 // the start time of part 3 of the invalid reserve proofs
#define BLOCK_VERIFIERS_SETTINGS 3 // The time in seconds to wait to send data to the block verifiers
#define INVALID_RESERVE_PROOFS_SETTINGS 3 // The time in seconds to wait between checking for invalid reserve proofs
#define MAXIMUM_NUMBER_SIZE 25 // The maximum amount of bytes a number could take up in X-CASH
#define MINIMUM_BYTE_RANGE 1 // The minimum byte range to use when calculating the next block producer
#define MAXIMUM_BYTE_RANGE 250 // The maximum byte range to use when calculating the next block producer

// Network
#define XCASH_DAEMON_PORT 18281 // The X-CASH Daemon RPC port
#define XCASH_WALLET_PORT 18285 // The X-CASH Wallet RPC port
// TODO migrate to new name
#define XCASH_DPOPS_PORT 18283 // The X-CASH Dpops service
#define SEND_DATA_PORT 18283 // The port that is used by all nodes to send and receive data
#define MAXIMUM_CONNECTIONS 1000 // The maximum connections a node can have at one time
#define MAXIMUM_CONNECTIONS_IP_ADDRESS_OR_PUBLIC_ADDRESS 20 // The maximum connections a specific IP address or specific public address can have at one time
#define MAXIMUM_DATABASE_SYNC_CONNECTIONS_ATTEMPTS 15 // The maximum database sync connections attempts
#define BLOCK_VERIFIERS_SETTINGS 3 // The time in seconds to wait to send data to the block verifiers
#define MAIN_NETWORK_DATA_NODE_SEND_BLOCK_SETTINGS 10 // The time in seconds that the main network data node waits for the block verifiers signatures
#define NETWORK_DATA_NODES_SYNCHRONIZE_DATABASE_SETTINGS 15 // the time in seconds that the network data nodes wait to see if the database is synced
#define CONNECTION_TIMEOUT_SETTINGS 1 // the time in seconds for a connection to be created
#define SEND_OR_RECEIVE_SOCKET_DATA_TIMEOUT_SETTINGS 3 // The time to wait for sending or receving socket data
#define SEND_PAYMENT_TIMEOUT_SETTINGS 600 // The maximum amount of time to wait in seconds for the send_payment function
#define DATABASE_SYNCING_TIMEOUT_SETTINGS 20 // The maximum amount of time to wait in seconds to sync any of the databases
#define SOCKET_END_STRING "|END|" // End string when sending data between nodes, to signal the end of sending data
#define HTTP_SOCKET_END_STRING "\r\n\r\n" // End string for a HTTP request, to signal the end of sending data
#define TXT_RECORD_START_STRING "xcash-dpops:" // start string for a valid XCASH DPOPS TXT record
#define DELEGATES_WEBSITE_PATH "delegates-explorer/" // The delegates website path
#define SHARED_DELEGATES_WEBSITE_PATH "delegates-pool-website/" // The shared delegates website path
#define XCASH_DAEMON_AND_WALLET_SOCKET_END_STRING "}\r\n}" // End string for the xcash daemon or xcash wallet
#define XCASH_DAEMON_AND_WALLET_ERROR_SOCKET_END_STRING "\"code\":" // End string for the xcash daemon or xcash wallet when an error occurs
#define SYNCED_NETWORK_DATA_NODES_STRING "synced_network_data_nodes" // The synced network data nodes string
#define SYNCED_BLOCK_VERIFIER_STRING "synced_block_verifiers" // The synced block verifiers string
#define ERROR_DATA "ERROR" // The data to send the delegate when there is an error
#define GET_SYNCED_BLOCK_VERIFIERS_REFRESH_SETTINGS (BLOCK_TIME * 60) // The time in seconds to refresh the synced block verifiers

// Lengths
#define BUFFER_SIZE 300000
#define SMALL_BUFFER_SIZE 2000
#define BUFFER_SIZE_RESERVE_PROOF 25000
#define BUFFER_SIZE_NETWORK_BLOCK_DATA 500
#define BUFFER_SIZE_NETWORK_BLOCK_TRANSACTIONS_DATA 100
#define BUFFER_SIZE_BLOCK_HEIGHTS_DATA 150000
#define MAXIMUM_BUFFER_SIZE 52428800 // 50 MB

#define RANDOM_STRING_LENGTH 100 // The length of the random string
#define DATA_HASH_LENGTH 128 // The length of the SHA2-512 hash
#define BITS_IN_BYTE 8 // 8 bits in 1 byte
#define BLOCK_VERIFIERS_IP_ADDRESS_TOTAL_LENGTH 100 // The maximum length of the block verifiers IP address
#define MAXIMUM_BUFFER_SIZE_DELEGATES_NAME 100 // The maximum length of the block verifiers name
#define MINIMUM_BUFFER_SIZE_DELEGATES_NAME 5 // The minimum length of the block verifiers name
#define MAXIMUM_BUFFER_SIZE_DELEGATES_BACKUP_NAMES 505 // The maximum length of the block verifiers name
#define MINIMUM_BUFFER_SIZE_DELEGATES_BACKUP_NAMES 30 // The minimum length of the block verifiers name
#define TOTAL_ERROR_MESSAGES 1000 // The total amount of error messages
#define MAXIMUM_INVALID_RESERVE_PROOFS 100000 // The maximum invalid reserve proofs for the delegate
#define VOTE_PARAMETER_AMOUNT 5 // The vote parameter amount
#define REGISTER_PARAMETER_AMOUNT 6 // The register parameter amount
#define UPDATE_PARAMETER_AMOUNT 5 // The update parameter amount
#define RECOVER_PARAMETER_AMOUNT 2 // The recover parameter amount
#define GET_RESERVE_BYTES_DATABASE_HASH_PARAMETER_AMOUNT 5 // The GET_RESERVE_BYTES_DATABASE_HASH parameter amount

// VRF
#define VRF_PUBLIC_KEY_LENGTH 64
#define VRF_SECRET_KEY_LENGTH 128
#define VRF_PROOF_LENGTH 160
#define VRF_BETA_LENGTH 128
#define VRF_DATA "74727565" // true when the VRF data is verified

// Database
// #define DATABASE_CONNECTION "mongodb://localhost:27017" // The database connection string
#define DATABASE_NAME "XCASH_PROOF_OF_STAKE" // The name of the database
#define DATABASE_NAME_DELEGATES "XCASH_PROOF_OF_STAKE_DELEGATES" // The name of the database for the delegates
#define DATABASE_EMPTY_STRING "empty_database_collection" // The database data to give when the database collection is empty
#define MAXIMUM_DATABASE_WRITE_SIZE 48000000 // The maximum database write size
#define MAXIMUM_DATABASE_COLLECTION_DOCUMENTS 5000 // The maximum amount of documents in a database collection
#define DATABASE_TOTAL 4 // The amount of databases
#define TOTAL_RESERVE_PROOFS_DATABASES 50 // The total reserve proofs databases
#define TOTAL_RESERVE_BYTES_DATABASE_FIELDS 3 // The reserve bytes database fields
#define TOTAL_RESERVE_PROOFS_DATABASE_FIELDS 4 // The reserve proofs database fields
#define TOTAL_DELEGATES_DATABASE_FIELDS 18 // The total delegates database fields
#define TOTAL_STATISTICS_DATABASE_FIELDS 7 // The total statistics database fields
#define TOTAL_PUBLIC_ADDRESSES_DATABASE_FIELDS 4 // The total public addresses database fields
#define TOTAL_PUBLIC_ADDRESSES_PAYMENTS_DATABASE_FIELDS 7 // the total public addresses payments database fields
#define TOTAL_BLOCKS_FOUND_DATABASE_FIELDS 4 // The total blocks found database fields

// Shared delegates settings
#define VOTER_INACTIVITY_COUNT "30" // the number of days to wait to remove an inactive delegates information from the database

// Network data nodes
#define NETWORK_DATA_NODES_AMOUNT 5 // The amount of network data nodes
#define NETWORK_DATA_NODES_VALID_AMOUNT 3 // The amount of network data nodes need to reach a consensus on the database data
#define NETWORK_DATA_NODES_VALID_AMOUNT_PERCENTAGE 0.40 // The percentage of network data nodes need to reach a consensus on the database data

// Updates data
#define BLOCK_HEIGHT_RESTART 800123 // restart the chain a few days after launch
#define BLOCK_HEIGHT_SF_V_1_0_1 802000 // db integrity check
#define TIME_SF_V_1_0_5_PART_1 1917984900 // Postponed for now - fix allocation of memory for delegates database
#define TIME_SF_V_1_0_5_PART_2 1918071300 // Postponed for now - re add missing seed nodes (need to run restart script on missing seed nodes after)
#define TIME_SF_V_1_0_6 1618244100 // 1618244100 Monday, April 12, 2021 16:15:00 UTC - Dont add block heights to the delegates database, remove all block heights from the delegates database, add missing seed nodes to the delegates database
#define BLOCK_HEIGHT_SF_V_1_2_0 910000 // stealth address verification Tuesday, March 23, 2022 03:00:00 UTC
#define TIME_SF_V_1_2_0 1648221480 // _id field sort all collections Friday, March 25, 2022 15:18:00 UTC


#define NETWORK_DATA_NODE_1_PUBLIC_ADDRESS_PRODUCTION "XCA1SkZTKvC1vMR3vzdsBiFY69RXHJYw2TZ7jPTtsFGCUj7JfEaDXuSMBXrhaGHf7QJH5PyBxQK2K7gNs9pYGBGs7zfS7cPHd9"
#define NETWORK_DATA_NODE_1_IP_ADDRESS_PRODUCTION "seed1.xcash.tech"
#define NETWORK_DATA_NODE_1_PUBLIC_KEY_PRODUCTION "707a57d0ec077e1ae594c6c7afac203aa8a720713e5ce7258b0d6cd33923e1e2"
#define NETWORK_DATA_NODE_2_PUBLIC_ADDRESS_PRODUCTION "XCA1d6XRJLYGyHnwoywSTbadrVYc7S8spHTGQRJyw5uLRRycH46wgVx9o1A1MaRwmZTiV16ooDsEPjHnioCyV3xk3wHiFqwWuu"
#define NETWORK_DATA_NODE_2_IP_ADDRESS_PRODUCTION "seed2.xcash.tech"
#define NETWORK_DATA_NODE_2_PUBLIC_KEY_PRODUCTION "6f100bc821a727efb411b334eeb72895cd178de87f821ceaf41b4e7347339bc1"
#define NETWORK_DATA_NODE_3_PUBLIC_ADDRESS_PRODUCTION "XCA1UNwXyshf1cuN4LRWxgX84rkoM1fo12AbG7CiuTi27PEuxPicaTfNSA5WtsHHTkZ1GAy4bsd6CXy6ag6YEM9H7oNuBihrzM"
#define NETWORK_DATA_NODE_3_IP_ADDRESS_PRODUCTION "seed3.xcash.tech"
#define NETWORK_DATA_NODE_3_PUBLIC_KEY_PRODUCTION "5dc835dbf22bf2e40a7ebd9713ae23705f2fe87cf43d1cee75a161ed53f1b89b"
#define NETWORK_DATA_NODE_4_PUBLIC_ADDRESS_PRODUCTION "XCA1WDfJTzqLJjn9YgXubf4RnxzUqMrWJaMWQKH8V3tZ9tgtWs5RoXfcHo7vQnZndj7PeyfcUcgkGX6cQNfVrWfC1g2iN84K1w"
#define NETWORK_DATA_NODE_4_IP_ADDRESS_PRODUCTION "seed4.xcash.tech"
#define NETWORK_DATA_NODE_4_PUBLIC_KEY_PRODUCTION "6210338078086c98b3288c511e2ed156658391425bdab5b276f86ab0c6fcba7c"
#define NETWORK_DATA_NODE_5_PUBLIC_ADDRESS_PRODUCTION "XCA1fjt6X5k9CR13Pq1BKpJKLUjmcBCd3NDyhAfVnDvUirv16tmv4gQ4L3MtK1TfBoUdM1d48HN6kZS7NyYWJLmQ8xQiGXsS3z"
#define NETWORK_DATA_NODE_5_IP_ADDRESS_PRODUCTION "seed5.xcash.tech"
#define NETWORK_DATA_NODE_5_PUBLIC_KEY_PRODUCTION "de061a1468867f365ae112e8e3cda82243bfdaa2ba5118ec6f706781b26e4a85"

// #define OFFICIAL_SHARED_DELEGATE_PUBLIC_ADDRESS_PRODUCTION "XCA1cYCAbFsKvGRFYpX5QKgBYpx1yimURVcGvdTLdrm5ig9Ka9bMZ9vBXLn9iHKViYRQbmqKfmWRPDziae5rUPaQ3NXtXzKbvC"
// #define OFFICIAL_SHARED_DELEGATE_IP_ADDRESS_PRODUCTION "officialdelegate.xcash.foundation"
// #define OFFICIAL_SHARED_DELEGATE_PUBLIC_KEY_PRODUCTION "1d20ac52c1b1bf5669d980bd839073b89e40cfe9f066dbbb18935aa0d9dd920c"

#define DATABASE_COLLECTION_DELEGATES_DATA_1_PRODUCTION "{\"public_address\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS_PRODUCTION "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_1_IP_ADDRESS_PRODUCTION "\",\"delegate_name\":\"seed1_xcash_tech\",\"about\":\"Official X-Tech node\",\"website\":\"" NETWORK_DATA_NODE_1_IP_ADDRESS_PRODUCTION "\",\"team\":\"X-Tech Team\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"Operating System = Ubuntu 22.04\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"|" XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT_DATA "\",\"public_key\":\"" NETWORK_DATA_NODE_1_PUBLIC_KEY_PRODUCTION "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_2_PRODUCTION "{\"public_address\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS_PRODUCTION "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_2_IP_ADDRESS_PRODUCTION "\",\"delegate_name\":\"seed2_xcash_tech\",\"about\":\"Official X-Tech node\",\"website\":\"" NETWORK_DATA_NODE_2_IP_ADDRESS_PRODUCTION "\",\"team\":\"X-Tech Team\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"Operating System = Ubuntu 22.04\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_2_PUBLIC_KEY_PRODUCTION "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_3_PRODUCTION "{\"public_address\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS_PRODUCTION "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_3_IP_ADDRESS_PRODUCTION "\",\"delegate_name\":\"seed3_xcash_tech\",\"about\":\"Official X-Tech node\",\"website\":\"" NETWORK_DATA_NODE_3_IP_ADDRESS_PRODUCTION "\",\"team\":\"X-Tech Team\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"Operating System = Ubuntu 22.04\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_3_PUBLIC_KEY_PRODUCTION "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_4_PRODUCTION "{\"public_address\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS_PRODUCTION "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_4_IP_ADDRESS_PRODUCTION "\",\"delegate_name\":\"seed4_xcash_tech\",\"about\":\"Official X-Tech node\",\"website\":\"" NETWORK_DATA_NODE_4_IP_ADDRESS_PRODUCTION "\",\"team\":\"X-Tech Team\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"Operating System = Ubuntu 22.04\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_4_PUBLIC_KEY_PRODUCTION "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_5_PRODUCTION "{\"public_address\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS_PRODUCTION "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_5_IP_ADDRESS_PRODUCTION "\",\"delegate_name\":\"seed5_xcash_tech\",\"about\":\"Official X-Tech node\",\"website\":\"" NETWORK_DATA_NODE_5_IP_ADDRESS_PRODUCTION "\",\"team\":\"X-Tech Team\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"Operating System = Ubuntu 22.04\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_5_PUBLIC_KEY_PRODUCTION "\"}"
// #define DATABASE_COLLECTION_DELEGATES_DATA_6_PRODUCTION "{\"public_address\":\"" OFFICIAL_SHARED_DELEGATE_PUBLIC_ADDRESS_PRODUCTION "\",\"total_vote_count\":\"0\",\"IP_address\":\"" OFFICIAL_SHARED_DELEGATE_IP_ADDRESS_PRODUCTION "\",\"delegate_name\":\"officialdelegate_xcash_foundation\",\"about\":\"Official X-Network Backup Delegate\",\"website\":\"\",\"team\":\"X-Network Team\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"Operating System = Ubuntu 18.04 CPU = 8 threads (Intel E3-1246 v3 - 3.50GHz RAM = 32GB DDR3 Hard drive = 2x HDD SATA 2 TB Bandwidth Transfer = Unlimited Bandwidth Speed = 1 Gbps upload and 1 Gbps download\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" OFFICIAL_SHARED_DELEGATE_PUBLIC_KEY_PRODUCTION "\"}"

#define DATABASE_COLLECTION_STATISTICS_DATA_PRODUCTION "{\"username\":\"XCASH\",\"most_total_rounds_delegate_name\":\"seed1_xcash_tech\",\"most_total_rounds\":\"0\",\"best_block_verifier_online_percentage_delegate_name\":\"seed1_xcash_tech\",\"best_block_verifier_online_percentage\":\"0\",\"most_block_producer_total_rounds_delegate_name\":\"seed1_xcash_tech\",\"most_block_producer_total_rounds\":\"0\"}"

#define INITIALIZE_NETWORK_DATA_NODES \
if (production_settings == 0) \
{ \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[0],NETWORK_DATA_NODE_1_PUBLIC_ADDRESS,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[0],NETWORK_DATA_NODE_1_IP_ADDRESS,sizeof(NETWORK_DATA_NODE_1_IP_ADDRESS)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[1],NETWORK_DATA_NODE_2_PUBLIC_ADDRESS,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[1],NETWORK_DATA_NODE_2_IP_ADDRESS,sizeof(NETWORK_DATA_NODE_2_IP_ADDRESS)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[2],NETWORK_DATA_NODE_3_PUBLIC_ADDRESS,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[2],NETWORK_DATA_NODE_3_IP_ADDRESS,sizeof(NETWORK_DATA_NODE_3_IP_ADDRESS)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[3],NETWORK_DATA_NODE_4_PUBLIC_ADDRESS,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[3],NETWORK_DATA_NODE_4_IP_ADDRESS,sizeof(NETWORK_DATA_NODE_4_IP_ADDRESS)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[4],NETWORK_DATA_NODE_5_PUBLIC_ADDRESS,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[4],NETWORK_DATA_NODE_5_IP_ADDRESS,sizeof(NETWORK_DATA_NODE_5_IP_ADDRESS)-1); \
} \
else \
{ \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[0],NETWORK_DATA_NODE_1_PUBLIC_ADDRESS_PRODUCTION,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[0],NETWORK_DATA_NODE_1_IP_ADDRESS_PRODUCTION,sizeof(NETWORK_DATA_NODE_1_IP_ADDRESS_PRODUCTION)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[1],NETWORK_DATA_NODE_2_PUBLIC_ADDRESS_PRODUCTION,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[1],NETWORK_DATA_NODE_2_IP_ADDRESS_PRODUCTION,sizeof(NETWORK_DATA_NODE_2_IP_ADDRESS_PRODUCTION)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[2],NETWORK_DATA_NODE_3_PUBLIC_ADDRESS_PRODUCTION,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[2],NETWORK_DATA_NODE_3_IP_ADDRESS_PRODUCTION,sizeof(NETWORK_DATA_NODE_3_IP_ADDRESS_PRODUCTION)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[3],NETWORK_DATA_NODE_4_PUBLIC_ADDRESS_PRODUCTION,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[3],NETWORK_DATA_NODE_4_IP_ADDRESS_PRODUCTION,sizeof(NETWORK_DATA_NODE_4_IP_ADDRESS_PRODUCTION)-1); \
  memcpy(network_data_nodes_list.network_data_nodes_public_address[4],NETWORK_DATA_NODE_5_PUBLIC_ADDRESS_PRODUCTION,XCASH_WALLET_LENGTH); \
  memcpy(network_data_nodes_list.network_data_nodes_IP_address[4],NETWORK_DATA_NODE_5_IP_ADDRESS_PRODUCTION,sizeof(NETWORK_DATA_NODE_5_IP_ADDRESS_PRODUCTION)-1); \
}


#define CHECK_IF_BLOCK_VERIFIERS_IS_NETWORK_DATA_NODE \
if (memcmp(xcash_wallet_public_address,network_data_nodes_list.network_data_nodes_public_address[0],XCASH_WALLET_LENGTH) == 0 || memcmp(xcash_wallet_public_address,network_data_nodes_list.network_data_nodes_public_address[1],XCASH_WALLET_LENGTH) == 0 || memcmp(xcash_wallet_public_address,network_data_nodes_list.network_data_nodes_public_address[2],XCASH_WALLET_LENGTH) == 0 || memcmp(xcash_wallet_public_address,network_data_nodes_list.network_data_nodes_public_address[3],XCASH_WALLET_LENGTH) == 0 || memcmp(xcash_wallet_public_address,network_data_nodes_list.network_data_nodes_public_address[4],XCASH_WALLET_LENGTH) == 0) \
{ \
  network_data_node_settings = 1; \
}

#define TEST_WALLET_1 "XCA1pEWxj2q7gn7TJjae7JfsDhtnhydxsHhtADhDm4LbdE11rHVZqbX5MPGZ9tM7jQbDF4VKK89jSAqgL9Nxxjdh8RM5JEpZZP"
#define TEST_WALLET_2 "XCA1VSDHKCc4Qhvqb3fquebSYxfMeyGteQeAYtDSpaTcgquBY1bkKWtQ42tZG2w7Ak7GyqnaiTgWL4bMHE9Lwd2A3g2Recxz7B"
#define TEST_WALLET_3 "XCA1f8ngVg6fW5pJ49TC3DK4axYDMu5teUKUf7aP5rLCRvsL1ZCnf2LjAFtSYF6xfVWygSMMvn1hCEeupgGTX5n82GDZvcapbj"
#define TEST_WALLET_4 "XCA1skiymYUHN5Vjg5kXhriGi25ZDKpgdLMZks3DKCwy9sxzyqY7uEr6hxRPnAvkYwLoT6peBi4aVT1g4t4vgtFj96eE1JF1L4"
#define TEST_WALLET_5 "XCA1c8vbHxUiFfgnp7P5pPaAWEJac1W8vjiNHSLRB1k7G6XrWQkWXy85RfefFiCzB8V43jopp5AwmcezSoUVbXcp8Z4Eki8Gmt"
#define TEST_WALLET_6 "XCA1jh9Nw2XbshVEYsSrnEX5q6WWzHkMaEgRd2TSkrcGckvqoqxoQZejnv31SZPgVjL9uVRvX4NYsPbCLjMdT4m58kmgCnN63n"
#define TEST_WALLET_7 "XCA1ZWK9xxe9EtCHG1H5gW72yLndfRdveHC7SSLqqPU9U9G5RZ5M4LC3xiuLepRMzcTzwhJvwS9MVCDFHby3LtNk3VKz9RDbGU"
#define TEST_WALLET_8 "XCA1UU85yYx5EmQ52g84TDDVkiVKSiwn6JAC1xSHNd2UCxPBiei9yHcDpnwwVDvfEeXm9RYGuD63h8nx3zjD7PSU47QHJn3fFk"
#define TEST_WALLET_9 "XCA1vNNSR2M5QjD7NK6VGtdCrLLAazwt1Qc9qxrRBPwoWCz9GraMCsu4wH6v6W5Td1DoAbyA47AgpEigt6UoXE4H1wS7aiasjf"
#define TEST_WALLET_10 "XCA1ogpCudEVS1B72pFWfKQQ7gMXyePgjhc5PLaQuHmmgjPZAfeT2jLPdv7SW6qCBu42aXR3Tp1zWeJTeUXWXJG74t26j3awwn"
#define TEST_WALLET_11 "XCA1oPZcuxH1WeyMntcv1Mb28Nzc73UvMbck3VyBedN57gV1c9ikU6tBALSjCwigMs1XCDtTYND7vfELU31PQEBh6zs5MLxYek"
#define TEST_WALLET_12 "XCA1S1T6abaY3xy2K8bTdi3ZnpdtJmNAEWCB6SLxfFCTbRjn9ukRMGyaCgBa8BFf5B9HM4dyyEAhmL94ne7RqYQo6w3PuA4omv"
#define TEST_WALLET_13 "XCA1ThLqpF3eXjZ5pJPmRtPifbCthUwmp2dpMPjJyveQ6U9FFsm1RJQecTJ41n5ezv2NmkNB9gwN4RHbMPKdNpquA68g1bSrRS"
#define TEST_WALLET_14 "XCA1pvUcSBDUkijSLa9vaHbDudrEcT88QdLBLzt4n9UqPb1wWxtnh9u8VPzCZMg2TXh8TdR1zphWi3qxooKDG82k8YkFwpB3BD"
#define TEST_WALLET_15 "XCA1dpsUrcgZvnZYLjXUbcbxSSJqhNWyphoqURumeeKoE8BXQeKqep8QQSk2fd65at2yspnT3z7KVRTU3MFmVS8u7K89wrKVxu"
#define TEST_WALLET_16 "XCA1XUVpDPKXKH5T6s9bX3CnSS46pidyTQAzjmkNyf9H4d3ajARrQFr1CQM4La8n8ggzf6GDKVDtua3CufEqcDJz1NLSvp4Ung"
#define TEST_WALLET_17 "XCA1V28tnHEETmewJvoJB57URT7xzBowJ9JJwj29xxGme21DQgXhUWTCx2XvxJR2EtecZxYRiHdTtGnzZVqBKqyt9K4MTkZuyo"
#define TEST_WALLET_18 "XCA1VXWDkYm2u56cbe6b3VajEe4qFLGhVgxeNcgnA3ht1gWvrnZTYr8PJtpkWzagR7c76dDdeyFgoeKZj55W78bp4T8L8n6wLW"
#define TEST_WALLET_19 "XCA1qbzqCoX9WGsqjYgKMGH2eFjkvBRmsb2HKiumrKbjMVDLhukUShsgjFbT6osQBA3TaL9hD7wr8dW2Zq5QzRyU1mnQAQwTpJ"
#define TEST_WALLET_20 "XCA1u5AWxhjCtRKzZiyUUmdHLnQFQdFcZGtuFxx9JW21hWJnzgf31AV2g58gUsN3aKSju1iL9RdzbHJqvUKjVYBh67e74Zc38v"

#define TEST_WALLET_SECRET_KEY_1 "dc348f17eba0c7e43236b59e41c3e3c88a232cbfbb44c9dedb69100906d95a613f7d2dcabdbf351bf8aef4202711a4332b2a46c18dc92b1502eeacfa74c49163"
#define TEST_WALLET_SECRET_KEY_2 "7affb8c08d0d8650507c132c1ddf90ab615b3395ed9531691d7ae6dda3be1c9cb1962712c6bd9294ac426196b2433aad0a39a67485b233f766f888ddb6b94359"
#define TEST_WALLET_SECRET_KEY_3 "62fb423d711de76cf533c130ce2ad59f867a6893a14d2ccf155d8abd4db0c2aea1e3d6f49dee438f447412b59f1625a04e3f15897edf6313dce1a19e2ef8343f"
#define TEST_WALLET_SECRET_KEY_4 "41beafa5e361b1f737201deb10d8114bab5b2a2b1f7bcf5fef4eab3e9bbfc2dc59f4608dd31cf0811feeb5ee15030d6de8e0ef2fea78d2fa39c5620ae71f15b5"
#define TEST_WALLET_SECRET_KEY_5 "2a6d0e69fa01c55bc7723b2dc998d0920c2108c6e751f57f25202047aebd7ad8029af930d9b5930e3f56168c42fd874cb386f618b5681dd8aa3640f506ef55ce"
#define TEST_WALLET_SECRET_KEY_6 "5bd622a988b6a080a7b04cacb30570ce296bfc3b13aa7e334f18c38c661ffec1cc136628a8eff7301be1f553f9e5e784c7b87b14a981dafde5b5e25afecd2436"
#define TEST_WALLET_SECRET_KEY_7 "bf93308c0f94350f1a19d45fe0f1dc798d07663307e5b6f37d291d5cbb76bd7ad97aec73d77c44ed27315d7a32b8e620438e3e7a17dc670b8ce97501bbc5d94b"
#define TEST_WALLET_SECRET_KEY_8 "2c5138cb616ffe228773095af7aa85eadcb268290aa921d93a4050332f9b2ad90b0b8bc13a792e9ef6ae16e7d177f4f3f9d253c6a7874515ec7e355ed2c4f76e"
#define TEST_WALLET_SECRET_KEY_9 "511f27fcfaa66cedba32b9c0e4a9dfde6e16037cf44fe3b12b09c02fd868bd2975b5564334355355027b3ff18d74b57e54e351e85ae90fb9d646fb471b5f5c35"
#define TEST_WALLET_SECRET_KEY_10 "30658d02a511fb798291e0cb99413086a4158c4422f70c9e2357bf69a8d0e05732f97e5e95a0d0047c47d3bb341d38605dd84c7ea6e18ff823ea4d3c9d4e44c3"
#define TEST_WALLET_SECRET_KEY_11 "4d76fd51502fc31070e91b3ab6e54eaece620bfe165ff0356b404e1e5617f923cab0ac887926d4a01d9cc62ad14f804add8270c288f8ca3c9bfd3cb9b2c046bc"
#define TEST_WALLET_SECRET_KEY_12 "5d9d07ad01ce4f72d27228e3bdb97088ee1b9060b862cb219a732b3c7758aad3391ff49ca3df0c36d82c6cdc73e3bdfb998a556bf67eb78981764f5c5a630753"
#define TEST_WALLET_SECRET_KEY_13 "7420705afa7385b60d113c2fb3dbf4e0ba365225792bb35869350a382122d795f7593740aa53df6e0d0a6e9bec1da94ecfba5b05c1fc40820b30e8e8c80d1242"
#define TEST_WALLET_SECRET_KEY_14 "71cc61515538d7da05744f6c4f51c9ca318f3db97219d015157bf609fb43806ca38779062167f496f4edb944096ea45967d85b373bcf8aa1e06431c7f8d5b0b2"
#define TEST_WALLET_SECRET_KEY_15 "adc155e5088bd5da2ba0c192a97442022ce69bb54637b3317caa6301e3fe38904c705dcc4cf579b11a76e9d2b16c726d415d86c715d0908893d96c5e2716bf25"
#define TEST_WALLET_SECRET_KEY_16 "2254d0f8704640c5285b1fca82523815e11922949ba9bc9355bf9d5b058aaea512fc1eec85dfb2aeaf39e8379022d67f34e68aaff3de1ec18dd02330c42a1e11"
#define TEST_WALLET_SECRET_KEY_17 "f111e34dc598bd19aaa270962a2830aefdacc1e665378e96f2ec271f0cc4a97c01838d3f43927e91c2ec2053ad8df92af8466b4f3a6e649d532c258939de1490"
#define TEST_WALLET_SECRET_KEY_18 "9fa0bb3688d3c5529ef33abea151829a42ff4c9a769c96a303333ef311fd6daf6f765c5976d3ff2cf0d93727cb199d7b404502f90301ee0a4c3a7fc83da84724"
#define TEST_WALLET_SECRET_KEY_19 "4412a9fa1633102dc31c9f3b305da941fc2aab6c6e79f903cf546ab1a114a6e4fdf5f9397e9a3494db33dc61127860083db794d1f32f0359665d46388d355af8"
#define TEST_WALLET_SECRET_KEY_20 "b18d7b404e6fb08dbe3d67f32478ee48269a0e22c0cac5c6a8e2eff1f6b590a7738f0533a60105f47b15e46866cf3ecd5cfd265d2ec5f2a7c8900cc3bba391ec"

#define TEST_WALLET_PUBLIC_KEY_1 "3f7d2dcabdbf351bf8aef4202711a4332b2a46c18dc92b1502eeacfa74c49163"
#define TEST_WALLET_PUBLIC_KEY_2 "b1962712c6bd9294ac426196b2433aad0a39a67485b233f766f888ddb6b94359"
#define TEST_WALLET_PUBLIC_KEY_3 "a1e3d6f49dee438f447412b59f1625a04e3f15897edf6313dce1a19e2ef8343f"
#define TEST_WALLET_PUBLIC_KEY_4 "59f4608dd31cf0811feeb5ee15030d6de8e0ef2fea78d2fa39c5620ae71f15b5"
#define TEST_WALLET_PUBLIC_KEY_5 "029af930d9b5930e3f56168c42fd874cb386f618b5681dd8aa3640f506ef55ce"
#define TEST_WALLET_PUBLIC_KEY_6 "cc136628a8eff7301be1f553f9e5e784c7b87b14a981dafde5b5e25afecd2436"
#define TEST_WALLET_PUBLIC_KEY_7 "d97aec73d77c44ed27315d7a32b8e620438e3e7a17dc670b8ce97501bbc5d94b"
#define TEST_WALLET_PUBLIC_KEY_8 "0b0b8bc13a792e9ef6ae16e7d177f4f3f9d253c6a7874515ec7e355ed2c4f76e"
#define TEST_WALLET_PUBLIC_KEY_9 "75b5564334355355027b3ff18d74b57e54e351e85ae90fb9d646fb471b5f5c35"
#define TEST_WALLET_PUBLIC_KEY_10 "32f97e5e95a0d0047c47d3bb341d38605dd84c7ea6e18ff823ea4d3c9d4e44c3"
#define TEST_WALLET_PUBLIC_KEY_11 "cab0ac887926d4a01d9cc62ad14f804add8270c288f8ca3c9bfd3cb9b2c046bc"
#define TEST_WALLET_PUBLIC_KEY_12 "391ff49ca3df0c36d82c6cdc73e3bdfb998a556bf67eb78981764f5c5a630753"
#define TEST_WALLET_PUBLIC_KEY_13 "f7593740aa53df6e0d0a6e9bec1da94ecfba5b05c1fc40820b30e8e8c80d1242"
#define TEST_WALLET_PUBLIC_KEY_14 "a38779062167f496f4edb944096ea45967d85b373bcf8aa1e06431c7f8d5b0b2"
#define TEST_WALLET_PUBLIC_KEY_15 "4c705dcc4cf579b11a76e9d2b16c726d415d86c715d0908893d96c5e2716bf25"
#define TEST_WALLET_PUBLIC_KEY_16 "12fc1eec85dfb2aeaf39e8379022d67f34e68aaff3de1ec18dd02330c42a1e11"
#define TEST_WALLET_PUBLIC_KEY_17 "01838d3f43927e91c2ec2053ad8df92af8466b4f3a6e649d532c258939de1490"
#define TEST_WALLET_PUBLIC_KEY_18 "6f765c5976d3ff2cf0d93727cb199d7b404502f90301ee0a4c3a7fc83da84724"
#define TEST_WALLET_PUBLIC_KEY_19 "fdf5f9397e9a3494db33dc61127860083db794d1f32f0359665d46388d355af8"
#define TEST_WALLET_PUBLIC_KEY_20 "738f0533a60105f47b15e46866cf3ecd5cfd265d2ec5f2a7c8900cc3bba391ec"

#define NETWORK_DATA_NODE_1_PUBLIC_ADDRESS TEST_WALLET_1
#define NETWORK_DATA_NODE_1_IP_ADDRESS "192.168.1.201"
#define NETWORK_DATA_NODE_1_PUBLIC_KEY TEST_WALLET_PUBLIC_KEY_1
#define NETWORK_DATA_NODE_2_PUBLIC_ADDRESS TEST_WALLET_2
#define NETWORK_DATA_NODE_2_IP_ADDRESS "192.168.1.202"
#define NETWORK_DATA_NODE_2_PUBLIC_KEY TEST_WALLET_PUBLIC_KEY_2
#define NETWORK_DATA_NODE_3_PUBLIC_ADDRESS TEST_WALLET_3
#define NETWORK_DATA_NODE_3_IP_ADDRESS "192.168.1.203"
#define NETWORK_DATA_NODE_3_PUBLIC_KEY TEST_WALLET_PUBLIC_KEY_3
#define NETWORK_DATA_NODE_4_PUBLIC_ADDRESS TEST_WALLET_4
#define NETWORK_DATA_NODE_4_IP_ADDRESS "192.168.1.204"
#define NETWORK_DATA_NODE_4_PUBLIC_KEY TEST_WALLET_PUBLIC_KEY_4
#define NETWORK_DATA_NODE_5_PUBLIC_ADDRESS TEST_WALLET_5
#define NETWORK_DATA_NODE_5_IP_ADDRESS "192.168.1.205"
#define NETWORK_DATA_NODE_5_PUBLIC_KEY TEST_WALLET_PUBLIC_KEY_5

#define DATABASE_COLLECTION_DELEGATES_DATA_1 "{\"public_address\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total_vote_count\":\"120000000\",\"IP_address\":\"" NETWORK_DATA_NODE_1_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_1\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"|" XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT_DATA "\",\"public_key\":\"" NETWORK_DATA_NODE_1_PUBLIC_KEY "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_2 "{\"public_address\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"total_vote_count\":\"110000000\",\"IP_address\":\"" NETWORK_DATA_NODE_2_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_2\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_2_PUBLIC_KEY "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_3 "{\"public_address\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"total_vote_count\":\"150000000\",\"IP_address\":\"" NETWORK_DATA_NODE_3_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_3\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_3_PUBLIC_KEY "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_4 "{\"public_address\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"total_vote_count\":\"100000000\",\"IP_address\":\"" NETWORK_DATA_NODE_4_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_4\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_4_PUBLIC_KEY "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_5 "{\"public_address\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"" NETWORK_DATA_NODE_5_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_5\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" NETWORK_DATA_NODE_5_PUBLIC_KEY "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_6 "{\"public_address\":\"" TEST_WALLET_6 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.206\",\"delegate_name\":\"delegate_name_6\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_6 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_7 "{\"public_address\":\"" TEST_WALLET_7 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.207\",\"delegate_name\":\"delegate_name_7\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_7 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_8 "{\"public_address\":\"" TEST_WALLET_8 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.208\",\"delegate_name\":\"delegate_name_8\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_8 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_9 "{\"public_address\":\"" TEST_WALLET_9 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.209\",\"delegate_name\":\"delegate_name_9\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_9 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_10 "{\"public_address\":\"" TEST_WALLET_10 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.210\",\"delegate_name\":\"delegate_name_10\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_10 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_11 "{\"public_address\":\"" TEST_WALLET_11 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.211\",\"delegate_name\":\"delegate_name_11\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_11 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_12 "{\"public_address\":\"" TEST_WALLET_12 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.212\",\"delegate_name\":\"delegate_name_12\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_12 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_13 "{\"public_address\":\"" TEST_WALLET_13 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.213\",\"delegate_name\":\"delegate_name_13\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_13 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_14 "{\"public_address\":\"" TEST_WALLET_14 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.214\",\"delegate_name\":\"delegate_name_14\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_14 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_15 "{\"public_address\":\"" TEST_WALLET_15 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.215\",\"delegate_name\":\"delegate_name_15\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_15 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_16 "{\"public_address\":\"" TEST_WALLET_16 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.216\",\"delegate_name\":\"delegate_name_16\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_16 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_17 "{\"public_address\":\"" TEST_WALLET_17 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.217\",\"delegate_name\":\"delegate_name_17\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_17 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_18 "{\"public_address\":\"" TEST_WALLET_18 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.218\",\"delegate_name\":\"delegate_name_18\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_18 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_19 "{\"public_address\":\"" TEST_WALLET_19 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.219\",\"delegate_name\":\"delegate_name_19\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_19 "\"}"
#define DATABASE_COLLECTION_DELEGATES_DATA_20 "{\"public_address\":\"" TEST_WALLET_20 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.220\",\"delegate_name\":\"delegate_name_20\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_20 "\"}"

#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_1 "{\"public_address\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total_vote_count\":\"120000000\",\"IP_address\":\"" NETWORK_DATA_NODE_1_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_1\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"|" XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT_DATA "\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_1 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_2 "{\"public_address\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"total_vote_count\":\"110000000\",\"IP_address\":\"" NETWORK_DATA_NODE_2_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_2\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_2 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_3 "{\"public_address\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"total_vote_count\":\"150000000\",\"IP_address\":\"" NETWORK_DATA_NODE_3_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_3\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_3 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_4 "{\"public_address\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"total_vote_count\":\"100000000\",\"IP_address\":\"" NETWORK_DATA_NODE_4_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_4\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_4 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_5 "{\"public_address\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"" NETWORK_DATA_NODE_5_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_5\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_5 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_6 "{\"public_address\":\"" TEST_WALLET_6 "\",\"total_vote_count\":\"3000000000\",\"IP_address\":\"192.168.1.206\",\"delegate_name\":\"delegate_name_6\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_6 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_7 "{\"public_address\":\"" TEST_WALLET_7 "\",\"total_vote_count\":\"3000000000\",\"IP_address\":\"192.168.1.207\",\"delegate_name\":\"delegate_name_7\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_7 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_8 "{\"public_address\":\"" TEST_WALLET_8 "\",\"total_vote_count\":\"4000000000\",\"IP_address\":\"192.168.1.208\",\"delegate_name\":\"delegate_name_8\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_8 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_9 "{\"public_address\":\"" TEST_WALLET_9 "\",\"total_vote_count\":\"2000000000\",\"IP_address\":\"192.168.1.209\",\"delegate_name\":\"delegate_name_9\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_9 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_10 "{\"public_address\":\"" TEST_WALLET_10 "\",\"total_vote_count\":\"3000000000\",\"IP_address\":\"192.168.1.210\",\"delegate_name\":\"delegate_name_10\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_10 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_11 "{\"public_address\":\"" TEST_WALLET_11 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.211\",\"delegate_name\":\"delegate_name_11\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_11 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_12 "{\"public_address\":\"" TEST_WALLET_12 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.212\",\"delegate_name\":\"delegate_name_12\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_12 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_13 "{\"public_address\":\"" TEST_WALLET_13 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.213\",\"delegate_name\":\"delegate_name_13\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_13 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_14 "{\"public_address\":\"" TEST_WALLET_14 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.214\",\"delegate_name\":\"delegate_name_14\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_14 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_15 "{\"public_address\":\"" TEST_WALLET_15 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.215\",\"delegate_name\":\"delegate_name_15\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_15 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_16 "{\"public_address\":\"" TEST_WALLET_16 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.216\",\"delegate_name\":\"delegate_name_16\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_16 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_17 "{\"public_address\":\"" TEST_WALLET_17 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.217\",\"delegate_name\":\"delegate_name_17\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_17 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_18 "{\"public_address\":\"" TEST_WALLET_18 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.218\",\"delegate_name\":\"delegate_name_18\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_18 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_19 "{\"public_address\":\"" TEST_WALLET_19 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.219\",\"delegate_name\":\"delegate_name_19\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_19 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_20 "{\"public_address\":\"" TEST_WALLET_20 "\",\"total_vote_count\":\"0\",\"IP_address\":\"192.168.1.220\",\"delegate_name\":\"delegate_name_20\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_20 "\"}"

#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_1 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"120000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NDPqYHviiubTHpa5jPey2PF2RPr7p92nUY5PYcCqPwkM3Vezb1BvSAu2zX5kKMuJYo2q837KH4HAXkXbdgF6wa13pkkpuMxv74keNZLAeeM9wmSuJvSHmMvVjfo6u6iCWMDRESRouQ359NvpAZN71D9fSivgK7K7WkbNzftkUZ6V7Uza6K9eihTgu7hSB3AqaTm7cK9uTb5Fzg9LyJbC4phfGYM7bazM2UrVfitZtbEkKuhPxnzFzKkWtdYBB59zUo1uS4UUR8faS25sjfc2cPjZUfbEZsiJVo7EDNs3d1KdhTN5TdNxZK6MZgVB77jE9ed4jJUrNSrqfWg1BwigbN9smQicoi9yYwujuGaHEzEnLBwQeLFxJJQj31qRQb4ZijEBGrMxvcmybhPKiHA3LBARnBREJxkQ39dp2HRfEfR1G7z6RGhS9o1KQCF3MAwomCMCuj69SpeovPEYwQb5uVXti\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_2 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"total\":\"110000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NbzvSR1wszWsvK6FWUS2EG26WsxJ6KVqAKTTFQUAhw6BQVrX11BwfgJdtgRtKXepc1Nzjb6dWs8fCH5Q5LPZf3NY8pLrdYfsYvA1bRTtbfJSJcifMX22g5wukytaX43TUPA2CvacUXxPUnFmSJwy1DAUMnLGDUuW3fAcMLfTYZGNzK5ifErHJ2DC55jDrffSjACL5EZQk5V5MXeLHzjEtA9LKXrX9ktQAfqNcXiP1oca9htAdkDYHDGEocGktiGtMth79oBDiKfDxPaMPTqfB6nMQxPj3Q8WsU3Won1vE9ggXTK7j8R64miuoQGQT6kEnhww1wtHAKWYBGC1BvHiDLCguhHFEeCJH3bbafpKouBQ26XvFWjcgTnv7RF9qPMn3BCNLUYtbn8o7o1eejV84mYYZ4F71T2D6tc71hE9FnHpaK4FUmNQ5mY8CW3vYBG1iG6GmwqW9buHKVHx6fG2GqrvR\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_3 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"total\":\"150000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NN9oPHNJwcKf646XJeeJ4UrJwKiFZvvzdRE6vAEEyHvnM3wBu1Bviq5DBTZP8XRyAJy4AXz3mQFGbzES6gC8uirABFecuKCacyLmxSZAMQ6yoSasRdXNURj94Npd9ocW5XUexv5xoHzDRG8JJ5jM1D9nzuuBV4gZrxwcgTbKuk5zddBUZdhdVGW5An8H4iLMF4PoPgk9fTKAKV6rV19aXXaSRJo5CmmAC37YASx8ppgh5BoDLSiNCfiLjSLpQjhQdPVPAuYGdQzxHMvigxTqXyQS8kCGQHGM52zaxxxK98s4XjJ7aU6vDHUoj35XyvxD5LiCYz5ESCtRcoS1Bw2XJkWvGu8vVtogUV66ejAAoY9KzaYrF1CjGbYPZtg2gYWVSwNCMS5peXHk6mwDHSP1tmSoLFEzFVX9CiAKPXQcUussue6w527pGZAYnqUvLBZQauFrcd2FXxeLx4rrwXj4SnZh5\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_4 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"total\":\"100000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NMgDQ1mMESB9TVcANL57CGPgJbx3RKRnKsw3i3SAHi1uLqELo1Bv8A4RqdwV8o2XHnzwNLg9mrduoVL4oHE89ka6ZmhvxNhYnetNnkDsT5fmixsA1mGQ6irZgEVpo7SZjeJvH3T1G8hioRe2KpLP1DAVQ1j1HHW3NCoW3huZppKeepRBFpLoibxbiNsLmX8HDPEq6UyYYPFEKcK36NgvXJeiSUwPBwmhvfRkM1sqmaSZ2rFBWBRvKiB6tCfLUocfZA8Vkn1ReqazADd7ahjrdGz3cWoE3u5s9RZCqMTG1jrCDvDdRaxask64jP1L8AaCYAmGTgJNv6t3Zr81BwzDvQkxbicZLVkaJw9qPYmxidbZeDQ6XYhg8ASJRHW4XZVVEjFHyHQTjy4XerbfthvENw2t95ZEE1aPaiGgFh6CoDdA3Zh2G8YJguX9nU8iW2zVvYindPVk8UVraiqVGD66qPaDR\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_5 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NQCgyHa86iohwBQtUYqsFEBxwTwEhZdB8BUmi3MBkt9p5hsMH113UoGhwWp554GA1LgZWkNavEg5gsKk4yFUG2Wqci5qKNL4ah3qw3j7KPoh2jNB4AwaYZLVuwLuRqHYudFoDeqHS7i9ZXZ9GN47113kbZbNgye8PyvjvPXgtTR9URHxFg3QtcZuz8xBvwR7NmJVw4zT8wJMZ9AeviMe7MbNLv13os7Em9ySGc6h85hmZhFrNMZqKuQ9Zg6EUNh7MZRNXc6v1J2Ka54NrMFQizzGMyhxNjYdy2H2swTSFamg1CHAvuaZNqwvXdNxtij7kwZh6sWfoX47Tm21Ak9cK2Rf2piFfgnp7P5pPaAWEJac1W8vjiNHSLRB1k7G6Xr6SJGdxTLGcDKBc9JJNebRxrpovRcYFgc9zuZ7jePevRUYRzipb863gVatEDdFN1NCT12VfjqcdTDSy1f7kJm366MBRe\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_6 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_6 "\",\"public_address_voted_for\":\"" TEST_WALLET_6 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NFBQCR6tvtf9VZmpe3yEp9HUrLVVhUsh3od6tePf2WxjPs39y113Ujth3vguaVREosd4KssCExayJGoYtXb1eskQmUe1DJhCcDBbXbDLP5R4fMx1v7UX9bELM62vUCSt3ftkSFHaTF3F2m6zpGBR113kWUgAttUT6TtpxBRkmR1z7tKEnMdpQDF95DDZfcSQZnwXX7ixVa85W9zQT9Z4HvQZvA6LA517GZhtUfxT4fXJXvdj8tHSNRjgaxEgCCn2WkehJQEbyCvAgiCkU3gjpdnKApZAVamRcYKYtDSPZcpRd9ZiZmjg6QXvsJ7xBi1DniHKR4RV7CM7dQk1Ak9jsFDJ6sbshVEYsSrnEX5q6WWzHkMaEgRd2TSkrcGckvqKGigMJSEUrp3eFBNfkHRpXT4atrkCERjhcPQr5BuLmgs6VFNvPd4qy2xTEDz4hcYwB9R17iTEUKjMq2q52x8A5z6VJm\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_7 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_7 "\",\"public_address_voted_for\":\"" TEST_WALLET_7 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NiQQdQLR2dvXxdVDY14ohv8YeG5awfLre3LWKuCAZ3czqBwx3113UeKJM4r2iuFfeuospz5Nz5sGSfjw62DCMUHLLbSx98WPQfaY558zBimfMZPtQj8Wi64LP8JWcVF9objHHGgAJN5AXzodUwgT113kWqHCDfoe11QW54cQtkiadCAQGFbZnKqRdm7XjYxxZWc8MUTq64oiJKN2HoPzu8S4TWZd3hQsxSfX3Vo4BZp3gSbuFRVhZ75T3xNUZ86DV1Zw8Tpa1WXaaiQxNEbA1thKJtfXfU24mgRM4BwX4NgGKmLASAYhsh94J2UfMGPo37N6LsyDTDKYK7e1Ak9ZgQzL2z9EtCHG1H5gW72yLndfRdveHC7SSLqqPU9U9G5LRTYausWfwgGdfTESiQSHouWUDWmLjR7m8AKZYKpZ2yD1SQUVQb8xc68aDHkJEQyLRvQsmrLgGcBB23S9GxJ5GnHaax\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_8 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_8 "\",\"public_address_voted_for\":\"" TEST_WALLET_8 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NvFXVMBgRDLfFzrbKcb6etZhNnxWCJWAadHixQZSbEErPTMiP113UVpSvB68MLPJeRtGGV84Kco2pidEHp1Kr8FHYQQqtXnigdNRovZSewSM4eCuxCGi5PZaZ6wTDv3ssnvYve2G2BAjZtEMhTuq113kYtFuZUFC9NSbGN62ar8gb6me7Sn3aRrTHinhKpFY147LqMv7a2B6JKh6KHCvaUExzfsJ1XWQBTg3xecEq9VqD53egXuNrbyf7iKr7rAFyrZBL3ZFzmrikM4L8aCzdbDWNQcezSSpN4BAq6U6SiCDGcBJFCkgPzZU79kGyWPRtSrcbdvuf2wiYyE1Ak9UeDvLdJ5EmQ52g84TDDVkiVKSiwn6JAC1xSHNd2UCxPBXHwRAYgCoEmUHUoNNRQLUNzNqN1Qp1wenqxMeMzzJZqqSxHfiaCj1CSjs7MxVBTe57KNcGEpyVcmSV2pSHCd6aDvQT6\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_9 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_9 "\",\"public_address_voted_for\":\"" TEST_WALLET_9 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118Nd66C58NdU8sZef7KoNS6jfjv1aYqoWc9Z3XwU7eUuACjAMv71Bx7BFRCms13QKzz3FqaJNLFfuyzPkMzfM19qNowqouBYT6qyrLBZTYTF2ihnBXmwraH4uFUNe87QG6qRXKPun1RPmk3qjWYuWw1D8cSKyqCpNWaSeA9PFmPzAeqiP5Vx77eZZdKuhdhwbK2B2zhi4zMCkAkJjaTQxvJG2sZre7UgYa1b5YEDxa9SAQJuVMsvQaDEG6PiH9xjjDeGab1L7UeRqKoEhTqRSugaRFV7yQQj2MyCXPHTvJpNczsMHd9kaCyHP3CTxTij16PSWmaCrn5p22FNp1BxBmFkNPdbGRmGUCcCYR5LLHG1BzRtL46dd19eYohphTLcAzUBHgikdJamxWnyySHWdnnG5qCrfE3cDj1MvQNz76mSUxn1Ybj1bUPE7C69hR4aBfJPHVi3THE2fmqZXTTUo4kPc1N\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_10 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_10 "\",\"public_address_voted_for\":\"" TEST_WALLET_10 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NumvXioCcLhBB4dA2Je5APZkDeWBJn9RcF62tG3i8nPtC7BTu1BvGTPNUP1A7WW9AtQyiPC7jknT8MAouNbVSTWckCZVqKDNn4crJdn941APbnUSZLRcba7TEy7urVBPcVR68AxiBaJSpXZigaWb1DAREhJYnaVVdGLsesKY5YBciAmBwJ7rxRaK3pX3GSDKNkHvooGS5wdFQrpss6X4de5CTUdcVhUbHemyon7Aid2LPRTijbaBkxj4jYtbqXq5sddmkKczgxJYbBC1X4Lo6R7SaHckP8D6pvLFwvWwAfx3fiEoxdLK3DEnF3RhC9E7oioDF23EGitxCX21BwgGfUkddAitmuVNsQmLvf96zPZ6VtK3ZYMMBVASS5APv9ZVSsZTeZjPSGajignddM6JMY9Yey9QanNZHYgySrkiAp93T3ihnk2UJ2xmTKwcDTDV2xVyRxRdE8DNQsuCqbZ2Tjw8H\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_11 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_11 "\",\"public_address_voted_for\":\"" TEST_WALLET_11 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NTiwbZLCstwWzpKy8J6J8M1uq9qf5PbWha7C68N8V7qshnzUP113UoSQuy78bpD5CeY2H3ViztSqDBFmmMiNu6uCQGkbu4NrZhZk2T7y7T1ixLCAxYfKRtd2pAAbuAWeBVCNzvmKB8YaneMgZ3mH113kXRg67xZRBtVcawf1CTYHCVuhpur8F6nAGxwFeNoRAdr6rnGwa1SUVdqrXypfmJJyzpPUGTSriAJqtRSBKJqAgQDPz4aV99aLMHHKWAv3eKaGAvBZ3obk2GuVBnHeUUEHAihQ5ECndKS4dw8YxMogdY9o8PvrhZgt2gnX4YrUiF5VbGBcBUsxbag1Ak9oZfTH2d1WeyMntcv1Mb28Nzc73UvMbck3VyBedN57gV1LS8WNV1SeHAFBiGgeBcuveGee9VZYQvGRfiWzkJf9JfYWoQ4dyxh13BrXpp3rF1nWv3UXxMrJJX8SRtQy5zrLAywENZ\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_12 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_12 "\",\"public_address_voted_for\":\"" TEST_WALLET_12 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NhgFwT234BAHaZpNVUgpw57BNNxQk4GmvZQCve2PnN1Cnoyk31BvkeGg866DJ1KMrD6gP1KfDoHgApSvV7Rs14czdVEndFSz3oqzE3zcXp9UgYViWVqJXPqgdXrWzuAqaVmeJy2jZ1N7NNrDF1jm1DAGmageWVxbugKdf1rHUS61fXPvdiEYsaPFvwujnKtyeooG9tG2tJBAGFs4BSBNe98YWxM1Vkcnf3foGzt8zCZwSRre71EZcytGKVjRbdJL4dYW41EKc7ZH8McVQyUCWigufp3vKjUd1BLGW7E3HbxQW3dj9udGYxpR8cET8SfUEKtxGHuKjL2miue1Bv2avJpeKiUWhPf1q8nPgFSSGMj2mSRBPkxJvDrpCMJcE4Z4ozGKSqZVakiA8hLgF38ha9XeUQadShuqzRkr1fSF1cDgcYaBiKGy3TtzmN9rS9KFvTVjyrydeSW318ohHya5PD3Jd\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_13 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_13 "\",\"public_address_voted_for\":\"" TEST_WALLET_13 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NVaFAFVWQJsLQfgXVhi5RZysdBxHLQ3m3MbsgXbEMMCSXdbs5113UZv51HEQYhfKa8SNmPJ8hg7pVtrM8JhqSW2JoiYpZW24YNZKUipJfGQAToYjufPKf6EpMBabbA2c3u4q9dGfUNVAsarYXPnw113kQgGTutsFwxBTLCN1o3EkFgJAkqJmaTM2qqNfZKAX1m5KTzmPo5uYVSBa8VWxtuaPhYeoXwKNaFQT7aJtbsw4gPRDu2AUuMW684KdxcKrS4EjWL5RcJkPUcwSQYXCw9WN8Duh6jXyKwABdGeoXUmP8oLWtygKFkVqiHS1Jj26E24e6XEoP1SbRrg1Ak9TsSgBKPeXjZ5pJPmRtPifbCthUwmp2dpMPjJyveQ6U9F5Nspek9NJTy56k2syJhrCLv9rCipsPphLSbBcQEudZzkbhPRy3d722YvS1Qy2gDq33mwk5JrZXnHcqQNKQPJC5nWbHG\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_14 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_14 "\",\"public_address_voted_for\":\"" TEST_WALLET_14 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NR5pyLUHTrzNp1jgcXYceCmXcyKGhQUb7o7j8SejmtK1BGWum1BvPsj8HAZHApAujd6nyjYhhxLuD2EuzSJ2T6XzqWNVbgrQA2Zab2PniccUJr4UuJmKMgium6CtC3TyAbxWv87n5eivRSPneB9q1D94z76oVBZZk8JyrCEBnpNNcAHfLGdn5Vohw9pS8mr8a7xrGp8t5HdZBac8mrqQNHEekyPUTAG5BiJWy8EEMSZgc8ieK6jcSCdVE3yoYZrx7fNd6MZPFruzGNqF9DHQJpCSPw9z4NeMp5Pf8rJmfo5eFsgy7TrtsV8zgAQrQksWKYyw4LLKnVFjLPi1BwmixzbUnggnHQxM9py6sSq6yUjuD5mr9rg1KcyfRZQ2XpyyEwoeEV9Jd26yKih3ZgQuLTsoywV2LJWJHa89UA1ixYGjHkaokUdkaXr4Wfa9DGdMY9Q6YoZ42dfz4XjGmmF6fpQz5\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_15 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_15 "\",\"public_address_voted_for\":\"" TEST_WALLET_15 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NKGRYSRkBmumeAXu2t5zoYgUchPaUMVgvFKuF6UJft6DRLZpb1BwBtebvdiJMsPF5nVBoL88pLEbBMzP5hLBc9Ti71MMagy7C5cVpQL1dtmahXza6TN8rLwwPUgSvQ1TnmPqutXbMefzs2jX5yYT1D9RL1SQC8NCYyin4vnY51Dpnnimf35QXbTQheoNs8bANFAGawGUBw8QP845pHBm7kAGE8Uc9TPSVLLx5m16XPPY72dCvxUwQk2Bz8MugKntd5MkyNkxWy3B7anuWCtJwoxTM8ZXwsSuiCi9M2r5mw9PMcAJQXmqtWVXiS9eMht73XXqN8Mch6kQFmi1BvvkDw9MCPdp3Yzx8ajmyjGyEf17oHvaidRdAH7XUvqLnpRBukky4kHWgu9i8Up3Xhw6nwuwPxRuhB6w7qv3991j3XzGeAucXTDgkTPjvuw7bQKVF6WrSXmbJteEcFpWA2M1GsjiQ\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_16 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_16 "\",\"public_address_voted_for\":\"" TEST_WALLET_16 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118P1c3vZLJ76utEqs2Fdymmd18aU1hRKnUQGD8YP8fUWo7a6wHq1BvvV5zo9y5GyCPTR4YqVdepMoRanbseEMe4egDDLBJo1x91AM5iE2gH2JLrTcaTJn7ZWMmnnCsq99Kb4RAXLo7RbQBE2djmQzT1D8TYMgeppLdFBpBesfHDP1c79KuD7UQmMQyywnRgHpgRRgSDaZY3z47QozqqzjkQy7AHWcVZW2HvVwup4vfgffx93EGVzc8Fx2YWwghcLi6yJMME1v9S64AtgUHtnkZfCwTUoGxDyQvuDyHVPiQahsp8qUYxcWzQB24ajJ94rBi3MeJHz1hL3mLoNG1BvSiJJb2DSBNiZKUA4Ev9LCodHHqsjuBQ3zGpwhomvtUtTVK4TMApUhKdHKUKFmHPWZYtqdHaxPxRiz6v6yemQ45nJy6tq4J4PjVUUZQdje8UHmwnYtk86CnSi9RVEJJgAJ6WWtZd\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_17 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_17 "\",\"public_address_voted_for\":\"" TEST_WALLET_17 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118PFMZP3mEiqLZBnwhY2ZdzmUzBEV8vb7kyAEXm3BnyzniyALcX113Udjpi3MfZYZFmtzXmHk1WiQpjAeuKKBNKzpNvwP3u3S6uFynVresVDmV2Jq9UgVgsSSzAq25Tr8n6KfcMPkkETqpxPdUkzcf113kqvgMLLNKrWqB4HJbigcmuBzBwBYppDxZ1c4bpcqCWGm2TctNVFVgsQKRXjZhpGCnDc7hKfYgj8LMpwsTjQjfQQoC9T38kDjbpbh5C8yCSie6shRWRdE5pMkerFxuwx96XJDvrLPweJa6LZYVUJ6W4ijXGp8SwrVjUPVTJNFsjt8a8GuGKedTW3A1Ak9VCEj9MaETmewJvoJB57URT7xzBowJ9JJwj29xxGme21D63pPuZzjMjZp69M83dYz5BEPDyA1bjTtHXS5GyB6aarGEdkvfGG4ZUk4fPWzY8hKe1mrNcy8iVRp7VmWuUCuRrvCyRD\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_18 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_18 "\",\"public_address_voted_for\":\"" TEST_WALLET_18 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118Nm6ZbNk26cUKoQLHRgLfxMK6cXaEKUjdxDzEYaJau7VvrxrFh1Bx45Z5yqBsRoFVXij2BNbL6oWiVKcmbDdA52UsoKrotgV97TJS866NNgw13GNUPgdbHqKzrndWyjYQMbNcCtmFoAjqDZ2nUki31D9NG4WBeuNWMJdiLmQA5FiTUNnpBPPsMDmKfat8G7UsTwVwC8rgFRDQyKJd33g2hKSj6hKpsYxfeC7pc4HUfuhgC3MoWADBjdvSr3o2WSzb6NXt5ftYvEJDW8pv3DZ9RtEsQSWd9p2hfHTU1PL7YVVREXW4euAnYQvK2JhctTF46xhxh1ktmfpNBYU1BvJ7a6UZsGFpMavkrgxdWUjYXmZZmuHXfc2xYBUezqh491iaSKtbGjiNu9xESvzaaYba5BmKLsabguQXdFy5o84BqizPMitUACiAjdivwEYwLJVifqaEwJmDXQo1VPMDKFE1eB5CX\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_19 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_19 "\",\"public_address_voted_for\":\"" TEST_WALLET_19 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NMQFZBxMsfrNuRXPfV2qqnmSxWXSFAuyJN2qdchG33bKVx3H1113UsPsoy5DagVBEMSUZj2CArH8f9rtmFarbECZ1QvpBidEarNp3323aanBpEeEDNGZjSGg2nXAuAa6BtkjRJ9x5bXMosKHkZ9y113kUKHdK9SCeP4g4WRmsAcHgLU2wTTto17u8NhDuZDjKgHRrT4Xyq3XZNEPcxcbKJFvueNZiTYD4WfJzt6KMzqcFyXfbRQrhqQZcWr7ZLzDkTJTFKLU2UdCsPdDBJDhfQRyfTGDDTs5nSM4iPQZ8axKPtNuYSkftFD2aMgGSrb2CVp4QvjZW6jkAXz1Ak9qn6fZss9WGsqjYgKMGH2eFjkvBRmsb2HKiumrKbjMVDLKjYPoetboiTxojeKPjX529qqAqpq2QsTGymT1prw37QPu7uqzKCDzfaLpAtY567R6AZ92aMi9UeivoDHHAiqSUP5oG5\"}"
#define DATABASE_COLLECTION_RESERVE_PROOFS_DATA_20 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_20 "\",\"public_address_voted_for\":\"" TEST_WALLET_20 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NbeQ6htDtJPees7GH3NHXKcrtJJ8VbqFWJFVLw8Dfrq28UFw51BvtKbU16YYjNJAeqAYsSVHg92toMYk4yY7HYUbZ65vgfn8wXbLELBXTKYQezErCAUBjwTDEGNdMk1QZF4tcLEmVUz4me8MaXts1D8ouHVqJQRAHv6KDHkMU143k5KrZbbkEMhijGDi9oGHRbUm2W4pLWMgzzZRPEQ7bP9eTRPHi2G2aa11pujWY4WaEPX12FyYbG2LJv18dvtejyiPTgXLVxPvRTNeP3aY7GwRRetePkxqJtJWXuXjp37yeeP4GJPaxeDzZhzzQ4T8JugtEHfCj8vs8j21Bx63K8SDTU3nQg7Ns6AoZg9rL2UCgA8W2FC7UmEb2ws85XJ8WfrTqzNpqoiweBGKgSG3wfbpzgMMKKz4obsEeTHZSfsKzwGRgMiEqkbTRSxdCPFi2tDWQdrWdvmaWm81iK42MSfud\"}"

#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_1 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"120000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NDPqYHviiubTHpa5jPey2PF2RPr7p92nUY5PYcCqPwkM3Vezb1BvSAu2zX5kKMuJYo2q837KH4HAXkXbdgF6wa13pkkpuMxv74keNZLAeeM9wmSuJvSHmMvVjfo6u6iCWMDRESRouQ359NvpAZN71D9fSivgK7K7WkbNzftkUZ6V7Uza6K9eihTgu7hSB3AqaTm7cK9uTb5Fzg9LyJbC4phfGYM7bazM2UrVfitZtbEkKuhPxnzFzKkWtdYBB59zUo1uS4UUR8faS25sjfc2cPjZUfbEZsiJVo7EDNs3d1KdhTN5TdNxZK6MZgVB77jE9ed4jJUrNSrqfWg1BwigbN9smQicoi9yYwujuGaHEzEnLBwQeLFxJJQj31qRQb4ZijEBGrMxvcmybhPKiHA3LBARnBREJxkQ39dp2HRfEfR1G7z6RGhS9o1KQCF3MAwomCMCuj69SpeovPEYwQb5uVXti\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_2 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"total\":\"110000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NbzvSR1wszWsvK6FWUS2EG26WsxJ6KVqAKTTFQUAhw6BQVrX11BwfgJdtgRtKXepc1Nzjb6dWs8fCH5Q5LPZf3NY8pLrdYfsYvA1bRTtbfJSJcifMX22g5wukytaX43TUPA2CvacUXxPUnFmSJwy1DAUMnLGDUuW3fAcMLfTYZGNzK5ifErHJ2DC55jDrffSjACL5EZQk5V5MXeLHzjEtA9LKXrX9ktQAfqNcXiP1oca9htAdkDYHDGEocGktiGtMth79oBDiKfDxPaMPTqfB6nMQxPj3Q8WsU3Won1vE9ggXTK7j8R64miuoQGQT6kEnhww1wtHAKWYBGC1BvHiDLCguhHFEeCJH3bbafpKouBQ26XvFWjcgTnv7RF9qPMn3BCNLUYtbn8o7o1eejV84mYYZ4F71T2D6tc71hE9FnHpaK4FUmNQ5mY8CW3vYBG1iG6GmwqW9buHKVHx6fG2GqrvR\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_3 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"total\":\"150000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NN9oPHNJwcKf646XJeeJ4UrJwKiFZvvzdRE6vAEEyHvnM3wBu1Bviq5DBTZP8XRyAJy4AXz3mQFGbzES6gC8uirABFecuKCacyLmxSZAMQ6yoSasRdXNURj94Npd9ocW5XUexv5xoHzDRG8JJ5jM1D9nzuuBV4gZrxwcgTbKuk5zddBUZdhdVGW5An8H4iLMF4PoPgk9fTKAKV6rV19aXXaSRJo5CmmAC37YASx8ppgh5BoDLSiNCfiLjSLpQjhQdPVPAuYGdQzxHMvigxTqXyQS8kCGQHGM52zaxxxK98s4XjJ7aU6vDHUoj35XyvxD5LiCYz5ESCtRcoS1Bw2XJkWvGu8vVtogUV66ejAAoY9KzaYrF1CjGbYPZtg2gYWVSwNCMS5peXHk6mwDHSP1tmSoLFEzFVX9CiAKPXQcUussue6w527pGZAYnqUvLBZQauFrcd2FXxeLx4rrwXj4SnZh5\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_4 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"total\":\"100000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NMgDQ1mMESB9TVcANL57CGPgJbx3RKRnKsw3i3SAHi1uLqELo1Bv8A4RqdwV8o2XHnzwNLg9mrduoVL4oHE89ka6ZmhvxNhYnetNnkDsT5fmixsA1mGQ6irZgEVpo7SZjeJvH3T1G8hioRe2KpLP1DAVQ1j1HHW3NCoW3huZppKeepRBFpLoibxbiNsLmX8HDPEq6UyYYPFEKcK36NgvXJeiSUwPBwmhvfRkM1sqmaSZ2rFBWBRvKiB6tCfLUocfZA8Vkn1ReqazADd7ahjrdGz3cWoE3u5s9RZCqMTG1jrCDvDdRaxask64jP1L8AaCYAmGTgJNv6t3Zr81BwzDvQkxbicZLVkaJw9qPYmxidbZeDQ6XYhg8ASJRHW4XZVVEjFHyHQTjy4XerbfthvENw2t95ZEE1aPaiGgFh6CoDdA3Zh2G8YJguX9nU8iW2zVvYindPVk8UVraiqVGD66qPaDR\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_5 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NQCgyHa86iohwBQtUYqsFEBxwTwEhZdB8BUmi3MBkt9p5hsMH113UoGhwWp554GA1LgZWkNavEg5gsKk4yFUG2Wqci5qKNL4ah3qw3j7KPoh2jNB4AwaYZLVuwLuRqHYudFoDeqHS7i9ZXZ9GN47113kbZbNgye8PyvjvPXgtTR9URHxFg3QtcZuz8xBvwR7NmJVw4zT8wJMZ9AeviMe7MbNLv13os7Em9ySGc6h85hmZhFrNMZqKuQ9Zg6EUNh7MZRNXc6v1J2Ka54NrMFQizzGMyhxNjYdy2H2swTSFamg1CHAvuaZNqwvXdNxtij7kwZh6sWfoX47Tm21Ak9cK2Rf2piFfgnp7P5pPaAWEJac1W8vjiNHSLRB1k7G6Xr6SJGdxTLGcDKBc9JJNebRxrpovRcYFgc9zuZ7jePevRUYRzipb863gVatEDdFN1NCT12VfjqcdTDSy1f7kJm366MBRe\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_6 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_6 "\",\"public_address_voted_for\":\"" TEST_WALLET_10 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NFBQCR6tvtf9VZmpe3yEp9HUrLVVhUsh3od6tePf2WxjPs39y113Ujth3vguaVREosd4KssCExayJGoYtXb1eskQmUe1DJhCcDBbXbDLP5R4fMx1v7UX9bELM62vUCSt3ftkSFHaTF3F2m6zpGBR113kWUgAttUT6TtpxBRkmR1z7tKEnMdpQDF95DDZfcSQZnwXX7ixVa85W9zQT9Z4HvQZvA6LA517GZhtUfxT4fXJXvdj8tHSNRjgaxEgCCn2WkehJQEbyCvAgiCkU3gjpdnKApZAVamRcYKYtDSPZcpRd9ZiZmjg6QXvsJ7xBi1DniHKR4RV7CM7dQk1Ak9jsFDJ6sbshVEYsSrnEX5q6WWzHkMaEgRd2TSkrcGckvqKGigMJSEUrp3eFBNfkHRpXT4atrkCERjhcPQr5BuLmgs6VFNvPd4qy2xTEDz4hcYwB9R17iTEUKjMq2q52x8A5z6VJm\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_7 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_7 "\",\"public_address_voted_for\":\"" TEST_WALLET_10 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NiQQdQLR2dvXxdVDY14ohv8YeG5awfLre3LWKuCAZ3czqBwx3113UeKJM4r2iuFfeuospz5Nz5sGSfjw62DCMUHLLbSx98WPQfaY558zBimfMZPtQj8Wi64LP8JWcVF9objHHGgAJN5AXzodUwgT113kWqHCDfoe11QW54cQtkiadCAQGFbZnKqRdm7XjYxxZWc8MUTq64oiJKN2HoPzu8S4TWZd3hQsxSfX3Vo4BZp3gSbuFRVhZ75T3xNUZ86DV1Zw8Tpa1WXaaiQxNEbA1thKJtfXfU24mgRM4BwX4NgGKmLASAYhsh94J2UfMGPo37N6LsyDTDKYK7e1Ak9ZgQzL2z9EtCHG1H5gW72yLndfRdveHC7SSLqqPU9U9G5LRTYausWfwgGdfTESiQSHouWUDWmLjR7m8AKZYKpZ2yD1SQUVQb8xc68aDHkJEQyLRvQsmrLgGcBB23S9GxJ5GnHaax\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_8 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_8 "\",\"public_address_voted_for\":\"" TEST_WALLET_9 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NvFXVMBgRDLfFzrbKcb6etZhNnxWCJWAadHixQZSbEErPTMiP113UVpSvB68MLPJeRtGGV84Kco2pidEHp1Kr8FHYQQqtXnigdNRovZSewSM4eCuxCGi5PZaZ6wTDv3ssnvYve2G2BAjZtEMhTuq113kYtFuZUFC9NSbGN62ar8gb6me7Sn3aRrTHinhKpFY147LqMv7a2B6JKh6KHCvaUExzfsJ1XWQBTg3xecEq9VqD53egXuNrbyf7iKr7rAFyrZBL3ZFzmrikM4L8aCzdbDWNQcezSSpN4BAq6U6SiCDGcBJFCkgPzZU79kGyWPRtSrcbdvuf2wiYyE1Ak9UeDvLdJ5EmQ52g84TDDVkiVKSiwn6JAC1xSHNd2UCxPBXHwRAYgCoEmUHUoNNRQLUNzNqN1Qp1wenqxMeMzzJZqqSxHfiaCj1CSjs7MxVBTe57KNcGEpyVcmSV2pSHCd6aDvQT6\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_9 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_9 "\",\"public_address_voted_for\":\"" TEST_WALLET_9 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118Nd66C58NdU8sZef7KoNS6jfjv1aYqoWc9Z3XwU7eUuACjAMv71Bx7BFRCms13QKzz3FqaJNLFfuyzPkMzfM19qNowqouBYT6qyrLBZTYTF2ihnBXmwraH4uFUNe87QG6qRXKPun1RPmk3qjWYuWw1D8cSKyqCpNWaSeA9PFmPzAeqiP5Vx77eZZdKuhdhwbK2B2zhi4zMCkAkJjaTQxvJG2sZre7UgYa1b5YEDxa9SAQJuVMsvQaDEG6PiH9xjjDeGab1L7UeRqKoEhTqRSugaRFV7yQQj2MyCXPHTvJpNczsMHd9kaCyHP3CTxTij16PSWmaCrn5p22FNp1BxBmFkNPdbGRmGUCcCYR5LLHG1BzRtL46dd19eYohphTLcAzUBHgikdJamxWnyySHWdnnG5qCrfE3cDj1MvQNz76mSUxn1Ybj1bUPE7C69hR4aBfJPHVi3THE2fmqZXTTUo4kPc1N\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_10 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_10 "\",\"public_address_voted_for\":\"" TEST_WALLET_10 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NumvXioCcLhBB4dA2Je5APZkDeWBJn9RcF62tG3i8nPtC7BTu1BvGTPNUP1A7WW9AtQyiPC7jknT8MAouNbVSTWckCZVqKDNn4crJdn941APbnUSZLRcba7TEy7urVBPcVR68AxiBaJSpXZigaWb1DAREhJYnaVVdGLsesKY5YBciAmBwJ7rxRaK3pX3GSDKNkHvooGS5wdFQrpss6X4de5CTUdcVhUbHemyon7Aid2LPRTijbaBkxj4jYtbqXq5sddmkKczgxJYbBC1X4Lo6R7SaHckP8D6pvLFwvWwAfx3fiEoxdLK3DEnF3RhC9E7oioDF23EGitxCX21BwgGfUkddAitmuVNsQmLvf96zPZ6VtK3ZYMMBVASS5APv9ZVSsZTeZjPSGajignddM6JMY9Yey9QanNZHYgySrkiAp93T3ihnk2UJ2xmTKwcDTDV2xVyRxRdE8DNQsuCqbZ2Tjw8H\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_11 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_11 "\",\"public_address_voted_for\":\"" TEST_WALLET_6 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NTiwbZLCstwWzpKy8J6J8M1uq9qf5PbWha7C68N8V7qshnzUP113UoSQuy78bpD5CeY2H3ViztSqDBFmmMiNu6uCQGkbu4NrZhZk2T7y7T1ixLCAxYfKRtd2pAAbuAWeBVCNzvmKB8YaneMgZ3mH113kXRg67xZRBtVcawf1CTYHCVuhpur8F6nAGxwFeNoRAdr6rnGwa1SUVdqrXypfmJJyzpPUGTSriAJqtRSBKJqAgQDPz4aV99aLMHHKWAv3eKaGAvBZ3obk2GuVBnHeUUEHAihQ5ECndKS4dw8YxMogdY9o8PvrhZgt2gnX4YrUiF5VbGBcBUsxbag1Ak9oZfTH2d1WeyMntcv1Mb28Nzc73UvMbck3VyBedN57gV1LS8WNV1SeHAFBiGgeBcuveGee9VZYQvGRfiWzkJf9JfYWoQ4dyxh13BrXpp3rF1nWv3UXxMrJJX8SRtQy5zrLAywENZ\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_12 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_12 "\",\"public_address_voted_for\":\"" TEST_WALLET_6 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NhgFwT234BAHaZpNVUgpw57BNNxQk4GmvZQCve2PnN1Cnoyk31BvkeGg866DJ1KMrD6gP1KfDoHgApSvV7Rs14czdVEndFSz3oqzE3zcXp9UgYViWVqJXPqgdXrWzuAqaVmeJy2jZ1N7NNrDF1jm1DAGmageWVxbugKdf1rHUS61fXPvdiEYsaPFvwujnKtyeooG9tG2tJBAGFs4BSBNe98YWxM1Vkcnf3foGzt8zCZwSRre71EZcytGKVjRbdJL4dYW41EKc7ZH8McVQyUCWigufp3vKjUd1BLGW7E3HbxQW3dj9udGYxpR8cET8SfUEKtxGHuKjL2miue1Bv2avJpeKiUWhPf1q8nPgFSSGMj2mSRBPkxJvDrpCMJcE4Z4ozGKSqZVakiA8hLgF38ha9XeUQadShuqzRkr1fSF1cDgcYaBiKGy3TtzmN9rS9KFvTVjyrydeSW318ohHya5PD3Jd\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_13 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_13 "\",\"public_address_voted_for\":\"" TEST_WALLET_6 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NVaFAFVWQJsLQfgXVhi5RZysdBxHLQ3m3MbsgXbEMMCSXdbs5113UZv51HEQYhfKa8SNmPJ8hg7pVtrM8JhqSW2JoiYpZW24YNZKUipJfGQAToYjufPKf6EpMBabbA2c3u4q9dGfUNVAsarYXPnw113kQgGTutsFwxBTLCN1o3EkFgJAkqJmaTM2qqNfZKAX1m5KTzmPo5uYVSBa8VWxtuaPhYeoXwKNaFQT7aJtbsw4gPRDu2AUuMW684KdxcKrS4EjWL5RcJkPUcwSQYXCw9WN8Duh6jXyKwABdGeoXUmP8oLWtygKFkVqiHS1Jj26E24e6XEoP1SbRrg1Ak9TsSgBKPeXjZ5pJPmRtPifbCthUwmp2dpMPjJyveQ6U9F5Nspek9NJTy56k2syJhrCLv9rCipsPphLSbBcQEudZzkbhPRy3d722YvS1Qy2gDq33mwk5JrZXnHcqQNKQPJC5nWbHG\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_14 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_14 "\",\"public_address_voted_for\":\"" TEST_WALLET_7 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NR5pyLUHTrzNp1jgcXYceCmXcyKGhQUb7o7j8SejmtK1BGWum1BvPsj8HAZHApAujd6nyjYhhxLuD2EuzSJ2T6XzqWNVbgrQA2Zab2PniccUJr4UuJmKMgium6CtC3TyAbxWv87n5eivRSPneB9q1D94z76oVBZZk8JyrCEBnpNNcAHfLGdn5Vohw9pS8mr8a7xrGp8t5HdZBac8mrqQNHEekyPUTAG5BiJWy8EEMSZgc8ieK6jcSCdVE3yoYZrx7fNd6MZPFruzGNqF9DHQJpCSPw9z4NeMp5Pf8rJmfo5eFsgy7TrtsV8zgAQrQksWKYyw4LLKnVFjLPi1BwmixzbUnggnHQxM9py6sSq6yUjuD5mr9rg1KcyfRZQ2XpyyEwoeEV9Jd26yKih3ZgQuLTsoywV2LJWJHa89UA1ixYGjHkaokUdkaXr4Wfa9DGdMY9Q6YoZ42dfz4XjGmmF6fpQz5\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_15 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_15 "\",\"public_address_voted_for\":\"" TEST_WALLET_7 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NKGRYSRkBmumeAXu2t5zoYgUchPaUMVgvFKuF6UJft6DRLZpb1BwBtebvdiJMsPF5nVBoL88pLEbBMzP5hLBc9Ti71MMagy7C5cVpQL1dtmahXza6TN8rLwwPUgSvQ1TnmPqutXbMefzs2jX5yYT1D9RL1SQC8NCYyin4vnY51Dpnnimf35QXbTQheoNs8bANFAGawGUBw8QP845pHBm7kAGE8Uc9TPSVLLx5m16XPPY72dCvxUwQk2Bz8MugKntd5MkyNkxWy3B7anuWCtJwoxTM8ZXwsSuiCi9M2r5mw9PMcAJQXmqtWVXiS9eMht73XXqN8Mch6kQFmi1BvvkDw9MCPdp3Yzx8ajmyjGyEf17oHvaidRdAH7XUvqLnpRBukky4kHWgu9i8Up3Xhw6nwuwPxRuhB6w7qv3991j3XzGeAucXTDgkTPjvuw7bQKVF6WrSXmbJteEcFpWA2M1GsjiQ\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_16 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_16 "\",\"public_address_voted_for\":\"" TEST_WALLET_7 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118P1c3vZLJ76utEqs2Fdymmd18aU1hRKnUQGD8YP8fUWo7a6wHq1BvvV5zo9y5GyCPTR4YqVdepMoRanbseEMe4egDDLBJo1x91AM5iE2gH2JLrTcaTJn7ZWMmnnCsq99Kb4RAXLo7RbQBE2djmQzT1D8TYMgeppLdFBpBesfHDP1c79KuD7UQmMQyywnRgHpgRRgSDaZY3z47QozqqzjkQy7AHWcVZW2HvVwup4vfgffx93EGVzc8Fx2YWwghcLi6yJMME1v9S64AtgUHtnkZfCwTUoGxDyQvuDyHVPiQahsp8qUYxcWzQB24ajJ94rBi3MeJHz1hL3mLoNG1BvSiJJb2DSBNiZKUA4Ev9LCodHHqsjuBQ3zGpwhomvtUtTVK4TMApUhKdHKUKFmHPWZYtqdHaxPxRiz6v6yemQ45nJy6tq4J4PjVUUZQdje8UHmwnYtk86CnSi9RVEJJgAJ6WWtZd\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_17 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_17 "\",\"public_address_voted_for\":\"" TEST_WALLET_8 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118PFMZP3mEiqLZBnwhY2ZdzmUzBEV8vb7kyAEXm3BnyzniyALcX113Udjpi3MfZYZFmtzXmHk1WiQpjAeuKKBNKzpNvwP3u3S6uFynVresVDmV2Jq9UgVgsSSzAq25Tr8n6KfcMPkkETqpxPdUkzcf113kqvgMLLNKrWqB4HJbigcmuBzBwBYppDxZ1c4bpcqCWGm2TctNVFVgsQKRXjZhpGCnDc7hKfYgj8LMpwsTjQjfQQoC9T38kDjbpbh5C8yCSie6shRWRdE5pMkerFxuwx96XJDvrLPweJa6LZYVUJ6W4ijXGp8SwrVjUPVTJNFsjt8a8GuGKedTW3A1Ak9VCEj9MaETmewJvoJB57URT7xzBowJ9JJwj29xxGme21D63pPuZzjMjZp69M83dYz5BEPDyA1bjTtHXS5GyB6aarGEdkvfGG4ZUk4fPWzY8hKe1mrNcy8iVRp7VmWuUCuRrvCyRD\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_18 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_18 "\",\"public_address_voted_for\":\"" TEST_WALLET_8 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118Nm6ZbNk26cUKoQLHRgLfxMK6cXaEKUjdxDzEYaJau7VvrxrFh1Bx45Z5yqBsRoFVXij2BNbL6oWiVKcmbDdA52UsoKrotgV97TJS866NNgw13GNUPgdbHqKzrndWyjYQMbNcCtmFoAjqDZ2nUki31D9NG4WBeuNWMJdiLmQA5FiTUNnpBPPsMDmKfat8G7UsTwVwC8rgFRDQyKJd33g2hKSj6hKpsYxfeC7pc4HUfuhgC3MoWADBjdvSr3o2WSzb6NXt5ftYvEJDW8pv3DZ9RtEsQSWd9p2hfHTU1PL7YVVREXW4euAnYQvK2JhctTF46xhxh1ktmfpNBYU1BvJ7a6UZsGFpMavkrgxdWUjYXmZZmuHXfc2xYBUezqh491iaSKtbGjiNu9xESvzaaYba5BmKLsabguQXdFy5o84BqizPMitUACiAjdivwEYwLJVifqaEwJmDXQo1VPMDKFE1eB5CX\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_19 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_19 "\",\"public_address_voted_for\":\"" TEST_WALLET_8 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NMQFZBxMsfrNuRXPfV2qqnmSxWXSFAuyJN2qdchG33bKVx3H1113UsPsoy5DagVBEMSUZj2CArH8f9rtmFarbECZ1QvpBidEarNp3323aanBpEeEDNGZjSGg2nXAuAa6BtkjRJ9x5bXMosKHkZ9y113kUKHdK9SCeP4g4WRmsAcHgLU2wTTto17u8NhDuZDjKgHRrT4Xyq3XZNEPcxcbKJFvueNZiTYD4WfJzt6KMzqcFyXfbRQrhqQZcWr7ZLzDkTJTFKLU2UdCsPdDBJDhfQRyfTGDDTs5nSM4iPQZ8axKPtNuYSkftFD2aMgGSrb2CVp4QvjZW6jkAXz1Ak9qn6fZss9WGsqjYgKMGH2eFjkvBRmsb2HKiumrKbjMVDLKjYPoetboiTxojeKPjX529qqAqpq2QsTGymT1prw37QPu7uqzKCDzfaLpAtY567R6AZ92aMi9UeivoDHHAiqSUP5oG5\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_20 "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_20 "\",\"public_address_voted_for\":\"" TEST_WALLET_8 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NbeQ6htDtJPees7GH3NHXKcrtJJ8VbqFWJFVLw8Dfrq28UFw51BvtKbU16YYjNJAeqAYsSVHg92toMYk4yY7HYUbZ65vgfn8wXbLELBXTKYQezErCAUBjwTDEGNdMk1QZF4tcLEmVUz4me8MaXts1D8ouHVqJQRAHv6KDHkMU143k5KrZbbkEMhijGDi9oGHRbUm2W4pLWMgzzZRPEQ7bP9eTRPHi2G2aa11pujWY4WaEPX12FyYbG2LJv18dvtejyiPTgXLVxPvRTNeP3aY7GwRRetePkxqJtJWXuXjp37yeeP4GJPaxeDzZhzzQ4T8JugtEHfCj8vs8j21Bx63K8SDTU3nQg7Ns6AoZg9rL2UCgA8W2FC7UmEb2ws85XJ8WfrTqzNpqoiweBGKgSG3wfbpzgMMKKz4obsEeTHZSfsKzwGRgMiEqkbTRSxdCPFi2tDWQdrWdvmaWm81iK42MSfud\"}"

#define DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_1 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"120000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NDPqYHviiubTHpa5jPey2PF2RPr7p92nUY5PYcCqPwkM3Vezb1BvSAu2zX5kKMuJYo2q837KH4HAXkXbdgF6wa13pkkpuMxv74keNZLAeeM9wmSuJvSHmMvVjfo6u6iCWMDRESRouQ359NvpAZN71D9fSivgK7K7WkbNzftkUZ6V7Uza6K9eihTgu7hSB31qaTm7cK9uTb5Fzg9LyJbC4phfGYM7bazM2UrVfitZtbEkKuhPxnzFzKkWtdYBB59zUo1uS4UUR8faS25sjfc2cPjZUfbEZsiJVo7EDNs3d1KdhTN5TdNxZK6MZgVB77jE9ed4jJUrNSrqfWg1BwigbN9smQicoi9yYwujuGaHEzEnLBwQeLFxJJQj31qRQb4ZijEBGrMxvcmybhPKiHA3LBARnBREJxkQ39dp2HRfEfR1G7z6RGhS9o1KQCF3MAwomCMCuj69SpeovPEYwQb5uVXti\"}"
#define DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_2 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"total\":\"110000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NbzvSR1wszWsvK6FWUS2EG26WsxJ6KVqAKTTFQUAhw6BQVrX11BwfgJdtgRtKXepc1Nzjb6dWs8fCH5Q5LPZf3NY8pLrdYfsYvA1bRTtbfJSJcifMX22g5wukytaX43TUPA2CvacUXxPUnFmSJwy1DAUMnLGDUuW3fAcMLfTYZGNzK5ifErHJ2DC55jDr1fSjACL5EZQk5V5MXeLHzjEtA9LKXrX9ktQAfqNcXiP1oca9htAdkDYHDGEocGktiGtMth79oBDiKfDxPaMPTqfB6nMQxPj3Q8WsU3Won1vE9ggXTK7j8R64miuoQGQT6kEnhww1wtHAKWYBGC1BvHiDLCguhHFEeCJH3bbafpKouBQ26XvFWjcgTnv7RF9qPMn3BCNLUYtbn8o7o1eejV84mYYZ4F71T2D6tc71hE9FnHpaK4FUmNQ5mY8CW3vYBG1iG6GmwqW9buHKVHx6fG2GqrvR\"}"
#define DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_3 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"total\":\"150000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NN9oPHNJwcKf646XJeeJ4UrJwKiFZvvzdRE6vAEEyHvnM3wBu1Bviq5DBTZP8XRyAJy4AXz3mQFGbzES6gC8uirABFecuKCacyLmxSZAMQ6yoSasRdXNURj94Npd9ocW5XUexv5xoHzDRG8JJ5jM1D9nzuuBV4gZrxwcgTbKuk5zddBUZdhdVGW5An8H4i1MF4PoPgk9fTKAKV6rV19aXXaSRJo5CmmAC37YASx8ppgh5BoDLSiNCfiLjSLpQjhQdPVPAuYGdQzxHMvigxTqXyQS8kCGQHGM52zaxxxK98s4XjJ7aU6vDHUoj35XyvxD5LiCYz5ESCtRcoS1Bw2XJkWvGu8vVtogUV66ejAAoY9KzaYrF1CjGbYPZtg2gYWVSwNCMS5peXHk6mwDHSP1tmSoLFEzFVX9CiAKPXQcUussue6w527pGZAYnqUvLBZQauFrcd2FXxeLx4rrwXj4SnZh5\"}"
#define DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_4 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"total\":\"100000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NMgDQ1mMESB9TVcANL57CGPgJbx3RKRnKsw3i3SAHi1uLqELo1Bv8A4RqdwV8o2XHnzwNLg9mrduoVL4oHE89ka6ZmhvxNhYnetNnkDsT5fmixsA1mGQ6irZgEVpo7SZjeJvH3T1G8hioRe2KpLP1DAVQ1j1HHW3NCoW3huZppKeepRBFpLoibxbiNsLmX8HDP1q6UyYYPFEKcK36NgvXJeiSUwPBwmhvfRkM1sqmaSZ2rFBWBRvKiB6tCfLUocfZA8Vkn1ReqazADd7ahjrdGz3cWoE3u5s9RZCqMTG1jrCDvDdRaxask64jP1L8AaCYAmGTgJNv6t3Zr81BwzDvQkxbicZLVkaJw9qPYmxidbZeDQ6XYhg8ASJRHW4XZVVEjFHyHQTjy4XerbfthvENw2t95ZEE1aPaiGgFh6CoDdA3Zh2G8YJguX9nU8iW2zVvYindPVk8UVraiqVGD66qPaDR\"}"
#define DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_5 "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NQCgyHa86iohwBQtUYqsFEBxwTwEhZdB8BUmi3MBkt9p5hsMH113UoGhwWp554GA1LgZWkNavEg5gsKk4yFUG2Wqci5qKNL4ah3qw3j7KPoh2jNB4AwaYZLVuwLuRqHYudFoDeqHS7i9ZXZ9GN47113kbZbNgye8PyvjvPXgtTR9URHxFg3QtcZuz8xBvwR71mJVw4zT8wJMZ9AeviMe7MbNLv13os7Em9ySGc6h85hmZhFrNMZqKuQ9Zg6EUNh7MZRNXc6v1J2Ka54NrMFQizzGMyhxNjYdy2H2swTSFamg1CHAvuaZNqwvXdNxtij7kwZh6sWfoX47Tm21Ak9cK2Rf2piFfgnp7P5pPaAWEJac1W8vjiNHSLRB1k7G6Xr6SJGdxTLGcDKBc9JJNebRxrpovRcYFgc9zuZ7jePevRUYRzipb863gVatEDdFN1NCT12VfjqcdTDSy1f7kJm366MBRe\"}"

#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_1_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total_vote_count\":\"380000000\",\"IP_address\":\"" NETWORK_DATA_NODE_1_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_1\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"|" XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT_DATA "\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_1 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_2_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_2_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_2\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_2 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_3_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_3_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_3\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_3 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_4_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_4_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_4\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_4 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_5_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total_vote_count\":\"2000000000\",\"IP_address\":\"" NETWORK_DATA_NODE_5_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_5\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_5 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_6_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" TEST_WALLET_6 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.206\",\"delegate_name\":\"delegate_name_6\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_6 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_7_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" TEST_WALLET_7 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.207\",\"delegate_name\":\"delegate_name_7\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_7 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_8_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" TEST_WALLET_8 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.208\",\"delegate_name\":\"delegate_name_8\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_8 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_9_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" TEST_WALLET_9 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.209\",\"delegate_name\":\"delegate_name_9\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_9 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_10_FOR_10_BLOCK_VERIFIERS "{\"public_address\":\"" TEST_WALLET_10 "\",\"total_vote_count\":\"1000000000\",\"IP_address\":\"192.168.1.210\",\"delegate_name\":\"delegate_name_10\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_10 "\"}"

#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_1_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"120000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NDPqYHviiubTHpa5jPey2PF2RPr7p92nUY5PYcCqPwkM3Vezb1BvSAu2zX5kKMuJYo2q837KH4HAXkXbdgF6wa13pkkpuMxv74keNZLAeeM9wmSuJvSHmMvVjfo6u6iCWMDRESRouQ359NvpAZN71D9fSivgK7K7WkbNzftkUZ6V7Uza6K9eihTgu7hSB3AqaTm7cK9uTb5Fzg9LyJbC4phfGYM7bazM2UrVfitZtbEkKuhPxnzFzKkWtdYBB59zUo1uS4UUR8faS25sjfc2cPjZUfbEZsiJVo7EDNs3d1KdhTN5TdNxZK6MZgVB77jE9ed4jJUrNSrqfWg1BwigbN9smQicoi9yYwujuGaHEzEnLBwQeLFxJJQj31qRQb4ZijEBGrMxvcmybhPKiHA3LBARnBREJxkQ39dp2HRfEfR1G7z6RGhS9o1KQCF3MAwomCMCuj69SpeovPEYwQb5uVXti\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_2_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"110000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NbzvSR1wszWsvK6FWUS2EG26WsxJ6KVqAKTTFQUAhw6BQVrX11BwfgJdtgRtKXepc1Nzjb6dWs8fCH5Q5LPZf3NY8pLrdYfsYvA1bRTtbfJSJcifMX22g5wukytaX43TUPA2CvacUXxPUnFmSJwy1DAUMnLGDUuW3fAcMLfTYZGNzK5ifErHJ2DC55jDrffSjACL5EZQk5V5MXeLHzjEtA9LKXrX9ktQAfqNcXiP1oca9htAdkDYHDGEocGktiGtMth79oBDiKfDxPaMPTqfB6nMQxPj3Q8WsU3Won1vE9ggXTK7j8R64miuoQGQT6kEnhww1wtHAKWYBGC1BvHiDLCguhHFEeCJH3bbafpKouBQ26XvFWjcgTnv7RF9qPMn3BCNLUYtbn8o7o1eejV84mYYZ4F71T2D6tc71hE9FnHpaK4FUmNQ5mY8CW3vYBG1iG6GmwqW9buHKVHx6fG2GqrvR\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_3_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"150000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NN9oPHNJwcKf646XJeeJ4UrJwKiFZvvzdRE6vAEEyHvnM3wBu1Bviq5DBTZP8XRyAJy4AXz3mQFGbzES6gC8uirABFecuKCacyLmxSZAMQ6yoSasRdXNURj94Npd9ocW5XUexv5xoHzDRG8JJ5jM1D9nzuuBV4gZrxwcgTbKuk5zddBUZdhdVGW5An8H4iLMF4PoPgk9fTKAKV6rV19aXXaSRJo5CmmAC37YASx8ppgh5BoDLSiNCfiLjSLpQjhQdPVPAuYGdQzxHMvigxTqXyQS8kCGQHGM52zaxxxK98s4XjJ7aU6vDHUoj35XyvxD5LiCYz5ESCtRcoS1Bw2XJkWvGu8vVtogUV66ejAAoY9KzaYrF1CjGbYPZtg2gYWVSwNCMS5peXHk6mwDHSP1tmSoLFEzFVX9CiAKPXQcUussue6w527pGZAYnqUvLBZQauFrcd2FXxeLx4rrwXj4SnZh5\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_4_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total\":\"100000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NMgDQ1mMESB9TVcANL57CGPgJbx3RKRnKsw3i3SAHi1uLqELo1Bv8A4RqdwV8o2XHnzwNLg9mrduoVL4oHE89ka6ZmhvxNhYnetNnkDsT5fmixsA1mGQ6irZgEVpo7SZjeJvH3T1G8hioRe2KpLP1DAVQ1j1HHW3NCoW3huZppKeepRBFpLoibxbiNsLmX8HDPEq6UyYYPFEKcK36NgvXJeiSUwPBwmhvfRkM1sqmaSZ2rFBWBRvKiB6tCfLUocfZA8Vkn1ReqazADd7ahjrdGz3cWoE3u5s9RZCqMTG1jrCDvDdRaxask64jP1L8AaCYAmGTgJNv6t3Zr81BwzDvQkxbicZLVkaJw9qPYmxidbZeDQ6XYhg8ASJRHW4XZVVEjFHyHQTjy4XerbfthvENw2t95ZEE1aPaiGgFh6CoDdA3Zh2G8YJguX9nU8iW2zVvYindPVk8UVraiqVGD66qPaDR\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_5_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NQCgyHa86iohwBQtUYqsFEBxwTwEhZdB8BUmi3MBkt9p5hsMH113UoGhwWp554GA1LgZWkNavEg5gsKk4yFUG2Wqci5qKNL4ah3qw3j7KPoh2jNB4AwaYZLVuwLuRqHYudFoDeqHS7i9ZXZ9GN47113kbZbNgye8PyvjvPXgtTR9URHxFg3QtcZuz8xBvwR7NmJVw4zT8wJMZ9AeviMe7MbNLv13os7Em9ySGc6h85hmZhFrNMZqKuQ9Zg6EUNh7MZRNXc6v1J2Ka54NrMFQizzGMyhxNjYdy2H2swTSFamg1CHAvuaZNqwvXdNxtij7kwZh6sWfoX47Tm21Ak9cK2Rf2piFfgnp7P5pPaAWEJac1W8vjiNHSLRB1k7G6Xr6SJGdxTLGcDKBc9JJNebRxrpovRcYFgc9zuZ7jePevRUYRzipb863gVatEDdFN1NCT12VfjqcdTDSy1f7kJm366MBRe\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_6_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_6 "\",\"public_address_voted_for\":\"" TEST_WALLET_6 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NFBQCR6tvtf9VZmpe3yEp9HUrLVVhUsh3od6tePf2WxjPs39y113Ujth3vguaVREosd4KssCExayJGoYtXb1eskQmUe1DJhCcDBbXbDLP5R4fMx1v7UX9bELM62vUCSt3ftkSFHaTF3F2m6zpGBR113kWUgAttUT6TtpxBRkmR1z7tKEnMdpQDF95DDZfcSQZnwXX7ixVa85W9zQT9Z4HvQZvA6LA517GZhtUfxT4fXJXvdj8tHSNRjgaxEgCCn2WkehJQEbyCvAgiCkU3gjpdnKApZAVamRcYKYtDSPZcpRd9ZiZmjg6QXvsJ7xBi1DniHKR4RV7CM7dQk1Ak9jsFDJ6sbshVEYsSrnEX5q6WWzHkMaEgRd2TSkrcGckvqKGigMJSEUrp3eFBNfkHRpXT4atrkCERjhcPQr5BuLmgs6VFNvPd4qy2xTEDz4hcYwB9R17iTEUKjMq2q52x8A5z6VJm\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_7_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_7 "\",\"public_address_voted_for\":\"" TEST_WALLET_7 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NiQQdQLR2dvXxdVDY14ohv8YeG5awfLre3LWKuCAZ3czqBwx3113UeKJM4r2iuFfeuospz5Nz5sGSfjw62DCMUHLLbSx98WPQfaY558zBimfMZPtQj8Wi64LP8JWcVF9objHHGgAJN5AXzodUwgT113kWqHCDfoe11QW54cQtkiadCAQGFbZnKqRdm7XjYxxZWc8MUTq64oiJKN2HoPzu8S4TWZd3hQsxSfX3Vo4BZp3gSbuFRVhZ75T3xNUZ86DV1Zw8Tpa1WXaaiQxNEbA1thKJtfXfU24mgRM4BwX4NgGKmLASAYhsh94J2UfMGPo37N6LsyDTDKYK7e1Ak9ZgQzL2z9EtCHG1H5gW72yLndfRdveHC7SSLqqPU9U9G5LRTYausWfwgGdfTESiQSHouWUDWmLjR7m8AKZYKpZ2yD1SQUVQb8xc68aDHkJEQyLRvQsmrLgGcBB23S9GxJ5GnHaax\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_8_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_8 "\",\"public_address_voted_for\":\"" TEST_WALLET_8 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NvFXVMBgRDLfFzrbKcb6etZhNnxWCJWAadHixQZSbEErPTMiP113UVpSvB68MLPJeRtGGV84Kco2pidEHp1Kr8FHYQQqtXnigdNRovZSewSM4eCuxCGi5PZaZ6wTDv3ssnvYve2G2BAjZtEMhTuq113kYtFuZUFC9NSbGN62ar8gb6me7Sn3aRrTHinhKpFY147LqMv7a2B6JKh6KHCvaUExzfsJ1XWQBTg3xecEq9VqD53egXuNrbyf7iKr7rAFyrZBL3ZFzmrikM4L8aCzdbDWNQcezSSpN4BAq6U6SiCDGcBJFCkgPzZU79kGyWPRtSrcbdvuf2wiYyE1Ak9UeDvLdJ5EmQ52g84TDDVkiVKSiwn6JAC1xSHNd2UCxPBXHwRAYgCoEmUHUoNNRQLUNzNqN1Qp1wenqxMeMzzJZqqSxHfiaCj1CSjs7MxVBTe57KNcGEpyVcmSV2pSHCd6aDvQT6\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_9_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_9 "\",\"public_address_voted_for\":\"" TEST_WALLET_9 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118Nd66C58NdU8sZef7KoNS6jfjv1aYqoWc9Z3XwU7eUuACjAMv71Bx7BFRCms13QKzz3FqaJNLFfuyzPkMzfM19qNowqouBYT6qyrLBZTYTF2ihnBXmwraH4uFUNe87QG6qRXKPun1RPmk3qjWYuWw1D8cSKyqCpNWaSeA9PFmPzAeqiP5Vx77eZZdKuhdhwbK2B2zhi4zMCkAkJjaTQxvJG2sZre7UgYa1b5YEDxa9SAQJuVMsvQaDEG6PiH9xjjDeGab1L7UeRqKoEhTqRSugaRFV7yQQj2MyCXPHTvJpNczsMHd9kaCyHP3CTxTij16PSWmaCrn5p22FNp1BxBmFkNPdbGRmGUCcCYR5LLHG1BzRtL46dd19eYohphTLcAzUBHgikdJamxWnyySHWdnnG5qCrfE3cDj1MvQNz76mSUxn1Ybj1bUPE7C69hR4aBfJPHVi3THE2fmqZXTTUo4kPc1N\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_10_FOR_10_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" TEST_WALLET_10 "\",\"public_address_voted_for\":\"" TEST_WALLET_10 "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NumvXioCcLhBB4dA2Je5APZkDeWBJn9RcF62tG3i8nPtC7BTu1BvGTPNUP1A7WW9AtQyiPC7jknT8MAouNbVSTWckCZVqKDNn4crJdn941APbnUSZLRcba7TEy7urVBPcVR68AxiBaJSpXZigaWb1DAREhJYnaVVdGLsesKY5YBciAmBwJ7rxRaK3pX3GSDKNkHvooGS5wdFQrpss6X4de5CTUdcVhUbHemyon7Aid2LPRTijbaBkxj4jYtbqXq5sddmkKczgxJYbBC1X4Lo6R7SaHckP8D6pvLFwvWwAfx3fiEoxdLK3DEnF3RhC9E7oioDF23EGitxCX21BwgGfUkddAitmuVNsQmLvf96zPZ6VtK3ZYMMBVASS5APv9ZVSsZTeZjPSGajignddM6JMY9Yey9QanNZHYgySrkiAp93T3ihnk2UJ2xmTKwcDTDV2xVyRxRdE8DNQsuCqbZ2Tjw8H\"}"

#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_1_FOR_5_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total_vote_count\":\"380000000\",\"IP_address\":\"" NETWORK_DATA_NODE_1_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_1\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"|" XCASH_PROOF_OF_STAKE_BLOCK_HEIGHT_DATA "\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_1 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_2_FOR_5_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_2_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_2\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_2 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_3_FOR_5_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_3_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_3\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_3 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_4_FOR_5_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"total_vote_count\":\"0\",\"IP_address\":\"" NETWORK_DATA_NODE_4_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_4\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_4 "\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_5_FOR_5_BLOCK_VERIFIERS "{\"public_address\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total_vote_count\":\"2000000000\",\"IP_address\":\"" NETWORK_DATA_NODE_5_IP_ADDRESS "\",\"delegate_name\":\"delegate_name_5\",\"about\":\"\",\"website\":\"\",\"team\":\"\",\"shared_delegate_status\":\"solo\",\"delegate_fee\":\"\",\"server_specs\":\"\",\"block_verifier_score\":\"0\",\"online_status\":\"true\",\"block_verifier_total_rounds\":\"0\",\"block_verifier_online_total_rounds\":\"0\",\"block_verifier_online_percentage\":\"0\",\"block_producer_total_rounds\":\"0\",\"block_producer_block_heights\":\"\",\"public_key\":\"" TEST_WALLET_PUBLIC_KEY_5 "\"}"

#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_1_FOR_5_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"120000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NDPqYHviiubTHpa5jPey2PF2RPr7p92nUY5PYcCqPwkM3Vezb1BvSAu2zX5kKMuJYo2q837KH4HAXkXbdgF6wa13pkkpuMxv74keNZLAeeM9wmSuJvSHmMvVjfo6u6iCWMDRESRouQ359NvpAZN71D9fSivgK7K7WkbNzftkUZ6V7Uza6K9eihTgu7hSB3AqaTm7cK9uTb5Fzg9LyJbC4phfGYM7bazM2UrVfitZtbEkKuhPxnzFzKkWtdYBB59zUo1uS4UUR8faS25sjfc2cPjZUfbEZsiJVo7EDNs3d1KdhTN5TdNxZK6MZgVB77jE9ed4jJUrNSrqfWg1BwigbN9smQicoi9yYwujuGaHEzEnLBwQeLFxJJQj31qRQb4ZijEBGrMxvcmybhPKiHA3LBARnBREJxkQ39dp2HRfEfR1G7z6RGhS9o1KQCF3MAwomCMCuj69SpeovPEYwQb5uVXti\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_2_FOR_5_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_2_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"110000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NbzvSR1wszWsvK6FWUS2EG26WsxJ6KVqAKTTFQUAhw6BQVrX11BwfgJdtgRtKXepc1Nzjb6dWs8fCH5Q5LPZf3NY8pLrdYfsYvA1bRTtbfJSJcifMX22g5wukytaX43TUPA2CvacUXxPUnFmSJwy1DAUMnLGDUuW3fAcMLfTYZGNzK5ifErHJ2DC55jDrffSjACL5EZQk5V5MXeLHzjEtA9LKXrX9ktQAfqNcXiP1oca9htAdkDYHDGEocGktiGtMth79oBDiKfDxPaMPTqfB6nMQxPj3Q8WsU3Won1vE9ggXTK7j8R64miuoQGQT6kEnhww1wtHAKWYBGC1BvHiDLCguhHFEeCJH3bbafpKouBQ26XvFWjcgTnv7RF9qPMn3BCNLUYtbn8o7o1eejV84mYYZ4F71T2D6tc71hE9FnHpaK4FUmNQ5mY8CW3vYBG1iG6GmwqW9buHKVHx6fG2GqrvR\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_3_FOR_5_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_3_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_1_PUBLIC_ADDRESS "\",\"total\":\"150000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NN9oPHNJwcKf646XJeeJ4UrJwKiFZvvzdRE6vAEEyHvnM3wBu1Bviq5DBTZP8XRyAJy4AXz3mQFGbzES6gC8uirABFecuKCacyLmxSZAMQ6yoSasRdXNURj94Npd9ocW5XUexv5xoHzDRG8JJ5jM1D9nzuuBV4gZrxwcgTbKuk5zddBUZdhdVGW5An8H4iLMF4PoPgk9fTKAKV6rV19aXXaSRJo5CmmAC37YASx8ppgh5BoDLSiNCfiLjSLpQjhQdPVPAuYGdQzxHMvigxTqXyQS8kCGQHGM52zaxxxK98s4XjJ7aU6vDHUoj35XyvxD5LiCYz5ESCtRcoS1Bw2XJkWvGu8vVtogUV66ejAAoY9KzaYrF1CjGbYPZtg2gYWVSwNCMS5peXHk6mwDHSP1tmSoLFEzFVX9CiAKPXQcUussue6w527pGZAYnqUvLBZQauFrcd2FXxeLx4rrwXj4SnZh5\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_4_FOR_5_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_4_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total\":\"100000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NMgDQ1mMESB9TVcANL57CGPgJbx3RKRnKsw3i3SAHi1uLqELo1Bv8A4RqdwV8o2XHnzwNLg9mrduoVL4oHE89ka6ZmhvxNhYnetNnkDsT5fmixsA1mGQ6irZgEVpo7SZjeJvH3T1G8hioRe2KpLP1DAVQ1j1HHW3NCoW3huZppKeepRBFpLoibxbiNsLmX8HDPEq6UyYYPFEKcK36NgvXJeiSUwPBwmhvfRkM1sqmaSZ2rFBWBRvKiB6tCfLUocfZA8Vkn1ReqazADd7ahjrdGz3cWoE3u5s9RZCqMTG1jrCDvDdRaxask64jP1L8AaCYAmGTgJNv6t3Zr81BwzDvQkxbicZLVkaJw9qPYmxidbZeDQ6XYhg8ASJRHW4XZVVEjFHyHQTjy4XerbfthvENw2t95ZEE1aPaiGgFh6CoDdA3Zh2G8YJguX9nU8iW2zVvYindPVk8UVraiqVGD66qPaDR\"}"
#define DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_5_FOR_5_BLOCK_VERIFIERS "{\"public_address_created_reserve_proof\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"public_address_voted_for\":\"" NETWORK_DATA_NODE_5_PUBLIC_ADDRESS "\",\"total\":\"1000000000\",\"reserve_proof\":\"ReserveProofV11BZ23sBt9sZJeGccf84mzyAmNCP3KzYbE1111112VKmH111118NQCgyHa86iohwBQtUYqsFEBxwTwEhZdB8BUmi3MBkt9p5hsMH113UoGhwWp554GA1LgZWkNavEg5gsKk4yFUG2Wqci5qKNL4ah3qw3j7KPoh2jNB4AwaYZLVuwLuRqHYudFoDeqHS7i9ZXZ9GN47113kbZbNgye8PyvjvPXgtTR9URHxFg3QtcZuz8xBvwR7NmJVw4zT8wJMZ9AeviMe7MbNLv13os7Em9ySGc6h85hmZhFrNMZqKuQ9Zg6EUNh7MZRNXc6v1J2Ka54NrMFQizzGMyhxNjYdy2H2swTSFamg1CHAvuaZNqwvXdNxtij7kwZh6sWfoX47Tm21Ak9cK2Rf2piFfgnp7P5pPaAWEJac1W8vjiNHSLRB1k7G6Xr6SJGdxTLGcDKBc9JJNebRxrpovRcYFgc9zuZ7jePevRUYRzipb863gVatEDdFN1NCT12VfjqcdTDSy1f7kJm366MBRe\"}"

#define DATABASE_COLLECTION_STATISTICS_DATA "{\"username\":\"XCASH\",\"most_total_rounds_delegate_name\":\"delegate_name_1\",\"most_total_rounds\":\"0\",\"best_block_verifier_online_percentage_delegate_name\":\"delegate_name_1\",\"best_block_verifier_online_percentage\":\"0\",\"most_block_producer_total_rounds_delegate_name\":\"delegate_name_1\",\"most_block_producer_total_rounds\":\"0\"}"

/*
0 is to reset the database for production
1 is to reset the database for reserve proof testing no invalid reserve proofs
2 is to reset the database for reserve proof testing that has invalid reserve proofs
3 is to reset the database for shared delegates reserve proof testing
4 is to reset the database for reserve proof testing no invalid reserve proofs for 10 delegates
5 is to reset the database for reserve proof testing that has invalid reserve proofs for 10 delegates
6 is to reset the database for shared delegates reserve proof testing for 10 delegates
7 is to reset the database for reserve proof testing no invalid reserve proofs for 5 delegates
8 is to reset the database for reserve proof testing that has invalid reserve proofs for 5 delegates
9 is to reset the database for shared delegates reserve proof testing for 5 delegates

If 1,2 or 3 is run, as long as the network data nodes are running you can leave the other ones off to test for offline delegates
*/
#define INITIALIZE_DATABASE_DATA(settings) \
if (test_settings == 0) \
{ \
color_print("Initializing database data","yellow"); \
} \
if ((settings) == 0) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_1_PRODUCTION); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_2_PRODUCTION); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_3_PRODUCTION); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_4_PRODUCTION); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_5_PRODUCTION); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA_PRODUCTION); \
} \
else if ((settings) == 1) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_1); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_2); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_3); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_4); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_5); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_6); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_7); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_8); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_9); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_10); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_11); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_12); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_13); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_14); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_15); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_16); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_17); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_18); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_19); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_20); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_1); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_2); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_3); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_4); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_5); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_6); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_7); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_8); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_9); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_10); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_11); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_12); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_13); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_14); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_15); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_16); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_17); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_18); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_19); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_20); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 2) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_1); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_2); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_3); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_4); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_5); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_6); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_7); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_8); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_9); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_10); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_11); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_12); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_13); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_14); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_15); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_16); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_17); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_18); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_19); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_20); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_1); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_2); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_3); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_4); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_5); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_6); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_7); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_8); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_9); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_10); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_11); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_12); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_13); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_14); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_15); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_16); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_17); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_18); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_19); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_20); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 3) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_1); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_2); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_3); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_4); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_5); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_6); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_7); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_8); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_9); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_10); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_11); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_12); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_13); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_14); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_15); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_16); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_17); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_18); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_19); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_20); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_1); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_2); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_3); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_4); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_5); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_6); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_7); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_8); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_9); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_10); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_11); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_12); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_13); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_14); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_15); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_16); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_17); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_18); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_19); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_20); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 4) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_1); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_2); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_3); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_4); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_5); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_6); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_7); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_8); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_9); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_10); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_1); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_2); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_3); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_4); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_5); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_6); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_7); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_8); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_9); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_10); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 5) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_1); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_2); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_3); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_4); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_5); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_6); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_7); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_8); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_9); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_10); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_1); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_2); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_3); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_4); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_5); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_6); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_7); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_8); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_9); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_10); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 6) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_1_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_2_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_3_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_4_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_5_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_6_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_7_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_8_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_9_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_10_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_1_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_2_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_3_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_4_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_5_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_6_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_7_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_8_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_9_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_10_FOR_10_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 7) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_1); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_2); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_3); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_4); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_5); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_1); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_2); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_3); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_4); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_5); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 8) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_1); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_2); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_3); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_4); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_DELEGATES_DATA_5); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_INVALID_RESERVE_PROOFS_DATA_1); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_2); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_3); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_4); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_RESERVE_PROOFS_DATA_5); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
else if ((settings) == 9) \
{ \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_1_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_2_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_3_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_4_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"delegates",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DELEGATES_DATA_5_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_1_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_2_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_3_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_4_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"reserve_proofs_1",DATABASE_COLLECTION_SHARED_DELEGATE_RESERVE_PROOFS_DATA_5_FOR_5_BLOCK_VERIFIERS); \
insert_document_into_collection_json(database_name,"statistics",DATABASE_COLLECTION_STATISTICS_DATA); \
} \
sleep(BLOCK_VERIFIERS_SETTINGS);

// Test
#define TEST_OUTLINE "-----------------------------------------------------------------------------------------------"
#define INVALID_PARAMETERS_ERROR_MESSAGE \
"Parameters\n" \
"All parameters are optional, except for --block-verifiers-secret-key\n\n" \
"--parameters - List of all valid parameters\n" \
"--block-verifiers-secret-key <block_verifiers_secret_key> - The block verifiers secret key. Must be the first parameter.\n" \
"--test - Run a test to validate system compatibility. Can take up to around 24h. Parameter needs to be passed last.\n" \
"--quick-test - Run a quick test to validate the system compatibility. Can take up to around 10 min. Parameter needs to be passed last.\n" \
"--optimization-test - Run an optimization test to check system performance. Can take up to around 2 min. Parameter needs to be passed last.\n" \
"--debug - Show all incoming and outgoing messages from the server.\n" \
"--debug-delegates-error - Show all delegates who did not send any message for parts of the round.\n" \
"--test-mode <setting> - Use the test network data nodes, with the specific setting (1-9).\n" \
"--log-file <log_file> - Write all output to a log file with no colors.\n" \
"--log-file-color <log_file> - Write all output to a log file with colors.\n" \
"--total-threads <total_threads> - Total threads to use, the minimum is 2.Default is the CPU total number of threads.\n" \
"--delegates-ip-address <delegates_IP_address> - The delegates IP address (IPV4 only) to create the node on. Default is 0.0.0.0 (all available networking interfaces).\n" \
"--xcash-daemon-ip-address <daemon_IP_address> - Thedaemon IP address (IPV4 only). Default is 127.0.0.1\n" \
"--xcash-wallet-ip-address <wallet_rpc_IP_address> - The wallet RPC IP address (IPV4 only). Default is 127.0.0.1\n" \
"--xcash-wallet-port <xcash_wallet_port> - X-Cash wallet port. Default port is 18285.\n" \
"--mongodb-ip-address <mongodb_IP_address> - MongoDB IP address. Default is 127.0.0.1\n" \
"--database-name - Name of the database. Default name is XCASH_PROOF_OF_STAKE.\n" \
"--shared-delegates-database-name - Name of the shared delegates database. Default name is XCASH_PROOF_OF_STAKE_DELEGATES.\n" \
"--delegates-website - Run the delegates website.\n" \
"--shared-delegates-website --fee <fee> --minimum-amount [<minimum_amount>] --voter-inactivity-count [<number_of_days> (optional)] - Run the shared delegates website with a fee of <fee> and a minimum amount of <minimum_amount>\n" \
"Fee is expressed as a percentage, up to 6 decimals.\n" \
"Minimum amount of XCASH for a voter to receive a payment in regulat unit, expressed as an integer.\n" \
"Voter inactivity count is optional. Number of consecutive days where a voter would have registered in the database, but is not actively participating towards the shared delegate. If this number of consecutive days is reached, the voter will be removed from the database and all funds that were left over would not sent out, since they were below the MINIMUM AMOUNT. If this parameter is not specified, the default amount is 30 consecutive days.\n" \
"--private-group <full path to configuration file> - Allows the shared delegate to use a private group. This allows for only specific voters to be paid by the shared delegate, and or the shared delegate to send payments to different public addresses than the voted for public address.\nProvide a configuration with the following format:\nname1|public_address_of_vote|public_address_that_payment_should_go_to\nname2|public_address_of_vote|public_address_that_payment_should_go_to\n\nYou can use # as comments in the file, so dont use # in any name, as comments have to be on there own separate text file line.\nYou can have up to 100 private group members for the delegate.\nThe file gets loaded at startup and every block, so dont save an incomplete config file.\n" \
"--generate-key - Generate a public and private key for signing and verifying messages between block verifiers." \
"--synchronize-database-from-network-data-node - Synchronize the database from a network data node.\n" \
"--synchronize-database-from-specific-delegate <delegates_IP_address> - Synchronize the database from a specific node, and does not check the majority. It will also exit the program once done syncing.\nNote: This method of syncing is likely to be the most error prone, since it skips the majority checks, but will also likely be the fastest.\nShould only be used in specific circumstances.\n" \
"--disable-synchronizing-databases-and-starting-timers - Disables synchronizing the databases and starting the timers. Used for testing. Parameter needs to be passed last.\n" \
"--registration-mode <year> <month> <day> <hour> <minute> - Runs the registration mode for network data nodes. Used to keep a majority for the database before the block producing starts <year> is how many years since 1900, <month> is the month of the year (0-11), <day> is the day of the month (1-31), <hour> is the hour in UTC (1-23), <minute> is the minute (31-59). Parameter needs to be passed last.\n" \
"--start-time <year> <month> <day> <hour> <minute> - Starts the current block height timer at a specific time. <year> is how many years since 1900, <month> is the month of the year (0-11), <day> is the day of the month (1-31), <hour> is the hour in UTC (1-23), <minute> is the minute (31-59). Parameter needs to be passed last.\n"

//xcash-next

#define RED_TEXT(text) "\033[31m"text"\033[0m"
#define ORANGE_TEXT(text) "\033[38;5;208m"text"\033[0m"
#define YELLOW_TEXT(text) "\033[1;33m"text"\033[0m"
#define GREEN_TEXT(text) "\x1b[32m"text"\x1b[0m"
#define BLUE_TEXT(text) "\033[34m"text"\033[0m"
#define LIGHT_BLUE_TEXT(text) "\033[94m"text"\033[0m"
#define PURPLE_TEXT(text) "\033[35m"text"\033[0m"
#define LIGHT_PURPLE_TEXT(text) "\033[95m"text"\033[0m"
#define WHITE_TEXT(text)  "\033[97m"text"\033[0m"
#define BRIGHT_WHITE_TEXT(text) "\033[1;97m"text"\033[0m"

extern int debug_settings; // 1 to show all incoming and outgoing message from the server

// helper to trace calling origin during debug
#define __DEBUG_PRINT_FUNC_CALLER if (debug_settings)fprintf(stderr, "  --> TRACE: %s:%d, %s()\n", __FILE__, __LINE__, __func__);


#define INFO_STAGE_PRINT(fmt, ...) fprintf(stderr, BRIGHT_WHITE_TEXT("\n\nINFO: ")LIGHT_BLUE_TEXT(fmt)"\n\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER

#define INFO_STATUS_OK "\t["GREEN_TEXT("OK")"]"
#define INFO_STATUS_FAIL "\t["RED_TEXT("X")"]"


#define HOST_OK_STATUS(host, fmt, ...) BLUE_TEXT(host)" "fmt"\t["GREEN_TEXT("OK")"]"
#define HOST_FALSE_STATUS(host, fmt, ...) BLUE_TEXT(host)" "fmt"\t["RED_TEXT("X")"]"


#define INFO_PRINT(fmt, ...) fprintf(stderr, BRIGHT_WHITE_TEXT("INFO: ")fmt"\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER
#define WARNING_PRINT(fmt, ...) fprintf(stderr, ORANGE_TEXT("WARNING: ")fmt"\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER
#define ERROR_PRINT(fmt, ...) fprintf(stderr, RED_TEXT("ERROR: ")fmt"\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER
#define DEBUG_PRINT(fmt, ...) if (debug_settings)fprintf(stderr, PURPLE_TEXT("DEBUG: ")fmt"\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER
#define FATAL_ERROR_EXIT(fmt, ...) fprintf(stderr, RED_TEXT("FATAL: ")fmt"\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER; exit(1)

#define INFO_PRINT_STATUS_OK(fmt, ...) fprintf(stderr, BRIGHT_WHITE_TEXT("INFO: ")fmt INFO_STATUS_OK"\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER
#define INFO_PRINT_STATUS_FAIL(fmt, ...) fprintf(stderr, BRIGHT_WHITE_TEXT("INFO: ")fmt INFO_STATUS_FAIL"\n", ##__VA_ARGS__); __DEBUG_PRINT_FUNC_CALLER

#define MD5_HASH_SIZE 32

#define XCASH_OK 1
#define XCASH_ERROR 0
#define ID_MAX_SIZE 256 //VRF_PUBLIC_KEY_LENGTH + 64*'0' + \0 + align just in case
#define NUM_FIELDS 18
#define DB_HASH_SIZE 128
#define DB_COLLECTION_NAME_SIZE 256

#define DPOPS_DB "XCASH_PROOF_OF_STAKE"

// uv_net 
#define CONNECTION_TIMEOUT 3000  // 3 second
#define RESPONSE_TIMEOUT 3500    // 3 seconds. the time allowed for the each data block response
#define TRANSFER_BUFFER_SIZE 1024*1024*1; // 1Mb. data block size

#define  MAIN_BLOCK_PRODUCERS 6

typedef enum XCASH_DBS {
    XCASH_DB_DELEGATES = 0,
    XCASH_DB_STATISTICS = 1,
    XCASH_DB_RESERVE_PROOFS = 2,
    XCASH_DB_RESERVE_BYTES = 3,
    XCASH_DB_COUNT
} xcash_dbs_t;



typedef enum {
    XCASH_SEED_NODE_1 = 0,
    XCASH_SEED_NODE_2,
    XCASH_SEED_NODE_3,
    XCASH_SEED_NODE_4,
    XCASH_SEED_NODE_5
} xcash_seed_idx_t;


#endif
