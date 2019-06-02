// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//#pragma comment(lib,"Ws2_32.lib")


#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>

int main()
{
	struct sockaddr_in sa;
	struct sockaddr_in sa1;
	//char str[INET_ADDRSTRLEN];
	//char str1[INET_ADDRSTRLEN];

	inet_pton(AF_INET, "8.8.8.8", &(sa.sin_addr));
	inet_pton(AF_INET, "9.8.8.8", &(sa1.sin_addr));

	printf("%d - %d", sa.sin_addr.S_un.S_addr, sa1.sin_addr.S_un.S_addr);

	if ((unsigned long)(sa.sin_addr.S_un.S_addr) == (unsigned long)(sa1.sin_addr.S_un.S_addr)) 
	{
	//	// do something
	}
}

