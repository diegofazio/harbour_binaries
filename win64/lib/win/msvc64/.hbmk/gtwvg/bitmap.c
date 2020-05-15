/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "gtwvg\bitmap.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WVGBITMAP );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( WVGBITMAP_NEW );
HB_FUNC_STATIC( WVGBITMAP_CREATE );
HB_FUNC_STATIC( WVGBITMAP_DESTROY );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( WVG_GETDC );
HB_FUNC_EXTERN( WVG_DELETEOBJECT );
HB_FUNC_EXTERN( WVG_RELEASEDC );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_BITMAP )
{ "WVGBITMAP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGBITMAP )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGBITMAP_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGBITMAP_NEW )}, NULL },
{ "WVGBITMAP_CREATE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGBITMAP_CREATE )}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVGBITMAP_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WVGBITMAP_DESTROY )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HDCCOMP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_GETDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_GETDC )}, NULL },
{ "_LDCTODESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HDC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBITMAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_DELETEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_DELETEOBJECT )}, NULL },
{ "LDCTODESTROY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVG_RELEASEDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVG_RELEASEDC )}, NULL },
{ "HDCCOMPAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_BITMAP, "gtwvg\\bitmap.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_BITMAP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_BITMAP )
   #include "hbiniseg.h"
#endif

HB_FUNC( WVGBITMAP )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,25,0,103,1,0,100,8,29,165,2,
		176,1,0,104,1,0,12,1,29,154,2,166,92,2,
		0,122,80,1,48,2,0,176,3,0,12,0,106,10,
		87,118,103,66,105,116,109,97,112,0,108,4,4,1,
		0,108,0,112,3,80,2,48,5,0,95,2,100,121,
		95,1,92,16,72,106,5,98,105,116,115,0,4,1,
		0,9,112,5,73,48,5,0,95,2,100,121,95,1,
		92,16,72,106,13,98,117,102,102,101,114,79,102,102,
		115,101,116,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,121,95,1,92,16,72,106,7,112,108,97,
		110,101,115,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,121,95,1,106,15,116,114,97,110,115,112,
		97,114,101,110,116,67,108,114,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,121,95,1,92,16,72,
		106,6,120,83,105,122,101,0,4,1,0,9,112,5,
		73,48,5,0,95,2,100,121,95,1,92,16,72,106,
		6,121,83,105,122,101,0,4,1,0,9,112,5,73,
		48,5,0,95,2,100,100,95,1,106,8,104,66,105,
		116,109,97,112,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,100,95,1,106,10,104,68,67,99,111,
		109,112,97,116,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,9,95,1,106,13,108,68,67,84,111,
		68,101,115,116,114,111,121,0,4,1,0,9,112,5,
		73,48,6,0,95,2,106,4,110,101,119,0,108,7,
		95,1,112,3,73,48,6,0,95,2,106,7,99,114,
		101,97,116,101,0,108,8,95,1,112,3,73,48,9,
		0,95,2,106,10,99,111,110,102,105,103,117,114,101,
		0,112,1,73,48,6,0,95,2,106,8,100,101,115,
		116,114,111,121,0,108,10,95,1,112,3,73,48,9,
		0,95,2,106,5,100,114,97,119,0,112,1,73,48,
		9,0,95,2,106,14,103,101,116,67,111,108,111,114,
		84,97,98,108,101,0,112,1,73,48,9,0,95,2,
		106,18,103,101,116,68,101,102,97,117,108,116,66,71,
		67,111,108,111,114,0,112,1,73,48,9,0,95,2,
		106,5,108,111,97,100,0,112,1,73,48,9,0,95,
		2,106,9,108,111,97,100,70,105,108,101,0,112,1,
		73,48,9,0,95,2,106,5,109,97,107,101,0,112,
		1,73,48,9,0,95,2,106,10,112,114,101,115,83,
		112,97,99,101,0,112,1,73,48,9,0,95,2,106,
		9,115,97,118,101,70,105,108,101,0,112,1,73,48,
		9,0,95,2,106,10,115,101,116,66,117,102,102,101,
		114,0,112,1,73,48,9,0,95,2,106,11,103,101,
		116,80,105,99,116,117,114,101,0,112,1,73,48,9,
		0,95,2,106,11,115,101,116,80,105,99,116,117,114,
		101,0,112,1,73,48,11,0,95,2,112,0,73,167,
		14,0,0,176,12,0,104,1,0,95,2,20,2,168,
		48,13,0,95,2,112,0,80,3,176,14,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,15,0,95,3,164,146,1,0,73,95,3,
		110,7,48,13,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGBITMAP_NEW )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGBITMAP_CREATE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,95,1,100,8,28,24,48,16,0,102,176,
		17,0,12,0,112,1,73,48,18,0,102,120,112,1,
		73,25,16,48,16,0,102,48,19,0,95,1,112,0,
		112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WVGBITMAP_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		48,20,0,102,112,0,100,69,28,13,176,21,0,48,
		20,0,102,112,0,20,1,48,22,0,102,112,0,28,
		13,176,23,0,48,24,0,102,112,0,20,1,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,25,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

