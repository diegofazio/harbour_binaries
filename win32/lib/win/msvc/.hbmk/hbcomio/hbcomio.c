/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbcomio\hbcomio.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_COMIO );
HB_FUNC( __HBEXTERN__HBCOMIO__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBCOMIO )
{ "HB_COMIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMIO )}, NULL },
{ "__HBEXTERN__HBCOMIO__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBCOMIO__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBCOMIO, "hbcomio\\hbcomio.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBCOMIO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBCOMIO )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBCOMIO__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

