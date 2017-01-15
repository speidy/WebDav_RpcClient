

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#include <string.h>

#include "webclnt_h.h"

#define TYPE_FORMAT_STRING_SIZE   271                               
#define PROC_FORMAT_STRING_SIZE   955                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _webclnt_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } webclnt_MIDL_TYPE_FORMAT_STRING;

typedef struct _webclnt_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } webclnt_MIDL_PROC_FORMAT_STRING;

typedef struct _webclnt_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } webclnt_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const webclnt_MIDL_TYPE_FORMAT_STRING webclnt__MIDL_TypeFormatString;
extern const webclnt_MIDL_PROC_FORMAT_STRING webclnt__MIDL_ProcFormatString;
extern const webclnt_MIDL_EXPR_FORMAT_STRING webclnt__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: DefaultIfName, ver. 1.0,
   GUID={0xc8cb7687,0xe6d3,0x11d2,{0xa9,0x58,0x00,0xc0,0x4f,0x68,0x2e,0x16}} */

handle_t hWebClient;


static const RPC_CLIENT_INTERFACE DefaultIfName___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xc8cb7687,0xe6d3,0x11d2,{0xa9,0x58,0x00,0xc0,0x4f,0x68,0x2e,0x16}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0x00000000
    };
RPC_IF_HANDLE DefaultIfName_v1_0_c_ifspec = (RPC_IF_HANDLE)& DefaultIfName___RpcClientInterface;

extern const MIDL_STUB_DESC DefaultIfName_StubDesc;

static RPC_BINDING_HANDLE DefaultIfName__MIDL_AutoBindHandle;


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
    /* [size_is][unique][in] */ wchar_t *arg_15)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[0],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc1_DavrGetCookie( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[120],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc2_DavrSetCookie( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[162],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc3_DavrDoesServerDoDav( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [out][in] */ small *arg_3,
    /* [size_is][string][unique][in] */ wchar_t *arg_4,
    /* [range][in] */ long arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[204],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc4_DavrIsValidShare( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [size_is][string][unique][in] */ wchar_t *arg_3,
    /* [range][in] */ long arg_4,
    /* [out][in] */ small *arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[264],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc5_DavrEnumNetUses( 
    /* [out][in] */ long *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [string][ref][out] */ wchar_t **arg_3,
    /* [out][in] */ small *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[324],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc6_DavrEnumShares( 
    /* [out][in] */ long *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][ref][out] */ wchar_t **arg_3,
    /* [out][in] */ small *arg_4)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[378],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc7_DavrEnumServers( 
    /* [out][in] */ long *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [out][in] */ small *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[432],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc8_DavrGetConnection( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2,
    /* [out][in] */ small *arg_3)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[480],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc9_DavrDeleteConnection( 
    /* [string][in] */ wchar_t *driveLetter,
    /* [in] */ long force)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[528],
                  ( unsigned char * )&driveLetter);
    return ( long  )_RetVal.Simple;
    
}


long Proc10_DavrCancelConnectionsToServer( 
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[570],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc11_DavrGetUser( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[612],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc12_DavrConnectionExist( 
    /* [string][in] */ wchar_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[654],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc13_CDavNodeFactory__BeginChildren( 
    /* [length_is][size_is][out] */ wchar_t *arg_1,
    /* [range][in] */ long arg_2,
    /* [out] */ long *arg_3,
    /* [out][in] */ struct Struct_318_t *arg_4,
    /* [out][in] */ struct Struct_318_t *arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[690],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc14_DavrFreeUsedDiskSpace( 
    /* [in] */ long arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[750],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc15_DavrGetTheLockOwnerOfTheFile( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[786],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


long Proc16_DavrInvalidateCache( 
    /* [string][in] */ wchar_t *arg_1)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[828],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


small Proc17_DavrIsWebClientRunning( void)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[864],
                  ( unsigned char * )0);
    return ( small  )_RetVal.Simple;
    
}


long Proc18_DavrGetServerAuthType( 
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [out] */ long *arg_3,
    /* [out][in] */ long *arg_4,
    /* [size_is][ref][out] */ byte **arg_5)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&DefaultIfName_StubDesc,
                  (PFORMAT_STRING) &webclnt__MIDL_ProcFormatString.Format[894],
                  ( unsigned char * )&arg_1);
    return ( long  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const webclnt_MIDL_PROC_FORMAT_STRING webclnt__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Proc0_DavrCreateConnection */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x40 ),	/* x86 Stack size/offset = 64 */
/* 10 */	NdrFcShort( 0x3a ),	/* 58 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x10,		/* 16 */
/* 16 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter arg_2 */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 34 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_3 */

/* 36 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 38 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 42 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter arg_5 */

/* 48 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x1a ),	/* 26 */

	/* Parameter arg_6 */

/* 54 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 56 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 58 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter arg_7 */

/* 60 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 62 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 64 */	NdrFcShort( 0x30 ),	/* 48 */

	/* Parameter arg_8 */

/* 66 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 68 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 70 */	NdrFcShort( 0x3a ),	/* 58 */

	/* Parameter arg_9 */

/* 72 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 74 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 76 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter arg_10 */

/* 78 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 80 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 82 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter arg_11 */

/* 84 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 86 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 88 */	NdrFcShort( 0x60 ),	/* 96 */

	/* Parameter arg_12 */

/* 90 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 92 */	NdrFcShort( 0x2c ),	/* x86 Stack size/offset = 44 */
/* 94 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter arg_13 */

/* 96 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 98 */	NdrFcShort( 0x30 ),	/* x86 Stack size/offset = 48 */
/* 100 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter arg_14 */

/* 102 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 104 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 106 */	NdrFcShort( 0x6a ),	/* 106 */

	/* Parameter arg_15 */

/* 108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 110 */	NdrFcShort( 0x38 ),	/* x86 Stack size/offset = 56 */
/* 112 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x3c ),	/* x86 Stack size/offset = 60 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc1_DavrGetCookie */

/* 120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* 1 */
/* 128 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 136 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 144 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 146 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 148 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 150 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 154 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc2_DavrSetCookie */

/* 162 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x2 ),	/* 2 */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 176 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 178 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 186 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 188 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 190 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 192 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 194 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 196 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 200 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc3_DavrDoesServerDoDav */

/* 204 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x3 ),	/* 3 */
/* 212 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 214 */	NdrFcShort( 0x21 ),	/* 33 */
/* 216 */	NdrFcShort( 0x21 ),	/* 33 */
/* 218 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 220 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 228 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 230 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 232 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 234 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 236 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 238 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_3 */

/* 240 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 242 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 244 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 246 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 250 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter arg_5 */

/* 252 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 254 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 256 */	NdrFcShort( 0x98 ),	/* 152 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 260 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc4_DavrIsValidShare */

/* 264 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x4 ),	/* 4 */
/* 272 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 274 */	NdrFcShort( 0x21 ),	/* 33 */
/* 276 */	NdrFcShort( 0x21 ),	/* 33 */
/* 278 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 280 */	0x8,		/* 8 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 288 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 290 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 292 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 294 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_3 */

/* 300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 304 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter arg_4 */

/* 306 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	NdrFcShort( 0xae ),	/* 174 */

	/* Parameter arg_5 */

/* 312 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 314 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 316 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 320 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc5_DavrEnumNetUses */

/* 324 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x5 ),	/* 5 */
/* 332 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 334 */	NdrFcShort( 0x35 ),	/* 53 */
/* 336 */	NdrFcShort( 0x3d ),	/* 61 */
/* 338 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 340 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 348 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 350 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 354 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 356 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 358 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter arg_3 */

/* 360 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 362 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 364 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter arg_4 */

/* 366 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 368 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 370 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc6_DavrEnumShares */

/* 378 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 380 */	NdrFcLong( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x6 ),	/* 6 */
/* 386 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 388 */	NdrFcShort( 0x35 ),	/* 53 */
/* 390 */	NdrFcShort( 0x3d ),	/* 61 */
/* 392 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 394 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 402 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 404 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 408 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_3 */

/* 414 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 416 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 418 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter arg_4 */

/* 420 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 424 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 428 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc7_DavrEnumServers */

/* 432 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcShort( 0x7 ),	/* 7 */
/* 440 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 442 */	NdrFcShort( 0x35 ),	/* 53 */
/* 444 */	NdrFcShort( 0x3d ),	/* 61 */
/* 446 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 448 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 456 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 458 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_2 */

/* 462 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 464 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 466 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter arg_3 */

/* 468 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 470 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 472 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 476 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc8_DavrGetConnection */

/* 480 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 490 */	NdrFcShort( 0x19 ),	/* 25 */
/* 492 */	NdrFcShort( 0x21 ),	/* 33 */
/* 494 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 496 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 504 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 506 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 508 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 510 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter arg_3 */

/* 516 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc9_DavrDeleteConnection */

/* 528 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x9 ),	/* 9 */
/* 536 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 542 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 544 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter driveLetter */

/* 552 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 554 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 556 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter force */

/* 558 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 560 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 564 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 566 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc10_DavrCancelConnectionsToServer */

/* 570 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0xa ),	/* 10 */
/* 578 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 582 */	NdrFcShort( 0x8 ),	/* 8 */
/* 584 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 586 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 594 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 596 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 598 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc11_DavrGetUser */

/* 612 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0xb ),	/* 11 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 628 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 636 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 638 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 640 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 642 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 644 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 646 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc12_DavrConnectionExist */

/* 654 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0xc ),	/* 12 */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 670 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 678 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 680 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 682 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 686 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc13_CDavNodeFactory__BeginChildren */

/* 690 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0xd ),	/* 13 */
/* 698 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 700 */	NdrFcShort( 0x60 ),	/* 96 */
/* 702 */	NdrFcShort( 0x7c ),	/* 124 */
/* 704 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 706 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 714 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 716 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 718 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Parameter arg_2 */

/* 720 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 724 */	NdrFcShort( 0xd2 ),	/* 210 */

	/* Parameter arg_3 */

/* 726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 732 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 736 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Parameter arg_5 */

/* 738 */	NdrFcShort( 0x11a ),	/* Flags:  must free, in, out, simple ref, */
/* 740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 742 */	NdrFcShort( 0xe4 ),	/* Type Offset=228 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc14_DavrFreeUsedDiskSpace */

/* 750 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0xe ),	/* 14 */
/* 758 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 766 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 776 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 782 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc15_DavrGetTheLockOwnerOfTheFile */

/* 786 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0xf ),	/* 15 */
/* 794 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 802 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 814 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 816 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 820 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc16_DavrInvalidateCache */

/* 828 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x10 ),	/* 16 */
/* 836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 844 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 852 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 854 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 856 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Return value */

/* 858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc17_DavrIsWebClientRunning */

/* 864 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x11 ),	/* 17 */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0x5 ),	/* 5 */
/* 878 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 880 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 888 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 890 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 892 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Procedure Proc18_DavrGetServerAuthType */

/* 894 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x48,		/* Old Flags:  */
/* 896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x12 ),	/* 18 */
/* 902 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 904 */	NdrFcShort( 0x1c ),	/* 28 */
/* 906 */	NdrFcShort( 0x40 ),	/* 64 */
/* 908 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 910 */	0x8,		/* 8 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_1 */

/* 918 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 920 */	NdrFcShort( 0x0 ),	/* x86 Stack size/offset = 0 */
/* 922 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_2 */

/* 924 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 926 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 928 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter arg_3 */

/* 930 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 932 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_4 */

/* 936 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter arg_5 */

/* 942 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 944 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 946 */	NdrFcShort( 0xee ),	/* Type Offset=238 */

	/* Return value */

/* 948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 950 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const webclnt_MIDL_TYPE_FORMAT_STRING webclnt__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x12, 0x0,	/* FC_UP */
/* 12 */	NdrFcShort( 0x2 ),	/* Offset= 2 (14) */
/* 14 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x55,		/* FC_DIV_2 */
/* 20 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 22 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 24 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 26 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 28 */	NdrFcLong( 0x0 ),	/* 0 */
/* 32 */	NdrFcLong( 0x210 ),	/* 528 */
/* 36 */	
			0x12, 0x0,	/* FC_UP */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 42 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 44 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 48 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 50 */	NdrFcLong( 0x0 ),	/* 0 */
/* 54 */	NdrFcLong( 0x202 ),	/* 514 */
/* 58 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 60 */	NdrFcLong( 0x0 ),	/* 0 */
/* 64 */	NdrFcLong( 0x1000 ),	/* 4096 */
/* 68 */	
			0x12, 0x0,	/* FC_UP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
/* 76 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 78 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 80 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 82 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 84 */	
			0x12, 0x0,	/* FC_UP */
/* 86 */	NdrFcShort( 0x2 ),	/* Offset= 2 (88) */
/* 88 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 90 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 92 */	NdrFcShort( 0x28 ),	/* x86 Stack size/offset = 40 */
/* 94 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 96 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	NdrFcLong( 0x4000 ),	/* 16384 */
/* 106 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	NdrFcLong( 0x210 ),	/* 528 */
/* 116 */	
			0x12, 0x0,	/* FC_UP */
/* 118 */	NdrFcShort( 0x2 ),	/* Offset= 2 (120) */
/* 120 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 122 */	NdrFcShort( 0x2 ),	/* 2 */
/* 124 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x55,		/* FC_DIV_2 */
/* 126 */	NdrFcShort( 0x34 ),	/* x86 Stack size/offset = 52 */
/* 128 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 130 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 132 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 134 */	NdrFcShort( 0xff7c ),	/* Offset= -132 (2) */
/* 136 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 138 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x12, 0x0,	/* FC_UP */
/* 142 */	NdrFcShort( 0x2 ),	/* Offset= 2 (144) */
/* 144 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 146 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 148 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 150 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 152 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 158 */	NdrFcLong( 0x4000 ),	/* 16384 */
/* 162 */	
			0x12, 0x0,	/* FC_UP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 168 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 174 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 180 */	NdrFcLong( 0x4000 ),	/* 16384 */
/* 184 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 186 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x11, 0x0,	/* FC_RP */
/* 190 */	NdrFcShort( 0x2 ),	/* Offset= 2 (192) */
/* 192 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 194 */	NdrFcShort( 0x2 ),	/* 2 */
/* 196 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 198 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 200 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 202 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 204 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 206 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 208 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 210 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcLong( 0x200 ),	/* 512 */
/* 220 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 222 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 224 */	
			0x11, 0x0,	/* FC_RP */
/* 226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (228) */
/* 228 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 234 */	
			0x11, 0x0,	/* FC_RP */
/* 236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (238) */
/* 238 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 240 */	NdrFcShort( 0x4 ),	/* 4 */
/* 242 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 246 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 248 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 250 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x1 ),	/* 1 */
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 264 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 266 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 268 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const unsigned short DefaultIfName_FormatStringOffsetTable[] =
    {
    0,
    120,
    162,
    204,
    264,
    324,
    378,
    432,
    480,
    528,
    570,
    612,
    654,
    690,
    750,
    786,
    828,
    864,
    894
    };


static const MIDL_STUB_DESC DefaultIfName_StubDesc = 
    {
    (void *)& DefaultIfName___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &hWebClient,
    0,
    0,
    0,
    0,
    webclnt__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

