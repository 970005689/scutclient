/* File: auth.h
 * ------------
 * 注：核心函数为Authentication()，由该函数执行801.1X认证
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <netinet/if_ether.h>
#include <arpa/inet.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <net/if.h>
#include <linux/if_packet.h>

#include "functions.h"
#include "info.h"
#include "drcom.h"

#define LOGOFF 0 // 下线标志位
#define DRCOM_CLIENT 1 // Drcom客户端标志位
#define SERVER_ADDR "202.38.210.131"
#define SERVER_PORT 61440

struct sockaddr_ll auth_8021x_addr;
	
int Authentication(int client);
