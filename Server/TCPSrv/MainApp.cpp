
#pragma comment(lib, "ws2_32.lib")
#include "stdafx.h"

int main() {
	custom custom;
	base *b = &custom;

	TCPHelper *tcpHelper = new TCPHelper();	
	tcpHelper->loadWASA();
	tcpHelper->ListenServerSocket(6000, 5);
	
	tcpHelper->waitRecRequest(b);
	return 0;
}

