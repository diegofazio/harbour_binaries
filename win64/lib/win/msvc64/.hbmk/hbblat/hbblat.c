/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbblat\hbblat.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HBBLAT );
HB_FUNC_EXTERN( HB_BLATSEND );
HB_FUNC( __HBEXTERN__HBBLAT__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBBLAT )
{ "HBBLAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBBLAT )}, NULL },
{ "HB_BLATSEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLATSEND )}, NULL },
{ "__HBEXTERN__HBBLAT__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBBLAT__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBBLAT, "hbblat\\hbblat.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBBLAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBBLAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBBLAT__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

