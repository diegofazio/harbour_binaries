/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbziparc\ziparc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( SETZIPREADONLY );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC( HB_SETZIPCOMMENT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC( HB_GETZIPCOMMENT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( HB_FNAMEEXTSETDEF );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_UNZIPOPEN );
HB_FUNC_EXTERN( HB_UNZIPGLOBALINFO );
HB_FUNC_EXTERN( HB_UNZIPCLOSE );
HB_FUNC( HB_GETFILECOUNT );
HB_FUNC( HB_ZIPWITHPASSWORD );
HB_FUNC_EXTERN( HB_UNZIPFILEFIRST );
HB_FUNC_EXTERN( HB_UNZIPFILEINFO );
HB_FUNC( HB_GETFILESINZIP );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HB_NUMTOHEX );
HB_FUNC_EXTERN( HB_UNZIPFILENEXT );
HB_FUNC( HB_ZIPTESTPK );
HB_FUNC( HB_SETDISKZIP );
HB_FUNC( TRANSFERFROMZIP );
HB_FUNC( HB_SETBUFFER );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( MIN );
HB_FUNC( HB_ZIPFILEBYTDSPAN );
HB_FUNC( HB_ZIPFILE );
HB_FUNC( HB_ZIPFILEBYPKSPAN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( HB_FILEEXISTS );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( HB_ZIPOPEN );
HB_FUNC_EXTERN( HB_FNAMENAMEEXT );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( HB_FNAMESPLIT );
HB_FUNC_EXTERN( HB_LEFTEQ );
HB_FUNC_EXTERN( HB_PS );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_PATHJOIN );
HB_FUNC_EXTERN( HB_CWD );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( HB_FILEMATCH );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( HB_ISEVALITEM );
HB_FUNC_EXTERN( HB_FSIZE );
HB_FUNC_EXTERN( HB_FGETDATETIME );
HB_FUNC_EXTERN( HB_OSDRIVESEPARATOR );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( HB_ZIPFILECREATE );
HB_FUNC_EXTERN( HB_FNAMEMERGE );
HB_FUNC_EXTERN( HB_ZIPFILECRC32 );
HB_FUNC_EXTERN( FREAD );
HB_FUNC_EXTERN( HB_BLEN );
HB_FUNC_EXTERN( HB_ZIPFILEWRITE );
HB_FUNC_EXTERN( HB_ZIPFILECLOSE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( HB_FGETATTR );
HB_FUNC_EXTERN( HB_FSETATTR );
HB_FUNC_EXTERN( HB_BITAND );
HB_FUNC_EXTERN( HB_ZIPCLOSE );
HB_FUNC( HB_UNZIPFILE );
HB_FUNC_EXTERN( HB_DIREXISTS );
HB_FUNC_EXTERN( HB_DIRCREATE );
HB_FUNC_EXTERN( HB_FNAMEDIR );
HB_FUNC_EXTERN( HB_DIRSEPADD );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( HB_UNZIPFILEOPEN );
HB_FUNC_EXTERN( HB_UNZIPFILEREAD );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( HB_UNZIPFILECLOSE );
HB_FUNC_EXTERN( HB_FSETDATETIME );
HB_FUNC( HB_UNZIPFILEINDEX );
HB_FUNC( HB_UNZIPALLFILE );
HB_FUNC( HB_ZIPDELETEFILES );
HB_FUNC_EXTERN( HB_ZIPDELETEFILE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ZIPARC )
{ "SETZIPREADONLY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SETZIPREADONLY )}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "HB_SETZIPCOMMENT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_SETZIPCOMMENT )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_GETZIPCOMMENT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_GETZIPCOMMENT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "HB_FNAMEEXTSETDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEEXTSETDEF )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_UNZIPOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPOPEN )}, NULL },
{ "HB_UNZIPGLOBALINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPGLOBALINFO )}, NULL },
{ "HB_UNZIPCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPCLOSE )}, NULL },
{ "HB_GETFILECOUNT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_GETFILECOUNT )}, NULL },
{ "HB_ZIPWITHPASSWORD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_ZIPWITHPASSWORD )}, NULL },
{ "HB_UNZIPFILEFIRST", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPFILEFIRST )}, NULL },
{ "HB_UNZIPFILEINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPFILEINFO )}, NULL },
{ "HB_GETFILESINZIP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_GETFILESINZIP )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "HB_NUMTOHEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NUMTOHEX )}, NULL },
{ "HB_UNZIPFILENEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPFILENEXT )}, NULL },
{ "HB_ZIPTESTPK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_ZIPTESTPK )}, NULL },
{ "HB_SETDISKZIP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_SETDISKZIP )}, NULL },
{ "TRANSFERFROMZIP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRANSFERFROMZIP )}, NULL },
{ "HB_SETBUFFER", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_SETBUFFER )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "HB_ZIPFILEBYTDSPAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_ZIPFILEBYTDSPAN )}, NULL },
{ "HB_ZIPFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_ZIPFILE )}, NULL },
{ "HB_ZIPFILEBYPKSPAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_ZIPFILEBYPKSPAN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "HB_FILEEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FILEEXISTS )}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "HB_ZIPOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZIPOPEN )}, NULL },
{ "HB_FNAMENAMEEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMENAMEEXT )}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL },
{ "HB_FNAMESPLIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMESPLIT )}, NULL },
{ "HB_LEFTEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LEFTEQ )}, NULL },
{ "HB_PS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PS )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "HB_PATHJOIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PATHJOIN )}, NULL },
{ "HB_CWD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CWD )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "HB_FILEMATCH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FILEMATCH )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "HB_ISEVALITEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISEVALITEM )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_FSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FSIZE )}, NULL },
{ "HB_FGETDATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FGETDATETIME )}, NULL },
{ "HB_OSDRIVESEPARATOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSDRIVESEPARATOR )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "HB_ZIPFILECREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZIPFILECREATE )}, NULL },
{ "HB_FNAMEMERGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEMERGE )}, NULL },
{ "HB_ZIPFILECRC32", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZIPFILECRC32 )}, NULL },
{ "FREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREAD )}, NULL },
{ "HB_BLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEN )}, NULL },
{ "HB_ZIPFILEWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZIPFILEWRITE )}, NULL },
{ "HB_ZIPFILECLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZIPFILECLOSE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "HB_FGETATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FGETATTR )}, NULL },
{ "HB_FSETATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FSETATTR )}, NULL },
{ "HB_BITAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BITAND )}, NULL },
{ "HB_ZIPCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZIPCLOSE )}, NULL },
{ "HB_UNZIPFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_UNZIPFILE )}, NULL },
{ "HB_DIREXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIREXISTS )}, NULL },
{ "HB_DIRCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRCREATE )}, NULL },
{ "HB_FNAMEDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEDIR )}, NULL },
{ "HB_DIRSEPADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRSEPADD )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "HB_UNZIPFILEOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPFILEOPEN )}, NULL },
{ "HB_UNZIPFILEREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPFILEREAD )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "HB_UNZIPFILECLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UNZIPFILECLOSE )}, NULL },
{ "HB_FSETDATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FSETDATETIME )}, NULL },
{ "HB_UNZIPFILEINDEX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_UNZIPFILEINDEX )}, NULL },
{ "HB_UNZIPALLFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_UNZIPALLFILE )}, NULL },
{ "HB_ZIPDELETEFILES", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_ZIPDELETEFILES )}, NULL },
{ "HB_ZIPDELETEFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZIPDELETEFILE )}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_ZIPARC, "hbziparc\\ziparc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_ZIPARC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_ZIPARC )
   #include "hbiniseg.h"
#endif

HB_FUNC( SETZIPREADONLY )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,78,0,176,1,0,95,1,9,12,2,
		82,3,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_SETZIPCOMMENT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,78,0,95,1,100,8,31,11,176,3,
		0,95,1,12,1,28,7,95,1,82,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_GETZIPCOMMENT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,5,0,92,109,12,1,28,18,176,6,
		0,95,1,106,5,46,122,105,112,0,12,2,80,1,
		176,7,0,176,8,0,95,1,12,1,165,80,2,12,
		1,28,9,106,1,0,80,3,25,20,176,9,0,95,
		2,100,96,3,0,20,3,176,10,0,95,2,20,1,
		95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_GETFILECOUNT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,5,0,92,109,12,1,28,18,176,6,
		0,95,1,106,5,46,122,105,112,0,12,2,80,1,
		176,7,0,176,8,0,95,1,12,1,165,80,2,12,
		1,28,7,121,80,3,25,19,176,9,0,95,2,96,
		3,0,20,2,176,10,0,95,2,20,1,95,3,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_ZIPWITHPASSWORD )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,9,80,2,176,5,0,92,109,12,1,28,
		18,176,6,0,95,1,106,5,46,122,105,112,0,12,
		2,80,1,176,7,0,176,8,0,95,1,12,1,165,
		80,3,12,1,31,38,176,13,0,95,3,12,1,121,
		8,28,20,176,14,0,95,3,100,100,100,100,100,100,
		100,100,96,2,0,20,10,176,10,0,95,3,20,1,
		95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_GETFILESINZIP )
{
	static const HB_BYTE pcode[] =
	{
		13,13,2,4,0,0,80,15,176,5,0,92,109,12,
		1,28,18,176,6,0,95,1,106,5,46,122,105,112,
		0,12,2,80,1,176,7,0,176,8,0,95,1,12,
		1,165,80,3,12,1,32,172,0,176,16,0,96,2,
		0,9,20,2,176,13,0,95,3,12,1,80,4,95,
		4,121,8,29,140,0,176,14,0,95,3,96,1,0,
		96,5,0,96,6,0,96,9,0,100,96,10,0,96,
		7,0,96,8,0,96,11,0,96,12,0,96,14,0,
		20,12,95,2,28,76,95,7,121,15,28,26,92,100,
		95,8,92,100,65,95,7,18,49,80,13,95,13,121,
		35,28,10,121,80,13,25,5,121,80,13,176,17,0,
		95,15,95,1,95,7,95,10,95,8,95,13,95,5,
		95,6,176,18,0,95,14,92,8,12,2,95,9,95,
		11,95,12,4,11,0,20,2,25,11,176,17,0,95,
		15,95,1,20,2,176,19,0,95,3,12,1,80,4,
		26,115,255,176,10,0,95,3,20,1,95,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_ZIPTESTPK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_SETDISKZIP )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TRANSFERFROMZIP )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_SETBUFFER )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,116,78,0,176,24,0,95,3,12,1,28,
		23,95,3,122,16,28,17,176,25,0,95,3,97,0,
		128,0,0,12,2,82,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_ZIPFILEBYTDSPAN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,12,176,27,0,95,1,95,2,95,3,95,4,
		95,5,95,6,95,8,95,9,95,10,95,11,95,12,
		20,11,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_ZIPFILEBYPKSPAN )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,176,27,0,164,124,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_ZIPFILE )
{
	static const HB_BYTE pcode[] =
	{
		13,18,11,116,78,0,176,29,0,103,1,0,12,1,
		80,15,176,16,0,96,5,0,9,20,2,176,16,0,
		96,10,0,9,20,2,176,5,0,92,109,12,1,28,
		18,176,6,0,95,1,106,5,46,122,105,112,0,12,
		2,80,1,95,5,28,18,176,30,0,95,1,12,1,
		28,9,176,31,0,95,1,20,1,176,7,0,176,32,
		0,95,1,95,5,31,15,176,30,0,95,1,12,1,
		28,6,92,2,25,3,100,12,2,165,80,12,12,1,
		32,0,3,176,3,0,95,2,12,1,28,9,95,2,
		4,1,0,80,2,176,3,0,95,11,12,1,28,9,
		95,11,4,1,0,80,11,176,33,0,95,1,12,1,
		4,1,0,80,26,176,1,0,95,11,4,0,0,12,
		2,96,28,0,129,1,1,28,64,106,2,63,0,95,
		28,24,31,11,106,2,42,0,95,28,24,28,34,176,
		34,0,95,28,12,1,96,29,0,129,1,1,28,16,
		176,17,0,95,26,95,29,122,1,20,2,130,31,244,
		132,25,11,176,17,0,95,26,95,28,20,2,130,31,
		196,132,4,0,0,80,27,176,1,0,95,2,4,0,
		0,12,2,96,28,0,129,1,1,29,246,0,176,35,
		0,95,28,96,22,0,100,100,96,21,0,20,5,176,
		36,0,95,22,106,2,46,0,176,37,0,12,0,72,
		12,2,28,29,176,38,0,95,22,176,39,0,106,2,
		46,0,176,37,0,12,0,72,12,1,23,12,2,80,
		22,25,212,106,2,63,0,95,28,24,31,11,106,2,
		42,0,95,28,24,28,87,95,10,28,16,176,40,0,
		176,41,0,12,0,95,22,12,2,80,22,176,34,0,
		95,28,12,1,96,29,0,129,1,1,28,51,176,42,
		0,95,26,89,21,0,1,0,1,0,29,0,176,43,
		0,95,255,122,1,95,1,12,2,6,12,2,121,8,
		28,16,176,17,0,95,27,95,22,95,29,122,1,72,
		20,2,130,31,209,132,25,77,176,33,0,95,28,12,
		1,80,19,176,42,0,95,26,89,19,0,1,0,1,
		0,19,0,176,43,0,95,255,95,1,12,2,6,12,
		2,121,8,28,38,176,30,0,95,28,12,1,28,29,
		176,17,0,95,27,95,10,28,16,176,40,0,176,41,
		0,12,0,95,28,12,2,25,4,95,28,20,2,130,
		32,16,255,132,100,80,26,176,16,0,96,7,0,9,
		20,2,176,16,0,96,8,0,9,20,2,122,80,17,
		95,27,96,16,0,129,1,1,29,70,1,176,44,0,
		95,16,12,1,165,80,13,92,255,69,29,50,1,176,
		45,0,95,4,12,1,28,17,48,46,0,95,4,95,
		16,95,17,174,17,0,112,2,73,121,80,18,176,47,
		0,95,16,12,1,80,23,176,48,0,95,16,96,24,
		0,20,2,176,35,0,95,16,96,22,0,96,19,0,
		96,20,0,96,21,0,20,5,95,7,28,79,95,8,
		31,78,176,7,0,95,21,12,1,31,37,176,36,0,
		95,22,96,21,0,176,49,0,12,0,139,12,2,28,
		19,176,38,0,95,22,176,39,0,95,21,12,1,23,
		12,2,80,22,176,50,0,95,22,122,12,2,106,3,
		92,47,0,24,28,18,176,38,0,95,22,92,2,12,
		2,80,22,25,229,100,80,22,176,51,0,95,12,176,
		52,0,95,22,95,19,95,20,12,3,95,24,100,100,
		100,100,95,3,95,6,176,7,0,95,6,12,1,28,
		5,100,25,9,176,53,0,95,16,12,1,100,20,11,
		176,54,0,95,13,96,15,0,176,55,0,95,15,12,
		1,12,3,165,80,14,121,15,28,42,176,45,0,95,
		9,12,1,28,20,96,18,0,95,14,135,48,46,0,
		95,9,95,18,95,23,112,2,73,176,56,0,95,12,
		95,15,95,14,20,3,25,194,176,57,0,95,12,20,
		1,176,58,0,95,13,20,1,176,59,0,95,16,96,
		25,0,12,2,28,18,176,60,0,95,16,176,61,0,
		95,25,92,223,12,2,20,2,130,32,192,254,132,176,
		62,0,95,12,103,2,0,20,2,120,110,7,9,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_UNZIPFILE )
{
	static const HB_BYTE pcode[] =
	{
		13,13,7,116,78,0,120,80,8,176,29,0,103,1,
		0,12,1,80,20,176,1,0,95,3,9,12,2,28,
		25,176,64,0,95,5,12,1,31,16,176,65,0,95,
		5,12,1,121,69,28,5,9,80,8,176,7,0,95,
		4,12,1,28,5,100,80,4,176,5,0,92,109,12,
		1,28,18,176,6,0,95,1,106,5,46,122,105,112,
		0,12,2,80,1,176,7,0,176,8,0,95,1,12,
		1,165,80,9,12,1,28,8,9,80,8,26,82,1,
		176,24,0,95,6,12,1,31,11,176,3,0,95,6,
		12,1,28,9,95,6,4,1,0,80,6,176,7,0,
		95,5,12,1,28,11,176,66,0,95,1,12,1,80,
		5,176,67,0,95,5,12,1,80,5,121,80,11,176,
		13,0,95,9,12,1,80,10,95,10,121,8,29,4,
		1,174,11,0,176,14,0,95,9,96,12,0,96,18,
		0,96,19,0,100,100,100,96,15,0,12,8,121,8,
		29,218,0,176,7,0,95,6,12,1,21,31,46,73,
		176,42,0,95,6,95,11,12,2,121,15,21,31,31,
		73,176,42,0,95,6,89,19,0,1,0,1,0,12,
		0,176,43,0,95,255,95,1,12,2,6,12,2,121,
		15,80,13,95,13,29,157,0,176,68,0,95,5,95,
		12,72,12,1,165,80,14,92,255,69,29,138,0,176,
		69,0,95,9,95,4,12,2,121,69,28,8,9,80,
		8,26,131,0,121,80,16,176,70,0,95,9,96,20,
		0,176,55,0,95,20,12,1,12,3,165,80,17,121,
		15,28,42,176,45,0,95,7,12,1,28,20,96,16,
		0,95,17,135,48,46,0,95,7,95,16,95,15,112,
		2,73,176,71,0,95,14,95,20,95,17,20,3,25,
		194,176,72,0,95,9,20,1,176,58,0,95,14,20,
		1,176,73,0,95,5,95,12,72,95,18,95,19,20,
		3,176,45,0,95,2,12,1,28,14,48,46,0,95,
		2,95,12,95,11,112,2,73,176,19,0,95,9,12,
		1,80,10,26,251,254,176,10,0,95,9,20,1,95,
		8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_UNZIPFILEINDEX )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,176,63,0,164,124,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_UNZIPALLFILE )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,176,63,0,164,124,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_ZIPDELETEFILES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,120,80,3,176,5,0,92,109,12,1,28,
		18,176,6,0,95,1,106,5,46,122,105,112,0,12,
		2,80,1,176,3,0,95,2,12,1,28,9,95,2,
		4,1,0,80,2,95,2,96,4,0,129,1,1,28,
		22,95,3,21,28,12,73,176,77,0,95,1,95,4,
		12,2,80,3,130,31,238,132,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,78,0,3,0,116,78,0,97,0,128,0,0,82,
		1,0,9,82,3,0,179,3,0,1,0,2,0,3,
		0,7
	};

	hb_vmExecute( pcode, symbols );
}
