// RpcClient_WebClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "webclnt_h.h"
#include <ostream>
#include <iostream>

void main()
{
	RPC_STATUS status;
	RPC_WSTR pszUuid = nullptr;
	RPC_WSTR pszProtocolSequence = RPC_WSTR(L"ncacn_np");
	RPC_WSTR pszNetworkAddress = nullptr;
	RPC_WSTR pszEndpoint = RPC_WSTR(L"\\PIPE\\DAV RPC SERVICE");
	RPC_WSTR pszOptions = nullptr;
	RPC_WSTR pszStringBinding = nullptr;
	unsigned long ulCode;

	status = RpcStringBindingCompose(pszUuid, pszProtocolSequence,
									pszNetworkAddress, pszEndpoint,
									pszOptions, &pszStringBinding);
	if (status) exit(status);

	status = RpcBindingFromStringBinding(pszStringBinding, &hWebClient);

	if (status) exit(status);

	RpcTryExcept
	{
		int rv = Proc17_DavrIsWebClientRunning();
		//int rv = Proc9_DavrDeleteConnection(L"Z:", 1);
		std::cout << "result is " << rv << std::endl;
	}
	RpcExcept(1)
	{
		ulCode = RpcExceptionCode();
		printf("Runtime reported exception 0x%lx = %ld\n", ulCode, ulCode);
	}
	RpcEndExcept

	status = RpcStringFree(&pszStringBinding);

	if (status) exit(status);

	status = RpcBindingFree(&hWebClient);

	if (status) exit(status);

	exit(0);
}

/******************************************************/
/*         MIDL allocate and free                     */
/******************************************************/

void __RPC_FAR * __RPC_USER midl_user_allocate(size_t len)
{
	return(malloc(len));
}

void __RPC_USER midl_user_free(void __RPC_FAR * ptr)
{
	free(ptr);
}