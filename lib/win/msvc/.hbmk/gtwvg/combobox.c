/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "gtwvg\combobox.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WVGCOMBOBOX );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( WVGWINDOW );
HB_FUNC_EXTERN( WVGDATAREF );
HB_FUNC_STATIC( WVGCOMBOBOX_NEW );
HB_FUNC_STATIC( WVGCOMBOBOX_CREATE );
HB_FUNC_STATIC( WVGCOMBOBOX_CONFIGURE );
HB_FUNC_STATIC( WVGCOMBOBOX_DESTROY );
HB_FUNC_STATIC( WVGCOMBOBOX_HANDLEEVENT );
HB_FUNC_EXTERN( WVG_SENDCBMESSAGE );
HB_FUNC_STATIC( WVGCOMBOBOX_LISTBOXFOCUS );
HB_FUNC_STATIC( WVGCOMBOBOX_LISTBOXSIZE );
HB_FUNC_STATIC( WVGCOMBOBOX_SLESIZE );
HB_FUNC_STATIC( WVGCOMBOBOX_ADDITEM );
HB_FUNC_STATIC( WVGCOMBOBOX_SETICON );
HB_FUNC_STATIC( WVGCOMBOBOX_ITEMMARKED );
HB_FUNC_STATIC( WVGCOMBOBOX_ITEMSELECTED );
HB_FUNC_STATIC( WVGCOMBOBOX_DRAWITEM );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( WVGSLE );
HB_FUNC_EXTERN( WIN_N2P );
HB_FUNC_EXTERN( WVGLISTBOX );
HB_FUNC_EXTERN( WVG_LBGETCURSEL );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( WVG_SETTEXTCOLOR );
HB_FUNC_EXTERN( WVG_SETBKMODE );
HB_FUNC_EXTERN( WVG_GETCURRENTBRUSH );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( HB_ISOBJECT );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_COMBOBOX )
{ "WVGCOMBOBOX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "WVGWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGWINDOW )}, NULL },
{ "WVGDATAREF", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGDATAREF )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGCOMBOBOX_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_NEW )}, NULL },
{ "WVGCOMBOBOX_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_CREATE )}, NULL },
{ "WVGCOMBOBOX_CONFIGURE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_CONFIGURE )}, NULL },
{ "WVGCOMBOBOX_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_DESTROY )}, NULL },
{ "WVGCOMBOBOX_HANDLEEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_HANDLEEVENT )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SENDCBMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SENDCBMESSAGE )}, NULL },
{ "PWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGCOMBOBOX_LISTBOXFOCUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_LISTBOXFOCUS )}, NULL },
{ "WVGCOMBOBOX_LISTBOXSIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_LISTBOXSIZE )}, NULL },
{ "WVGCOMBOBOX_SLESIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_SLESIZE )}, NULL },
{ "WVGCOMBOBOX_ADDITEM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_ADDITEM )}, NULL },
{ "SENDCBMESSAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGCOMBOBOX_SETICON", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_SETICON )}, NULL },
{ "OSLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OLISTBOX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGCOMBOBOX_ITEMMARKED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_ITEMMARKED )}, NULL },
{ "WVGCOMBOBOX_ITEMSELECTED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_ITEMSELECTED )}, NULL },
{ "WVGCOMBOBOX_DRAWITEM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGCOMBOBOX_DRAWITEM )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGWINDOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBJTYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATECONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VISIBLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOSANDSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "_AINFO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OSLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGSLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGSLE )}, NULL },
{ "_OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AINFO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_N2P", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_N2P )}, NULL },
{ "_OLISTBOX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGLISTBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGLISTBOX )}, NULL },
{ "INITIALIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISPARENTCRT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPOSITION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NCURSELECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_EDITBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_LBGETCURSEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_LBGETCURSEL )}, NULL },
{ "HWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ITEMMARKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POINTERFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCURSELECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ITEMSELECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "KILLINPUTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETINPUTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "CLR_FG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETTEXTCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETTEXTCOLOR )}, NULL },
{ "HBRUSHBG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETBKMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETBKMODE )}, NULL },
{ "WVG_GETCURRENTBRUSH", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETCURRENTBRUSH )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "HB_ISOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISOBJECT )}, NULL },
{ "CURRENTSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "_SL_ITEMMARKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_ITEMMARKED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_ITEMSELECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_ITEMSELECTED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_XBEPDRAWITEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_XBEPDRAWITEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_COMBOBOX, "gtwvg\\combobox.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_COMBOBOX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_COMBOBOX )
   #include "hbiniseg.h"
#endif

HB_FUNC( WVGCOMBOBOX )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,91,0,103,1,0,100,8,29,37,4,
		176,1,0,104,1,0,12,1,29,26,4,166,220,3,
		0,122,80,1,48,2,0,176,3,0,12,0,106,12,
		87,118,103,67,111,109,98,111,66,111,120,0,108,4,
		108,5,4,2,0,108,0,112,3,80,2,48,6,0,
		95,2,100,92,2,95,1,106,5,116,121,112,101,0,
		4,1,0,9,112,5,73,48,6,0,95,2,100,121,
		95,1,106,9,100,114,97,119,77,111,100,101,0,4,
		1,0,9,112,5,73,48,6,0,95,2,100,121,95,
		1,106,13,110,67,117,114,83,101,108,101,99,116,101,
		100,0,4,1,0,9,112,5,73,48,6,0,95,2,
		100,100,95,1,106,6,97,73,110,102,111,0,4,1,
		0,9,112,5,73,48,7,0,95,2,106,4,110,101,
		119,0,108,8,95,1,112,3,73,48,7,0,95,2,
		106,7,99,114,101,97,116,101,0,108,9,95,1,112,
		3,73,48,7,0,95,2,106,10,99,111,110,102,105,
		103,117,114,101,0,108,10,95,1,112,3,73,48,7,
		0,95,2,106,8,100,101,115,116,114,111,121,0,108,
		11,95,1,112,3,73,48,7,0,95,2,106,12,104,
		97,110,100,108,101,69,118,101,110,116,0,108,12,95,
		1,112,3,73,48,13,0,95,2,106,14,115,101,110,
		100,67,66,77,101,115,115,97,103,101,0,89,26,0,
		4,0,0,0,176,14,0,48,15,0,95,1,112,0,
		95,2,95,3,95,4,12,4,6,95,1,112,3,73,
		48,7,0,95,2,106,13,108,105,115,116,66,111,120,
		70,111,99,117,115,0,108,16,95,1,112,3,73,48,
		7,0,95,2,106,12,108,105,115,116,66,111,120,83,
		105,122,101,0,108,17,95,1,112,3,73,48,7,0,
		95,2,106,8,115,108,101,83,105,122,101,0,108,18,
		95,1,112,3,73,48,7,0,95,2,106,8,97,100,
		100,73,116,101,109,0,108,19,95,1,112,3,73,48,
		13,0,95,2,106,6,99,108,101,97,114,0,89,18,
		0,1,0,0,0,48,20,0,95,1,93,75,1,112,
		1,6,95,1,112,3,73,48,13,0,95,2,106,8,
		100,101,108,73,116,101,109,0,89,21,0,2,0,0,
		0,48,20,0,95,1,93,68,1,95,2,17,112,2,
		6,95,1,112,3,73,48,13,0,95,2,106,8,103,
		101,116,73,116,101,109,0,89,21,0,2,0,0,0,
		48,20,0,95,1,93,72,1,95,2,17,112,2,6,
		95,1,112,3,73,48,13,0,95,2,106,8,105,110,
		115,73,116,101,109,0,89,23,0,3,0,0,0,48,
		20,0,95,1,93,74,1,95,2,17,95,3,112,3,
		6,95,1,112,3,73,48,21,0,95,2,106,8,115,
		101,116,73,116,101,109,0,112,1,73,48,7,0,95,
		2,106,8,115,101,116,73,99,111,110,0,108,22,95,
		1,112,3,73,48,6,0,95,2,100,100,95,1,106,
		5,111,83,76,69,0,4,1,0,9,112,5,73,48,
		6,0,95,2,100,100,95,1,106,9,111,76,105,115,
		116,66,111,120,0,4,1,0,9,112,5,73,48,13,
		0,95,2,106,7,88,98,112,83,76,69,0,89,15,
		0,1,0,0,0,48,23,0,95,1,112,0,6,95,
		1,112,3,73,48,13,0,95,2,106,11,88,98,112,
		76,105,115,116,66,111,120,0,89,15,0,1,0,0,
		0,48,24,0,95,1,112,0,6,95,1,112,3,73,
		48,6,0,95,2,100,100,95,1,106,14,115,108,95,
		105,116,101,109,77,97,114,107,101,100,0,4,1,0,
		9,112,5,73,48,6,0,95,2,100,100,95,1,106,
		16,115,108,95,105,116,101,109,83,101,108,101,99,116,
		101,100,0,4,1,0,9,112,5,73,48,6,0,95,
		2,100,100,95,1,106,12,115,108,95,100,114,97,119,
		73,116,101,109,0,4,1,0,9,112,5,73,48,7,
		0,95,2,106,11,105,116,101,109,77,97,114,107,101,
		100,0,108,25,95,1,112,3,73,48,7,0,95,2,
		106,12,95,105,116,101,109,77,97,114,107,101,100,0,
		108,25,95,1,112,3,73,48,7,0,95,2,106,13,
		105,116,101,109,83,101,108,101,99,116,101,100,0,108,
		26,95,1,112,3,73,48,7,0,95,2,106,14,95,
		105,116,101,109,83,101,108,101,99,116,101,100,0,108,
		26,95,1,112,3,73,48,7,0,95,2,106,9,100,
		114,97,119,73,116,101,109,0,108,27,95,1,112,3,
		73,48,7,0,95,2,106,10,95,100,114,97,119,73,
		116,101,109,0,108,27,95,1,112,3,73,48,28,0,
		95,2,112,0,73,167,14,0,0,176,29,0,104,1,
		0,95,2,20,2,168,48,30,0,95,2,112,0,80,
		3,176,31,0,95,3,106,10,73,110,105,116,67,108,
		97,115,115,0,12,2,28,12,48,32,0,95,3,164,
		146,1,0,73,95,3,110,7,48,30,0,103,1,0,
		112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,2,0,48,33,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,112,6,73,48,
		34,0,102,97,64,4,161,64,112,1,73,48,35,0,
		102,106,9,67,79,77,66,79,66,79,88,0,112,1,
		73,48,36,0,102,92,10,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,28,0,48,33,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,112,6,73,48,
		37,0,48,38,0,102,112,0,102,112,1,73,48,39,
		0,102,112,0,92,3,8,28,12,48,34,0,102,147,
		92,3,135,25,29,48,39,0,102,112,0,122,8,28,
		11,48,34,0,102,147,122,135,25,10,48,34,0,102,
		147,92,2,135,48,40,0,102,112,0,73,48,41,0,
		102,112,0,28,9,48,42,0,102,112,0,73,48,43,
		0,102,112,0,73,176,44,0,48,45,0,102,48,20,
		0,102,93,100,1,112,1,112,1,12,1,32,157,0,
		48,46,0,102,48,2,0,176,47,0,12,0,112,0,
		112,1,73,48,48,0,48,23,0,102,112,0,102,112,
		1,73,48,49,0,48,23,0,102,112,0,48,50,0,
		102,112,0,92,5,1,112,1,73,48,51,0,48,23,
		0,102,112,0,176,52,0,48,50,0,102,112,0,92,
		5,1,12,1,112,1,73,48,53,0,102,48,2,0,
		176,54,0,12,0,112,0,112,1,73,48,48,0,48,
		24,0,102,112,0,102,112,1,73,48,49,0,48,24,
		0,102,112,0,48,50,0,102,112,0,92,6,1,112,
		1,73,48,51,0,48,24,0,102,112,0,176,52,0,
		48,50,0,102,112,0,92,6,1,12,1,112,1,73,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_CONFIGURE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,55,0,102,95,1,95,2,95,3,95,
		4,95,5,95,6,112,6,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		48,56,0,48,33,0,102,112,0,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_HANDLEEVENT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,95,1,92,5,8,28,31,48,57,0,102,
		112,0,28,9,48,58,0,102,112,0,73,48,59,0,
		102,92,5,121,121,112,3,73,26,104,1,95,1,92,
		11,8,29,207,0,95,2,122,1,122,8,28,82,48,
		60,0,102,48,61,0,102,176,62,0,48,63,0,102,
		112,0,12,1,23,112,1,112,1,73,48,57,0,102,
		112,0,28,14,48,64,0,48,38,0,102,112,0,112,
		0,73,48,65,0,102,112,0,73,48,57,0,102,112,
		0,29,27,1,48,66,0,102,112,0,29,18,1,48,
		64,0,102,112,0,73,26,8,1,95,2,122,1,92,
		2,8,28,70,48,61,0,102,48,67,0,102,112,0,
		112,1,73,48,57,0,102,112,0,28,14,48,64,0,
		48,38,0,102,112,0,112,0,73,48,68,0,102,112,
		0,73,48,57,0,102,112,0,29,206,0,48,66,0,
		102,112,0,29,197,0,48,64,0,102,112,0,73,26,
		187,0,95,2,122,1,92,4,8,28,12,48,69,0,
		102,112,0,73,26,168,0,95,2,122,1,92,3,8,
		29,158,0,48,70,0,102,112,0,73,26,148,0,95,
		1,92,18,8,28,64,95,2,122,1,92,13,8,29,
		131,0,48,57,0,102,112,0,28,14,48,64,0,48,
		38,0,102,112,0,112,0,73,48,68,0,102,112,0,
		73,48,57,0,102,112,0,28,95,48,66,0,102,112,
		0,28,87,48,64,0,102,112,0,73,25,78,95,1,
		92,12,8,28,71,176,71,0,48,72,0,102,112,0,
		12,1,28,17,176,73,0,95,2,122,1,48,72,0,
		102,112,0,20,2,176,71,0,48,74,0,102,112,0,
		12,1,28,20,176,75,0,95,2,122,1,122,20,2,
		48,74,0,102,112,0,110,7,176,76,0,95,2,122,
		1,20,1,7,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_ADDITEM )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,77,0,95,1,12,1,28,15,48,20,
		0,102,93,67,1,95,1,112,2,110,7,92,255,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_LISTBOXFOCUS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,20,0,102,93,87,1,112,1,80,2,
		176,78,0,95,1,12,1,28,14,48,20,0,102,93,
		79,1,95,1,112,2,73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_SLESIZE )
{
	static const HB_BYTE pcode[] =
	{
		176,79,0,48,23,0,102,112,0,12,1,28,15,48,
		80,0,48,23,0,102,112,0,112,0,110,7,121,121,
		4,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_LISTBOXSIZE )
{
	static const HB_BYTE pcode[] =
	{
		176,79,0,48,24,0,102,112,0,12,1,28,15,48,
		80,0,48,24,0,102,112,0,112,0,110,7,121,121,
		4,2,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_SETICON )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_ITEMMARKED )
{
	static const HB_BYTE pcode[] =
	{
		149,1,0,176,81,0,12,0,80,1,176,82,0,95,
		1,12,1,122,8,28,26,176,83,0,95,1,122,1,
		12,1,28,15,48,84,0,102,95,1,122,1,112,1,
		73,25,41,176,82,0,95,1,12,1,121,16,28,30,
		176,83,0,48,85,0,102,112,0,12,1,28,17,48,
		86,0,48,85,0,102,112,0,100,100,102,112,3,73,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_ITEMSELECTED )
{
	static const HB_BYTE pcode[] =
	{
		149,1,0,176,81,0,12,0,80,1,176,82,0,95,
		1,12,1,122,8,28,26,176,83,0,95,1,122,1,
		12,1,28,15,48,87,0,102,95,1,122,1,112,1,
		73,25,41,176,82,0,95,1,12,1,121,16,28,30,
		176,83,0,48,88,0,102,112,0,12,1,28,17,48,
		86,0,48,88,0,102,112,0,100,100,102,112,3,73,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGCOMBOBOX_DRAWITEM )
{
	static const HB_BYTE pcode[] =
	{
		149,1,0,176,81,0,12,0,80,1,176,82,0,95,
		1,12,1,122,8,28,26,176,83,0,95,1,122,1,
		12,1,28,15,48,89,0,102,95,1,122,1,112,1,
		73,25,49,176,82,0,95,1,12,1,92,2,16,28,
		37,176,83,0,48,90,0,102,112,0,12,1,28,24,
		48,86,0,48,90,0,102,112,0,95,1,122,1,95,
		1,92,2,1,102,112,3,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,91,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
