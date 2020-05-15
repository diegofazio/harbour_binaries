/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "gtwvg\tabpage.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WVGTABPAGE );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( WVGWINDOW );
HB_FUNC_STATIC( WVGTABPAGE_NEW );
HB_FUNC_STATIC( WVGTABPAGE_CREATE );
HB_FUNC_STATIC( WVGTABPAGE_CONFIGURE );
HB_FUNC_STATIC( WVGTABPAGE_DESTROY );
HB_FUNC_STATIC( WVGTABPAGE_HANDLEEVENT );
HB_FUNC_STATIC( WVGTABPAGE_MINIMIZE );
HB_FUNC_STATIC( WVGTABPAGE_MAXIMIZE );
HB_FUNC_STATIC( WVGTABPAGE_TABACTIVATE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( WAPI_TABCTRL_INSERTITEM );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC_EXTERN( WVG_GETNMHDRINFO );
HB_FUNC_EXTERN( WVG_GETSTOCKOBJECT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TABPAGE )
{ "WVGTABPAGE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "WVGWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGWINDOW )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGTABPAGE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_NEW )}, NULL },
{ "WVGTABPAGE_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_CREATE )}, NULL },
{ "WVGTABPAGE_CONFIGURE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_CONFIGURE )}, NULL },
{ "WVGTABPAGE_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_DESTROY )}, NULL },
{ "WVGTABPAGE_HANDLEEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_HANDLEEVENT )}, NULL },
{ "WVGTABPAGE_MINIMIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_MINIMIZE )}, NULL },
{ "WVGTABPAGE_MAXIMIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_MAXIMIZE )}, NULL },
{ "WVGTABPAGE_TABACTIVATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGTABPAGE_TABACTIVATE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGWINDOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBJTYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLIPSIBLINGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATECONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETWINDOWPROCCALLBACK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "_CAPTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WAPI_TABCTRL_INSERTITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( WAPI_TABCTRL_INSERTITEM )}, NULL },
{ "PWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CAPTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VISIBLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MINIMIZED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HIDE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "SL_TABACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_GETNMHDRINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETNMHDRINFO )}, NULL },
{ "WVG_GETSTOCKOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETSTOCKOBJECT )}, NULL },
{ "_SL_TABACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INITIALIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TABPAGE, "gtwvg\\tabpage.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TABPAGE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TABPAGE )
   #include "hbiniseg.h"
#endif

HB_FUNC( WVGTABPAGE )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,47,0,103,1,0,100,8,29,47,2,
		176,1,0,104,1,0,12,1,29,36,2,166,230,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,11,
		87,118,103,84,97,98,80,97,103,101,0,108,4,4,
		1,0,108,0,112,3,80,2,48,5,0,95,2,100,
		100,95,1,106,8,99,97,112,116,105,111,110,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,120,95,
		1,106,13,99,108,105,112,67,104,105,108,100,114,101,
		110,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,120,95,1,106,10,109,105,110,105,109,105,122,101,
		100,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,92,80,95,1,106,11,112,111,115,116,79,102,102,
		115,101,116,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,121,95,1,106,10,112,114,101,79,102,102,
		115,101,116,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,92,255,95,1,106,10,116,97,98,72,101,
		105,103,104,116,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,92,4,95,1,106,5,116,121,112,101,
		0,4,1,0,9,112,5,73,48,6,0,95,2,106,
		4,110,101,119,0,108,7,95,1,112,3,73,48,6,
		0,95,2,106,7,99,114,101,97,116,101,0,108,8,
		95,1,112,3,73,48,6,0,95,2,106,10,99,111,
		110,102,105,103,117,114,101,0,108,9,95,1,112,3,
		73,48,6,0,95,2,106,8,100,101,115,116,114,111,
		121,0,108,10,95,1,112,3,73,48,6,0,95,2,
		106,12,104,97,110,100,108,101,69,118,101,110,116,0,
		108,11,95,1,112,3,73,48,6,0,95,2,106,9,
		77,105,110,105,109,105,122,101,0,108,12,95,1,112,
		3,73,48,6,0,95,2,106,9,77,97,120,105,109,
		105,122,101,0,108,13,95,1,112,3,73,48,5,0,
		95,2,100,100,95,1,106,15,115,108,95,116,97,98,
		65,99,116,105,118,97,116,101,0,4,1,0,9,112,
		5,73,48,6,0,95,2,106,12,116,97,98,65,99,
		116,105,118,97,116,101,0,108,14,95,1,112,3,73,
		48,6,0,95,2,106,13,95,116,97,98,65,99,116,
		105,118,97,116,101,0,108,14,95,1,112,3,73,48,
		15,0,95,2,112,0,73,167,14,0,0,176,16,0,
		104,1,0,95,2,20,2,168,48,17,0,95,2,112,
		0,80,3,176,18,0,95,3,106,10,73,110,105,116,
		67,108,97,115,115,0,12,2,28,12,48,19,0,95,
		3,164,146,1,0,73,95,3,110,7,48,17,0,103,
		1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,2,0,48,20,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,112,6,73,48,
		21,0,102,97,0,0,0,64,112,1,73,48,22,0,
		102,106,16,83,121,115,84,97,98,67,111,110,116,114,
		111,108,51,50,0,112,1,73,48,23,0,102,92,22,
		112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,15,0,48,20,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,112,6,73,48,
		24,0,102,112,0,92,2,8,28,10,48,21,0,102,
		147,92,2,135,48,25,0,102,112,0,28,13,48,21,
		0,102,147,97,0,0,0,4,135,48,21,0,102,147,
		97,0,128,0,0,135,48,26,0,48,27,0,102,112,
		0,102,112,1,73,48,28,0,102,112,0,73,48,29,
		0,102,112,0,73,176,30,0,48,31,0,102,147,106,
		2,32,0,20,2,176,32,0,48,33,0,102,112,0,
		121,48,34,0,102,112,0,20,3,48,35,0,102,112,
		0,28,9,48,36,0,102,112,0,73,48,37,0,102,
		112,0,28,9,48,38,0,102,112,0,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_HANDLEEVENT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,95,1,92,2,8,28,18,176,39,0,48,
		40,0,102,112,0,12,1,28,79,121,110,7,95,1,
		92,11,8,31,69,95,1,92,5,8,28,16,48,41,
		0,102,92,5,121,121,112,3,73,121,110,7,95,1,
		92,10,8,28,26,176,42,0,95,2,92,2,1,12,
		1,80,3,95,3,122,1,93,217,253,8,31,19,25,
		17,95,1,92,12,8,28,10,176,43,0,92,5,20,
		1,7,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_TABACTIVATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,39,0,95,1,12,1,28,11,48,44,
		0,102,95,1,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_MINIMIZE )
{
	static const HB_BYTE pcode[] =
	{
		48,38,0,102,112,0,73,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_MAXIMIZE )
{
	static const HB_BYTE pcode[] =
	{
		48,36,0,102,112,0,73,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_CONFIGURE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,45,0,102,95,1,95,2,95,3,95,
		4,95,5,95,6,112,6,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGTABPAGE_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		48,46,0,48,20,0,102,112,0,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,47,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

