/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "xhb\stream.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FILEREADER );
HB_FUNC( TSTREAMFILEREADER );
HB_FUNC( FILEWRITER );
HB_FUNC( TSTREAMFILEWRITER );
HB_FUNC( TSTREAM );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TSTREAM_COPYTO );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( XHB_ERRORNEW );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( BREAK );
HB_FUNC_STATIC( TSTREAMFILEREADER_NEW );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_STATIC( TSTREAMFILEREADER_READ );
HB_FUNC_STATIC( TSTREAMFILEREADER_READBYTE );
HB_FUNC_STATIC( TSTREAMFILEREADER_FINALIZE );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( FREAD );
HB_FUNC_STATIC( TSTREAMFILEWRITER_NEW );
HB_FUNC_STATIC( TSTREAMFILEWRITER_WRITE );
HB_FUNC_STATIC( TSTREAMFILEWRITER_WRITEBYTE );
HB_FUNC_STATIC( TSTREAMFILEWRITER_FINALIZE );
HB_FUNC_EXTERN( HB_FILEEXISTS );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_STREAM )
{ "FILEREADER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILEREADER )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSTREAMFILEREADER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEREADER )}, NULL },
{ "FILEWRITER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILEWRITER )}, NULL },
{ "TSTREAMFILEWRITER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEWRITER )}, NULL },
{ "TSTREAM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAM )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDVIRTUAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSTREAM_COPYTO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAM_COPYTO )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NLENGTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "LCANWRITE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "XHB_ERRORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( XHB_ERRORNEW )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "BREAK", {HB_FS_PUBLIC}, {HB_FUNCNAME( BREAK )}, NULL },
{ "NPOSITION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SEEK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WRITE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSTREAMFILEREADER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEREADER_NEW )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HANDLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "_HANDLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "TSTREAMFILEREADER_READ", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEREADER_READ )}, NULL },
{ "TSTREAMFILEREADER_READBYTE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEREADER_READBYTE )}, NULL },
{ "SETDESTRUCTOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TSTREAMFILEREADER_FINALIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEREADER_FINALIZE )}, NULL },
{ "_LCANREAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "_NPOSITION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NLENGTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREAD )}, NULL },
{ "TSTREAMFILEWRITER_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEWRITER_NEW )}, NULL },
{ "TSTREAMFILEWRITER_WRITE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEWRITER_WRITE )}, NULL },
{ "TSTREAMFILEWRITER_WRITEBYTE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEWRITER_WRITEBYTE )}, NULL },
{ "TSTREAMFILEWRITER_FINALIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TSTREAMFILEWRITER_FINALIZE )}, NULL },
{ "_LCANWRITE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_FILEEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FILEEXISTS )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_STREAM, "xhb\\stream.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_STREAM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_STREAM )
   #include "hbiniseg.h"
#endif

HB_FUNC( FILEREADER )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,1,0,176,2,0,12,0,95,1,95,
		2,112,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILEWRITER )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,1,0,176,4,0,12,0,95,1,95,
		2,112,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TSTREAM )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,59,0,103,1,0,100,8,29,135,1,
		176,6,0,104,1,0,12,1,29,124,1,166,62,1,
		0,122,80,1,48,1,0,176,7,0,12,0,106,8,
		84,83,116,114,101,97,109,0,108,8,4,1,0,108,
		5,112,3,80,2,48,9,0,95,2,100,9,95,1,
		106,9,108,67,97,110,82,101,97,100,0,4,1,0,
		9,112,5,73,48,9,0,95,2,100,9,95,1,106,
		10,108,67,97,110,87,114,105,116,101,0,4,1,0,
		9,112,5,73,48,9,0,95,2,100,9,95,1,106,
		9,108,67,97,110,83,101,101,107,0,4,1,0,9,
		112,5,73,48,9,0,95,2,100,121,95,1,106,8,
		110,76,101,110,103,116,104,0,4,1,0,9,112,5,
		73,48,9,0,95,2,100,121,95,1,106,10,110,80,
		111,115,105,116,105,111,110,0,4,1,0,9,112,5,
		73,48,10,0,95,2,106,6,67,108,111,115,101,0,
		112,1,73,48,10,0,95,2,106,6,70,108,117,115,
		104,0,112,1,73,48,10,0,95,2,106,5,83,101,
		101,107,0,112,1,73,48,10,0,95,2,106,5,82,
		101,97,100,0,112,1,73,48,10,0,95,2,106,9,
		82,101,97,100,66,121,116,101,0,112,1,73,48,10,
		0,95,2,106,6,87,114,105,116,101,0,112,1,73,
		48,10,0,95,2,106,10,87,114,105,116,101,66,121,
		116,101,0,112,1,73,48,11,0,95,2,106,7,67,
		111,112,121,84,111,0,108,12,95,1,112,3,73,48,
		13,0,95,2,112,0,73,167,14,0,0,176,14,0,
		104,1,0,95,2,20,2,168,48,15,0,95,2,112,
		0,80,3,176,16,0,95,3,106,10,73,110,105,116,
		67,108,97,115,115,0,12,2,28,12,48,17,0,95,
		3,164,146,1,0,73,95,3,110,7,48,15,0,103,
		1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAM_COPYTO )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,48,18,0,102,112,0,80,2,176,19,0,
		93,0,64,12,1,80,3,48,20,0,95,1,112,0,
		31,120,48,21,0,176,22,0,12,0,176,23,0,106,
		7,83,116,114,101,97,109,0,121,93,233,3,176,24,
		0,12,0,106,21,84,97,114,103,101,116,32,110,111,
		116,32,119,114,105,116,97,98,108,101,46,0,176,25,
		0,12,0,12,6,112,1,73,176,26,0,176,23,0,
		106,7,83,116,114,101,97,109,0,121,93,233,3,176,
		24,0,12,0,106,21,84,97,114,103,101,116,32,110,
		111,116,32,119,114,105,116,97,98,108,101,46,0,176,
		25,0,12,0,12,6,20,1,48,27,0,102,112,0,
		80,5,48,28,0,102,121,121,112,2,73,48,28,0,
		95,1,121,121,112,2,73,95,2,121,15,28,38,48,
		29,0,102,96,3,0,121,93,0,64,112,3,80,4,
		48,30,0,95,1,95,3,121,95,4,112,3,73,96,
		2,0,95,4,136,25,216,48,30,0,95,1,106,1,
		0,121,121,112,3,73,48,28,0,102,95,5,121,112,
		2,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TSTREAMFILEREADER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,59,0,103,2,0,100,8,29,92,1,
		176,6,0,104,2,0,12,1,29,81,1,166,19,1,
		0,122,80,1,48,1,0,176,7,0,12,0,106,18,
		84,83,116,114,101,97,109,70,105,108,101,82,101,97,
		100,101,114,0,108,5,4,1,0,108,2,112,3,80,
		2,48,9,0,95,2,100,100,95,1,106,6,99,70,
		105,108,101,0,4,1,0,9,112,5,73,48,9,0,
		95,2,100,100,95,1,106,7,72,97,110,100,108,101,
		0,4,1,0,9,112,5,73,48,11,0,95,2,106,
		4,78,101,119,0,108,31,95,1,92,8,72,112,3,
		73,48,32,0,95,2,106,6,67,108,111,115,101,0,
		89,40,0,1,0,0,0,48,33,0,95,1,112,0,
		121,15,28,14,176,34,0,48,33,0,95,1,112,0,
		20,1,48,35,0,95,1,92,254,112,1,6,95,1,
		112,3,73,48,32,0,95,2,106,5,83,101,101,107,
		0,89,24,0,3,0,0,0,176,36,0,48,33,0,
		95,1,112,0,95,2,95,3,12,3,6,95,1,112,
		3,73,48,11,0,95,2,106,5,82,101,97,100,0,
		108,37,95,1,112,3,73,48,11,0,95,2,106,9,
		82,101,97,100,66,121,116,101,0,108,38,95,1,112,
		3,73,48,39,0,95,2,108,40,112,1,73,48,13,
		0,95,2,112,0,73,167,14,0,0,176,14,0,104,
		2,0,95,2,20,2,168,48,15,0,95,2,112,0,
		80,3,176,16,0,95,3,106,10,73,110,105,116,67,
		108,97,115,115,0,12,2,28,12,48,17,0,95,3,
		164,146,1,0,73,95,3,110,7,48,15,0,103,2,
		0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEREADER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,41,0,102,120,112,1,73,48,42,0,
		102,95,1,112,1,73,95,2,100,8,28,6,92,2,
		80,2,48,35,0,102,176,43,0,95,1,95,2,12,
		2,112,1,73,48,33,0,102,112,0,92,255,8,28,
		126,48,21,0,176,22,0,12,0,176,23,0,106,7,
		83,116,114,101,97,109,0,121,93,236,3,176,24,0,
		12,0,106,13,79,112,101,110,32,69,114,114,111,114,
		58,32,0,176,44,0,176,45,0,12,0,12,1,72,
		176,25,0,12,0,12,6,112,1,73,176,26,0,176,
		23,0,106,7,83,116,114,101,97,109,0,121,93,236,
		3,176,24,0,12,0,106,13,79,112,101,110,32,69,
		114,114,111,114,58,32,0,176,44,0,176,45,0,12,
		0,12,1,72,176,25,0,12,0,12,6,20,1,48,
		46,0,102,121,112,1,73,48,47,0,102,176,36,0,
		48,33,0,102,112,0,121,92,2,12,3,112,1,73,
		176,36,0,48,33,0,102,112,0,121,121,20,3,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEREADER_FINALIZE )
{
	static const HB_BYTE pcode[] =
	{
		48,48,0,102,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEREADER_READ )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,176,49,0,48,33,0,102,112,0,96,1,
		0,95,3,95,2,12,4,80,4,48,46,0,102,147,
		95,4,135,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEREADER_READBYTE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,106,2,32,0,80,1,176,49,0,48,33,
		0,102,112,0,96,1,0,122,12,3,122,8,28,12,
		48,46,0,102,147,170,95,1,110,7,106,1,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TSTREAMFILEWRITER )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,59,0,103,3,0,100,8,29,101,1,
		176,6,0,104,3,0,12,1,29,90,1,166,28,1,
		0,122,80,1,48,1,0,176,7,0,12,0,106,18,
		84,83,116,114,101,97,109,70,105,108,101,87,114,105,
		116,101,114,0,108,5,4,1,0,108,4,112,3,80,
		2,48,9,0,95,2,100,100,95,1,106,6,99,70,
		105,108,101,0,4,1,0,9,112,5,73,48,9,0,
		95,2,100,100,95,1,106,7,72,97,110,100,108,101,
		0,4,1,0,9,112,5,73,48,11,0,95,2,106,
		4,78,101,119,0,108,50,95,1,92,8,72,112,3,
		73,48,32,0,95,2,106,6,67,108,111,115,101,0,
		89,40,0,1,0,0,0,48,33,0,95,1,112,0,
		121,15,28,14,176,34,0,48,33,0,95,1,112,0,
		20,1,48,35,0,95,1,92,254,112,1,6,95,1,
		112,3,73,48,32,0,95,2,106,5,83,101,101,107,
		0,89,31,0,3,0,0,0,48,46,0,95,1,176,
		36,0,48,33,0,95,1,112,0,95,2,95,3,12,
		3,112,1,6,95,1,112,3,73,48,11,0,95,2,
		106,6,87,114,105,116,101,0,108,51,95,1,112,3,
		73,48,11,0,95,2,106,10,87,114,105,116,101,66,
		121,116,101,0,108,52,95,1,112,3,73,48,39,0,
		95,2,108,53,112,1,73,48,13,0,95,2,112,0,
		73,167,14,0,0,176,14,0,104,3,0,95,2,20,
		2,168,48,15,0,95,2,112,0,80,3,176,16,0,
		95,3,106,10,73,110,105,116,67,108,97,115,115,0,
		12,2,28,12,48,17,0,95,3,164,146,1,0,73,
		95,3,110,7,48,15,0,103,3,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEWRITER_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,54,0,102,120,112,1,73,48,42,0,
		102,95,1,112,1,73,176,55,0,95,1,12,1,29,
		201,0,176,56,0,96,2,0,92,2,20,2,48,35,
		0,102,176,43,0,95,1,95,2,12,2,112,1,73,
		48,33,0,102,112,0,92,255,8,28,126,48,21,0,
		176,22,0,12,0,176,23,0,106,7,83,116,114,101,
		97,109,0,121,93,236,3,176,24,0,12,0,106,13,
		79,112,101,110,32,69,114,114,111,114,58,32,0,176,
		44,0,176,45,0,12,0,12,1,72,176,25,0,12,
		0,12,6,112,1,73,176,26,0,176,23,0,106,7,
		83,116,114,101,97,109,0,121,93,236,3,176,24,0,
		12,0,106,13,79,112,101,110,32,69,114,114,111,114,
		58,32,0,176,44,0,176,45,0,12,0,12,1,72,
		176,25,0,12,0,12,6,20,1,48,47,0,102,176,
		36,0,48,33,0,102,112,0,121,92,2,12,3,112,
		1,73,48,46,0,102,48,18,0,102,112,0,112,1,
		73,26,184,0,176,56,0,96,2,0,121,20,2,48,
		35,0,102,176,57,0,95,1,95,2,12,2,112,1,
		73,48,33,0,102,112,0,92,255,8,29,131,0,48,
		21,0,176,22,0,12,0,176,23,0,106,7,83,116,
		114,101,97,109,0,121,93,236,3,176,24,0,12,0,
		106,15,67,114,101,97,116,101,32,69,114,114,111,114,
		58,32,0,176,44,0,176,45,0,12,0,12,1,72,
		176,25,0,12,0,12,6,112,1,73,176,26,0,176,
		23,0,106,7,83,116,114,101,97,109,0,121,93,236,
		3,176,24,0,12,0,106,15,67,114,101,97,116,101,
		32,69,114,114,111,114,58,32,0,176,44,0,176,45,
		0,12,0,12,1,72,176,25,0,12,0,12,6,20,
		1,48,46,0,102,121,112,1,73,48,47,0,102,121,
		112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEWRITER_FINALIZE )
{
	static const HB_BYTE pcode[] =
	{
		48,48,0,102,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEWRITER_WRITE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,176,58,0,48,33,0,102,112,0,95,1,
		95,3,95,2,12,4,80,4,48,46,0,102,147,95,
		4,135,95,4,95,3,69,29,163,0,48,21,0,176,
		22,0,12,0,176,23,0,106,7,83,116,114,101,97,
		109,0,121,93,235,3,176,24,0,12,0,106,24,87,
		114,105,116,101,32,102,97,105,108,101,100,32,45,32,
		119,114,105,116,116,101,110,58,0,176,44,0,95,4,
		12,1,72,106,7,32,98,121,116,101,115,0,72,176,
		25,0,12,0,12,6,112,1,73,176,26,0,176,23,
		0,106,7,83,116,114,101,97,109,0,121,93,235,3,
		176,24,0,12,0,106,24,87,114,105,116,101,32,102,
		97,105,108,101,100,32,45,32,119,114,105,116,116,101,
		110,58,0,176,44,0,95,4,12,1,72,106,7,32,
		98,121,116,101,115,0,72,176,25,0,12,0,12,6,
		20,1,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TSTREAMFILEWRITER_WRITEBYTE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,58,0,48,33,0,102,112,0,95,1,
		122,12,3,80,2,48,46,0,102,147,95,2,135,95,
		2,122,69,28,104,48,21,0,176,22,0,12,0,176,
		23,0,106,7,83,116,114,101,97,109,0,121,93,238,
		3,176,24,0,12,0,106,13,87,114,105,116,101,32,
		102,97,105,108,101,100,0,176,25,0,12,0,12,6,
		112,1,73,176,26,0,176,23,0,106,7,83,116,114,
		101,97,109,0,121,93,238,3,176,24,0,12,0,106,
		13,87,114,105,116,101,32,102,97,105,108,101,100,0,
		176,25,0,12,0,12,6,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,59,0,3,0,7
	};

	hb_vmExecute( pcode, symbols );
}

