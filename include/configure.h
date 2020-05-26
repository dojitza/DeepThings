#ifndef CONFIGURE_H
#define CONFIGURE_H

/*Partitioning paramters*/
#define FUSED_LAYERS_MAX 16
#define PARTITIONS_W_MAX 6
#define PARTITIONS_H_MAX 6
#define PARTITIONS_MAX 36
#define THREAD_NUM 1
#define DATA_REUSE 1

/*Generate debugging information in log file*/
#define DEBUG_LOG 1

/*Debugging information for different components*/
#define DEBUG_INFERENCE 1
#define DEBUG_FTP 1
#define DEBUG_SERIALIZATION 1
#define DEBUG_DEEP_GATEWAY 1
#define DEBUG_DEEP_EDGE 1

/*Print timing and communication size information*/
#define DEBUG_TIMING 1
#define DEBUG_COMMU_SIZE 0

/*Configuration parameters for DistrIoT*/
#define GATEWAY_PUBLIC_ADDR "192.168.100.41"
#define GATEWAY_LOCAL_ADDR "192.168.100.41"
#define EDGE_ADDR_LIST    {"192.168.100.35", "192.168.100.38"}
#define MAX_EDGE_NUM 2
#define FRAME_NUM 4

#define NETWORK_FILE "models/yolo2.cfg"
#define WEIGHT_FILE "models/yolo2.weights"

#endif
