/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbgzio\hbgzio.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_GZIO );
HB_FUNC( __HBEXTERN__HBGZIO__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBGZIO )
{ "HB_GZIO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GZIO )}, NULL },
{ "__HBEXTERN__HBGZIO__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBGZIO__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBGZIO, "hbgzio\\hbgzio.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBGZIO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBGZIO )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBGZIO__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

