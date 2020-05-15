/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "gtwvg\parthdlr.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WVGPARTHANDLER );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( WVGPARTHANDLER_NEW );
HB_FUNC_STATIC( WVGPARTHANDLER_CREATE );
HB_FUNC_STATIC( WVGPARTHANDLER_CONFIGURE );
HB_FUNC_STATIC( WVGPARTHANDLER_DESTROY );
HB_FUNC_STATIC( WVGPARTHANDLER_HANDLEEVENT );
HB_FUNC_STATIC( WVGPARTHANDLER_STATUS );
HB_FUNC_STATIC( WVGPARTHANDLER_REMOVECHILD );
HB_FUNC_STATIC( WVGPARTHANDLER_ADDCHILD );
HB_FUNC_STATIC( WVGPARTHANDLER_CHILDFROMNAME );
HB_FUNC_STATIC( WVGPARTHANDLER_CHILDLIST );
HB_FUNC_STATIC( WVGPARTHANDLER_DELCHILD );
HB_FUNC_STATIC( WVGPARTHANDLER_SETNAME );
HB_FUNC_STATIC( WVGPARTHANDLER_SETOWNER );
HB_FUNC_STATIC( WVGPARTHANDLER_SETPARENT );
HB_FUNC_STATIC( WVGPARTHANDLER_NOTIFIER );
HB_FUNC_STATIC( WVGPARTHANDLER_CONTROLWNDPROC );
HB_FUNC_STATIC( WVGPARTHANDLER_NOTIFIERBLOCK );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( HB_ADEL );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_ISOBJECT );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( WVG_INVALIDATERECT );
HB_FUNC_EXTERN( WVG_LOWORD );
HB_FUNC_EXTERN( WVG_HIWORD );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( WVG_CALLWINDOWPROC );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PARTHDLR )
{ "WVGPARTHANDLER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGPARTHANDLER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_NEW )}, NULL },
{ "WVGPARTHANDLER_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_CREATE )}, NULL },
{ "WVGPARTHANDLER_CONFIGURE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_CONFIGURE )}, NULL },
{ "WVGPARTHANDLER_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_DESTROY )}, NULL },
{ "WVGPARTHANDLER_HANDLEEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_HANDLEEVENT )}, NULL },
{ "WVGPARTHANDLER_STATUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_STATUS )}, NULL },
{ "WVGPARTHANDLER_REMOVECHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_REMOVECHILD )}, NULL },
{ "WVGPARTHANDLER_ADDCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_ADDCHILD )}, NULL },
{ "WVGPARTHANDLER_CHILDFROMNAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_CHILDFROMNAME )}, NULL },
{ "WVGPARTHANDLER_CHILDLIST", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_CHILDLIST )}, NULL },
{ "WVGPARTHANDLER_DELCHILD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_DELCHILD )}, NULL },
{ "WVGPARTHANDLER_SETNAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_SETNAME )}, NULL },
{ "WVGPARTHANDLER_SETOWNER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_SETOWNER )}, NULL },
{ "WVGPARTHANDLER_SETPARENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_SETPARENT )}, NULL },
{ "WVGPARTHANDLER_NOTIFIER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_NOTIFIER )}, NULL },
{ "WVGPARTHANDLER_CONTROLWNDPROC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_CONTROLWNDPROC )}, NULL },
{ "WVGPARTHANDLER_NOTIFIERBLOCK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGPARTHANDLER_NOTIFIERBLOCK )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OOWNER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OOWNER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HCHILDREN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NNAMEID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NSTATUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ACHILDREN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NNAMEID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "HB_ADEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ADEL )}, NULL },
{ "DESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_ISOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISOBJECT )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "_SB_NOTIFIER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SB_NOTIFIER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOUSEMODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_ENTER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_LEAVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_RBDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_LBDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_RBUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_LBUP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_RBDBLCLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_LBDBLCLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_MBDOWN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_MBCLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_MBDBLCLICK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_MOTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_WHEEL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "KEYBOARD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_SETINPUTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LHASINPUTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_KILLINPUTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "WVG_INVALIDATERECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_INVALIDATERECT )}, NULL },
{ "HWND", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FINDMENUITEMBYID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_BEGINMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_ENDMENU", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HANDLEEVENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FINDOBJECTBYHANDLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBJTYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DRAWINGAREA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOSANDSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CURRENTSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_RESIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBRUSHBG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_LOWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_LOWORD )}, NULL },
{ "WVG_HIWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_HIWORD )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "WVG_CALLWINDOWPROC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_CALLWINDOWPROC )}, NULL },
{ "NOLDPROC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PARTHDLR, "gtwvg\\parthdlr.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PARTHDLR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PARTHDLR )
   #include "hbiniseg.h"
#endif

HB_FUNC( WVGPARTHANDLER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,93,0,103,1,0,100,8,29,233,2,
		176,1,0,104,1,0,12,1,29,222,2,166,160,2,
		0,122,80,1,48,2,0,176,3,0,12,0,106,15,
		87,118,103,80,97,114,116,72,97,110,100,108,101,114,
		0,108,4,4,1,0,108,0,112,3,80,2,48,5,
		0,95,2,100,100,95,1,106,6,99,97,114,103,111,
		0,4,1,0,9,112,5,73,48,6,0,95,2,106,
		4,110,101,119,0,108,7,95,1,112,3,73,48,6,
		0,95,2,106,7,99,114,101,97,116,101,0,108,8,
		95,1,112,3,73,48,6,0,95,2,106,10,99,111,
		110,102,105,103,117,114,101,0,108,9,95,1,112,3,
		73,48,6,0,95,2,106,8,100,101,115,116,114,111,
		121,0,108,10,95,1,112,3,73,48,6,0,95,2,
		106,12,104,97,110,100,108,101,69,118,101,110,116,0,
		108,11,95,1,112,3,73,48,6,0,95,2,106,7,
		115,116,97,116,117,115,0,108,12,95,1,112,3,73,
		48,6,0,95,2,106,12,114,101,109,111,118,101,67,
		104,105,108,100,0,108,13,95,1,112,3,73,48,6,
		0,95,2,106,9,97,100,100,67,104,105,108,100,0,
		108,14,95,1,112,3,73,48,6,0,95,2,106,14,
		99,104,105,108,100,70,114,111,109,78,97,109,101,0,
		108,15,95,1,112,3,73,48,6,0,95,2,106,10,
		99,104,105,108,100,76,105,115,116,0,108,16,95,1,
		112,3,73,48,6,0,95,2,106,9,100,101,108,67,
		104,105,108,100,0,108,17,95,1,112,3,73,48,6,
		0,95,2,106,8,115,101,116,78,97,109,101,0,108,
		18,95,1,112,3,73,48,6,0,95,2,106,9,115,
		101,116,79,119,110,101,114,0,108,19,95,1,112,3,
		73,48,6,0,95,2,106,10,115,101,116,80,97,114,
		101,110,116,0,108,20,95,1,112,3,73,48,6,0,
		95,2,106,9,110,111,116,105,102,105,101,114,0,108,
		21,95,1,112,3,73,48,6,0,95,2,106,15,99,
		111,110,116,114,111,108,87,110,100,80,114,111,99,0,
		108,22,95,1,112,3,73,48,5,0,95,2,100,4,
		0,0,95,1,106,10,97,67,104,105,108,100,114,101,
		110,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,100,95,1,106,8,110,78,97,109,101,73,100,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,100,
		95,1,106,8,111,80,97,114,101,110,116,0,4,1,
		0,9,112,5,73,48,5,0,95,2,100,100,95,1,
		106,7,111,79,119,110,101,114,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,121,95,1,106,8,110,
		83,116,97,116,117,115,0,4,1,0,9,112,5,73,
		48,5,0,95,2,100,100,95,1,106,12,115,98,95,
		110,111,116,105,102,105,101,114,0,4,1,0,9,112,
		5,73,48,6,0,95,2,106,14,110,111,116,105,102,
		105,101,114,66,108,111,99,107,0,108,23,95,1,112,
		3,73,48,6,0,95,2,106,15,95,110,111,116,105,
		102,105,101,114,66,108,111,99,107,0,108,23,95,1,
		112,3,73,48,24,0,95,2,112,0,73,167,14,0,
		0,176,25,0,104,1,0,95,2,20,2,168,48,26,
		0,95,2,112,0,80,3,176,27,0,95,3,106,10,
		73,110,105,116,67,108,97,115,115,0,12,2,28,12,
		48,28,0,95,3,164,146,1,0,73,95,3,110,7,
		48,26,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,29,0,102,95,1,112,1,73,48,30,
		0,102,95,2,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,31,0,96,1,0,48,32,0,102,112,
		0,20,2,176,31,0,96,2,0,48,33,0,102,112,
		0,20,2,48,29,0,102,95,1,112,1,73,48,30,
		0,102,95,2,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_CONFIGURE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,31,0,96,1,0,48,32,0,102,112,
		0,20,2,176,31,0,96,2,0,48,33,0,102,112,
		0,20,2,48,29,0,102,95,1,112,1,73,48,30,
		0,102,95,2,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		48,34,0,102,100,112,1,73,48,35,0,102,100,112,
		1,73,48,29,0,102,100,112,1,73,48,30,0,102,
		100,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_HANDLEEVENT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_STATUS )
{
	static const HB_BYTE pcode[] =
	{
		48,36,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_ADDCHILD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,48,35,0,95,1,48,37,0,95,1,112,
		0,112,1,73,176,38,0,48,39,0,102,112,0,95,
		1,20,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_CHILDFROMNAME )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,122,165,80,2,25,53,48,40,0,48,39,
		0,102,112,0,95,2,1,112,0,100,69,28,32,48,
		40,0,48,39,0,102,112,0,95,2,1,112,0,95,
		1,8,28,13,48,39,0,102,112,0,95,2,1,80,
		3,175,2,0,176,41,0,48,39,0,102,112,0,12,
		1,15,28,193,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_CHILDLIST )
{
	static const HB_BYTE pcode[] =
	{
		48,39,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_REMOVECHILD )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,42,0,48,39,0,102,112,0,89,15,
		0,1,0,1,0,1,0,95,1,95,255,8,6,12,
		2,165,80,2,121,15,28,16,176,43,0,48,39,0,
		102,112,0,95,2,120,20,3,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_DELCHILD )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,42,0,48,39,0,102,112,0,89,15,
		0,1,0,1,0,1,0,95,1,95,255,8,6,12,
		2,80,2,95,2,121,15,28,24,48,44,0,95,1,
		112,0,73,176,43,0,48,39,0,102,112,0,95,2,
		120,20,3,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_SETNAME )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,40,0,102,112,0,80,2,176,45,0,
		95,1,12,1,28,11,48,35,0,102,95,1,112,1,
		73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_SETOWNER )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,33,0,102,112,0,80,2,176,46,0,
		95,1,12,1,28,11,48,30,0,102,95,1,112,1,
		73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_SETPARENT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,32,0,102,112,0,80,2,176,46,0,
		95,1,12,1,28,11,48,29,0,102,95,1,112,1,
		73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_NOTIFIERBLOCK )
{
	static const HB_BYTE pcode[] =
	{
		149,1,0,176,47,0,12,0,80,1,176,48,0,95,
		1,12,1,31,26,176,49,0,95,1,122,1,12,1,
		28,15,48,50,0,102,95,1,122,1,112,1,73,25,
		69,176,48,0,95,1,12,1,31,60,176,49,0,48,
		51,0,102,112,0,12,1,28,47,176,45,0,95,1,
		122,1,12,1,28,36,176,52,0,95,1,92,2,1,
		12,1,28,24,48,53,0,48,51,0,102,112,0,95,
		1,122,1,95,1,92,2,1,102,112,3,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_NOTIFIER )
{
	static const HB_BYTE pcode[] =
	{
		13,6,2,121,80,8,95,1,92,6,8,29,127,2,
		95,2,122,1,93,161,2,8,28,20,95,2,92,3,
		1,95,2,92,4,1,4,2,0,80,3,26,234,1,
		95,2,122,1,93,163,2,8,32,223,1,48,54,0,
		102,112,0,92,2,8,28,17,95,2,92,3,1,95,
		2,92,4,1,4,2,0,25,15,95,2,92,5,1,
		95,2,92,6,1,4,2,0,80,3,26,179,1,176,
		49,0,48,55,0,102,112,0,12,1,29,28,6,48,
		53,0,48,55,0,102,112,0,95,3,100,102,112,3,
		73,26,9,6,176,49,0,48,56,0,102,112,0,12,
		1,29,251,5,48,53,0,48,56,0,102,112,0,95,
		3,100,102,112,3,73,26,232,5,176,49,0,48,57,
		0,102,112,0,12,1,29,218,5,48,53,0,48,57,
		0,102,112,0,95,3,100,102,112,3,73,26,199,5,
		176,49,0,48,58,0,102,112,0,12,1,29,185,5,
		48,53,0,48,58,0,102,112,0,95,3,100,102,112,
		3,73,26,166,5,176,49,0,48,59,0,102,112,0,
		12,1,29,152,5,48,53,0,48,59,0,102,112,0,
		95,3,100,102,112,3,73,26,133,5,176,49,0,48,
		60,0,102,112,0,12,1,29,119,5,48,53,0,48,
		60,0,102,112,0,95,3,100,102,112,3,73,26,100,
		5,176,49,0,48,61,0,102,112,0,12,1,29,86,
		5,48,53,0,48,61,0,102,112,0,95,3,100,102,
		112,3,73,26,67,5,176,49,0,48,62,0,102,112,
		0,12,1,29,53,5,48,53,0,48,62,0,102,112,
		0,95,3,100,102,112,3,73,26,34,5,176,49,0,
		48,63,0,102,112,0,12,1,29,20,5,48,53,0,
		48,63,0,102,112,0,95,3,100,102,112,3,73,26,
		1,5,176,49,0,48,64,0,102,112,0,12,1,29,
		243,4,48,53,0,48,64,0,102,112,0,95,3,100,
		102,112,3,73,26,224,4,176,49,0,48,65,0,102,
		112,0,12,1,29,210,4,48,53,0,48,65,0,102,
		112,0,95,3,100,102,112,3,73,26,191,4,176,49,
		0,48,66,0,102,112,0,12,1,29,177,4,48,53,
		0,48,66,0,102,112,0,95,3,100,102,112,3,73,
		26,158,4,176,49,0,48,67,0,102,112,0,12,1,
		29,144,4,48,53,0,48,67,0,102,112,0,95,3,
		100,102,112,3,73,26,125,4,26,122,4,95,2,122,
		1,133,14,0,97,161,2,0,0,26,68,254,97,163,
		2,0,0,26,93,254,97,4,2,0,0,26,118,254,
		97,1,2,0,0,26,143,254,97,5,2,0,0,26,
		168,254,97,2,2,0,0,26,193,254,97,6,2,0,
		0,26,218,254,97,3,2,0,0,26,243,254,97,7,
		2,0,0,26,12,255,97,8,2,0,0,26,37,255,
		97,9,2,0,0,26,62,255,97,0,2,0,0,26,
		87,255,97,10,2,0,0,26,112,255,97,160,0,0,
		0,25,137,26,1,4,95,1,92,7,8,28,35,176,
		49,0,48,68,0,102,112,0,12,1,29,236,3,48,
		53,0,48,68,0,102,112,0,95,2,100,102,112,3,
		73,26,217,3,95,1,92,2,8,28,41,176,49,0,
		48,69,0,102,112,0,12,1,28,17,48,53,0,48,
		69,0,102,112,0,100,100,102,112,3,73,48,70,0,
		102,120,112,1,73,26,171,3,95,1,92,3,8,28,
		41,176,49,0,48,71,0,102,112,0,12,1,28,17,
		48,53,0,48,71,0,102,112,0,100,100,102,112,3,
		73,48,70,0,102,9,112,1,73,26,125,3,95,1,
		92,13,8,32,117,3,95,1,92,14,8,28,36,176,
		72,0,48,39,0,102,112,0,89,20,0,1,0,0,
		0,176,73,0,48,74,0,95,1,112,0,12,1,6,
		20,2,26,76,3,95,1,92,4,8,28,35,176,49,
		0,48,75,0,102,112,0,12,1,29,55,3,48,53,
		0,48,75,0,102,112,0,100,100,102,112,3,80,8,
		26,36,3,95,1,92,9,8,29,254,0,95,2,122,
		1,121,8,28,116,176,46,0,48,76,0,102,112,0,
		12,1,29,6,3,176,48,0,48,77,0,48,76,0,
		102,112,0,95,2,92,2,1,112,1,165,80,4,12,
		1,32,235,2,176,49,0,95,4,92,2,1,12,1,
		28,26,48,53,0,95,4,92,2,1,95,4,122,1,
		100,95,4,92,4,1,112,3,73,26,199,2,176,49,
		0,95,4,92,3,1,12,1,29,186,2,48,53,0,
		95,4,92,3,1,95,4,122,1,100,95,4,92,4,
		1,112,3,73,26,162,2,95,2,122,1,122,8,28,
		57,176,46,0,48,76,0,102,112,0,12,1,28,44,
		176,49,0,48,78,0,48,76,0,102,112,0,112,0,
		12,1,29,122,2,48,53,0,48,78,0,48,76,0,
		102,112,0,112,0,100,100,102,112,3,73,26,99,2,
		95,2,122,1,92,2,8,29,89,2,176,46,0,48,
		76,0,102,112,0,12,1,29,75,2,176,49,0,48,
		79,0,48,76,0,102,112,0,112,0,12,1,29,56,
		2,48,53,0,48,79,0,48,76,0,102,112,0,112,
		0,100,100,102,112,3,73,26,33,2,95,1,92,10,
		8,28,67,95,2,122,1,80,6,176,42,0,48,39,
		0,102,112,0,89,20,0,1,0,1,0,6,0,48,
		37,0,95,1,112,0,95,255,8,6,12,2,165,80,
		5,121,15,29,237,1,48,80,0,48,39,0,102,112,
		0,95,5,1,92,10,95,2,112,2,110,7,95,1,
		92,11,8,28,68,95,2,92,2,1,80,6,176,42,
		0,48,39,0,102,112,0,89,20,0,1,0,1,0,
		6,0,48,37,0,95,1,112,0,95,255,8,6,12,
		2,165,80,5,121,15,29,164,1,48,80,0,48,39,
		0,102,112,0,95,5,1,92,11,95,2,112,2,110,
		7,95,1,92,12,8,28,38,48,81,0,102,95,2,
		92,2,1,112,1,80,7,176,46,0,95,7,12,1,
		29,114,1,48,80,0,95,7,92,12,95,2,112,2,
		110,7,95,1,92,15,8,28,64,95,2,92,3,1,
		48,74,0,102,112,0,8,28,14,48,80,0,102,92,
		16,95,2,112,2,110,7,48,81,0,102,95,2,92,
		3,1,112,1,80,7,176,46,0,95,7,12,1,29,
		45,1,48,80,0,95,7,92,16,95,2,112,2,110,
		7,95,1,92,16,8,28,64,95,2,92,3,1,48,
		74,0,102,112,0,8,28,14,48,80,0,102,92,16,
		95,2,112,2,110,7,48,81,0,102,95,2,92,3,
		1,112,1,80,7,176,46,0,95,7,12,1,29,232,
		0,48,80,0,95,7,92,16,95,2,112,2,110,7,
		95,1,92,5,8,29,143,0,48,82,0,102,112,0,
		92,4,8,28,42,48,82,0,48,83,0,102,112,0,
		112,0,92,20,8,28,26,48,84,0,48,83,0,102,
		112,0,121,121,4,2,0,48,85,0,102,112,0,9,
		112,3,73,176,49,0,48,86,0,102,112,0,12,1,
		28,40,48,53,0,48,86,0,102,112,0,95,2,122,
		1,95,2,92,2,1,4,2,0,95,2,92,3,1,
		95,2,92,4,1,4,2,0,102,112,3,73,176,72,
		0,48,39,0,102,112,0,89,25,0,1,0,0,0,
		48,80,0,95,1,92,5,121,121,121,121,121,4,5,
		0,112,2,6,20,2,25,70,95,1,92,18,8,28,
		63,95,2,92,3,1,48,74,0,102,112,0,8,28,
		14,48,80,0,102,92,18,95,2,112,2,110,7,48,
		81,0,102,95,2,92,3,1,112,1,80,7,176,46,
		0,95,7,12,1,28,15,48,80,0,95,7,92,18,
		95,2,112,2,110,7,95,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGPARTHANDLER_CONTROLWNDPROC )
{
	static const HB_BYTE pcode[] =
	{
		13,7,4,26,36,2,48,82,0,102,112,0,92,20,
		8,29,153,2,176,48,0,48,87,0,102,112,0,12,
		1,32,139,2,48,80,0,102,92,12,95,3,95,4,
		4,2,0,112,2,73,26,120,2,176,88,0,95,3,
		12,1,80,5,176,89,0,95,3,12,1,80,6,95,
		4,80,7,95,7,121,8,28,109,176,46,0,48,76,
		0,102,112,0,12,1,28,93,176,48,0,48,77,0,
		48,76,0,102,112,0,95,5,112,1,165,80,9,12,
		1,31,70,176,49,0,95,9,92,2,1,12,1,28,
		25,48,53,0,95,9,92,2,1,95,9,122,1,100,
		95,9,92,4,1,112,3,73,25,35,176,49,0,95,
		9,92,3,1,12,1,28,23,48,53,0,95,9,92,
		3,1,95,9,122,1,100,95,9,92,4,1,112,3,
		73,121,110,7,176,42,0,48,39,0,102,112,0,89,
		20,0,1,0,1,0,5,0,48,37,0,95,1,112,
		0,95,255,8,6,12,2,165,80,8,121,15,29,202,
		1,48,80,0,48,39,0,102,112,0,95,8,1,92,
		11,95,6,95,5,95,7,4,3,0,112,2,80,11,
		176,45,0,95,11,12,1,29,165,1,95,11,121,8,
		29,158,1,121,110,7,176,42,0,48,39,0,102,112,
		0,89,20,0,1,0,1,0,3,0,48,37,0,95,
		1,112,0,95,255,8,6,12,2,165,80,8,121,15,
		29,116,1,48,80,0,48,39,0,102,112,0,95,8,
		1,92,10,95,3,95,4,4,2,0,112,2,80,11,
		176,45,0,95,11,12,1,28,11,95,11,121,8,28,
		5,121,110,7,176,90,0,95,11,12,1,29,63,1,
		95,11,110,7,48,81,0,102,95,4,112,1,80,10,
		176,46,0,95,10,12,1,29,39,1,48,80,0,95,
		10,92,12,95,3,95,4,4,2,0,112,2,80,11,
		95,11,122,8,28,22,176,91,0,48,92,0,102,112,
		0,95,1,95,2,95,3,95,4,20,5,7,95,11,
		110,7,48,80,0,102,92,15,176,88,0,95,3,12,
		1,176,89,0,95,3,12,1,95,4,4,3,0,112,
		2,73,121,110,7,48,80,0,102,92,16,176,88,0,
		95,3,12,1,176,89,0,95,3,12,1,95,4,4,
		3,0,112,2,121,8,29,184,0,121,110,7,26,178,
		0,48,80,0,102,92,17,95,2,95,3,95,4,4,
		3,0,112,2,73,26,157,0,48,80,0,102,92,17,
		95,2,95,3,95,4,4,3,0,112,2,121,8,29,
		135,0,121,110,7,95,2,133,16,0,97,20,0,0,
		0,26,213,253,97,17,1,0,0,26,250,253,97,78,
		0,0,0,26,207,254,97,52,1,0,0,26,39,255,
		97,50,1,0,0,26,31,255,97,51,1,0,0,26,
		23,255,97,53,1,0,0,26,15,255,97,54,1,0,
		0,26,7,255,97,55,1,0,0,26,255,254,97,56,
		1,0,0,26,247,254,97,20,1,0,0,26,51,255,
		97,21,1,0,0,26,74,255,97,21,2,0,0,26,
		101,255,97,46,0,0,0,26,96,255,97,47,0,0,
		0,26,88,255,100,26,105,255,176,91,0,48,92,0,
		102,112,0,95,1,95,2,95,3,95,4,20,5,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,93,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

