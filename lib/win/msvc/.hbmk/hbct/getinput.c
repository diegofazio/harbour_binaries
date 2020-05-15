/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "..\contrib\hbct\getinput.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( GETINPUT );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( ATAIL );
HB_FUNC_EXTERN( READMODAL );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GETINPUT )
{ "GETINPUT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GETINPUT )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_GETINPUT, "..\\contrib\\hbct\\getinput.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_GETINPUT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_GETINPUT )
   #include "hbiniseg.h"
#endif

HB_FUNC( GETINPUT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,5,176,1,0,12,0,80,6,176,2,0,12,
		0,80,7,4,0,0,80,8,176,3,0,96,2,0,
		95,6,20,2,176,3,0,96,3,0,95,7,20,2,
		176,3,0,96,4,0,9,20,2,176,4,0,95,2,
		95,3,20,2,95,5,100,69,28,24,176,5,0,95,
		5,20,1,176,1,0,12,0,80,2,176,2,0,12,
		0,23,80,3,176,4,0,95,2,95,3,20,2,176,
		6,0,95,8,176,7,0,89,25,0,1,0,1,0,
		1,0,95,1,100,8,28,6,95,255,25,7,95,1,
		165,80,255,6,106,5,120,86,97,114,0,100,100,100,
		12,5,20,2,48,8,0,176,9,0,95,8,12,1,
		112,0,73,176,10,0,95,8,100,100,100,100,100,100,
		20,7,4,0,0,80,8,95,4,28,18,176,4,0,
		95,2,95,3,20,2,176,5,0,95,1,20,1,176,
		4,0,95,6,95,7,20,2,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

