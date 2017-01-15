

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jan 12 11:11:45 2017
 */
/* Compiler settings for webclnt.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __webclnt_h_h__
#define __webclnt_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __DefaultIfName_INTERFACE_DEFINED__
#define __DefaultIfName_INTERFACE_DEFINED__

/* interface DefaultIfName */
/* [implicit_handle][version][uuid] */ 

typedef struct Struct_318_t
    {
    hyper StructMember0;
    } 	Struct_318_t;

long Proc0_DavrCreateConnection( 
    /* [string][unique][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [in] */ long arg_3,
    /* [size_is][unique][in] */ wchar_t *arg_4,
    /* [range][in] */ long arg_5,
    /* [size_is][string][unique][in] */ wchar_t *arg_6,
    /* [range][in] */ long arg_7,
    /* [range][in] */ long arg_8,
    /* [size_is][unique][in] */ unsigned char *arg_9,
    /* [size_is][string][unique][in] */ wchar_t *arg_10,
    /* [range][in] */ long arg_11,
    /* [in] */ small arg_12,
    /* [in] */ small arg_13,
    /* [range][in] */ long arg_14,
    /* [size_is][unique][in] */ wchar_t *arg_15);

long Proc1_DavrGetCookie( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc2_DavrSetCookie( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2);

long Proc3_DavrDoesServerDoDav( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [out][in] */ small *arg_3,
    /* [size_is][string][unique][in] */ wchar_t *arg_4,
    /* [range][in] */ long arg_5);

long Proc4_DavrIsValidShare( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [size_is][string][unique][in] */ wchar_t *arg_3,
    /* [range][in] */ long arg_4,
    /* [out][in] */ small *arg_5);

long Proc5_DavrEnumNetUses( 
    /* [out][in] */ long *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [string][ref][out] */ wchar_t **arg_3,
    /* [out][in] */ small *arg_4);

long Proc6_DavrEnumShares( 
    /* [out][in] */ long *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][ref][out] */ wchar_t **arg_3,
    /* [out][in] */ small *arg_4);

long Proc7_DavrEnumServers( 
    /* [out][in] */ long *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [out][in] */ small *arg_3);

long Proc8_DavrGetConnection( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [out][in] */ small *arg_3);

long Proc9_DavrDeleteConnection( 
    /* [string][in] */ wchar_t *driveLetter,
    /* [in] */ long force);

long Proc10_DavrCancelConnectionsToServer( 
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2);

long Proc11_DavrGetUser( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc12_DavrConnectionExist( 
    /* [string][in] */ wchar_t *arg_1);

long Proc13_CDavNodeFactory__BeginChildren( 
    /* [length_is][size_is][out] */ wchar_t *arg_1,
    /* [range][in] */ long arg_2,
    /* [out] */ long *arg_3,
    /* [out][in] */ struct Struct_318_t *arg_4,
    /* [out][in] */ struct Struct_318_t *arg_5);

long Proc14_DavrFreeUsedDiskSpace( 
    /* [in] */ long arg_1);

long Proc15_DavrGetTheLockOwnerOfTheFile( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc16_DavrInvalidateCache( 
    /* [string][in] */ wchar_t *arg_1);

small Proc17_DavrIsWebClientRunning( void);

long Proc18_DavrGetServerAuthType( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [out] */ long *arg_3,
    /* [out][in] */ long *arg_4,
    /* [size_is][ref][out] */ byte **arg_5);


extern handle_t hWebClient;


extern RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec;
extern RPC_IF_HANDLE DefaultIfName_v1_0_s_ifspec;
#endif /* __DefaultIfName_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


