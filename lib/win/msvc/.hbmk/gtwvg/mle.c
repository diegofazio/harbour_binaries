/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "gtwvg\mle.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WVGMLE );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( WVGWINDOW );
HB_FUNC_EXTERN( WVGDATAREF );
HB_FUNC_STATIC( WVGMLE_NEW );
HB_FUNC_STATIC( WVGMLE_CREATE );
HB_FUNC_STATIC( WVGMLE_DESTROY );
HB_FUNC_STATIC( WVGMLE_HANDLEEVENT );
HB_FUNC_STATIC( WVGMLE_CLEAR );
HB_FUNC_STATIC( WVGMLE_COPYMARKED );
HB_FUNC_STATIC( WVGMLE_CUTMARKED );
HB_FUNC_STATIC( WVGMLE_CHANGED );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_ISBLOCK );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( WVG_SETTEXTCOLOR );
HB_FUNC_EXTERN( WVG_SETBKMODE );
HB_FUNC_EXTERN( WVG_GETCURRENTBRUSH );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( WVG_LOWORD );
HB_FUNC_EXTERN( WVG_HIWORD );
HB_FUNC_EXTERN( WVT_SETCLIPBOARD );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MLE )
{ "WVGMLE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "WVGWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGWINDOW )}, NULL },
{ "WVGDATAREF", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVGDATAREF )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGMLE_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_NEW )}, NULL },
{ "WVGMLE_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_CREATE )}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGMLE_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_DESTROY )}, NULL },
{ "WVGMLE_HANDLEEVENT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_HANDLEEVENT )}, NULL },
{ "WVGMLE_CLEAR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_CLEAR )}, NULL },
{ "WVGMLE_COPYMARKED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_COPYMARKED )}, NULL },
{ "WVGMLE_CUTMARKED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_CUTMARKED )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_UNDO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_UNDO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_HSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_HSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_VSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SL_VSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGMLE_CHANGED", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGMLE_CHANGED )}, NULL },
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
{ "TABSTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDITABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BORDER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WORDWRAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HORIZSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VERTSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDCHILD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPARENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATECONTROL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETWINDOWPROCCALLBACK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VISIBLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SHOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOSANDSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISBLOCK )}, NULL },
{ "SL_KILLINPUTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SL_SETINPUTFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "CLR_FG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETTEXTCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETTEXTCOLOR )}, NULL },
{ "HBRUSHBG", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_SETBKMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_SETBKMODE )}, NULL },
{ "WVG_GETCURRENTBRUSH", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETCURRENTBRUSH )}, NULL },
{ "ISPARENTCRT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SENDMESSAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "GETDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "WVG_LOWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_LOWORD )}, NULL },
{ "WVG_HIWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_HIWORD )}, NULL },
{ "WVT_SETCLIPBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVT_SETCLIPBOARD )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MLE, "gtwvg\\mle.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MLE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MLE )
   #include "hbiniseg.h"
#endif

HB_FUNC( WVGMLE )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,69,0,103,1,0,100,8,29,86,4,
		176,1,0,104,1,0,12,1,29,75,4,166,13,4,
		0,122,80,1,48,2,0,176,3,0,12,0,106,7,
		87,118,103,77,76,69,0,108,4,108,5,4,2,0,
		108,0,112,3,80,2,48,6,0,95,2,100,120,95,
		1,106,7,98,111,114,100,101,114,0,4,1,0,9,
		112,5,73,48,6,0,95,2,100,120,95,1,106,9,
		101,100,105,116,97,98,108,101,0,4,1,0,9,112,
		5,73,48,6,0,95,2,100,120,95,1,106,12,104,
		111,114,105,122,83,99,114,111,108,108,0,4,1,0,
		9,112,5,73,48,6,0,95,2,100,120,95,1,106,
		11,118,101,114,116,83,99,114,111,108,108,0,4,1,
		0,9,112,5,73,48,6,0,95,2,100,120,95,1,
		106,9,119,111,114,100,87,114,97,112,0,4,1,0,
		9,112,5,73,48,6,0,95,2,100,9,95,1,106,
		10,105,103,110,111,114,101,84,97,98,0,4,1,0,
		9,112,5,73,48,6,0,95,2,100,93,0,125,95,
		1,106,13,98,117,102,102,101,114,76,101,110,103,116,
		104,0,4,1,0,9,112,5,73,48,7,0,95,2,
		106,4,110,101,119,0,108,8,95,1,112,3,73,48,
		7,0,95,2,106,7,99,114,101,97,116,101,0,108,
		9,95,1,112,3,73,48,10,0,95,2,106,10,99,
		111,110,102,105,103,117,114,101,0,112,1,73,48,7,
		0,95,2,106,8,100,101,115,116,114,111,121,0,108,
		11,95,1,112,3,73,48,7,0,95,2,106,12,104,
		97,110,100,108,101,69,118,101,110,116,0,108,12,95,
		1,112,3,73,48,7,0,95,2,106,6,99,108,101,
		97,114,0,108,13,95,1,112,3,73,48,7,0,95,
		2,106,11,99,111,112,121,77,97,114,107,101,100,0,
		108,14,95,1,112,3,73,48,7,0,95,2,106,10,
		99,117,116,77,97,114,107,101,100,0,108,15,95,1,
		112,3,73,48,10,0,95,2,106,13,100,101,108,101,
		116,101,77,97,114,107,101,100,0,112,1,73,48,10,
		0,95,2,106,7,100,101,108,101,116,101,0,112,1,
		73,48,10,0,95,2,106,12,112,97,115,116,101,77,
		97,114,107,101,100,0,112,1,73,48,10,0,95,2,
		106,15,113,117,101,114,121,70,105,114,115,116,67,104,
		97,114,0,112,1,73,48,10,0,95,2,106,12,113,
		117,101,114,121,77,97,114,107,101,100,0,112,1,73,
		48,10,0,95,2,106,13,115,101,116,70,105,114,115,
		116,67,104,97,114,0,112,1,73,48,10,0,95,2,
		106,10,115,101,116,77,97,114,107,101,100,0,112,1,
		73,48,10,0,95,2,106,7,105,110,115,101,114,116,
		0,112,1,73,48,10,0,95,2,106,13,99,104,97,
		114,70,114,111,109,76,105,110,101,0,112,1,73,48,
		10,0,95,2,106,13,108,105,110,101,70,114,111,109,
		67,104,97,114,0,112,1,73,48,10,0,95,2,106,
		4,112,111,115,0,112,1,73,48,6,0,95,2,100,
		120,95,1,106,8,115,108,95,117,110,100,111,0,4,
		1,0,9,112,5,73,48,16,0,95,2,106,5,117,
		110,100,111,0,89,21,0,1,0,0,0,48,17,0,
		95,1,112,0,28,5,100,25,3,100,6,95,1,112,
		3,73,48,16,0,95,2,106,6,95,117,110,100,111,
		0,89,17,0,2,0,0,0,48,18,0,95,1,95,
		2,112,1,6,95,1,112,3,73,48,10,0,95,2,
		106,12,115,101,116,69,100,105,116,97,98,108,101,0,
		112,1,73,48,10,0,95,2,106,8,115,101,116,87,
		114,97,112,0,112,1,73,48,6,0,95,2,100,100,
		95,1,106,11,115,108,95,104,83,99,114,111,108,108,
		0,4,1,0,9,112,5,73,48,16,0,95,2,106,
		8,104,83,99,114,111,108,108,0,89,15,0,1,0,
		0,0,48,19,0,95,1,112,0,6,95,1,112,3,
		73,48,16,0,95,2,106,9,95,104,83,99,114,111,
		108,108,0,89,17,0,2,0,0,0,48,20,0,95,
		1,95,2,112,1,6,95,1,112,3,73,48,6,0,
		95,2,100,100,95,1,106,11,115,108,95,118,83,99,
		114,111,108,108,0,4,1,0,9,112,5,73,48,16,
		0,95,2,106,8,118,83,99,114,111,108,108,0,89,
		15,0,1,0,0,0,48,21,0,95,1,112,0,6,
		95,1,112,3,73,48,16,0,95,2,106,9,95,118,
		83,99,114,111,108,108,0,89,17,0,2,0,0,0,
		48,22,0,95,1,95,2,112,1,6,95,1,112,3,
		73,48,7,0,95,2,106,8,99,104,97,110,103,101,
		100,0,108,23,95,1,112,3,73,48,7,0,95,2,
		106,9,95,99,104,97,110,103,101,100,0,108,23,95,
		1,112,3,73,48,24,0,95,2,112,0,73,167,14,
		0,0,176,25,0,104,1,0,95,2,20,2,168,48,
		26,0,95,2,112,0,80,3,176,27,0,95,3,106,
		10,73,110,105,116,67,108,97,115,115,0,12,2,28,
		12,48,28,0,95,3,164,146,1,0,73,95,3,110,
		7,48,26,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,2,0,48,29,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,112,6,73,48,
		30,0,102,97,4,16,0,64,112,1,73,48,31,0,
		102,93,0,2,112,1,73,48,32,0,102,106,5,69,
		68,73,84,0,112,1,73,48,33,0,102,92,19,112,
		1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,6,48,24,0,48,29,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,95,6,112,6,73,48,
		34,0,102,112,0,28,13,48,30,0,102,147,97,0,
		0,1,0,135,48,35,0,102,112,0,31,11,48,30,
		0,102,147,93,0,8,135,48,36,0,102,112,0,28,
		13,48,30,0,102,147,97,0,0,128,0,135,48,37,
		0,102,112,0,31,32,48,38,0,102,112,0,28,15,
		48,30,0,102,147,97,0,0,16,0,135,25,11,48,
		30,0,102,147,93,128,0,135,48,39,0,102,112,0,
		28,15,48,30,0,102,147,97,0,0,32,0,135,25,
		10,48,30,0,102,147,92,64,135,48,40,0,48,41,
		0,102,112,0,102,112,1,73,48,42,0,102,112,0,
		73,48,43,0,102,112,0,73,48,44,0,102,112,0,
		28,9,48,45,0,102,112,0,73,48,46,0,102,112,
		0,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_HANDLEEVENT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,95,1,92,11,8,29,207,0,95,2,122,
		1,93,0,2,8,28,34,176,47,0,48,48,0,102,
		112,0,12,1,29,213,1,48,49,0,48,48,0,102,
		112,0,100,100,102,112,3,73,26,195,1,95,2,122,
		1,93,0,1,8,28,34,176,47,0,48,50,0,102,
		112,0,12,1,29,171,1,48,49,0,48,50,0,102,
		112,0,100,100,102,112,3,73,26,153,1,95,2,122,
		1,93,1,6,8,28,34,176,47,0,48,19,0,102,
		112,0,12,1,29,129,1,48,49,0,48,19,0,102,
		112,0,100,100,102,112,3,73,26,111,1,95,2,122,
		1,93,2,6,8,28,34,176,47,0,48,21,0,102,
		112,0,12,1,29,87,1,48,49,0,48,21,0,102,
		112,0,100,100,102,112,3,73,26,69,1,95,2,122,
		1,93,0,3,8,32,58,1,95,2,122,1,93,0,
		4,8,32,47,1,95,2,122,1,93,1,5,8,32,
		36,1,26,33,1,95,1,92,12,8,28,71,176,51,
		0,48,52,0,102,112,0,12,1,28,17,176,53,0,
		95,2,122,1,48,52,0,102,112,0,20,2,176,51,
		0,48,54,0,102,112,0,12,1,28,20,176,55,0,
		95,2,122,1,122,20,2,48,54,0,102,112,0,110,
		7,176,56,0,95,2,122,1,20,1,7,95,1,92,
		17,8,29,205,0,48,57,0,102,112,0,29,196,0,
		95,2,122,1,93,0,1,8,28,28,95,2,92,2,
		1,92,9,8,29,175,0,48,58,0,48,41,0,102,
		112,0,112,0,73,121,110,7,95,2,122,1,92,8,
		8,28,33,176,47,0,48,48,0,102,112,0,12,1,
		29,137,0,48,49,0,48,48,0,102,112,0,100,100,
		102,112,3,73,25,119,95,2,122,1,92,7,8,28,
		32,176,47,0,48,50,0,102,112,0,12,1,28,97,
		48,49,0,48,50,0,102,112,0,100,100,102,112,3,
		73,25,80,95,2,122,1,93,20,1,8,28,32,176,
		47,0,48,19,0,102,112,0,12,1,28,57,48,49,
		0,48,19,0,102,112,0,100,100,102,112,3,73,25,
		40,95,2,122,1,93,21,1,8,28,30,176,47,0,
		48,21,0,102,112,0,12,1,28,17,48,49,0,48,
		21,0,102,112,0,100,100,102,112,3,73,122,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		48,59,0,48,29,0,102,112,0,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_CHANGED )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,60,0,102,93,184,0,121,121,112,3,
		80,2,176,61,0,95,1,12,1,28,21,48,60,0,
		102,93,185,0,95,1,28,5,121,25,3,122,121,112,
		3,73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_CLEAR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,48,62,0,102,112,0,80,1,48,63,0,
		102,106,1,0,112,1,73,176,64,0,95,1,20,1,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_COPYMARKED )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,48,60,0,102,93,176,0,112,1,80,1,
		176,65,0,95,1,12,1,80,2,176,66,0,95,1,
		12,1,80,3,95,3,95,2,49,165,80,1,121,15,
		28,22,176,67,0,176,68,0,48,62,0,102,112,0,
		95,2,95,1,12,3,20,1,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGMLE_CUTMARKED )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,48,60,0,102,93,176,0,112,1,80,1,
		176,65,0,95,1,12,1,80,2,176,66,0,95,1,
		12,1,80,3,95,3,95,2,49,165,80,1,121,15,
		28,38,48,62,0,102,112,0,80,4,48,63,0,102,
		176,68,0,95,4,122,95,2,17,12,3,176,68,0,
		95,4,95,3,12,2,72,112,1,73,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,69,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

