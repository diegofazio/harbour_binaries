/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "..\contrib\hbnetio\netiomt.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( NETIO_MTSERVER );
HB_FUNC_EXTERN( NETIO_SERVER );
HB_FUNC_EXTERN( HB_MTVM );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( NETIO_LISTEN );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_THREADDETACH );
HB_FUNC_EXTERN( HB_THREADSTART );
HB_FUNC_STATIC( NETIO_SRVLOOP );
HB_FUNC_EXTERN( ERRORNEW );
HB_FUNC_EXTERN( HB_LANGERRMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( NETIO_ACCEPT );
HB_FUNC_EXTERN( NETIO_RPCFILTER );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_NETIOMT )
{ "NETIO_MTSERVER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( NETIO_MTSERVER )}, NULL },
{ "NETIO_SERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETIO_SERVER )}, NULL },
{ "HB_MTVM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MTVM )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "NETIO_LISTEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETIO_LISTEN )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_THREADDETACH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADDETACH )}, NULL },
{ "HB_THREADSTART", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADSTART )}, NULL },
{ "NETIO_SRVLOOP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( NETIO_SRVLOOP )}, NULL },
{ "ERRORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORNEW )}, NULL },
{ "_SEVERITY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_GENCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SUBSYSTEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SUBCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DESCRIPTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_LANGERRMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LANGERRMSG )}, NULL },
{ "_CANRETRY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CANDEFAULT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FILENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "NETIO_ACCEPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETIO_ACCEPT )}, NULL },
{ "NETIO_RPCFILTER", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETIO_RPCFILTER )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_NETIOMT, "..\\contrib\\hbnetio\\netiomt.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_NETIOMT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_NETIOMT )
   #include "hbiniseg.h"
#endif

HB_FUNC( NETIO_MTSERVER )
{
	static const HB_BYTE pcode[] =
	{
		13,3,8,95,8,100,8,28,6,108,1,80,8,176,
		2,0,12,0,28,102,25,18,120,80,10,25,44,95,
		4,80,10,25,38,100,80,4,25,33,176,3,0,95,
		4,12,1,133,4,0,106,2,83,0,25,226,106,2,
		72,0,25,220,106,2,76,0,25,219,100,25,222,176,
		4,0,95,1,95,2,95,3,95,10,12,4,80,9,
		176,5,0,95,9,12,1,32,149,0,176,6,0,176,
		7,0,108,8,95,9,95,4,95,8,95,5,95,6,
		95,7,12,7,20,1,25,122,176,9,0,12,0,80,
		11,48,10,0,95,11,92,2,112,1,73,48,11,0,
		95,11,92,30,112,1,73,48,12,0,95,11,106,8,
		72,66,78,69,84,73,79,0,112,1,73,48,13,0,
		95,11,121,112,1,73,48,14,0,95,11,176,15,0,
		92,30,12,1,112,1,73,48,16,0,95,11,9,112,
		1,73,48,17,0,95,11,9,112,1,73,48,18,0,
		95,11,106,1,0,112,1,73,48,19,0,95,11,121,
		112,1,73,48,20,0,176,21,0,12,0,95,11,112,
		1,73,95,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( NETIO_SRVLOOP )
{
	static const HB_BYTE pcode[] =
	{
		149,1,3,176,22,0,95,1,100,92,2,164,123,2,
		0,80,4,176,5,0,95,4,12,1,31,36,95,2,
		100,69,28,11,176,23,0,95,4,95,2,20,2,176,
		6,0,176,7,0,95,3,95,4,12,2,20,1,100,
		80,4,25,201,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}
