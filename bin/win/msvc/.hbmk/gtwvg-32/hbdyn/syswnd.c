/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "gtwvg\syswnd.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WVGSYSWINDOW );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( WVGPARTHANDLER );
HB_FUNC_STATIC( WVGSYSWINDOW_NEW );
HB_FUNC_STATIC( WVGSYSWINDOW_CREATE );
HB_FUNC_STATIC( WVGSYSWINDOW_CONFIGURE );
HB_FUNC_STATIC( WVGSYSWINDOW_DESTROY );
HB_FUNC_STATIC( WVGSYSWINDOW_DISABLE );
HB_FUNC_STATIC( WVGSYSWINDOW_ENABLE );
HB_FUNC_STATIC( WVGSYSWINDOW_HIDE );
HB_FUNC_STATIC( WVGSYSWINDOW_SHOW );
HB_FUNC_STATIC( WVGSYSWINDOW_SETPOS );
HB_FUNC_STATIC( WVGSYSWINDOW_CURRENTPOS );
HB_FUNC_STATIC( WVGSYSWINDOW_CURRENTSIZE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( WVG_SETWINDOWPOSITION );
HB_FUNC_EXTERN( WVG_GETWINDOWRECT );
HB_FUNC_EXTERN( WVG_GETCLIENTRECT );
HB_FUNC( WVGFONTDIALOG );
HB_FUNC_STATIC( WVGFONTDIALOG_NEW );
HB_FUNC_STATIC( WVGFONTDIALOG_CREATE );
HB_FUNC_STATIC( WVGFONTDIALOG_DESTROY );
HB_FUNC_STATIC( WVGFONTDIALOG_DISPLAY );
HB_FUNC_STATIC( WVGFONTDIALOG_WNDPROC );
HB_FUNC_STATIC( WVGFONTDIALOG_GETWVGFONT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( WVG_SETWINDOWTEXT );
HB_FUNC_EXTERN( WVG_ENABLEWINDOW );
HB_FUNC_EXTERN( WVG_GETDLGITEM );
HB_FUNC_EXTERN( WVG_MOVEWINDOW );
HB_FUNC_EXTERN( WVG_LOWORD );
HB_FUNC_EXTERN( WVG_HIWORD );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC_EXTERN( WVG_GETDESKTOPWINDOW );
HB_FUNC_EXTERN( WVG_CHOOSEFONT );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( WVG_CHOOSEFONT_GETLOGFONT );
HB_FUNC( WVGFONT );
HB_FUNC_EXTERN( WVG_HEIGHTTOPOINTSIZE );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( WVGFONT_NEW );
HB_FUNC_STATIC( WVGFONT_CREATE );
HB_FUNC_STATIC( WVGFONT_CONFIGURE );
HB_FUNC_STATIC( WVGFONT_LIST );
HB_FUNC_STATIC( WVGFONT_CREATEFONT );
HB_FUNC_STATIC( WVGFONT_DESTROY );
HB_FUNC_EXTERN( WVG_DELETEOBJECT );
HB_FUNC_EXTERN( WVG_POINTSIZETOHEIGHT );
HB_FUNC_EXTERN( WVG_FONTCREATE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SYSWND )
{ "WVGSYSWINDOW", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "WVGPARTHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGPARTHANDLER )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGSYSWINDOW_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_NEW )}, NULL },
{ "WVGSYSWINDOW_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_CREATE )}, NULL },
{ "WVGSYSWINDOW_CONFIGURE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_CONFIGURE )}, NULL },
{ "WVGSYSWINDOW_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_DESTROY )}, NULL },
{ "WVGSYSWINDOW_DISABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_DISABLE )}, NULL },
{ "WVGSYSWINDOW_ENABLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_ENABLE )}, NULL },
{ "WVGSYSWINDOW_HIDE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_HIDE )}, NULL },
{ "WVGSYSWINDOW_SHOW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_SHOW )}, NULL },
{ "WVGSYSWINDOW_SETPOS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_SETPOS )}, NULL },
{ "WVGSYSWINDOW_CURRENTPOS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_CURRENTPOS )}, NULL },
{ "WVGSYSWINDOW_CURRENTSIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGSYSWINDOW_CURRENTSIZE )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_HELPREQUEST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_HELPREQUEST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_MOVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_MOVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_QUIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_QUIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OOWNER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OOWNER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_APOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGPARTHANDLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETWINDOWPOSITION", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETWINDOWPOSITION )}, NULL },
{ "HWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_GETWINDOWRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETWINDOWRECT )}, NULL },
{ "WVG_GETCLIENTRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETCLIENTRECT )}, NULL },
{ "WVGFONTDIALOG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONTDIALOG )}, NULL },
{ "WVGFONTDIALOG_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONTDIALOG_NEW )}, NULL },
{ "WVGFONTDIALOG_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONTDIALOG_CREATE )}, NULL },
{ "WVGFONTDIALOG_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONTDIALOG_DESTROY )}, NULL },
{ "WVGFONTDIALOG_DISPLAY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONTDIALOG_DISPLAY )}, NULL },
{ "SL_ACTIVATEAPPLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_ACTIVATEAPPLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_ACTIVATECANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_ACTIVATECANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_ACTIVATEOK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_ACTIVATEOK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_ACTIVATERESET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_ACTIVATERESET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGFONTDIALOG_WNDPROC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONTDIALOG_WNDPROC )}, NULL },
{ "WVGFONTDIALOG_GETWVGFONT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONTDIALOG_GETWVGFONT )}, NULL },
{ "OSCREENPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPRINTERPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSCREENPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OPRINTERPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGSYSWINDOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VIEWPRINTERFONTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VIEWPRINTERFONTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VIEWSCREENFONTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VIEWSCREENFONTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "TITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETWINDOWTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETWINDOWTEXT )}, NULL },
{ "BUTTONCANCEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_ENABLEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_ENABLEWINDOW )}, NULL },
{ "WVG_GETDLGITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETDLGITEM )}, NULL },
{ "BUTTONAPPLY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BUTTONHELP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRIKEOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UNDERSCORE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_MOVEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_MOVEWINDOW )}, NULL },
{ "WVG_LOWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_LOWORD )}, NULL },
{ "WVG_HIWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_HIWORD )}, NULL },
{ "_OK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETWVGFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_GETDESKTOPWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETDESKTOPWINDOW )}, NULL },
{ "WVG_CHOOSEFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_CHOOSEFONT )}, NULL },
{ "WNDPROC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FAMILYNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOMINALPOINTSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "WVG_CHOOSEFONT_GETLOGFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_CHOOSEFONT_GETLOGFONT )}, NULL },
{ "WVGFONT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONT )}, NULL },
{ "_FAMILYNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NOMINALPOINTSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_HEIGHTTOPOINTSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_HEIGHTTOPOINTSIZE )}, NULL },
{ "HEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_WIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BOLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ITALIC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_UNDERSCORE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STRIKEOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CODEPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOMPOUNDNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "BOLD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ITALIC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "_COMPOUNDNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGFONT_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONT_NEW )}, NULL },
{ "WVGFONT_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONT_CREATE )}, NULL },
{ "WVGFONT_CONFIGURE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONT_CONFIGURE )}, NULL },
{ "WVGFONT_LIST", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONT_LIST )}, NULL },
{ "WVGFONT_CREATEFONT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONT_CREATEFONT )}, NULL },
{ "SETDESTRUCTOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGFONT_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGFONT_DESTROY )}, NULL },
{ "OPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OPS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATEFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_DELETEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_DELETEOBJECT )}, NULL },
{ "_HFONT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_POINTSIZETOHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_POINTSIZETOHEIGHT )}, NULL },
{ "HDC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AFONTINFO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AFONTINFO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODEPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_FONTCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_FONTCREATE )}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SYSWND, "gtwvg\\syswnd.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SYSWND
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SYSWND )
   #include "hbiniseg.h"
#endif

HB_FUNC( WVGSYSWINDOW )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,133,0,103,1,0,100,8,29,252,2,
		176,1,0,104,1,0,12,1,29,241,2,166,179,2,
		0,122,80,1,48,2,0,176,3,0,12,0,106,13,
		87,118,103,83,121,115,87,105,110,100,111,119,0,108,
		4,4,1,0,108,0,112,3,80,2,48,5,0,95,
		2,106,4,110,101,119,0,108,6,95,1,112,3,73,
		48,5,0,95,2,106,7,99,114,101,97,116,101,0,
		108,7,95,1,112,3,73,48,5,0,95,2,106,10,
		99,111,110,102,105,103,117,114,101,0,108,8,95,1,
		112,3,73,48,5,0,95,2,106,8,100,101,115,116,
		114,111,121,0,108,9,95,1,112,3,73,48,5,0,
		95,2,106,8,100,105,115,97,98,108,101,0,108,10,
		95,1,112,3,73,48,5,0,95,2,106,7,101,110,
		97,98,108,101,0,108,11,95,1,112,3,73,48,5,
		0,95,2,106,5,104,105,100,101,0,108,12,95,1,
		112,3,73,48,5,0,95,2,106,5,115,104,111,119,
		0,108,13,95,1,112,3,73,48,5,0,95,2,106,
		7,83,101,116,80,111,115,0,108,14,95,1,112,3,
		73,48,5,0,95,2,106,11,99,117,114,114,101,110,
		116,80,111,115,0,108,15,95,1,112,3,73,48,5,
		0,95,2,106,12,99,117,114,114,101,110,116,83,105,
		122,101,0,108,16,95,1,112,3,73,48,17,0,95,
		2,100,121,121,4,2,0,95,1,106,5,97,80,111,
		115,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,100,92,2,106,5,104,87,110,100,0,4,1,0,
		9,112,5,73,48,17,0,95,2,100,100,92,2,106,
		9,110,79,108,100,80,114,111,99,0,4,1,0,9,
		112,5,73,48,17,0,95,2,100,100,92,2,106,9,
		110,87,110,100,80,114,111,99,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,100,95,1,106,15,115,
		108,95,104,101,108,112,82,101,113,117,101,115,116,0,
		4,1,0,9,112,5,73,48,18,0,95,2,106,12,
		104,101,108,112,82,101,113,117,101,115,116,0,89,15,
		0,1,0,0,0,48,19,0,95,1,112,0,6,95,
		1,112,3,73,48,18,0,95,2,106,13,95,104,101,
		108,112,82,101,113,117,101,115,116,0,89,17,0,2,
		0,0,0,48,20,0,95,1,95,2,112,1,6,95,
		1,112,3,73,48,17,0,95,2,100,100,95,1,106,
		8,115,108,95,109,111,118,101,0,4,1,0,9,112,
		5,73,48,18,0,95,2,106,5,109,111,118,101,0,
		89,15,0,1,0,0,0,48,21,0,95,1,112,0,
		6,95,1,112,3,73,48,18,0,95,2,106,6,95,
		109,111,118,101,0,89,17,0,2,0,0,0,48,22,
		0,95,1,95,2,112,1,6,95,1,112,3,73,48,
		17,0,95,2,100,100,95,1,106,8,115,108,95,113,
		117,105,116,0,4,1,0,9,112,5,73,48,18,0,
		95,2,106,5,113,117,105,116,0,89,15,0,1,0,
		0,0,48,23,0,95,1,112,0,6,95,1,112,3,
		73,48,18,0,95,2,106,6,95,113,117,105,116,0,
		89,17,0,2,0,0,0,48,24,0,95,1,95,2,
		112,1,6,95,1,112,3,73,48,25,0,95,2,112,
		0,73,167,14,0,0,176,26,0,104,1,0,95,2,
		20,2,168,48,27,0,95,2,112,0,80,3,176,28,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,29,0,95,3,164,146,1,0,
		73,95,3,110,7,48,27,0,103,1,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,30,0,96,1,0,48,31,0,102,112,
		0,20,2,176,30,0,96,2,0,48,32,0,102,112,
		0,20,2,176,30,0,96,3,0,48,33,0,102,112,
		0,20,2,48,34,0,102,95,1,112,1,73,48,35,
		0,102,95,2,112,1,73,48,36,0,102,95,3,112,
		1,73,48,2,0,48,37,0,102,112,0,95,1,95,
		2,112,2,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,30,0,96,1,0,48,31,0,102,112,
		0,20,2,176,30,0,96,2,0,48,32,0,102,112,
		0,20,2,176,30,0,96,3,0,48,33,0,102,112,
		0,20,2,48,34,0,102,95,1,112,1,73,48,35,
		0,102,95,2,112,1,73,48,36,0,102,95,3,112,
		1,73,48,25,0,48,37,0,102,112,0,95,1,95,
		2,112,2,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_CONFIGURE )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_DISABLE )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_ENABLE )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_HIDE )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_SHOW )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_SETPOS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,38,0,48,39,0,102,112,0,95,1,
		122,1,95,1,92,2,1,9,20,4,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_CURRENTPOS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,40,0,48,39,0,102,112,0,12,1,
		80,1,95,1,122,1,95,1,92,2,1,4,2,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGSYSWINDOW_CURRENTSIZE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,41,0,48,39,0,102,112,0,12,1,
		80,1,95,1,92,3,1,95,1,122,1,49,95,1,
		92,4,1,95,1,92,2,1,49,4,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WVGFONTDIALOG )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,133,0,103,2,0,100,8,29,165,6,
		176,1,0,104,2,0,12,1,29,154,6,166,92,6,
		0,122,80,1,48,2,0,176,3,0,12,0,106,14,
		87,118,103,70,111,110,116,68,105,97,108,111,103,0,
		108,0,4,1,0,108,42,112,3,80,2,48,17,0,
		95,2,100,106,1,0,95,1,106,6,116,105,116,108,
		101,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,9,95,1,106,12,98,117,116,116,111,110,65,112,
		112,108,121,0,4,1,0,9,112,5,73,48,17,0,
		95,2,100,120,95,1,106,13,98,117,116,116,111,110,
		67,97,110,99,101,108,0,4,1,0,9,112,5,73,
		48,17,0,95,2,100,9,95,1,106,11,98,117,116,
		116,111,110,72,101,108,112,0,4,1,0,9,112,5,
		73,48,17,0,95,2,100,120,95,1,106,9,98,117,
		116,116,111,110,79,107,0,4,1,0,9,112,5,73,
		48,17,0,95,2,100,9,95,1,106,12,98,117,116,
		116,111,110,82,101,115,101,116,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,120,95,1,106,10,115,
		116,114,105,107,101,79,117,116,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,120,95,1,106,11,117,
		110,100,101,114,115,99,111,114,101,0,4,1,0,9,
		112,5,73,48,17,0,95,2,100,120,95,1,106,5,
		110,97,109,101,0,4,1,0,9,112,5,73,48,17,
		0,95,2,100,120,95,1,106,6,115,116,121,108,101,
		0,4,1,0,9,112,5,73,48,17,0,95,2,100,
		120,95,1,106,5,115,105,122,101,0,4,1,0,9,
		112,5,73,48,17,0,95,2,100,120,95,1,106,14,
		100,105,115,112,108,97,121,70,105,108,116,101,114,0,
		4,1,0,9,112,5,73,48,17,0,95,2,100,120,
		95,1,106,14,112,114,105,110,116,101,114,70,105,108,
		116,101,114,0,4,1,0,9,112,5,73,48,17,0,
		95,2,100,106,2,32,0,95,1,106,11,102,97,109,
		105,108,121,78,97,109,101,0,4,1,0,9,112,5,
		73,48,17,0,95,2,100,121,95,1,106,17,110,111,
		109,105,110,97,108,80,111,105,110,116,83,105,122,101,
		0,4,1,0,9,112,5,73,48,17,0,95,2,100,
		9,95,1,106,11,98,105,116,109,97,112,79,110,108,
		121,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,9,95,1,106,10,102,105,120,101,100,79,110,108,
		121,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,120,95,1,106,17,112,114,111,112,111,114,116,105,
		111,110,97,108,79,110,108,121,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,120,95,1,106,8,111,
		117,116,76,105,110,101,0,4,1,0,9,112,5,73,
		48,17,0,95,2,100,97,255,255,255,0,95,1,106,
		13,112,114,101,118,105,101,119,66,71,67,108,114,0,
		4,1,0,9,112,5,73,48,17,0,95,2,100,121,
		95,1,106,13,112,114,101,118,105,101,119,70,71,67,
		108,114,0,4,1,0,9,112,5,73,48,17,0,95,
		2,100,106,2,32,0,95,1,106,14,112,114,101,118,
		105,101,119,83,116,114,105,110,103,0,4,1,0,9,
		112,5,73,48,17,0,95,2,100,100,95,1,106,10,
		112,114,105,110,116,101,114,80,83,0,4,1,0,9,
		112,5,73,48,17,0,95,2,100,100,95,1,106,9,
		115,99,114,101,101,110,80,83,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,120,95,1,106,16,115,
		121,110,116,104,101,115,105,122,101,70,111,110,116,115,
		0,4,1,0,9,112,5,73,48,17,0,95,2,100,
		9,95,1,106,11,118,101,99,116,111,114,79,110,108,
		121,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,4,0,0,95,1,106,12,118,101,99,116,111,114,
		83,105,122,101,115,0,4,1,0,9,112,5,73,48,
		17,0,95,2,100,9,95,1,106,17,118,105,101,119,
		80,114,105,110,116,101,114,70,111,110,116,115,0,4,
		1,0,9,112,5,73,48,17,0,95,2,100,120,95,
		1,106,16,118,105,101,119,83,99,114,101,101,110,70,
		111,110,116,115,0,4,1,0,9,112,5,73,48,5,
		0,95,2,106,4,110,101,119,0,108,43,95,1,112,
		3,73,48,5,0,95,2,106,7,99,114,101,97,116,
		101,0,108,44,95,1,112,3,73,48,5,0,95,2,
		106,8,100,101,115,116,114,111,121,0,108,45,95,1,
		112,3,73,48,5,0,95,2,106,8,100,105,115,112,
		108,97,121,0,108,46,95,1,112,3,73,48,17,0,
		95,2,100,100,95,1,106,17,115,108,95,97,99,116,
		105,118,97,116,101,65,112,112,108,121,0,4,1,0,
		9,112,5,73,48,18,0,95,2,106,14,97,99,116,
		105,118,97,116,101,65,112,112,108,121,0,89,15,0,
		1,0,0,0,48,47,0,95,1,112,0,6,95,1,
		112,3,73,48,18,0,95,2,106,15,95,97,99,116,
		105,118,97,116,101,65,112,112,108,121,0,89,17,0,
		2,0,0,0,48,48,0,95,1,95,2,112,1,6,
		95,1,112,3,73,48,17,0,95,2,100,100,95,1,
		106,18,115,108,95,97,99,116,105,118,97,116,101,67,
		97,110,99,101,108,0,4,1,0,9,112,5,73,48,
		18,0,95,2,106,15,97,99,116,105,118,97,116,101,
		67,97,110,99,101,108,0,89,15,0,1,0,0,0,
		48,49,0,95,1,112,0,6,95,1,112,3,73,48,
		18,0,95,2,106,16,95,97,99,116,105,118,97,116,
		101,67,97,110,99,101,108,0,89,17,0,2,0,0,
		0,48,50,0,95,1,95,2,112,1,6,95,1,112,
		3,73,48,17,0,95,2,100,100,95,1,106,14,115,
		108,95,97,99,116,105,118,97,116,101,79,107,0,4,
		1,0,9,112,5,73,48,18,0,95,2,106,11,97,
		99,116,105,118,97,116,101,79,107,0,89,15,0,1,
		0,0,0,48,51,0,95,1,112,0,6,95,1,112,
		3,73,48,18,0,95,2,106,12,95,97,99,116,105,
		118,97,116,101,79,107,0,89,17,0,2,0,0,0,
		48,52,0,95,1,95,2,112,1,6,95,1,112,3,
		73,48,17,0,95,2,100,100,95,1,106,17,115,108,
		95,97,99,116,105,118,97,116,101,82,101,115,101,116,
		0,4,1,0,9,112,5,73,48,18,0,95,2,106,
		14,97,99,116,105,118,97,116,101,82,101,115,101,116,
		0,89,15,0,1,0,0,0,48,53,0,95,1,112,
		0,6,95,1,112,3,73,48,18,0,95,2,106,15,
		95,97,99,116,105,118,97,116,101,82,101,115,101,116,
		0,89,17,0,2,0,0,0,48,54,0,95,1,95,
		2,112,1,6,95,1,112,3,73,48,17,0,95,2,
		100,100,95,1,106,10,111,83,99,114,101,101,110,80,
		83,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,100,95,1,106,11,111,80,114,105,110,116,101,114,
		80,83,0,4,1,0,9,112,5,73,48,17,0,95,
		2,100,121,121,4,2,0,95,1,106,5,97,80,111,
		115,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,9,95,1,106,3,111,107,0,4,1,0,9,112,
		5,73,48,5,0,95,2,106,8,119,110,100,80,114,
		111,99,0,108,55,95,1,112,3,73,48,5,0,95,
		2,106,11,71,101,116,87,118,103,70,111,110,116,0,
		108,56,92,2,112,3,73,48,25,0,95,2,112,0,
		73,167,14,0,0,176,26,0,104,2,0,95,2,20,
		2,168,48,27,0,95,2,112,0,80,3,176,28,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,29,0,95,3,164,146,1,0,73,
		95,3,110,7,48,27,0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONTDIALOG_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,176,30,0,96,1,0,48,31,0,102,112,
		0,20,2,176,30,0,96,2,0,48,32,0,102,112,
		0,20,2,176,30,0,96,3,0,48,57,0,102,112,
		0,20,2,176,30,0,96,4,0,48,58,0,102,112,
		0,20,2,176,30,0,96,5,0,48,33,0,102,112,
		0,20,2,48,34,0,102,95,1,112,1,73,48,35,
		0,102,95,2,112,1,73,48,59,0,102,95,3,112,
		1,73,48,60,0,102,95,4,112,1,73,48,36,0,
		102,95,5,112,1,73,48,2,0,48,61,0,102,112,
		0,95,1,95,2,112,2,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONTDIALOG_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,176,30,0,96,1,0,48,31,0,102,112,
		0,20,2,176,30,0,96,2,0,48,32,0,102,112,
		0,20,2,176,30,0,96,3,0,48,57,0,102,112,
		0,20,2,176,30,0,96,4,0,48,58,0,102,112,
		0,20,2,176,30,0,96,5,0,48,33,0,102,112,
		0,20,2,48,34,0,102,95,1,112,1,73,48,35,
		0,102,95,2,112,1,73,48,59,0,102,95,3,112,
		1,73,48,60,0,102,95,4,112,1,73,48,36,0,
		102,95,5,112,1,73,48,62,0,102,112,0,28,20,
		48,58,0,102,112,0,100,8,28,10,48,63,0,102,
		9,112,1,73,48,64,0,102,112,0,31,18,48,62,
		0,102,112,0,31,10,48,65,0,102,120,112,1,73,
		48,25,0,48,61,0,102,112,0,95,1,95,2,112,
		2,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONTDIALOG_WNDPROC )
{
	static const HB_BYTE pcode[] =
	{
		13,3,4,95,2,93,16,1,8,29,100,1,48,66,
		0,102,95,1,112,1,73,176,67,0,48,68,0,102,
		112,0,12,1,31,19,176,69,0,48,39,0,102,112,
		0,48,68,0,102,112,0,20,2,48,70,0,102,112,
		0,31,21,176,71,0,176,72,0,48,39,0,102,112,
		0,92,2,12,2,9,20,2,48,73,0,102,112,0,
		31,22,176,71,0,176,72,0,48,39,0,102,112,0,
		93,2,4,12,2,9,20,2,48,74,0,102,112,0,
		31,22,176,71,0,176,72,0,48,39,0,102,112,0,
		93,14,4,12,2,9,20,2,48,75,0,102,112,0,
		31,22,176,71,0,176,72,0,48,39,0,102,112,0,
		93,16,4,12,2,9,20,2,48,76,0,102,112,0,
		31,22,176,71,0,176,72,0,48,39,0,102,112,0,
		93,17,4,12,2,9,20,2,48,77,0,102,112,0,
		31,22,176,71,0,176,72,0,48,39,0,102,112,0,
		93,112,4,12,2,9,20,2,48,78,0,102,112,0,
		31,22,176,71,0,176,72,0,48,39,0,102,112,0,
		93,113,4,12,2,9,20,2,48,79,0,102,112,0,
		31,22,176,71,0,176,72,0,48,39,0,102,112,0,
		93,114,4,12,2,9,20,2,48,33,0,102,112,0,
		122,1,121,15,31,15,48,33,0,102,112,0,92,2,
		1,121,15,28,65,176,40,0,48,39,0,102,112,0,
		12,1,80,5,176,80,0,48,39,0,102,112,0,48,
		33,0,102,112,0,122,1,48,33,0,102,112,0,92,
		2,1,95,5,92,3,1,95,5,122,1,49,95,5,
		92,4,1,95,5,92,2,1,49,9,20,6,122,110,
		7,95,2,93,17,1,8,29,157,0,176,81,0,95,
		3,12,1,80,6,176,82,0,95,3,12,1,80,7,
		95,6,122,8,28,45,48,83,0,102,120,112,1,73,
		176,84,0,48,51,0,102,112,0,12,1,28,111,48,
		85,0,48,51,0,102,112,0,48,86,0,102,112,0,
		100,102,112,3,73,25,89,95,6,92,2,8,28,32,
		176,84,0,48,49,0,102,112,0,12,1,28,69,48,
		85,0,48,49,0,102,112,0,100,100,102,112,3,73,
		25,52,95,6,93,2,4,8,28,37,176,84,0,48,
		47,0,102,112,0,12,1,28,31,48,85,0,48,47,
		0,102,112,0,48,86,0,102,112,0,100,102,112,3,
		73,25,9,95,6,93,14,4,8,73,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONTDIALOG_DISPLAY )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,102,80,2,95,1,121,8,28,18,48,39,
		0,48,31,0,95,2,112,0,112,0,80,3,25,9,
		176,87,0,12,0,80,3,48,83,0,95,2,9,112,
		1,73,176,88,0,95,3,89,25,0,4,0,1,0,
		2,0,48,89,0,95,255,95,1,95,2,95,3,95,
		4,112,4,6,48,90,0,95,2,112,0,48,91,0,
		95,2,112,0,48,64,0,95,2,112,0,48,62,0,
		95,2,112,0,12,6,80,4,48,92,0,95,2,112,
		0,31,5,100,110,7,48,86,0,95,2,95,4,112,
		1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONTDIALOG_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONTDIALOG_GETWVGFONT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,93,0,95,1,12,1,31,15,176,94,
		0,48,39,0,102,112,0,12,1,80,1,48,2,0,
		176,95,0,12,0,112,0,80,2,48,96,0,95,2,
		95,1,122,1,112,1,73,48,97,0,95,2,95,1,
		92,2,1,112,1,73,48,98,0,95,2,176,99,0,
		100,48,100,0,95,2,112,0,12,2,112,1,73,48,
		101,0,95,2,95,1,92,3,1,112,1,73,48,102,
		0,95,2,95,1,92,4,1,93,144,1,15,112,1,
		73,48,103,0,95,2,95,1,92,5,1,112,1,73,
		48,104,0,95,2,95,1,92,6,1,112,1,73,48,
		105,0,95,2,95,1,92,7,1,112,1,73,48,106,
		0,95,2,95,1,92,8,1,112,1,73,48,107,0,
		95,2,176,108,0,95,1,122,1,106,2,32,0,72,
		48,109,0,95,2,112,0,28,12,106,6,66,111,108,
		100,32,0,25,5,106,1,0,72,48,110,0,95,2,
		112,0,28,13,106,7,73,116,97,108,105,99,0,25,
		5,106,1,0,72,12,1,112,1,73,48,25,0,95,
		2,112,0,73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WVGFONT )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,133,0,103,3,0,100,8,29,182,3,
		176,1,0,104,3,0,12,1,29,171,3,166,109,3,
		0,122,80,1,48,2,0,176,3,0,12,0,106,8,
		87,118,103,70,111,110,116,0,108,111,4,1,0,108,
		95,112,3,80,2,48,17,0,95,2,100,100,95,1,
		106,6,104,70,111,110,116,0,4,1,0,9,112,5,
		73,48,17,0,95,2,100,100,95,1,106,4,111,80,
		83,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,100,95,1,106,4,104,100,99,0,4,1,0,9,
		112,5,73,48,17,0,95,2,100,106,1,0,95,1,
		106,11,102,97,109,105,108,121,78,97,109,101,0,4,
		1,0,9,112,5,73,48,17,0,95,2,100,121,95,
		1,106,7,104,101,105,103,104,116,0,4,1,0,9,
		112,5,73,48,17,0,95,2,100,121,95,1,106,17,
		110,111,109,105,110,97,108,80,111,105,110,116,83,105,
		122,101,0,4,1,0,9,112,5,73,48,17,0,95,
		2,100,121,95,1,106,6,119,105,100,116,104,0,4,
		1,0,9,112,5,73,48,17,0,95,2,100,9,95,
		1,106,11,119,105,100,116,104,67,108,97,115,115,0,
		4,1,0,9,112,5,73,48,17,0,95,2,100,9,
		95,1,106,5,98,111,108,100,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,121,95,1,106,12,119,
		101,105,103,104,116,67,108,97,115,115,0,4,1,0,
		9,112,5,73,48,17,0,95,2,100,9,95,1,106,
		7,105,116,97,108,105,99,0,4,1,0,9,112,5,
		73,48,17,0,95,2,100,9,95,1,106,10,115,116,
		114,105,107,101,111,117,116,0,4,1,0,9,112,5,
		73,48,17,0,95,2,100,9,95,1,106,11,117,110,
		100,101,114,115,99,111,114,101,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,122,95,1,106,9,99,
		111,100,101,80,97,103,101,0,4,1,0,9,112,5,
		73,48,17,0,95,2,100,9,95,1,106,6,102,105,
		120,101,100,0,4,1,0,9,112,5,73,48,17,0,
		95,2,100,9,95,1,106,12,97,110,116,105,65,108,
		105,97,115,101,100,0,4,1,0,9,112,5,73,48,
		17,0,95,2,100,106,1,0,95,1,106,13,99,111,
		109,112,111,117,110,100,78,97,109,101,0,4,1,0,
		9,112,5,73,48,18,0,95,2,106,16,115,101,116,
		67,111,109,112,111,117,110,100,78,97,109,101,0,89,
		17,0,2,0,0,0,48,112,0,95,1,95,2,112,
		1,6,95,1,112,3,73,48,17,0,95,2,100,120,
		95,1,106,8,103,101,110,101,114,105,99,0,4,1,
		0,9,112,5,73,48,17,0,95,2,100,121,95,1,
		92,16,72,106,9,98,97,115,101,76,105,110,101,0,
		4,1,0,9,112,5,73,48,17,0,95,2,100,9,
		95,1,106,5,100,98,99,115,0,4,1,0,9,112,
		5,73,48,17,0,95,2,100,9,95,1,106,8,107,
		101,114,110,105,110,103,0,4,1,0,9,112,5,73,
		48,17,0,95,2,100,9,95,1,106,5,109,98,99,
		115,0,4,1,0,9,112,5,73,48,17,0,95,2,
		100,9,95,1,106,7,118,101,99,116,111,114,0,4,
		1,0,9,112,5,73,48,17,0,95,2,100,9,95,
		1,106,9,111,117,116,108,105,110,101,100,0,4,1,
		0,9,112,5,73,48,17,0,95,2,100,4,0,0,
		95,1,106,10,97,70,111,110,116,73,110,102,111,0,
		4,1,0,9,112,5,73,48,5,0,95,2,106,4,
		110,101,119,0,108,113,95,1,112,3,73,48,5,0,
		95,2,106,7,99,114,101,97,116,101,0,108,114,95,
		1,112,3,73,48,5,0,95,2,106,10,99,111,110,
		102,105,103,117,114,101,0,108,115,95,1,112,3,73,
		48,5,0,95,2,106,5,108,105,115,116,0,108,116,
		95,1,112,3,73,48,5,0,95,2,106,11,99,114,
		101,97,116,101,70,111,110,116,0,108,117,95,1,112,
		3,73,48,118,0,95,2,108,119,112,1,73,48,25,
		0,95,2,112,0,73,167,14,0,0,176,26,0,104,
		3,0,95,2,20,2,168,48,27,0,95,2,112,0,
		80,3,176,28,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,29,0,95,3,
		164,146,1,0,73,95,3,110,7,48,27,0,103,3,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONT_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,30,0,96,1,0,48,120,0,102,112,
		0,20,2,48,121,0,102,95,1,112,1,73,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONT_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,30,0,96,1,0,48,90,0,102,112,
		0,20,2,48,96,0,102,95,1,112,1,73,48,122,
		0,102,112,0,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONT_CONFIGURE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,30,0,96,1,0,48,90,0,102,112,
		0,20,2,48,96,0,102,95,1,112,1,73,48,122,
		0,102,112,0,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONT_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		48,123,0,102,112,0,100,69,28,13,176,124,0,48,
		123,0,102,112,0,20,1,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONT_LIST )
{
	static const HB_BYTE pcode[] =
	{
		4,0,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGFONT_CREATEFONT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,48,123,0,102,112,0,100,69,28,21,176,
		124,0,48,123,0,102,112,0,20,1,48,125,0,102,
		100,112,1,73,48,120,0,102,112,0,100,69,28,31,
		48,97,0,102,176,126,0,48,127,0,48,120,0,102,
		112,0,112,0,48,91,0,102,112,0,12,2,112,1,
		73,48,128,0,102,92,15,3,1,0,112,1,73,48,
		90,0,102,112,0,48,129,0,102,112,0,122,2,48,
		100,0,102,112,0,48,129,0,102,112,0,92,2,2,
		48,130,0,102,112,0,48,129,0,102,112,0,92,3,
		2,48,109,0,102,112,0,28,7,93,188,2,25,3,
		121,48,129,0,102,112,0,92,4,2,48,110,0,102,
		112,0,48,129,0,102,112,0,92,5,2,48,76,0,
		102,112,0,48,129,0,102,112,0,92,6,2,48,75,
		0,102,112,0,48,129,0,102,112,0,92,7,2,48,
		131,0,102,112,0,48,129,0,102,112,0,92,8,2,
		121,48,129,0,102,112,0,92,9,2,121,48,129,0,
		102,112,0,92,10,2,121,48,129,0,102,112,0,92,
		11,2,121,48,129,0,102,112,0,92,12,2,121,48,
		129,0,102,112,0,92,13,2,100,48,129,0,102,112,
		0,92,14,2,176,132,0,48,129,0,102,112,0,12,
		1,80,1,176,67,0,95,1,122,1,12,1,28,5,
		100,110,7,48,125,0,102,95,1,92,15,1,112,1,
		73,48,128,0,102,95,1,112,1,73,48,123,0,102,
		112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,133,0,3,0,7
	};

	hb_vmExecute( pcode, symbols );
}

