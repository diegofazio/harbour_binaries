/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "xhb\xhwinprn.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WIN32PRN );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( WIN_PRN );
HB_FUNC_STATIC( WIN32PRN_CREATE );
HB_FUNC_STATIC( WIN32PRN_STARTPAGE );
HB_FUNC_STATIC( WIN32PRN_TEXTOUT );
HB_FUNC_STATIC( WIN32PRN_TEXTOUTAT );
HB_FUNC_STATIC( WIN32PRN_TEXTATFONT );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( HB_BITOR );
HB_FUNC( WIN32BMP );
HB_FUNC_EXTERN( WIN_BMP );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XHWINPRN )
{ "WIN32PRN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32PRN )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "WIN_PRN", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_PRN )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN32PRN_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32PRN_CREATE )}, NULL },
{ "WIN32PRN_STARTPAGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32PRN_STARTPAGE )}, NULL },
{ "WIN32PRN_TEXTOUT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32PRN_TEXTOUT )}, NULL },
{ "WIN32PRN_TEXTOUTAT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32PRN_TEXTOUTAT )}, NULL },
{ "WIN32PRN_TEXTATFONT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32PRN_TEXTATFONT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAPERLENGTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAPERWIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FORMTYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_PRN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STARTPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "SETTEXTHORI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETTEXTVERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEXTOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_BITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITOR )}, NULL },
{ "TEXTOUTAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEXTATFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN32BMP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN32BMP )}, NULL },
{ "WIN_BMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_BMP )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XHWINPRN, "xhb\\xhwinprn.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XHWINPRN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XHWINPRN )
   #include "hbiniseg.h"
#endif

HB_FUNC( WIN32PRN )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,31,0,103,1,0,100,8,29,39,1,
		176,1,0,104,1,0,12,1,29,28,1,166,222,0,
		0,122,80,1,48,2,0,176,3,0,12,0,106,9,
		87,105,110,51,50,80,114,110,0,108,4,4,1,0,
		108,0,112,3,80,2,48,5,0,95,2,106,7,67,
		114,101,97,116,101,0,108,6,95,1,112,3,73,48,
		5,0,95,2,106,10,83,116,97,114,116,80,97,103,
		101,0,108,7,95,1,112,3,73,48,5,0,95,2,
		106,8,84,101,120,116,79,117,116,0,108,8,95,1,
		112,3,73,48,5,0,95,2,106,10,84,101,120,116,
		79,117,116,65,116,0,108,9,95,1,112,3,73,48,
		5,0,95,2,106,11,84,101,120,116,65,116,70,111,
		110,116,0,108,10,95,1,112,3,73,48,11,0,95,
		2,100,121,95,1,106,12,83,101,116,84,101,120,116,
		72,111,114,105,0,4,1,0,9,112,5,73,48,11,
		0,95,2,100,92,8,95,1,106,12,83,101,116,84,
		101,120,116,86,101,114,116,0,4,1,0,9,112,5,
		73,48,12,0,95,2,112,0,73,167,14,0,0,176,
		13,0,104,1,0,95,2,20,2,168,48,14,0,95,
		2,112,0,80,3,176,15,0,95,3,106,10,73,110,
		105,116,67,108,97,115,115,0,12,2,28,12,48,16,
		0,95,3,164,146,1,0,73,95,3,110,7,48,14,
		0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN32PRN_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		48,17,0,102,112,0,121,15,28,22,48,18,0,102,
		112,0,121,15,28,12,48,19,0,102,93,0,1,112,
		1,73,48,12,0,48,20,0,102,112,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN32PRN_STARTPAGE )
{
	static const HB_BYTE pcode[] =
	{
		48,17,0,102,112,0,121,15,28,22,48,18,0,102,
		112,0,121,15,28,12,48,19,0,102,93,0,1,112,
		1,73,48,21,0,48,20,0,102,112,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN32PRN_TEXTOUT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,176,22,0,96,4,0,48,23,0,102,112,
		0,20,2,176,22,0,96,5,0,48,24,0,102,112,
		0,20,2,48,25,0,48,20,0,102,112,0,95,1,
		95,2,95,3,176,26,0,95,4,95,5,12,2,112,
		4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN32PRN_TEXTOUTAT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,7,176,22,0,96,6,0,48,23,0,102,112,
		0,20,2,176,22,0,96,7,0,48,24,0,102,112,
		0,20,2,48,27,0,48,20,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,176,26,0,95,6,95,
		7,12,2,112,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN32PRN_TEXTATFONT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,14,176,22,0,96,13,0,48,23,0,102,112,
		0,20,2,176,22,0,96,14,0,48,24,0,102,112,
		0,20,2,48,28,0,48,20,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,95,7,95,8,
		95,9,95,10,95,11,95,12,176,26,0,95,13,95,
		14,12,2,112,13,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WIN32BMP )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,31,0,103,2,0,100,8,28,116,176,
		1,0,104,2,0,12,1,28,106,166,45,0,0,122,
		80,1,48,2,0,176,3,0,12,0,106,9,87,105,
		110,51,50,66,109,112,0,108,30,4,1,0,108,29,
		112,3,80,2,48,12,0,95,2,112,0,73,167,14,
		0,0,176,13,0,104,2,0,95,2,20,2,168,48,
		14,0,95,2,112,0,80,3,176,15,0,95,3,106,
		10,73,110,105,116,67,108,97,115,115,0,12,2,28,
		12,48,16,0,95,3,164,146,1,0,73,95,3,110,
		7,48,14,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,31,0,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}

