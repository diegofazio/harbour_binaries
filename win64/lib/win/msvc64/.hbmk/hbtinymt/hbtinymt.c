/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbtinymt\hbtinymt.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( TINYMT32_GENERATE_32DOUBLE );
HB_FUNC_EXTERN( TINYMT32_GENERATE_FLOAT );
HB_FUNC_EXTERN( TINYMT32_GENERATE_FLOAT01 );
HB_FUNC_EXTERN( TINYMT32_GENERATE_FLOAT12 );
HB_FUNC_EXTERN( TINYMT32_GENERATE_FLOATOC );
HB_FUNC_EXTERN( TINYMT32_GENERATE_FLOATOO );
HB_FUNC_EXTERN( TINYMT32_GENERATE_UINT32 );
HB_FUNC_EXTERN( TINYMT32_INIT );
HB_FUNC_EXTERN( TINYMT32_INIT_BY_ARRAY );
HB_FUNC_EXTERN( TINYMT64_GENERATE_DOUBLE );
HB_FUNC_EXTERN( TINYMT64_GENERATE_DOUBLE01 );
HB_FUNC_EXTERN( TINYMT64_GENERATE_DOUBLE12 );
HB_FUNC_EXTERN( TINYMT64_GENERATE_DOUBLEOC );
HB_FUNC_EXTERN( TINYMT64_GENERATE_DOUBLEOO );
HB_FUNC_EXTERN( TINYMT64_GENERATE_UINT64 );
HB_FUNC_EXTERN( TINYMT64_INIT );
HB_FUNC_EXTERN( TINYMT64_INIT_BY_ARRAY );
HB_FUNC( __HBEXTERN__HBTINYMT__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBTINYMT )
{ "TINYMT32_GENERATE_32DOUBLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_GENERATE_32DOUBLE )}, NULL },
{ "TINYMT32_GENERATE_FLOAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_GENERATE_FLOAT )}, NULL },
{ "TINYMT32_GENERATE_FLOAT01", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_GENERATE_FLOAT01 )}, NULL },
{ "TINYMT32_GENERATE_FLOAT12", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_GENERATE_FLOAT12 )}, NULL },
{ "TINYMT32_GENERATE_FLOATOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_GENERATE_FLOATOC )}, NULL },
{ "TINYMT32_GENERATE_FLOATOO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_GENERATE_FLOATOO )}, NULL },
{ "TINYMT32_GENERATE_UINT32", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_GENERATE_UINT32 )}, NULL },
{ "TINYMT32_INIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_INIT )}, NULL },
{ "TINYMT32_INIT_BY_ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT32_INIT_BY_ARRAY )}, NULL },
{ "TINYMT64_GENERATE_DOUBLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_GENERATE_DOUBLE )}, NULL },
{ "TINYMT64_GENERATE_DOUBLE01", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_GENERATE_DOUBLE01 )}, NULL },
{ "TINYMT64_GENERATE_DOUBLE12", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_GENERATE_DOUBLE12 )}, NULL },
{ "TINYMT64_GENERATE_DOUBLEOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_GENERATE_DOUBLEOC )}, NULL },
{ "TINYMT64_GENERATE_DOUBLEOO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_GENERATE_DOUBLEOO )}, NULL },
{ "TINYMT64_GENERATE_UINT64", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_GENERATE_UINT64 )}, NULL },
{ "TINYMT64_INIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_INIT )}, NULL },
{ "TINYMT64_INIT_BY_ARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TINYMT64_INIT_BY_ARRAY )}, NULL },
{ "__HBEXTERN__HBTINYMT__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBTINYMT__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBTINYMT, "hbtinymt\\hbtinymt.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBTINYMT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBTINYMT )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBTINYMT__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

