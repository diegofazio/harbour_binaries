/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbxpp\tbrowsex.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( XPP_TBROWSE );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( TBROWSE );
HB_FUNC_STATIC( XPP_TBROWSE_VIEWAREA );
HB_FUNC_STATIC( XPP_TBROWSE_FIRSTSCRCOL );
HB_FUNC_STATIC( XPP_TBROWSE__LEFT );
HB_FUNC_STATIC( XPP_TBROWSE__RIGHT );
HB_FUNC_STATIC( XPP_TBROWSE__END );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( INT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TBROWSEX )
{ "XPP_TBROWSE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_TBROWSE )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "TBROWSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBROWSE )}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "XPP_TBROWSE_VIEWAREA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_TBROWSE_VIEWAREA )}, NULL },
{ "XPP_TBROWSE_FIRSTSCRCOL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_TBROWSE_FIRSTSCRCOL )}, NULL },
{ "XPP_TBROWSE__LEFT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_TBROWSE__LEFT )}, NULL },
{ "XPP_TBROWSE__RIGHT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_TBROWSE__RIGHT )}, NULL },
{ "XPP_TBROWSE__END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_TBROWSE__END )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCONFIGURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DOCONFIGURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "N_RIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "N_LEFT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "N_TOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NHEADHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LHEADSEP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "N_BOTTOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NFOOTHEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LFOOTSEP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEFT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TBROWSEX, "..\\contrib\\hbxpp\\tbrowsex.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TBROWSEX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TBROWSEX )
   #include "hbiniseg.h"
#endif

HB_FUNC( XPP_TBROWSE )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,30,0,103,1,0,100,8,29,233,0,
		176,1,0,104,1,0,12,1,29,222,0,166,160,0,
		0,122,80,1,48,2,0,176,3,0,12,0,106,12,
		120,112,112,95,84,66,114,111,119,115,101,0,108,4,
		4,1,0,108,0,112,3,80,2,122,80,1,48,5,
		0,95,2,106,9,118,105,101,119,65,114,101,97,0,
		108,6,95,1,112,3,73,48,5,0,95,2,106,12,
		102,105,114,115,116,83,99,114,67,111,108,0,108,7,
		95,1,112,3,73,48,5,0,95,2,106,6,95,108,
		101,102,116,0,108,8,95,1,112,3,73,48,5,0,
		95,2,106,7,95,114,105,103,104,116,0,108,9,95,
		1,112,3,73,48,5,0,95,2,106,5,95,101,110,
		100,0,108,10,95,1,112,3,73,48,11,0,95,2,
		112,0,73,167,14,0,0,176,12,0,104,1,0,95,
		2,20,2,168,48,13,0,95,2,112,0,80,3,176,
		14,0,95,3,106,10,73,110,105,116,67,108,97,115,
		115,0,12,2,28,12,48,15,0,95,3,164,146,1,
		0,73,95,3,110,7,48,13,0,103,1,0,112,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XPP_TBROWSE_VIEWAREA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,48,16,0,102,112,0,121,69,28,9,48,
		17,0,102,112,0,73,176,18,0,48,19,0,102,112,
		0,12,1,176,18,0,48,20,0,102,112,0,12,1,
		49,23,165,80,2,80,1,96,2,0,95,1,136,48,
		21,0,102,112,0,48,22,0,102,112,0,72,48,23,
		0,102,112,0,28,5,122,25,3,121,72,48,20,0,
		102,112,0,48,24,0,102,112,0,48,25,0,102,112,
		0,49,48,26,0,102,112,0,28,5,122,25,3,121,
		49,48,19,0,102,112,0,95,2,4,5,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XPP_TBROWSE_FIRSTSCRCOL )
{
	static const HB_BYTE pcode[] =
	{
		48,16,0,102,112,0,121,69,28,9,48,17,0,102,
		112,0,73,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XPP_TBROWSE__LEFT )
{
	static const HB_BYTE pcode[] =
	{
		48,27,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XPP_TBROWSE__RIGHT )
{
	static const HB_BYTE pcode[] =
	{
		48,28,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XPP_TBROWSE__END )
{
	static const HB_BYTE pcode[] =
	{
		48,29,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,30,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

