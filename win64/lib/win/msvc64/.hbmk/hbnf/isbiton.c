/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbnf\isbiton.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ISBITON );
HB_FUNC_EXTERN( HB_BITTEST );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ISBITON )
{ "FT_ISBITON", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ISBITON )}, NULL },
{ "HB_BITTEST", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITTEST )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ISBITON, "hbnf\\isbiton.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ISBITON
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ISBITON )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ISBITON )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,1,0,95,1,95,2,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

