/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "gtwvg\drawarea.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WVGDRAWINGAREA );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( WVGWINDOW );
HB_FUNC_STATIC( WVGDRAWINGAREA_NEW );
HB_FUNC_STATIC( WVGDRAWINGAREA_CREATE );
HB_FUNC_STATIC( WVGDRAWINGAREA_DESTROY );
HB_FUNC_STATIC( WVGDRAWINGAREA_HANDLEEVENT );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( WVG_REGISTERCLASS_BYNAME );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( WVG_SETTEXTCOLOR );
HB_FUNC_EXTERN( WVG_SETBKMODE );
HB_FUNC_EXTERN( WVG_FILLRECT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DRAWAREA )
{ "WVGDRAWINGAREA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGDRAWINGAREA )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "WVGWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGWINDOW )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGDRAWINGAREA_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGDRAWINGAREA_NEW )}, NULL },
{ "WVGDRAWINGAREA_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGDRAWINGAREA_CREATE )}, NULL },
{ "WVGDRAWINGAREA_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGDRAWINGAREA_DESTROY )}, NULL },
{ "WVGDRAWINGAREA_HANDLEEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGDRAWINGAREA_HANDLEEVENT )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGWINDOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_STYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_EXSTYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_OBJTYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VISIBLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_REGISTERCLASS_BYNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_REGISTERCLASS_BYNAME )}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATECONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETWINDOWPROCCALLBACK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "SL_RESIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "ACHILDREN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HANDLEEVENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "CLR_FG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETTEXTCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETTEXTCOLOR )}, NULL },
{ "HBRUSHBG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETBKMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETBKMODE )}, NULL },
{ "WVG_FILLRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_FILLRECT )}, NULL },
{ "CURRENTSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DRAWAREA, "gtwvg\\drawarea.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DRAWAREA
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DRAWAREA )
   #include "hbiniseg.h"
#endif

HB_FUNC( WVGDRAWINGAREA )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,43,0,103,1,0,100,8,29,43,1,
		176,1,0,104,1,0,12,1,29,32,1,166,226,0,
		0,122,80,1,48,2,0,176,3,0,12,0,106,15,
		87,118,103,68,114,97,119,105,110,103,65,114,101,97,
		0,108,4,4,1,0,108,0,112,3,80,2,48,5,
		0,95,2,100,106,1,0,95,1,106,8,99,97,112,
		116,105,111,110,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,120,95,1,106,11,99,108,105,112,80,
		97,114,101,110,116,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,120,95,1,106,13,99,108,105,112,
		83,105,98,108,105,110,103,115,0,4,1,0,9,112,
		5,73,48,6,0,95,2,106,4,110,101,119,0,108,
		7,95,1,112,3,73,48,6,0,95,2,106,7,99,
		114,101,97,116,101,0,108,8,95,1,112,3,73,48,
		6,0,95,2,106,8,100,101,115,116,114,111,121,0,
		108,9,95,1,112,3,73,48,6,0,95,2,106,12,
		104,97,110,100,108,101,69,118,101,110,116,0,108,10,
		95,1,112,3,73,48,11,0,95,2,112,0,73,167,
		14,0,0,176,12,0,104,1,0,95,2,20,2,168,
		48,13,0,95,2,112,0,80,3,176,14,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,15,0,95,3,164,146,1,0,73,95,3,
		110,7,48,13,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGDRAWINGAREA_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,2,0,48,16,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,112,6,73,48,
		17,0,102,97,0,0,0,64,112,1,73,48,18,0,
		102,121,112,1,73,48,19,0,102,106,12,68,114,97,
		119,105,110,103,65,114,101,97,0,112,1,73,48,20,
		0,102,92,20,112,1,73,48,21,0,102,120,112,1,
		73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGDRAWINGAREA_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,11,0,48,16,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,120,112,6,73,48,22,
		0,48,23,0,102,112,0,102,112,1,73,176,24,0,
		48,25,0,102,112,0,20,1,48,26,0,102,112,0,
		73,48,27,0,102,112,0,73,48,28,0,102,112,0,
		73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGDRAWINGAREA_HANDLEEVENT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,95,1,92,5,8,28,69,176,29,0,48,
		30,0,102,112,0,12,1,28,17,48,31,0,48,30,
		0,102,112,0,100,100,102,112,3,73,176,32,0,48,
		33,0,102,112,0,89,25,0,1,0,0,0,48,34,
		0,95,1,92,5,121,121,121,121,121,4,5,0,112,
		2,6,20,2,121,110,7,95,1,92,12,8,28,93,
		176,35,0,48,36,0,102,112,0,12,1,28,17,176,
		37,0,95,2,122,1,48,36,0,102,112,0,20,2,
		176,35,0,48,38,0,102,112,0,12,1,28,52,176,
		39,0,95,2,122,1,122,20,2,176,40,0,95,2,
		122,1,121,121,48,41,0,102,112,0,122,1,48,41,
		0,102,112,0,92,2,1,4,4,0,48,38,0,102,
		112,0,20,3,121,110,7,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGDRAWINGAREA_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		48,42,0,48,16,0,102,112,0,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,43,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
