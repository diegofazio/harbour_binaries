/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbnf\round.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_ROUND );
HB_FUNC_EXTERN( ABS );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( MAX );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ROUND )
{ "FT_ROUND", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_ROUND )}, NULL },
{ "ABS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABS )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ROUND, "hbnf\\round.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ROUND
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ROUND )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_ROUND )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,176,1,0,95,1,12,1,80,6,176,2,
		0,96,2,0,92,2,20,2,176,2,0,96,3,0,
		106,2,68,0,20,2,176,2,0,96,4,0,106,2,
		78,0,20,2,176,2,0,96,5,0,122,95,2,92,
		2,84,18,20,2,176,3,0,95,3,122,12,2,106,
		2,87,0,8,32,153,0,176,4,0,95,2,12,1,
		165,80,2,121,69,29,138,0,176,3,0,95,3,122,
		12,2,106,2,68,0,8,28,9,92,10,95,2,84,
		80,2,176,1,0,176,4,0,95,6,95,2,65,12,
		1,95,6,95,2,65,49,12,1,95,5,15,29,187,
		0,96,6,0,176,3,0,95,4,122,12,2,106,2,
		68,0,8,28,11,122,95,2,18,92,2,18,25,28,
		176,3,0,95,4,122,12,2,106,2,85,0,8,28,
		12,92,255,95,2,18,92,2,18,25,3,121,136,176,
		4,0,95,2,95,6,65,101,0,0,0,0,0,0,
		224,63,10,1,72,95,5,72,12,1,95,2,18,80,
		6,25,100,176,5,0,95,2,122,12,2,80,2,176,
		3,0,95,4,122,12,2,106,2,85,0,8,28,22,
		176,4,0,95,6,95,2,18,12,1,95,2,65,95,
		2,72,80,6,25,55,176,3,0,95,4,122,12,2,
		106,2,68,0,8,28,19,176,4,0,95,6,95,2,
		18,12,1,95,2,65,80,6,25,23,176,4,0,95,
		6,95,2,92,2,18,72,95,2,18,12,1,95,2,
		65,80,6,95,1,121,35,28,7,95,6,66,80,6,
		95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

