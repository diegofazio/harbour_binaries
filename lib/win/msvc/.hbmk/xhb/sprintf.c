/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "xhb\sprintf.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SPRINTF );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC_EXTERN( ABS );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( HB_CSTR );
HB_FUNC_EXTERN( PADL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SPRINTF )
{ "SPRINTF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SPRINTF )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "ABS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABS )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "HB_CSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CSTR )}, NULL },
{ "PADL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SPRINTF, "xhb\\sprintf.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SPRINTF
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SPRINTF )
   #include "hbiniseg.h"
#endif

HB_FUNC( SPRINTF )
{
	static const HB_BYTE pcode[] =
	{
		149,12,0,121,80,6,9,80,8,9,80,9,176,1,
		0,12,0,80,1,106,1,0,80,2,95,1,122,1,
		80,12,92,2,80,3,176,2,0,95,12,12,1,32,
		193,3,176,3,0,95,12,12,1,23,80,4,100,80,
		5,106,2,37,0,95,12,24,28,21,176,4,0,106,
		2,37,0,95,12,12,2,80,4,106,2,37,0,80,
		5,106,2,92,0,95,12,24,28,37,176,4,0,106,
		2,92,0,95,12,12,2,95,4,35,28,21,176,4,
		0,106,2,92,0,95,12,12,2,80,4,106,2,92,
		0,80,5,96,2,0,176,5,0,95,12,95,4,17,
		12,2,135,95,5,100,8,32,87,3,95,5,106,2,
		92,0,8,28,92,25,55,96,2,0,106,5,32,32,
		32,32,0,135,26,47,3,96,2,0,106,2,13,0,
		135,26,36,3,96,2,0,106,2,10,0,135,26,25,
		3,96,2,0,176,6,0,95,12,95,4,122,12,3,
		135,26,8,3,176,6,0,95,12,175,4,0,122,12,
		3,133,4,0,106,2,116,0,25,185,106,2,110,0,
		25,193,106,2,114,0,25,198,100,25,206,95,5,106,
		2,37,0,8,29,219,2,9,80,7,26,66,2,96,
		2,0,106,2,37,0,135,26,202,2,176,5,0,95,
		12,95,4,17,12,2,176,6,0,95,12,95,4,23,
		12,2,72,80,12,176,4,0,106,2,37,0,95,12,
		12,2,17,80,4,120,80,9,26,159,2,176,5,0,
		95,12,95,4,17,12,2,176,6,0,95,12,95,4,
		23,12,2,72,80,12,176,4,0,106,2,37,0,95,
		12,12,2,17,80,4,120,80,8,26,116,2,176,7,
		0,176,6,0,95,12,95,4,12,2,12,1,80,6,
		176,5,0,95,12,95,4,17,12,2,80,5,176,6,
		0,95,12,95,4,122,12,3,106,12,49,50,51,52,
		53,54,55,56,57,48,46,0,24,28,7,174,4,0,
		25,226,95,5,176,6,0,95,12,95,4,12,2,72,
		80,12,176,4,0,106,2,37,0,95,12,12,2,17,
		80,4,26,25,2,120,80,7,174,4,0,95,1,95,
		3,174,3,0,1,80,11,176,8,0,96,11,0,121,
		20,2,95,6,121,69,29,129,0,95,6,176,9,0,
		95,6,12,1,49,101,0,0,0,0,0,0,0,0,
		10,1,15,28,73,176,10,0,95,6,12,1,80,10,
		176,11,0,95,10,122,12,2,106,2,48,0,8,28,
		21,176,5,0,95,10,176,3,0,95,10,12,1,17,
		12,2,80,10,25,224,176,7,0,176,6,0,95,10,
		176,4,0,106,2,46,0,95,10,12,2,23,12,2,
		12,1,80,10,25,5,121,80,10,176,10,0,95,7,
		28,11,176,12,0,95,11,12,1,25,4,95,11,95,
		6,95,10,12,3,80,5,25,24,176,13,0,95,7,
		28,11,176,12,0,95,11,12,1,25,4,95,11,12,
		1,80,5,95,8,28,79,106,2,45,0,95,5,24,
		28,50,176,5,0,95,5,122,12,2,106,2,45,0,
		8,31,35,176,14,0,95,5,106,2,45,0,106,2,
		32,0,12,3,80,5,106,2,45,0,176,6,0,95,
		5,92,2,12,2,72,80,5,176,14,0,95,5,106,
		2,32,0,106,2,48,0,12,3,80,5,9,80,8,
		95,9,28,53,176,5,0,95,5,122,12,2,106,2,
		45,0,8,31,38,95,6,121,8,28,13,106,2,43,
		0,95,5,72,80,5,25,18,106,2,43,0,176,6,
		0,95,5,92,2,12,2,72,80,5,9,80,9,121,
		80,6,96,2,0,95,5,135,26,209,0,95,6,121,
		8,28,19,176,3,0,176,15,0,95,1,95,3,1,
		12,1,12,1,80,6,96,2,0,176,16,0,176,15,
		0,95,1,95,3,174,3,0,1,12,1,95,6,12,
		2,135,121,80,6,9,80,8,9,80,9,26,150,0,
		176,6,0,95,12,175,4,0,122,12,3,133,19,0,
		106,2,37,0,26,175,253,106,2,43,0,26,179,253,
		106,2,48,0,26,215,253,106,2,49,0,26,251,253,
		106,2,50,0,26,244,253,106,2,51,0,26,237,253,
		106,2,52,0,26,230,253,106,2,53,0,26,223,253,
		106,2,54,0,26,216,253,106,2,55,0,26,209,253,
		106,2,56,0,26,202,253,106,2,57,0,26,195,253,
		106,2,117,0,26,23,254,106,2,100,0,26,22,254,
		106,2,108,0,26,15,254,106,2,102,0,26,8,254,
		106,2,105,0,26,1,254,106,2,99,0,26,60,255,
		106,2,115,0,26,53,255,176,6,0,95,12,95,4,
		23,12,2,80,12,26,59,252,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

