/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbtpathy\hbtpathy.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( BIN_AND );
HB_FUNC_EXTERN( BIN_NOT );
HB_FUNC_EXTERN( BIN_OR );
HB_FUNC_EXTERN( BIN_XOR );
HB_FUNC_EXTERN( TP_BAUD );
HB_FUNC_EXTERN( TP_CLEARIN );
HB_FUNC_EXTERN( TP_CLOSE );
HB_FUNC_EXTERN( TP_CLRKBD );
HB_FUNC_EXTERN( TP_CRC16 );
HB_FUNC_EXTERN( TP_CRC32 );
HB_FUNC_EXTERN( TP_CTRLCTS );
HB_FUNC_EXTERN( TP_CTRLDTR );
HB_FUNC_EXTERN( TP_CTRLRTS );
HB_FUNC_EXTERN( TP_DELAY );
HB_FUNC_EXTERN( TP_FLUSH );
HB_FUNC_EXTERN( TP_IDLE );
HB_FUNC_EXTERN( TP_INCHRS );
HB_FUNC_EXTERN( TP_INFREE );
HB_FUNC_EXTERN( TP_INKEY );
HB_FUNC_EXTERN( TP_ISCTS );
HB_FUNC_EXTERN( TP_ISDCD );
HB_FUNC_EXTERN( TP_ISDSR );
HB_FUNC_EXTERN( TP_ISRI );
HB_FUNC_EXTERN( TP_LOOKFOR );
HB_FUNC_EXTERN( TP_OPEN );
HB_FUNC_EXTERN( TP_OUTFREE );
HB_FUNC_EXTERN( TP_RECV );
HB_FUNC_EXTERN( TP_RECVTO );
HB_FUNC_EXTERN( TP_REOPEN );
HB_FUNC_EXTERN( TP_SEND );
HB_FUNC_EXTERN( TP_SENDSUB );
HB_FUNC_EXTERN( TP_UNINSTALL );
HB_FUNC_EXTERN( TP_WAITFOR );
HB_FUNC( __HBEXTERN__HBTPATHY__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBTPATHY )
{ "BIN_AND", {HB_FS_PUBLIC}, {HB_FUNCNAME( BIN_AND )}, NULL },
{ "BIN_NOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( BIN_NOT )}, NULL },
{ "BIN_OR", {HB_FS_PUBLIC}, {HB_FUNCNAME( BIN_OR )}, NULL },
{ "BIN_XOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( BIN_XOR )}, NULL },
{ "TP_BAUD", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_BAUD )}, NULL },
{ "TP_CLEARIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CLEARIN )}, NULL },
{ "TP_CLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CLOSE )}, NULL },
{ "TP_CLRKBD", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CLRKBD )}, NULL },
{ "TP_CRC16", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CRC16 )}, NULL },
{ "TP_CRC32", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CRC32 )}, NULL },
{ "TP_CTRLCTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CTRLCTS )}, NULL },
{ "TP_CTRLDTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CTRLDTR )}, NULL },
{ "TP_CTRLRTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_CTRLRTS )}, NULL },
{ "TP_DELAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_DELAY )}, NULL },
{ "TP_FLUSH", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_FLUSH )}, NULL },
{ "TP_IDLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_IDLE )}, NULL },
{ "TP_INCHRS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_INCHRS )}, NULL },
{ "TP_INFREE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_INFREE )}, NULL },
{ "TP_INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_INKEY )}, NULL },
{ "TP_ISCTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_ISCTS )}, NULL },
{ "TP_ISDCD", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_ISDCD )}, NULL },
{ "TP_ISDSR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_ISDSR )}, NULL },
{ "TP_ISRI", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_ISRI )}, NULL },
{ "TP_LOOKFOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_LOOKFOR )}, NULL },
{ "TP_OPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_OPEN )}, NULL },
{ "TP_OUTFREE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_OUTFREE )}, NULL },
{ "TP_RECV", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_RECV )}, NULL },
{ "TP_RECVTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_RECVTO )}, NULL },
{ "TP_REOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_REOPEN )}, NULL },
{ "TP_SEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_SEND )}, NULL },
{ "TP_SENDSUB", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_SENDSUB )}, NULL },
{ "TP_UNINSTALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_UNINSTALL )}, NULL },
{ "TP_WAITFOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TP_WAITFOR )}, NULL },
{ "__HBEXTERN__HBTPATHY__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBTPATHY__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBTPATHY, "hbtpathy\\hbtpathy.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBTPATHY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBTPATHY )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBTPATHY__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

