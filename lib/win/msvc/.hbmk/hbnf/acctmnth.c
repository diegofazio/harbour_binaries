/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbnf\acctmnth.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ACCTMONTH );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( FT_MONTH );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( FT_ACCTADJ );
HB_FUNC_EXTERN( FT_MADD );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( STRZERO );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ACCTMNTH )
{ "FT_ACCTMONTH", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ACCTMONTH )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "FT_MONTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_MONTH )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "FT_ACCTADJ", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_ACCTADJ )}, NULL },
{ "FT_MADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_MADD )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ACCTMNTH, "hbnf\\acctmnth.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ACCTMNTH
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ACCTMNTH )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ACCTMONTH )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,176,1,0,95,1,12,1,28,15,95,1,
		80,2,176,2,0,12,0,80,1,25,18,176,3,0,
		95,1,12,1,31,9,176,2,0,12,0,80,1,176,
		4,0,95,1,12,1,80,5,176,5,0,176,6,0,
		95,5,122,1,122,92,4,12,3,12,1,80,3,176,
		5,0,176,6,0,95,5,122,1,92,5,92,2,12,
		3,12,1,80,4,176,7,0,95,5,92,2,1,12,
		1,95,5,92,2,2,176,7,0,95,5,92,3,1,
		120,12,2,95,5,92,3,2,95,1,95,5,92,2,
		1,35,28,73,176,8,0,95,1,92,255,12,2,80,
		1,176,4,0,95,1,12,1,80,5,126,4,255,255,
		95,4,121,8,28,10,126,3,255,255,92,12,80,4,
		176,7,0,95,5,92,2,1,12,1,95,5,92,2,
		2,176,7,0,95,5,92,3,1,120,12,2,95,5,
		92,3,2,25,80,95,1,95,5,92,3,1,15,28,
		70,176,8,0,95,1,122,12,2,80,1,176,4,0,
		95,1,12,1,80,5,126,4,1,0,95,4,92,13,
		8,28,9,126,3,1,0,122,80,4,176,7,0,95,
		5,92,2,1,12,1,95,5,92,2,2,176,7,0,
		95,5,92,3,1,120,12,2,95,5,92,3,2,176,
		1,0,95,2,12,1,28,100,95,2,122,35,31,9,
		95,2,92,12,15,28,6,92,12,80,2,176,4,0,
		95,1,95,2,12,2,80,5,176,5,0,176,6,0,
		95,5,122,1,122,92,4,12,3,12,1,80,3,176,
		5,0,176,6,0,95,5,122,1,92,5,92,2,12,
		3,12,1,80,4,176,7,0,95,5,92,2,1,12,
		1,95,5,92,2,2,176,7,0,95,5,92,3,1,
		120,12,2,95,5,92,3,2,176,9,0,95,3,92,
		4,12,2,176,10,0,95,4,92,2,12,2,72,95,
		5,122,2,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}
