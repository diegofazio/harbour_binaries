/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "xhb\tframe.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( THTMLFRAMESET );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( THTMLFRAMESET_NEW );
HB_FUNC_STATIC( THTMLFRAMESET_STARTSET );
HB_FUNC_STATIC( THTMLFRAMESET_ENDSET );
HB_FUNC_STATIC( THTMLFRAMESET_END );
HB_FUNC_STATIC( THTMLFRAMESET_FRAME );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TFRAME )
{ "THTMLFRAMESET", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( THTMLFRAMESET )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "THTMLFRAMESET_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( THTMLFRAMESET_NEW )}, NULL },
{ "THTMLFRAMESET_STARTSET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( THTMLFRAMESET_STARTSET )}, NULL },
{ "THTMLFRAMESET_ENDSET", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( THTMLFRAMESET_ENDSET )}, NULL },
{ "THTMLFRAMESET_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( THTMLFRAMESET_END )}, NULL },
{ "THTMLFRAMESET_FRAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( THTMLFRAMESET_FRAME )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "_FNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_TITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "FNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "TITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSTR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "__ENUMINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "NH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSTR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TFRAME, "xhb\\tframe.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TFRAME
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TFRAME )
   #include "hbiniseg.h"
#endif

HB_FUNC( THTMLFRAMESET )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,36,0,103,1,0,100,8,29,73,1,
		176,1,0,104,1,0,12,1,29,62,1,166,0,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,14,
		84,72,116,109,108,70,114,97,109,101,83,101,116,0,
		108,4,4,1,0,108,0,112,3,80,2,48,5,0,
		95,2,100,100,95,1,106,3,110,72,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,100,95,1,106,
		6,70,78,97,109,101,0,4,1,0,9,112,5,73,
		48,5,0,95,2,100,106,1,0,95,1,106,5,99,
		83,116,114,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,106,11,70,114,97,109,101,83,101,116,48,
		49,0,95,1,106,6,84,73,84,76,69,0,4,1,
		0,9,112,5,73,48,6,0,95,2,106,4,78,101,
		119,0,108,7,95,1,112,3,73,48,6,0,95,2,
		106,9,83,116,97,114,116,83,101,116,0,108,8,95,
		1,112,3,73,48,6,0,95,2,106,7,69,110,100,
		83,101,116,0,108,9,95,1,112,3,73,48,6,0,
		95,2,106,4,69,110,100,0,108,10,95,1,112,3,
		73,48,6,0,95,2,106,6,70,114,97,109,101,0,
		108,11,95,1,112,3,73,48,12,0,95,2,112,0,
		73,167,14,0,0,176,13,0,104,1,0,95,2,20,
		2,168,48,14,0,95,2,112,0,80,3,176,15,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,16,0,95,3,164,146,1,0,73,
		95,3,110,7,48,14,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( THTMLFRAMESET_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,17,0,96,2,0,106,1,0,20,2,
		48,18,0,102,95,1,112,1,73,48,19,0,102,95,
		2,112,1,73,176,20,0,48,21,0,102,112,0,12,
		1,28,27,106,1,0,80,3,48,22,0,102,176,23,
		0,48,21,0,102,112,0,12,1,112,1,73,25,42,
		106,28,67,111,110,116,101,110,116,45,84,121,112,101,
		58,32,116,101,120,116,47,104,116,109,108,13,10,13,
		10,0,80,3,48,22,0,102,122,112,1,73,96,3,
		0,106,27,60,104,116,109,108,62,13,10,32,60,104,
		101,97,100,62,13,10,32,32,60,116,105,116,108,101,
		62,0,48,24,0,102,112,0,72,106,9,60,47,116,
		105,116,108,101,62,0,72,106,2,13,0,72,106,2,
		10,0,72,106,9,32,60,47,104,101,97,100,62,0,
		72,106,2,13,0,72,106,2,10,0,72,135,48,25,
		0,102,147,95,3,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( THTMLFRAMESET_STARTSET )
{
	static const HB_BYTE pcode[] =
	{
		13,2,4,106,14,13,10,32,60,102,114,97,109,101,
		115,101,116,32,0,80,5,176,26,0,95,1,12,1,
		28,73,176,27,0,95,1,12,1,31,64,96,5,0,
		106,8,32,114,111,119,115,61,34,0,135,95,1,96,
		6,0,129,1,1,28,31,48,28,0,96,6,0,112,
		0,122,15,28,10,96,5,0,106,2,44,0,135,96,
		5,0,95,6,135,130,31,229,132,96,5,0,106,2,
		34,0,135,176,26,0,95,2,12,1,28,73,176,27,
		0,95,2,12,1,31,64,96,5,0,106,8,32,99,
		111,108,115,61,34,0,135,95,2,96,6,0,129,1,
		1,28,31,48,28,0,96,6,0,112,0,122,15,28,
		10,96,5,0,106,2,44,0,135,96,5,0,95,6,
		135,130,31,229,132,96,5,0,106,2,34,0,135,176,
		20,0,95,3,12,1,28,34,96,5,0,176,29,0,
		92,7,12,1,106,10,32,111,110,76,111,97,100,61,
		34,0,72,95,3,72,106,2,34,0,72,135,176,20,
		0,95,4,12,1,28,36,96,5,0,176,29,0,92,
		5,12,1,106,12,32,111,110,85,110,76,111,97,100,
		61,34,0,72,95,4,72,106,2,34,0,72,135,96,
		5,0,106,5,32,62,13,10,0,135,48,25,0,102,
		147,95,5,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( THTMLFRAMESET_ENDSET )
{
	static const HB_BYTE pcode[] =
	{
		48,25,0,102,147,106,15,32,60,47,102,114,97,109,
		101,115,101,116,62,13,10,0,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( THTMLFRAMESET_END )
{
	static const HB_BYTE pcode[] =
	{
		48,25,0,102,147,106,10,60,47,104,116,109,108,62,
		13,10,0,135,176,30,0,48,31,0,102,112,0,48,
		32,0,102,112,0,20,2,48,21,0,102,112,0,100,
		69,28,13,176,33,0,48,31,0,102,112,0,20,1,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( THTMLFRAMESET_FRAME )
{
	static const HB_BYTE pcode[] =
	{
		13,1,9,176,17,0,96,3,0,120,20,2,176,17,
		0,96,4,0,120,20,2,176,17,0,96,5,0,9,
		20,2,176,17,0,96,9,0,106,5,65,85,84,79,
		0,20,2,176,17,0,96,8,0,106,6,95,115,101,
		108,102,0,20,2,106,10,32,32,60,102,114,97,109,
		101,32,0,80,10,176,20,0,95,1,12,1,28,24,
		96,10,0,106,8,32,110,97,109,101,61,34,0,95,
		1,72,106,2,34,0,72,135,176,20,0,95,2,12,
		1,28,23,96,10,0,106,7,32,115,114,99,61,34,
		0,95,2,72,106,2,34,0,72,135,176,20,0,95,
		8,12,1,28,26,96,10,0,106,10,32,116,97,114,
		103,101,116,61,34,0,95,8,72,106,2,34,0,72,
		135,95,3,31,27,96,10,0,106,17,32,102,114,97,
		109,101,98,111,114,100,101,114,61,34,48,34,0,135,
		25,25,96,10,0,106,17,32,102,114,97,109,101,98,
		111,114,100,101,114,61,34,49,34,0,135,95,4,31,
		18,96,10,0,106,10,32,110,111,114,101,115,105,122,
		101,0,135,176,20,0,95,9,12,1,28,31,96,10,
		0,106,13,32,115,99,114,111,108,108,105,110,103,61,
		34,0,95,9,72,106,2,34,0,72,135,25,74,95,
		5,100,69,28,44,96,10,0,106,12,32,115,99,114,
		111,108,108,105,110,103,61,0,95,5,28,12,106,6,
		34,121,101,115,34,0,25,9,106,5,34,110,111,34,
		0,72,135,25,26,96,10,0,106,18,32,115,99,114,
		111,108,108,105,110,103,61,34,97,117,116,111,34,0,
		135,176,34,0,95,6,12,1,28,31,96,10,0,106,
		15,32,109,97,114,103,105,110,119,105,100,116,104,61,
		32,0,176,35,0,95,6,12,1,72,135,176,34,0,
		95,7,12,1,28,32,96,10,0,106,16,32,109,97,
		114,103,105,110,104,101,105,103,104,116,61,32,0,176,
		35,0,95,7,12,1,72,135,96,10,0,106,4,62,
		13,10,0,135,48,25,0,102,147,95,10,135,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,36,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
