/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbmisc\fileread.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TFILEREAD );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TFILEREAD_NEW );
HB_FUNC_STATIC( TFILEREAD_OPEN );
HB_FUNC_STATIC( TFILEREAD_CLOSE );
HB_FUNC_STATIC( TFILEREAD_READLINE );
HB_FUNC_STATIC( TFILEREAD_NAME );
HB_FUNC_STATIC( TFILEREAD_ISOPEN );
HB_FUNC_STATIC( TFILEREAD_MORETOREAD );
HB_FUNC_STATIC( TFILEREAD_ERROR );
HB_FUNC_STATIC( TFILEREAD_ERRORNO );
HB_FUNC_STATIC( TFILEREAD_ERRORMSG );
HB_FUNC_STATIC( TFILEREAD_EOL_POS );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( FREADSTR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FILEREAD )
{ "TFILEREAD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TFILEREAD_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_NEW )}, NULL },
{ "TFILEREAD_OPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_OPEN )}, NULL },
{ "TFILEREAD_CLOSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_CLOSE )}, NULL },
{ "TFILEREAD_READLINE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_READLINE )}, NULL },
{ "TFILEREAD_NAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_NAME )}, NULL },
{ "TFILEREAD_ISOPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_ISOPEN )}, NULL },
{ "TFILEREAD_MORETOREAD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_MORETOREAD )}, NULL },
{ "TFILEREAD_ERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_ERROR )}, NULL },
{ "TFILEREAD_ERRORNO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_ERRORNO )}, NULL },
{ "TFILEREAD_ERRORMSG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_ERRORMSG )}, NULL },
{ "TFILEREAD_EOL_POS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TFILEREAD_EOL_POS )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NHAN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LEOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLASTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NREADSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NHAN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "EOL_POS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "CBUFFER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FREADSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREADSTR )}, NULL },
{ "NREADSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "NERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "NLASTOP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FILEREAD, "hbmisc\\fileread.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FILEREAD
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FILEREAD )
   #include "hbiniseg.h"
#endif

HB_FUNC( TFILEREAD )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,50,0,103,1,0,100,8,29,18,2,
		176,1,0,104,1,0,12,1,29,7,2,166,201,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,10,
		84,70,105,108,101,82,101,97,100,0,108,4,4,1,
		0,108,0,112,3,80,2,48,5,0,95,2,100,100,
		95,1,106,6,99,70,105,108,101,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,100,95,1,106,5,
		110,72,97,110,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,100,95,1,106,5,108,69,79,70,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,100,
		95,1,106,7,110,69,114,114,111,114,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,100,95,1,106,
		8,110,76,97,115,116,79,112,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,100,95,1,106,8,99,
		66,117,102,102,101,114,0,4,1,0,9,112,5,73,
		48,5,0,95,2,100,100,95,1,106,10,110,82,101,
		97,100,83,105,122,101,0,4,1,0,9,112,5,73,
		48,6,0,95,2,106,4,78,101,119,0,108,7,95,
		1,112,3,73,48,6,0,95,2,106,5,79,112,101,
		110,0,108,8,95,1,112,3,73,48,6,0,95,2,
		106,6,67,108,111,115,101,0,108,9,95,1,112,3,
		73,48,6,0,95,2,106,9,82,101,97,100,76,105,
		110,101,0,108,10,95,1,112,3,73,48,6,0,95,
		2,106,5,78,97,109,101,0,108,11,95,1,112,3,
		73,48,6,0,95,2,106,7,73,115,79,112,101,110,
		0,108,12,95,1,112,3,73,48,6,0,95,2,106,
		11,77,111,114,101,84,111,82,101,97,100,0,108,13,
		95,1,112,3,73,48,6,0,95,2,106,6,69,114,
		114,111,114,0,108,14,95,1,112,3,73,48,6,0,
		95,2,106,8,69,114,114,111,114,78,111,0,108,15,
		95,1,112,3,73,48,6,0,95,2,106,9,69,114,
		114,111,114,77,115,103,0,108,16,95,1,112,3,73,
		92,2,80,1,48,6,0,95,2,106,8,69,79,76,
		95,112,111,115,0,108,17,95,1,112,3,73,48,18,
		0,95,2,112,0,73,167,14,0,0,176,19,0,104,
		1,0,95,2,20,2,168,48,20,0,95,2,112,0,
		80,3,176,21,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,22,0,95,3,
		164,146,1,0,73,95,3,110,7,48,20,0,103,1,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,95,2,100,8,31,8,95,2,122,35,28,
		7,93,0,16,80,2,48,23,0,102,95,1,112,1,
		73,48,24,0,102,92,255,112,1,73,48,25,0,102,
		120,112,1,73,48,26,0,102,121,112,1,73,48,27,
		0,102,122,112,1,73,48,28,0,102,106,1,0,112,
		1,73,48,29,0,102,95,2,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_OPEN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,48,30,0,102,112,0,92,255,8,28,92,
		95,1,100,8,28,6,92,64,80,1,48,27,0,102,
		92,2,112,1,73,48,24,0,102,176,31,0,48,32,
		0,102,112,0,95,1,12,2,112,1,73,48,30,0,
		102,112,0,92,255,8,28,24,48,26,0,102,176,33,
		0,12,0,112,1,73,48,25,0,102,120,112,1,73,
		25,68,48,26,0,102,121,112,1,73,48,25,0,102,
		9,112,1,73,25,50,176,34,0,48,30,0,102,112,
		0,121,12,2,121,8,28,12,48,25,0,102,9,112,
		1,73,25,14,48,26,0,102,176,33,0,12,0,112,
		1,73,48,28,0,102,106,1,0,112,1,73,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_READLINE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,0,106,1,0,80,1,48,27,0,102,92,3,
		112,1,73,48,30,0,102,112,0,92,255,8,28,14,
		48,26,0,102,92,255,112,1,73,26,3,1,48,35,
		0,102,112,0,80,2,95,2,121,34,31,21,95,2,
		176,36,0,48,37,0,102,112,0,12,1,92,3,49,
		15,28,88,48,38,0,102,112,0,31,80,176,39,0,
		48,30,0,102,112,0,48,40,0,102,112,0,12,2,
		80,1,176,41,0,95,1,12,1,28,34,48,26,0,
		102,176,33,0,12,0,112,1,73,48,42,0,102,112,
		0,121,8,28,20,48,25,0,102,120,112,1,73,25,
		10,48,28,0,102,147,95,1,135,48,35,0,102,112,
		0,80,2,25,147,95,2,121,34,28,22,48,37,0,
		102,112,0,80,1,48,28,0,102,106,1,0,112,1,
		73,25,113,95,2,122,15,28,20,176,43,0,48,37,
		0,102,112,0,95,2,17,12,2,80,1,25,7,106,
		1,0,80,1,176,44,0,48,37,0,102,112,0,95,
		2,92,3,12,3,106,4,13,13,10,0,8,28,8,
		126,2,3,0,25,34,176,44,0,48,37,0,102,112,
		0,95,2,92,2,12,3,106,3,13,10,0,8,28,
		8,126,2,2,0,25,5,174,2,0,48,28,0,102,
		176,44,0,48,37,0,102,112,0,95,2,12,2,112,
		1,73,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_EOL_POS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,176,45,0,106,2,13,0,48,37,0,102,
		112,0,12,2,80,1,176,45,0,106,2,10,0,48,
		37,0,102,112,0,12,2,80,2,95,1,121,8,28,
		8,95,2,80,3,25,25,95,2,121,8,28,8,95,
		1,80,3,25,13,176,46,0,95,1,95,2,12,2,
		80,3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_CLOSE )
{
	static const HB_BYTE pcode[] =
	{
		48,27,0,102,92,4,112,1,73,48,25,0,102,120,
		112,1,73,48,30,0,102,112,0,92,255,8,28,13,
		48,26,0,102,92,255,112,1,73,25,42,176,47,0,
		48,30,0,102,112,0,20,1,48,26,0,102,176,33,
		0,12,0,112,1,73,48,24,0,102,92,255,112,1,
		73,48,25,0,102,120,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_NAME )
{
	static const HB_BYTE pcode[] =
	{
		48,32,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_ISOPEN )
{
	static const HB_BYTE pcode[] =
	{
		48,30,0,102,112,0,92,255,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_MORETOREAD )
{
	static const HB_BYTE pcode[] =
	{
		48,38,0,102,112,0,68,21,31,15,73,176,41,0,
		48,37,0,102,112,0,12,1,68,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_ERROR )
{
	static const HB_BYTE pcode[] =
	{
		48,42,0,102,112,0,121,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_ERRORNO )
{
	static const HB_BYTE pcode[] =
	{
		48,42,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TFILEREAD_ERRORMSG )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,116,50,0,48,42,0,102,112,0,121,8,
		28,49,106,34,78,111,32,101,114,114,111,114,115,32,
		104,97,118,101,32,98,101,101,110,32,114,101,99,111,
		114,100,101,100,32,102,111,114,32,0,48,32,0,102,
		112,0,72,80,2,25,101,48,48,0,102,112,0,122,
		35,31,13,48,48,0,102,112,0,92,4,15,28,7,
		122,80,3,25,11,48,48,0,102,112,0,23,80,3,
		176,41,0,95,1,12,1,28,7,106,1,0,25,4,
		95,1,106,7,69,114,114,111,114,32,0,72,176,49,
		0,48,42,0,102,112,0,12,1,72,106,2,32,0,
		72,103,2,0,95,3,1,72,106,2,32,0,72,48,
		32,0,102,112,0,72,80,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,50,0,2,0,116,50,0,106,3,111,110,0,106,
		20,99,114,101,97,116,105,110,103,32,111,98,106,101,
		99,116,32,102,111,114,0,106,8,111,112,101,110,105,
		110,103,0,106,13,114,101,97,100,105,110,103,32,102,
		114,111,109,0,106,8,99,108,111,115,105,110,103,0,
		4,5,0,82,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}
