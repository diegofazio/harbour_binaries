/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbwin\axfunc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WIN_AXGETCONTROL );
HB_FUNC_EXTERN( WIN_OLEAUTO );
HB_FUNC_EXTERN( __AXGETCONTROL );
HB_FUNC_EXTERN( __AXREGISTERHANDLER );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_AXFUNC )
{ "WIN_AXGETCONTROL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_AXGETCONTROL )}, NULL },
{ "WIN_OLEAUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_OLEAUTO )}, NULL },
{ "___HOBJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__AXGETCONTROL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __AXGETCONTROL )}, NULL },
{ "___HSINK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__AXREGISTERHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( __AXREGISTERHANDLER )}, NULL },
{ "__HOBJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_AXFUNC, "..\\contrib\\hbwin\\axfunc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_AXFUNC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_AXFUNC )
   #include "hbiniseg.h"
#endif

HB_FUNC( WIN_AXGETCONTROL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,176,1,0,12,0,80,4,48,2,0,95,
		4,176,3,0,95,1,12,1,112,1,73,95,2,100,
		69,28,26,48,4,0,95,4,176,5,0,48,6,0,
		95,4,112,0,95,2,95,3,12,3,112,1,73,95,
		4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

