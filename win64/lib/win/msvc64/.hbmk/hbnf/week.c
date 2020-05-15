/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbnf\week.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_WEEK );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( FT_YEAR );
HB_FUNC_EXTERN( FT_DAYTOBOW );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( MIN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_WEEK )
{ "FT_WEEK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_WEEK )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "FT_YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_YEAR )}, NULL },
{ "FT_DAYTOBOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_DAYTOBOW )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_WEEK, "hbnf\\week.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_WEEK
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_WEEK )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_WEEK )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,176,1,0,95,1,12,1,28,15,95,1,
		80,2,176,2,0,12,0,80,1,25,18,176,3,0,
		95,1,12,1,31,9,176,2,0,12,0,80,1,176,
		4,0,95,1,12,1,80,4,95,4,92,2,1,80,
		5,95,4,92,2,148,176,5,0,95,4,92,2,1,
		12,1,136,176,1,0,95,2,12,1,28,55,176,6,
		0,95,4,92,3,1,95,4,92,2,1,49,92,7,
		18,12,1,23,80,3,95,2,122,35,31,9,95,2,
		95,3,15,28,6,95,3,80,2,95,4,92,2,1,
		95,2,17,92,7,65,72,80,1,96,1,0,92,6,
		176,5,0,95,1,12,1,49,135,95,4,122,148,176,
		7,0,176,6,0,95,1,95,4,92,2,1,49,92,
		7,18,12,1,23,92,2,12,2,135,176,8,0,95,
		1,92,6,49,95,5,12,2,95,4,92,2,2,176,
		9,0,95,1,95,4,92,3,1,12,2,95,4,92,
		3,2,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

