/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hblzf\hblzf.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_LZF_COMPRESS );
HB_FUNC_EXTERN( HB_LZF_COMPRESSBOUND );
HB_FUNC_EXTERN( HB_LZF_DECOMPRESS );
HB_FUNC_EXTERN( HB_LZF_OPTIMIZED_FOR_SPEED );
HB_FUNC_EXTERN( HB_LZF_VERSION );
HB_FUNC( __HBEXTERN__HBLZF__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBLZF )
{ "HB_LZF_COMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LZF_COMPRESS )}, NULL },
{ "HB_LZF_COMPRESSBOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LZF_COMPRESSBOUND )}, NULL },
{ "HB_LZF_DECOMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LZF_DECOMPRESS )}, NULL },
{ "HB_LZF_OPTIMIZED_FOR_SPEED", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LZF_OPTIMIZED_FOR_SPEED )}, NULL },
{ "HB_LZF_VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LZF_VERSION )}, NULL },
{ "__HBEXTERN__HBLZF__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBLZF__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBLZF, "hblzf\\hblzf.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBLZF
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBLZF )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBLZF__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

