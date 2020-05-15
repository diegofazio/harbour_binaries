/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbnf\menu1.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_MENU1 );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( MAXCOL );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( AFILL );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_STATIC( _FTWIDEST );
HB_FUNC_STATIC( _FTLOCAT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_STATIC( _FTVALKEYS );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( HB_SCROLL );
HB_FUNC_EXTERN( HB_DISPOUTAT );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( SETCANCEL );
HB_FUNC_EXTERN( ALTD );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( HB_SHADOW );
HB_FUNC_EXTERN( HB_DISPBOX );
HB_FUNC_EXTERN( HB_UTF8TOSTRBOX );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_STATIC( __FTACUDF );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_STATIC( _FTBAILOUT );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( HB_KEYPUT );
HB_FUNC_EXTERN( HB_KEYCHAR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( SETCURSOR );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( LEFT );
HB_FUNC( FT_FILL );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MENU1 )
{ "FT_MENU1", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MENU1 )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MAXROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXROW )}, NULL },
{ "MAXCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXCOL )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "AFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AFILL )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "_FTWIDEST", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( _FTWIDEST )}, NULL },
{ "_FTLOCAT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( _FTLOCAT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "_FTVALKEYS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( _FTVALKEYS )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "HB_SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SCROLL )}, NULL },
{ "HB_DISPOUTAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPOUTAT )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "SETCANCEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCANCEL )}, NULL },
{ "ALTD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALTD )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "HB_SHADOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SHADOW )}, NULL },
{ "HB_DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPBOX )}, NULL },
{ "HB_UTF8TOSTRBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UTF8TOSTRBOX )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "__FTACUDF", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( __FTACUDF )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "_FTBAILOUT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( _FTBAILOUT )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "HB_KEYPUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_KEYPUT )}, NULL },
{ "HB_KEYCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_KEYCHAR )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCURSOR )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "FT_FILL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_FILL )}, NULL },
{ "(_INITSTATICS00006)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MENU1, "hbnf\\menu1.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MENU1
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MENU1 )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_MENU1 )
{
	static const HB_BYTE pcode[] =
	{
		13,15,5,116,38,0,120,80,9,176,1,0,95,1,
		12,1,3,1,0,80,10,176,1,0,95,1,12,1,
		3,1,0,80,11,93,30,1,93,48,1,93,46,1,
		93,32,1,93,18,1,93,33,1,93,34,1,93,35,
		1,93,23,1,93,36,1,93,37,1,93,38,1,93,
		50,1,93,49,1,93,24,1,93,25,1,93,16,1,
		93,19,1,93,31,1,93,20,1,93,22,1,93,47,
		1,93,17,1,93,45,1,93,21,1,93,44,1,4,
		26,0,80,12,176,1,0,95,1,12,1,3,1,0,
		80,13,176,1,0,95,1,12,1,3,1,0,80,14,
		176,1,0,95,1,12,1,3,1,0,80,15,95,3,
		122,1,80,16,95,3,92,2,1,80,17,95,3,92,
		3,1,80,18,95,3,92,4,1,80,19,95,3,92,
		5,1,80,20,176,2,0,12,0,82,5,0,176,3,
		0,12,0,82,6,0,176,4,0,96,4,0,121,20,
		2,176,5,0,95,15,122,20,2,95,2,82,1,0,
		121,95,10,122,2,176,1,0,95,1,122,1,12,1,
		23,80,6,176,6,0,95,1,89,36,0,2,0,3,
		0,10,0,6,0,1,0,95,254,95,255,95,2,2,
		96,254,255,176,1,0,95,253,95,2,1,12,1,23,
		139,6,92,2,176,1,0,95,1,12,1,17,20,4,
		176,5,0,95,13,122,20,2,176,6,0,103,1,0,
		89,24,0,2,0,1,0,13,0,176,7,0,96,2,
		0,103,1,0,96,255,255,12,3,6,20,2,176,6,
		0,103,1,0,89,31,0,2,0,3,0,10,0,13,
		0,14,0,176,8,0,95,2,95,255,95,254,96,253,
		255,103,6,0,12,5,6,20,2,176,6,0,103,1,
		0,89,32,0,2,0,0,0,176,9,0,103,2,0,
		106,1,0,20,2,176,10,0,95,2,103,1,0,104,
		2,0,12,3,6,20,2,176,11,0,95,18,20,1,
		176,12,0,95,4,121,95,4,20,3,176,6,0,95,
		1,89,31,0,2,0,3,0,10,0,1,0,4,0,
		176,13,0,95,253,95,255,95,2,1,95,254,95,2,
		1,12,3,6,20,2,176,6,0,95,11,89,46,0,
		2,0,3,0,11,0,12,0,1,0,95,254,176,14,
		0,176,15,0,176,16,0,95,253,95,2,1,12,1,
		12,1,12,1,92,64,49,1,165,95,255,95,2,2,
		6,20,2,176,17,0,9,12,1,80,8,176,18,0,
		121,20,1,176,19,0,121,121,176,2,0,12,0,176,
		3,0,12,0,12,4,80,7,122,82,3,0,122,82,
		4,0,95,9,29,83,2,176,20,0,121,121,176,2,
		0,12,0,176,3,0,12,0,95,7,20,5,176,11,
		0,95,19,20,1,176,13,0,95,4,95,10,103,3,
		0,1,95,1,103,3,0,1,20,3,95,5,100,8,
		31,6,95,5,28,52,176,21,0,95,4,23,95,14,
		103,3,0,1,176,1,0,103,1,0,103,3,0,1,
		122,1,12,1,95,4,72,92,2,72,95,13,103,3,
		0,1,92,3,72,95,14,103,3,0,1,72,20,4,
		176,22,0,95,4,23,95,14,103,3,0,1,176,1,
		0,103,1,0,103,3,0,1,122,1,12,1,95,4,
		72,92,2,72,95,13,103,3,0,1,92,3,72,95,
		14,103,3,0,1,72,176,23,0,106,26,226,149,148,
		226,149,144,226,149,151,226,149,145,226,149,157,226,149,
		144,226,149,154,226,149,145,32,0,12,1,95,16,20,
		6,176,11,0,95,17,106,2,44,0,72,95,19,72,
		106,4,44,44,44,0,72,95,20,72,20,1,176,24,
		0,95,4,92,2,72,95,14,103,3,0,1,92,2,
		72,176,1,0,103,1,0,103,3,0,1,122,1,12,
		1,95,4,72,92,2,72,95,13,103,3,0,1,23,
		95,14,103,3,0,1,72,103,1,0,103,3,0,1,
		122,1,103,1,0,103,3,0,1,92,3,1,89,15,
		0,1,0,0,0,176,25,0,95,1,12,1,6,95,
		15,103,3,0,1,12,8,82,4,0,176,26,0,12,
		0,92,4,8,31,12,176,26,0,12,0,92,9,8,
		28,29,103,3,0,176,1,0,103,1,0,12,1,8,
		28,5,122,25,6,103,3,0,23,82,3,0,26,152,
		254,176,26,0,12,0,92,19,8,31,13,176,26,0,
		12,0,93,15,1,8,28,29,103,3,0,122,8,28,
		12,176,1,0,103,1,0,12,1,25,6,103,3,0,
		17,82,3,0,26,104,254,176,26,0,12,0,92,27,
		8,28,16,176,27,0,95,16,95,17,12,2,80,9,
		26,80,254,176,26,0,12,0,122,8,28,9,122,82,
		3,0,26,64,254,176,26,0,12,0,92,6,8,28,
		16,176,1,0,103,1,0,12,1,82,3,0,26,40,
		254,176,26,0,12,0,92,13,8,28,79,103,4,0,
		95,15,103,3,0,2,103,1,0,103,3,0,1,92,
		2,1,103,4,0,1,100,69,29,2,254,176,17,0,
		95,8,20,1,176,18,0,122,20,1,48,28,0,103,
		1,0,103,3,0,1,92,2,1,103,4,0,1,112,
		0,80,9,176,18,0,121,20,1,176,17,0,9,20,
		1,26,209,253,176,29,0,95,11,176,26,0,12,0,
		12,2,121,15,29,192,253,176,29,0,95,11,176,26,
		0,12,0,12,2,82,3,0,26,174,253,176,17,0,
		95,8,20,1,176,18,0,122,20,1,176,20,0,121,
		121,176,2,0,12,0,176,3,0,12,0,95,7,20,
		5,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( __FTACUDF )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,38,0,92,2,80,2,95,1,122,8,
		28,11,176,30,0,92,23,20,1,25,106,95,1,92,
		2,8,28,11,176,30,0,92,29,20,1,25,90,95,
		1,92,3,8,28,83,176,15,0,176,31,0,176,26,
		0,12,0,12,1,12,1,103,2,0,103,3,0,1,
		24,28,55,103,1,0,103,3,0,1,92,3,1,176,
		32,0,176,15,0,176,31,0,176,26,0,12,0,12,
		1,12,1,103,2,0,103,3,0,1,12,2,1,28,
		18,176,30,0,92,13,20,1,92,3,80,2,25,5,
		122,80,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( _FTWIDEST )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,6,0,95,2,95,1,1,122,1,89,
		45,0,2,0,3,0,3,0,2,0,1,0,176,33,
		0,95,255,95,253,1,176,1,0,95,254,95,253,1,
		122,1,95,2,1,12,1,12,2,165,95,255,95,253,
		2,6,20,2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( _FTLOCAT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,95,2,95,1,1,95,3,95,1,1,72,
		92,4,72,95,5,23,15,28,15,95,5,92,3,49,
		95,3,95,1,1,49,25,7,95,2,95,1,1,95,
		4,95,1,2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( _FTBAILOUT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,116,38,0,176,34,0,121,12,1,80,5,
		176,19,0,103,5,0,92,2,18,17,92,24,103,5,
		0,92,2,18,92,2,72,92,55,12,4,80,3,176,
		21,0,103,5,0,92,2,18,17,92,24,103,5,0,
		92,2,18,92,2,72,92,55,20,4,176,22,0,103,
		5,0,92,2,18,17,92,24,103,5,0,92,2,18,
		92,2,72,92,55,176,23,0,106,26,226,149,148,226,
		149,144,226,149,151,226,149,145,226,149,157,226,149,144,
		226,149,154,226,149,145,32,0,12,1,95,1,20,6,
		176,13,0,103,5,0,92,2,18,92,26,106,29,80,
		114,101,115,115,32,69,83,67,97,112,101,32,84,111,
		32,67,111,110,102,105,114,109,32,69,120,105,116,0,
		95,2,20,4,176,13,0,103,5,0,92,2,18,23,
		92,27,106,27,79,114,32,65,110,121,32,79,116,104,
		101,114,32,75,101,121,32,84,111,32,82,101,115,117,
		109,101,0,95,2,20,4,176,35,0,121,12,1,80,
		4,176,20,0,103,5,0,92,2,18,17,92,24,103,
		5,0,92,2,18,92,2,72,92,55,95,3,20,5,
		176,34,0,95,5,20,1,95,4,92,27,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( _FTVALKEYS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,6,0,95,2,95,1,1,122,1,89,
		26,0,1,0,2,0,3,0,1,0,95,255,95,254,
		148,176,36,0,95,1,122,12,2,139,6,20,2,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_FILL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,9,0,95,1,122,1,95,2,20,2,
		176,9,0,95,1,92,2,1,95,3,20,2,176,9,
		0,95,1,92,3,1,95,4,20,2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,38,0,6,0,116,38,0,4,0,0,82,1,0,
		4,0,0,82,2,0,179,6,0,1,0,2,0,3,
		0,4,0,5,0,6,0,7
	};

	hb_vmExecute( pcode, symbols );
}

