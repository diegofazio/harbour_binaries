/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbnetio\utils\hbnetio\_console.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HBNETIOCON_CMDUI );
HB_FUNC_EXTERN( __HBSHELL_PLUGIN );
HB_FUNC_STATIC( HBNETIOCON_TOCONSOLE );
HB_FUNC_STATIC( HBNETIOCON_GETHIDDEN );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( SETCANCEL );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_STATIC( SHOWHELP );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( QQOUT );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( MAXCOL );
HB_FUNC_EXTERN( ATAIL );
HB_FUNC_EXTERN( HB_COLORINDEX );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( SETCURSOR );
HB_FUNC_EXTERN( READINSERT );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( PADR );
HB_FUNC_STATIC( MANAGECURSOR );
HB_FUNC_EXTERN( HB_GTINFO );
HB_FUNC_STATIC( COMPLETECMD );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( HB_EOL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( ADEL );
HB_FUNC_EXTERN( HB_ATOKENS );
HB_FUNC_EXTERN( HB_HPOS );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( HB_HVALUEAT );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( HB_STRFORMAT );
HB_FUNC_EXTERN( HB_KEYPUT );
HB_FUNC_EXTERN( HB_HEVAL );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( HB_GET );
HB_FUNC_EXTERN( PCOUNT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit__CONSOLE )
{ "HBNETIOCON_CMDUI", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( HBNETIOCON_CMDUI )}, NULL },
{ "__HBSHELL_PLUGIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( __HBSHELL_PLUGIN )}, NULL },
{ "HBNETIOCON_TOCONSOLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HBNETIOCON_TOCONSOLE )}, NULL },
{ "HBNETIOCON_GETHIDDEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HBNETIOCON_GETHIDDEN )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "SETCANCEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCANCEL )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "SHOWHELP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( SHOWHELP )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "QQOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QQOUT )}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "MAXCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXCOL )}, NULL },
{ "COLORDISP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
{ "HB_COLORINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COLORINDEX )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCURSOR )}, NULL },
{ "READINSERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( READINSERT )}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "MANAGECURSOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANAGECURSOR )}, NULL },
{ "HB_GTINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GTINFO )}, NULL },
{ "COMPLETECMD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( COMPLETECMD )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "HB_EOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_EOL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "ADEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADEL )}, NULL },
{ "HB_ATOKENS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ATOKENS )}, NULL },
{ "HB_HPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HPOS )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "HB_HVALUEAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HVALUEAT )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "HB_STRFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STRFORMAT )}, NULL },
{ "HB_KEYPUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_KEYPUT )}, NULL },
{ "__ENUMKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_HEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HEVAL )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "MAXROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXROW )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HIDEINPUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_POSTBLOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit__CONSOLE, "hbnetio\\utils\\hbnetio\\_console.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit__CONSOLE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit__CONSOLE )
   #include "hbiniseg.h"
#endif

HB_FUNC( HBNETIOCON_CMDUI )
{
	static const HB_BYTE pcode[] =
	{
		13,18,3,4,0,0,80,4,176,1,0,12,0,80,
		18,106,9,100,105,115,112,108,105,110,101,0,89,15,
		0,1,0,0,0,176,2,0,95,1,12,1,6,106,
		10,103,101,116,104,105,100,100,101,110,0,90,8,176,
		3,0,12,0,6,177,2,0,80,21,176,4,0,92,
		27,9,20,2,176,4,0,92,32,9,20,2,176,4,
		0,92,4,106,11,121,121,121,121,45,109,109,45,100,
		100,0,20,2,176,4,0,92,116,106,9,104,104,58,
		109,109,58,115,115,0,20,2,176,5,0,9,20,1,
		48,6,0,95,18,106,5,105,110,105,116,0,1,95,
		21,106,14,45,45,110,101,116,105,111,46,97,100,100,
		114,61,0,95,1,72,106,2,58,0,72,176,7,0,
		95,2,12,1,72,106,14,45,45,110,101,116,105,111,
		46,112,97,115,115,61,0,95,3,72,4,2,0,112,
		2,80,19,176,8,0,95,19,12,1,31,12,95,18,
		106,3,105,100,0,1,80,20,176,2,0,106,32,84,
		121,112,101,32,97,32,99,111,109,109,97,110,100,32,
		111,114,32,39,63,39,32,102,111,114,32,104,101,108,
		112,46,0,20,1,106,5,113,117,105,116,0,4,1,
		0,80,15,176,9,0,95,15,12,1,23,80,16,106,
		2,63,0,106,1,0,106,20,83,121,110,111,110,121,
		109,32,102,111,114,32,39,104,101,108,112,39,46,0,
		89,41,0,0,0,3,0,5,0,18,0,19,0,176,
		10,0,95,255,20,1,48,6,0,95,254,106,4,99,
		109,100,0,1,95,253,106,2,63,0,112,2,6,4,
		3,0,106,5,104,101,108,112,0,106,1,0,106,19,
		68,105,115,112,108,97,121,32,116,104,105,115,32,104,
		101,108,112,46,0,89,41,0,0,0,3,0,5,0,
		18,0,19,0,176,10,0,95,255,20,1,48,6,0,
		95,254,106,4,99,109,100,0,1,95,253,106,2,63,
		0,112,2,6,4,3,0,106,5,113,117,105,116,0,
		106,1,0,106,14,69,120,105,116,32,99,111,110,115,
		111,108,101,46,0,89,14,0,0,0,1,0,17,0,
		120,165,80,255,6,4,3,0,177,3,0,80,5,9,
		80,17,95,17,32,77,3,176,11,0,93,128,0,12,
		1,80,9,176,12,0,106,3,36,32,0,20,1,176,
		13,0,12,0,80,6,176,14,0,95,6,176,15,0,
		12,0,20,2,176,16,0,95,4,176,17,0,89,25,
		0,1,0,1,0,9,0,95,1,100,8,28,6,95,
		255,25,7,95,1,165,80,255,6,106,9,99,67,111,
		109,109,97,110,100,0,106,3,64,83,0,176,7,0,
		176,18,0,12,0,176,15,0,12,0,49,23,12,1,
		72,100,100,12,5,20,2,48,19,0,176,20,0,95,
		4,12,1,176,21,0,176,22,0,12,0,121,12,2,
		106,2,44,0,72,176,21,0,176,22,0,12,0,121,
		12,2,72,112,1,73,48,23,0,176,20,0,95,4,
		12,1,112,0,73,176,24,0,176,25,0,12,0,28,
		6,92,2,25,3,122,20,1,176,26,0,92,22,90,
		26,176,24,0,176,25,0,176,25,0,12,0,68,12,
		1,28,5,122,25,4,92,2,12,1,6,12,2,80,
		12,176,26,0,92,5,89,48,0,0,0,3,0,15,
		0,16,0,9,0,95,254,122,15,28,23,176,27,0,
		95,255,96,254,255,171,1,176,9,0,95,253,12,1,
		12,2,80,253,176,28,0,95,253,12,1,6,12,2,
		80,11,176,26,0,92,24,89,69,0,0,0,3,0,
		15,0,16,0,9,0,176,27,0,95,254,176,9,0,
		95,255,12,1,35,28,11,95,255,96,254,255,172,1,
		25,15,176,9,0,95,255,12,1,23,80,254,106,1,
		0,176,9,0,95,253,12,1,12,2,80,253,176,28,
		0,95,253,12,1,6,12,2,80,10,176,26,0,93,
		47,1,90,11,176,29,0,92,16,120,12,2,6,12,
		2,80,13,176,26,0,92,9,89,22,0,0,0,2,
		0,9,0,5,0,176,30,0,96,255,255,95,254,12,
		2,6,12,2,80,14,176,31,0,95,4,100,100,100,
		100,100,100,20,7,4,0,0,80,4,176,14,0,95,
		6,176,18,0,12,0,17,20,2,176,26,0,93,47,
		1,95,13,20,2,176,26,0,92,24,95,10,20,2,
		176,26,0,92,5,95,11,20,2,176,26,0,92,22,
		95,12,20,2,176,26,0,92,9,95,14,20,2,176,
		12,0,176,32,0,12,0,20,1,176,33,0,95,9,
		12,1,80,9,176,8,0,95,9,12,1,32,255,253,
		176,8,0,95,15,12,1,31,14,176,20,0,95,15,
		12,1,95,9,8,31,45,176,9,0,95,15,12,1,
		92,64,35,28,13,176,16,0,95,15,95,9,20,2,
		25,22,176,34,0,95,15,122,20,2,95,9,95,15,
		176,9,0,95,15,12,1,2,176,9,0,95,15,12,
		1,23,80,16,176,35,0,95,9,106,2,32,0,12,
		2,80,8,176,8,0,95,8,12,1,32,158,253,176,
		36,0,95,5,176,37,0,95,8,122,1,12,1,12,
		2,165,80,7,121,15,28,25,48,6,0,176,38,0,
		95,5,95,7,12,2,92,3,1,95,9,112,1,73,
		26,112,253,176,39,0,95,9,176,9,0,95,20,12,
		1,23,12,2,95,20,106,2,46,0,72,8,28,91,
		48,6,0,95,18,106,4,99,109,100,0,1,95,19,
		176,40,0,95,9,176,9,0,95,20,12,1,92,2,
		72,12,2,112,2,32,51,253,176,2,0,176,41,0,
		106,36,69,114,114,111,114,58,32,85,110,114,101,99,
		111,103,110,105,122,101,100,32,99,111,109,109,97,110,
		100,32,39,37,49,36,115,39,46,0,95,9,12,2,
		20,1,26,254,252,48,6,0,95,18,106,4,99,109,
		100,0,1,95,19,95,9,112,2,32,233,252,176,2,
		0,176,41,0,106,36,69,114,114,111,114,58,32,85,
		110,114,101,99,111,103,110,105,122,101,100,32,99,111,
		109,109,97,110,100,32,39,37,49,36,115,39,46,0,
		95,9,12,2,20,1,26,180,252,48,6,0,95,18,
		106,5,101,120,105,116,0,1,95,19,112,1,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( MANAGECURSOR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,42,0,122,20,1,176,8,0,95,1,
		12,1,31,9,176,42,0,92,6,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( COMPLETECMD )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,176,37,0,176,33,0,95,1,12,1,12,
		1,80,3,176,9,0,95,3,12,1,122,15,28,76,
		95,2,96,4,0,129,1,1,28,65,95,3,176,37,
		0,176,39,0,48,43,0,96,4,0,112,0,176,9,
		0,95,3,12,1,12,2,12,1,8,28,32,176,27,
		0,48,43,0,96,4,0,112,0,176,9,0,95,1,
		12,1,12,2,80,1,176,28,0,95,1,20,1,7,
		130,31,195,132,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( SHOWHELP )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,4,0,0,80,2,92,8,80,5,176,44,
		0,95,1,89,53,0,2,0,1,0,5,0,176,45,
		0,95,255,176,9,0,95,1,176,8,0,95,2,122,
		1,12,1,28,7,106,1,0,25,11,106,2,32,0,
		95,2,122,1,72,72,12,1,12,2,165,80,255,6,
		20,2,176,16,0,95,2,106,10,67,111,109,109,97,
		110,100,115,58,0,20,2,95,1,96,3,0,129,1,
		1,28,71,176,16,0,95,2,106,2,32,0,176,27,
		0,48,43,0,96,3,0,112,0,176,8,0,95,3,
		122,1,12,1,28,7,106,1,0,25,11,106,2,32,
		0,95,3,122,1,72,72,95,5,12,2,72,106,4,
		32,45,32,0,72,95,3,92,2,1,72,20,2,130,
		31,189,132,176,16,0,95,2,106,1,0,20,2,176,
		16,0,95,2,106,20,75,101,121,98,111,97,114,100,
		32,115,104,111,114,116,99,117,116,115,58,0,20,2,
		176,16,0,95,2,176,27,0,106,6,32,60,85,112,
		62,0,95,5,12,2,106,30,32,32,45,32,77,111,
		118,101,32,117,112,32,111,110,32,104,105,115,116,111,
		114,105,99,32,108,105,115,116,46,0,72,20,2,176,
		16,0,95,2,176,27,0,106,8,32,60,68,111,119,
		110,62,0,95,5,12,2,106,32,32,32,45,32,77,
		111,118,101,32,100,111,119,110,32,111,110,32,104,105,
		115,116,111,114,105,99,32,108,105,115,116,46,0,72,
		20,2,176,16,0,95,2,176,27,0,106,7,32,60,
		84,97,98,62,0,95,5,12,2,106,22,32,32,45,
		32,67,111,109,112,108,101,116,101,32,99,111,109,109,
		97,110,100,46,0,72,20,2,176,16,0,95,2,176,
		27,0,106,9,32,60,65,108,116,43,86,62,0,95,
		5,12,2,106,26,32,32,45,32,80,97,115,116,101,
		32,102,114,111,109,32,99,108,105,112,98,111,97,114,
		100,46,0,72,20,2,176,16,0,95,2,106,1,0,
		20,2,121,80,4,176,46,0,12,0,80,5,95,2,
		96,3,0,129,1,1,28,97,176,2,0,95,3,20,
		1,175,4,0,95,5,8,28,79,121,80,4,176,12,
		0,106,29,80,114,101,115,115,32,97,110,121,32,107,
		101,121,32,116,111,32,99,111,110,116,105,110,117,101,
		46,46,46,0,20,1,176,47,0,121,20,1,176,48,
		0,176,13,0,12,0,121,176,13,0,12,0,176,18,
		0,12,0,20,4,176,14,0,176,13,0,12,0,121,
		20,2,130,31,163,132,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HBNETIOCON_TOCONSOLE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,12,0,95,1,176,32,0,12,0,72,
		20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HBNETIOCON_GETHIDDEN )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,4,0,0,80,1,176,11,0,93,128,0,
		12,1,80,2,176,12,0,106,17,69,110,116,101,114,
		32,112,97,115,115,119,111,114,100,58,32,0,20,1,
		176,13,0,12,0,80,3,176,16,0,95,1,48,49,
		0,176,50,0,12,0,176,13,0,12,0,176,15,0,
		12,0,89,28,0,1,0,1,0,2,0,176,51,0,
		12,0,121,8,28,6,95,255,25,7,95,1,165,80,
		255,6,106,10,99,80,97,115,115,119,111,114,100,0,
		106,3,64,83,0,176,7,0,176,18,0,12,0,176,
		15,0,12,0,49,23,12,1,72,176,21,0,176,22,
		0,12,0,121,12,2,106,2,44,0,72,176,21,0,
		176,22,0,12,0,121,12,2,72,112,6,20,2,48,
		52,0,176,20,0,95,1,12,1,120,112,1,73,48,
		53,0,176,20,0,95,1,12,1,89,18,0,0,0,
		1,0,2,0,176,8,0,95,255,12,1,68,6,112,
		1,73,48,23,0,176,20,0,95,1,12,1,112,0,
		73,176,24,0,176,25,0,12,0,28,6,92,2,25,
		3,122,20,1,176,26,0,93,47,1,90,11,176,29,
		0,92,16,120,12,2,6,12,2,80,4,176,31,0,
		95,1,100,100,100,100,100,100,20,7,4,0,0,80,
		1,176,14,0,95,3,176,18,0,12,0,17,20,2,
		176,26,0,93,47,1,95,4,20,2,176,12,0,176,
		32,0,12,0,20,1,176,33,0,95,2,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}
