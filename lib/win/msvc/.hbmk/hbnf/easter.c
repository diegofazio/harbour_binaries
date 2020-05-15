/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbnf\easter.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_EASTER );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( HB_ISDATE );
HB_FUNC_EXTERN( YEAR );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( HB_STOD );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( PADL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_EASTER )
{ "FT_EASTER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_EASTER )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "HB_ISDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISDATE )}, NULL },
{ "YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( YEAR )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "HB_STOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STOD )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "PADL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_EASTER, "hbnf\\easter.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_EASTER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_EASTER )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_EASTER )
{
	static const HB_BYTE pcode[] =
	{
		13,9,1,121,80,9,121,80,10,176,1,0,95,1,
		12,1,28,11,176,2,0,95,1,12,1,80,1,176,
		3,0,95,1,12,1,28,11,176,4,0,95,1,12,
		1,80,1,176,5,0,95,1,12,1,29,220,0,95,
		1,93,46,6,15,29,214,0,95,1,92,19,50,23,
		80,2,176,6,0,95,1,92,100,18,12,1,23,80,
		3,176,6,0,92,3,95,3,65,92,4,18,92,12,
		49,12,1,80,4,176,6,0,92,8,95,3,65,92,
		5,72,92,25,18,92,5,49,12,1,80,5,176,6,
		0,92,5,95,1,65,92,4,18,95,4,49,92,10,
		49,12,1,80,6,176,6,0,92,11,95,2,65,92,
		20,72,95,5,72,95,4,49,92,30,50,12,1,80,
		7,95,7,121,35,28,6,126,7,30,0,95,7,92,
		25,8,28,9,95,2,92,11,15,31,9,95,7,92,
		24,8,28,5,174,7,0,92,44,95,7,49,80,8,
		95,8,92,21,35,28,6,126,8,30,0,176,6,0,
		95,8,92,7,72,95,6,95,8,72,92,7,50,49,
		12,1,80,8,95,8,92,31,15,28,15,92,4,80,
		9,95,8,92,31,49,80,10,25,15,92,3,80,9,
		95,8,80,10,25,5,121,80,1,176,7,0,176,8,
		0,95,1,92,4,12,2,176,9,0,95,9,92,2,
		106,2,48,0,12,3,72,176,9,0,176,6,0,95,
		10,12,1,92,2,106,2,48,0,12,3,72,20,1,
		7
	};

	hb_vmExecute( pcode, symbols );
}

