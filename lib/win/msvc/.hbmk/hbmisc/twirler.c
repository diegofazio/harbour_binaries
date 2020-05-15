/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbmisc\twirler.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TWIRLER );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TWIRLER_NEW );
HB_FUNC_STATIC( TWIRLER_TWIRL );
HB_FUNC_STATIC( TWIRLER_SHOW );
HB_FUNC_STATIC( TWIRLER_HIDE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SECONDS );
HB_FUNC_EXTERN( HB_DISPOUTAT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TWIRLER )
{ "TWIRLER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TWIRLER )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TWIRLER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TWIRLER_NEW )}, NULL },
{ "TWIRLER_TWIRL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TWIRLER_TWIRL )}, NULL },
{ "TWIRLER_SHOW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TWIRLER_SHOW )}, NULL },
{ "TWIRLER_HIDE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TWIRLER_HIDE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_N_ROW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_N_COL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_N_SMOOTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_C_CHARS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "_C_TITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "C_TITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "SECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SECONDS )}, NULL },
{ "N_SECONDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "N_SMOOTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DISPOUTAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPOUTAT )}, NULL },
{ "N_ROW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "N_COL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "C_CHARS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "N_INDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_N_INDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_N_SECONDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TWIRLER, "hbmisc\\twirler.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TWIRLER
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TWIRLER )
   #include "hbiniseg.h"
#endif

HB_FUNC( TWIRLER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,36,0,103,1,0,100,8,29,118,1,
		176,1,0,104,1,0,12,1,29,107,1,166,45,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,8,
		84,119,105,114,108,101,114,0,108,4,4,1,0,108,
		0,112,3,80,2,48,5,0,95,2,100,100,95,1,
		106,6,110,95,82,111,119,0,4,1,0,9,112,5,
		73,48,5,0,95,2,100,100,95,1,106,6,110,95,
		67,111,108,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,100,95,1,106,8,110,95,73,110,100,101,
		120,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,100,95,1,106,10,110,95,83,101,99,111,110,100,
		115,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,100,95,1,106,9,110,95,83,109,111,111,116,104,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		100,95,1,106,8,99,95,67,104,97,114,115,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,100,95,
		1,106,8,99,95,84,105,116,108,101,0,4,1,0,
		9,112,5,73,48,6,0,95,2,106,4,110,101,119,
		0,108,7,95,1,112,3,73,48,6,0,95,2,106,
		6,116,119,105,114,108,0,108,8,95,1,112,3,73,
		48,6,0,95,2,106,5,115,104,111,119,0,108,9,
		95,1,112,3,73,48,6,0,95,2,106,5,104,105,
		100,101,0,108,10,95,1,112,3,73,48,11,0,95,
		2,112,0,73,167,14,0,0,176,12,0,104,1,0,
		95,2,20,2,168,48,13,0,95,2,112,0,80,3,
		176,14,0,95,3,106,10,73,110,105,116,67,108,97,
		115,115,0,12,2,28,12,48,15,0,95,3,164,146,
		1,0,73,95,3,110,7,48,13,0,103,1,0,112,
		0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TWIRLER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,48,16,0,102,95,1,112,1,73,48,17,
		0,102,95,2,112,1,73,48,18,0,102,95,5,112,
		1,73,48,19,0,102,176,20,0,95,4,12,1,28,
		11,106,5,124,47,45,92,0,25,4,95,4,112,1,
		73,48,21,0,102,95,3,112,1,73,176,20,0,48,
		22,0,102,112,0,12,1,28,12,48,21,0,102,106,
		1,0,112,1,73,48,17,0,102,147,176,23,0,48,
		22,0,102,112,0,12,1,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TWIRLER_TWIRL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,24,0,12,0,80,1,176,20,0,48,
		25,0,102,112,0,12,1,31,31,95,1,48,25,0,
		102,112,0,49,48,26,0,102,112,0,16,31,13,95,
		1,48,25,0,102,112,0,35,28,93,176,27,0,48,
		28,0,102,112,0,48,29,0,102,112,0,176,30,0,
		48,31,0,102,112,0,48,32,0,102,112,0,122,12,
		3,20,3,48,33,0,102,147,170,48,32,0,102,112,
		0,176,23,0,48,31,0,102,112,0,12,1,15,28,
		10,48,33,0,102,122,112,1,73,176,20,0,48,25,
		0,102,112,0,12,1,31,11,48,34,0,102,95,1,
		112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TWIRLER_SHOW )
{
	static const HB_BYTE pcode[] =
	{
		48,33,0,102,122,112,1,73,176,20,0,48,26,0,
		102,112,0,12,1,31,16,48,34,0,102,48,26,0,
		102,112,0,66,112,1,73,176,27,0,48,28,0,102,
		112,0,48,29,0,102,112,0,176,23,0,48,22,0,
		102,112,0,12,1,49,48,22,0,102,112,0,20,3,
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TWIRLER_HIDE )
{
	static const HB_BYTE pcode[] =
	{
		176,27,0,48,28,0,102,112,0,48,29,0,102,112,
		0,176,23,0,48,22,0,102,112,0,12,1,49,176,
		35,0,176,23,0,48,22,0,102,112,0,12,1,23,
		12,1,20,3,102,110,7
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
