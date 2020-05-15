/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbnf\mouse1.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_MDBLCLK );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( MROW );
HB_FUNC_EXTERN( MCOL );
HB_FUNC_EXTERN( SECONDS );
HB_FUNC_EXTERN( FT_MBUTPRS );
HB_FUNC_EXTERN( INT );
HB_FUNC( FT_MINREGION );
HB_FUNC( FT_MMICKEYS );
HB_FUNC( FT_MGETPOS );
HB_FUNC_EXTERN( MLEFTDOWN );
HB_FUNC_EXTERN( MRIGHTDOWN );
HB_FUNC_EXTERN( HB_MMIDDLEDOWN );
HB_FUNC( FT_MSETPOS );
HB_FUNC_EXTERN( MSETPOS );
HB_FUNC( FT_MGETCOORD );
HB_FUNC( FT_MSETCOORD );
HB_FUNC( FT_MSETSENS );
HB_FUNC_EXTERN( FT_MGETSENS );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( _FT_MSETSENSITIVE );
HB_FUNC( FT_MVERSION );
HB_FUNC( FT_MINIT );
HB_FUNC( FT_MRESET );
HB_FUNC_EXTERN( MSETBOUNDS );
HB_FUNC_EXTERN( MHIDE );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( MAXCOL );
HB_FUNC_EXTERN( MPRESENT );
HB_FUNC( FT_MCURSOR );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( MSHOW );
HB_FUNC( FT_MSHOWCRS );
HB_FUNC( FT_MHIDECRS );
HB_FUNC( FT_MXLIMIT );
HB_FUNC_EXTERN( HB_MGETBOUNDS );
HB_FUNC( FT_MYLIMIT );
HB_FUNC( FT_MGETX );
HB_FUNC( FT_MGETY );
HB_FUNC( FT_MGETPAGE );
HB_FUNC( FT_MSETPAGE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MOUSE1 )
{ "FT_MDBLCLK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MDBLCLK )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "MROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MROW )}, NULL },
{ "MCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MCOL )}, NULL },
{ "SECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SECONDS )}, NULL },
{ "FT_MBUTPRS", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_MBUTPRS )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "FT_MINREGION", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MINREGION )}, NULL },
{ "FT_MMICKEYS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MMICKEYS )}, NULL },
{ "FT_MGETPOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MGETPOS )}, NULL },
{ "MLEFTDOWN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLEFTDOWN )}, NULL },
{ "MRIGHTDOWN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MRIGHTDOWN )}, NULL },
{ "HB_MMIDDLEDOWN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MMIDDLEDOWN )}, NULL },
{ "FT_MSETPOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MSETPOS )}, NULL },
{ "MSETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSETPOS )}, NULL },
{ "FT_MGETCOORD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MGETCOORD )}, NULL },
{ "FT_MSETCOORD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MSETCOORD )}, NULL },
{ "FT_MSETSENS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MSETSENS )}, NULL },
{ "FT_MGETSENS", {HB_FS_PUBLIC}, {HB_FUNCNAME( FT_MGETSENS )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "_FT_MSETSENSITIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( _FT_MSETSENSITIVE )}, NULL },
{ "FT_MVERSION", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MVERSION )}, NULL },
{ "FT_MINIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MINIT )}, NULL },
{ "FT_MRESET", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MRESET )}, NULL },
{ "MSETBOUNDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSETBOUNDS )}, NULL },
{ "MHIDE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MHIDE )}, NULL },
{ "MAXROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXROW )}, NULL },
{ "MAXCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXCOL )}, NULL },
{ "MPRESENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MPRESENT )}, NULL },
{ "FT_MCURSOR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MCURSOR )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "MSHOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSHOW )}, NULL },
{ "FT_MSHOWCRS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MSHOWCRS )}, NULL },
{ "FT_MHIDECRS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MHIDECRS )}, NULL },
{ "FT_MXLIMIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MXLIMIT )}, NULL },
{ "HB_MGETBOUNDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MGETBOUNDS )}, NULL },
{ "FT_MYLIMIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MYLIMIT )}, NULL },
{ "FT_MGETX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MGETX )}, NULL },
{ "FT_MGETY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MGETY )}, NULL },
{ "FT_MGETPAGE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MGETPAGE )}, NULL },
{ "FT_MSETPAGE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_MSETPAGE )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MOUSE1, "hbnf\\mouse1.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MOUSE1
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MOUSE1 )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_MDBLCLK )
{
	static const HB_BYTE pcode[] =
	{
		13,5,6,176,1,0,96,1,0,122,20,2,176,1,
		0,96,2,0,121,20,2,176,1,0,96,3,0,101,
		0,0,0,0,0,0,224,63,10,1,20,2,176,1,
		0,96,4,0,176,2,0,12,0,20,2,176,1,0,
		96,5,0,176,3,0,12,0,20,2,176,1,0,96,
		6,0,176,4,0,12,0,20,2,95,4,80,7,95,
		5,80,8,95,1,121,8,165,80,10,80,9,95,10,
		31,69,176,5,0,95,2,96,11,0,96,7,0,96,
		8,0,20,4,176,6,0,95,7,92,8,18,12,1,
		80,7,176,6,0,95,8,92,8,18,12,1,80,8,
		95,11,121,15,80,9,176,4,0,12,0,95,6,49,
		95,3,16,21,31,5,73,95,9,80,10,25,187,95,
		9,21,28,17,73,95,7,95,4,8,21,28,8,73,
		95,8,95,5,8,80,9,95,1,121,15,28,9,176,
		4,0,12,0,80,6,95,9,28,101,9,165,80,10,
		80,9,95,10,31,69,176,5,0,95,2,96,11,0,
		96,7,0,96,8,0,20,4,176,6,0,95,7,92,
		8,18,12,1,80,7,176,6,0,95,8,92,8,18,
		12,1,80,8,95,11,121,15,80,9,176,4,0,12,
		0,95,6,49,95,3,16,21,31,5,73,95,9,80,
		10,25,187,95,9,21,28,17,73,95,7,95,4,8,
		21,28,8,73,95,8,95,5,8,80,9,95,9,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MINREGION )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,2,0,12,0,95,1,16,21,28,35,
		73,176,2,0,12,0,95,3,34,21,28,23,73,176,
		3,0,12,0,95,2,16,21,28,11,73,176,3,0,
		12,0,95,4,34,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MMICKEYS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,2,0,12,0,92,8,65,80,1,176,
		3,0,12,0,92,8,65,80,2,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MGETPOS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,2,0,12,0,92,8,65,80,1,176,
		3,0,12,0,92,8,65,80,2,176,10,0,12,0,
		28,5,122,25,3,121,176,11,0,12,0,28,6,92,
		2,25,3,121,72,176,12,0,12,0,28,6,92,4,
		25,3,121,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MSETPOS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,14,0,95,1,92,8,18,95,2,92,
		8,18,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MGETCOORD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,2,0,12,0,80,1,176,3,0,12,
		0,80,2,176,10,0,12,0,28,5,122,25,3,121,
		176,11,0,12,0,28,6,92,2,25,3,121,72,176,
		12,0,12,0,28,6,92,4,25,3,121,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MSETCOORD )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,14,0,95,1,95,2,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MSETSENS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,176,18,0,96,4,0,96,5,0,96,6,
		0,20,3,176,19,0,96,1,0,95,4,20,2,176,
		19,0,96,2,0,95,5,20,2,176,19,0,96,3,
		0,95,6,20,2,176,20,0,95,1,95,2,95,3,
		20,3,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MVERSION )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,92,20,80,1,92,2,80,2,92,3,80,
		3,92,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MINIT )
{
	static const HB_BYTE pcode[] =
	{
		116,41,0,103,2,0,31,14,176,23,0,12,0,121,
		69,82,2,0,25,7,176,24,0,20,0,103,2,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MRESET )
{
	static const HB_BYTE pcode[] =
	{
		116,41,0,9,82,1,0,176,25,0,20,0,176,24,
		0,20,0,176,14,0,176,26,0,12,0,23,92,2,
		18,176,27,0,12,0,23,92,2,18,20,2,176,28,
		0,12,0,28,6,92,255,25,3,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MCURSOR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,41,0,103,1,0,80,2,176,30,0,
		95,1,12,1,28,22,95,1,165,82,1,0,28,9,
		176,31,0,20,0,25,7,176,25,0,20,0,95,2,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MSHOWCRS )
{
	static const HB_BYTE pcode[] =
	{
		116,41,0,176,31,0,20,0,120,82,1,0,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MHIDECRS )
{
	static const HB_BYTE pcode[] =
	{
		116,41,0,176,25,0,20,0,9,82,1,0,100,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MXLIMIT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,176,35,0,96,3,0,100,96,4,0,20,
		3,176,24,0,95,3,95,1,95,4,95,2,20,4,
		100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MYLIMIT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,176,35,0,100,96,3,0,100,96,4,0,
		20,4,176,24,0,95,1,95,3,95,2,95,4,20,
		4,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MGETX )
{
	static const HB_BYTE pcode[] =
	{
		176,2,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MGETY )
{
	static const HB_BYTE pcode[] =
	{
		176,3,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MGETPAGE )
{
	static const HB_BYTE pcode[] =
	{
		121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FT_MSETPAGE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,41,0,2,0,116,41,0,9,82,1,0,9,82,
		2,0,179,2,0,1,0,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}

