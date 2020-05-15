/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbtip\cgi.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TIPCGI );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TIPCGI_NEW );
HB_FUNC_STATIC( TIPCGI_HEADER );
HB_FUNC_STATIC( TIPCGI_REDIRECT );
HB_FUNC_STATIC( TIPCGI_WRITE );
HB_FUNC_STATIC( TIPCGI_FLUSH );
HB_FUNC_STATIC( TIPCGI_ERRHANDLER );
HB_FUNC_STATIC( TIPCGI_STARTHTML );
HB_FUNC_STATIC( TIPCGI_ENDHTML );
HB_FUNC_STATIC( TIPCGI_SAVEHTMLPAGE );
HB_FUNC_STATIC( TIPCGI_STARTSESSION );
HB_FUNC_STATIC( TIPCGI_DESTROYSESSION );
HB_FUNC_EXTERN( TIP_GENERATESID );
HB_FUNC_EXTERN( TIP_CHECKSID );
HB_FUNC_STATIC( TIPCGI_SESSIONENCODE );
HB_FUNC_STATIC( TIPCGI_SESSIONDECODE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( GETENV );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( FREAD );
HB_FUNC_EXTERN( HB_GETSTDIN );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( HB_ATOKENS );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( TIP_URLDECODE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_HEVAL );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( HB_GETSTDOUT );
HB_FUNC_EXTERN( HB_BLEN );
HB_FUNC_EXTERN( HB_DIRTEMP );
HB_FUNC_EXTERN( HB_MEMOWRIT );
HB_FUNC_EXTERN( HB_DIRSEPADD );
HB_FUNC_EXTERN( HB_VFOPEN );
HB_FUNC_EXTERN( HB_VFWRITE );
HB_FUNC_EXTERN( HB_CSTR );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( HB_VFCLOSE );
HB_FUNC_EXTERN( HB_HGETREF );
HB_FUNC_EXTERN( HB_VFEXISTS );
HB_FUNC_EXTERN( HB_VFSIZE );
HB_FUNC_EXTERN( HB_VFSEEK );
HB_FUNC_EXTERN( HB_VFREAD );
HB_FUNC_EXTERN( HB_SERIALIZE );
HB_FUNC_EXTERN( HB_ISHASH );
HB_FUNC_EXTERN( HB_DESERIALIZE );
HB_FUNC_EXTERN( HB_VFERASE );
HB_FUNC_EXTERN( TIP_DATETOGMT );
HB_FUNC_EXTERN( HB_DATETIME );
HB_FUNC_EXTERN( HB_ISOBJECT );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC_EXTERN( TIP_HTMLSPECIALCHARS );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( OUTERR );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_STATIC( HTMLOPTION );
HB_FUNC_STATIC( HTMLTAG );
HB_FUNC_STATIC( HTMLSCRIPT );
HB_FUNC_STATIC( HTMLSTYLE );
HB_FUNC_STATIC( HTMLLINKREL );
HB_FUNC_STATIC( HTMLALLOPTION );
HB_FUNC_EXTERN( HB_HDEL );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CGI )
{ "TIPCGI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPCGI_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_NEW )}, NULL },
{ "TIPCGI_HEADER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_HEADER )}, NULL },
{ "TIPCGI_REDIRECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_REDIRECT )}, NULL },
{ "TIPCGI_WRITE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_WRITE )}, NULL },
{ "TIPCGI_FLUSH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_FLUSH )}, NULL },
{ "TIPCGI_ERRHANDLER", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_ERRHANDLER )}, NULL },
{ "TIPCGI_STARTHTML", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_STARTHTML )}, NULL },
{ "TIPCGI_ENDHTML", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_ENDHTML )}, NULL },
{ "TIPCGI_SAVEHTMLPAGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_SAVEHTMLPAGE )}, NULL },
{ "TIPCGI_STARTSESSION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_STARTSESSION )}, NULL },
{ "TIPCGI_DESTROYSESSION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_DESTROYSESSION )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_GENERATESID", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_GENERATESID )}, NULL },
{ "TIP_CHECKSID", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_CHECKSID )}, NULL },
{ "TIPCGI_SESSIONENCODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_SESSIONENCODE )}, NULL },
{ "TIPCGI_SESSIONDECODE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIPCGI_SESSIONDECODE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_BSAVEDERRHANDLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "ERRHANDLER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CCGIHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHTMLPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "GETENV", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETENV )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "FREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREAD )}, NULL },
{ "HB_GETSTDIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GETSTDIN )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "_HTTP_RAW_POST_DATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ATOKENS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ATOKENS )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "TIP_URLDECODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_URLDECODE )}, NULL },
{ "HPOSTS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HGETS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HCOOKIES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_HEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HEVAL )}, NULL },
{ "CCGIHEADER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHTMLPAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "HB_GETSTDOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GETSTDOUT )}, NULL },
{ "HB_BLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEN )}, NULL },
{ "LDUMPHTML", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CDUMPSAVEPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CDUMPSAVEPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DIRTEMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRTEMP )}, NULL },
{ "HB_MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MEMOWRIT )}, NULL },
{ "HB_DIRSEPADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRSEPADD )}, NULL },
{ "CSID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSESSIONSAVEPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_VFOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFOPEN )}, NULL },
{ "SESSIONENCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_VFWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFWRITE )}, NULL },
{ "WRITE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_CSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CSTR )}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "HB_VFCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFCLOSE )}, NULL },
{ "HB_HGETREF", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HGETREF )}, NULL },
{ "_CSESSIONSAVEPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_VFEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFEXISTS )}, NULL },
{ "HB_VFSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFSIZE )}, NULL },
{ "HB_VFSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFSEEK )}, NULL },
{ "HB_VFREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFREAD )}, NULL },
{ "SESSIONDECODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREATESID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HSESSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_SERIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SERIALIZE )}, NULL },
{ "HSESSION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISHASH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISHASH )}, NULL },
{ "HB_DESERIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DESERIALIZE )}, NULL },
{ "HB_VFERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFERASE )}, NULL },
{ "TIP_DATETOGMT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_DATETOGMT )}, NULL },
{ "HB_DATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DATETIME )}, NULL },
{ "HB_ISOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISOBJECT )}, NULL },
{ "DESCRIPTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERATION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSYSTEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "FILENAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_HTMLSPECIALCHARS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_HTMLSPECIALCHARS )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "OUTERR", {HB_FS_PUBLIC}, {HB_FUNCNAME( OUTERR )}, NULL },
{ "FLUSH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__QUIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __QUIT )}, NULL },
{ "HTMLOPTION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTMLOPTION )}, NULL },
{ "HTMLTAG", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTMLTAG )}, NULL },
{ "HTMLSCRIPT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTMLSCRIPT )}, NULL },
{ "HTMLSTYLE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTMLSTYLE )}, NULL },
{ "HTMLLINKREL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTMLLINKREL )}, NULL },
{ "HTMLALLOPTION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HTMLALLOPTION )}, NULL },
{ "HB_HDEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HDEL )}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CGI, "..\\contrib\\hbtip\\cgi.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CGI
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CGI )
   #include "hbiniseg.h"
#endif

HB_FUNC( TIPCGI )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,113,0,103,1,0,100,8,29,127,3,
		176,1,0,104,1,0,12,1,29,116,3,166,54,3,
		0,122,80,1,48,2,0,176,3,0,12,0,106,7,
		84,73,80,67,103,105,0,108,4,4,1,0,108,0,
		112,3,80,2,48,5,0,95,2,100,100,95,1,106,
		19,72,84,84,80,95,82,65,87,95,80,79,83,84,
		95,68,65,84,65,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,100,95,1,106,11,99,67,103,105,
		72,101,97,100,101,114,0,4,1,0,9,112,5,73,
		48,5,0,95,2,100,100,95,1,106,10,99,72,116,
		109,108,80,97,103,101,0,4,1,0,9,112,5,73,
		48,5,0,95,2,100,177,0,0,95,1,106,6,104,
		71,101,116,115,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,177,0,0,95,1,106,7,104,80,111,
		115,116,115,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,177,0,0,95,1,106,9,104,67,111,111,
		107,105,101,115,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,177,0,0,95,1,106,9,104,83,101,
		115,115,105,111,110,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,100,95,1,106,17,98,83,97,118,
		101,100,69,114,114,72,97,110,100,108,101,114,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,100,95,
		1,106,17,99,83,101,115,115,105,111,110,83,97,118,
		101,80,97,116,104,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,100,95,1,106,5,99,83,73,68,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		100,95,1,106,14,99,68,117,109,112,83,97,118,101,
		80,97,116,104,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,9,95,1,106,10,108,68,117,109,112,
		72,116,109,108,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,100,95,1,106,6,67,97,114,103,111,
		0,4,1,0,9,112,5,73,48,6,0,95,2,106,
		4,78,101,119,0,108,7,95,1,112,3,73,48,6,
		0,95,2,106,7,72,101,97,100,101,114,0,108,8,
		95,1,112,3,73,48,6,0,95,2,106,9,82,101,
		100,105,114,101,99,116,0,108,9,95,1,112,3,73,
		48,6,0,95,2,106,6,87,114,105,116,101,0,108,
		10,95,1,112,3,73,48,6,0,95,2,106,6,70,
		108,117,115,104,0,108,11,95,1,112,3,73,48,6,
		0,95,2,106,11,69,114,114,72,97,110,100,108,101,
		114,0,108,12,95,1,112,3,73,48,6,0,95,2,
		106,10,83,116,97,114,116,72,116,109,108,0,108,13,
		95,1,112,3,73,48,6,0,95,2,106,8,69,110,
		100,72,116,109,108,0,108,14,95,1,112,3,73,48,
		6,0,95,2,106,13,83,97,118,101,72,116,109,108,
		80,97,103,101,0,108,15,95,1,112,3,73,48,6,
		0,95,2,106,13,83,116,97,114,116,83,101,115,115,
		105,111,110,0,108,16,95,1,112,3,73,48,6,0,
		95,2,106,15,68,101,115,116,114,111,121,83,101,115,
		115,105,111,110,0,108,17,95,1,112,3,73,48,18,
		0,95,2,106,10,67,114,101,97,116,101,83,73,68,
		0,89,22,0,2,0,0,0,48,19,0,95,1,176,
		20,0,95,2,12,1,112,1,6,95,1,112,3,73,
		48,18,0,95,2,106,12,67,104,101,99,107,67,114,
		99,83,73,68,0,89,17,0,3,0,0,0,176,21,
		0,95,2,95,3,12,2,6,95,1,112,3,73,48,
		6,0,95,2,106,14,83,101,115,115,105,111,110,69,
		110,99,111,100,101,0,108,22,95,1,112,3,73,48,
		6,0,95,2,106,14,83,101,115,115,105,111,110,68,
		101,99,111,100,101,0,108,23,95,1,112,3,73,48,
		24,0,95,2,112,0,73,167,14,0,0,176,25,0,
		104,1,0,95,2,20,2,168,48,26,0,95,2,112,
		0,80,3,176,27,0,95,3,106,10,73,110,105,116,
		67,108,97,115,115,0,12,2,28,12,48,28,0,95,
		3,164,146,1,0,73,95,3,110,7,48,26,0,103,
		1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,6,0,102,80,1,48,29,0,95,1,176,30,0,
		89,19,0,1,0,1,0,1,0,48,31,0,95,255,
		95,1,112,1,6,12,1,112,1,73,48,32,0,95,
		1,106,1,0,112,1,73,48,33,0,95,1,106,1,
		0,112,1,73,106,5,80,79,83,84,0,176,34,0,
		176,35,0,106,15,82,69,81,85,69,83,84,95,77,
		69,84,72,79,68,0,12,1,12,1,24,29,217,0,
		176,36,0,176,35,0,106,15,67,79,78,84,69,78,
		84,95,76,69,78,71,84,72,0,12,1,12,1,80,
		3,176,37,0,95,3,12,1,80,5,176,38,0,176,
		39,0,12,0,96,5,0,95,3,12,3,165,80,4,
		95,3,69,28,64,48,31,0,95,1,106,17,112,111,
		115,116,32,101,114,114,111,114,32,114,101,97,100,32,
		0,176,40,0,95,4,12,1,72,106,13,32,105,110,
		115,116,101,97,100,32,111,102,32,0,72,176,40,0,
		95,3,12,1,72,112,1,73,26,203,0,48,41,0,
		95,1,95,5,112,1,73,176,42,0,95,5,106,2,
		38,0,12,2,96,6,0,129,1,1,28,61,176,43,
		0,176,42,0,95,6,106,2,61,0,12,2,165,80,
		2,12,1,92,2,8,28,34,176,44,0,95,2,92,
		2,1,12,1,48,45,0,95,1,112,0,176,46,0,
		176,44,0,95,2,122,1,12,1,12,1,2,130,31,
		199,132,25,111,176,47,0,176,35,0,106,13,81,85,
		69,82,89,95,83,84,82,73,78,71,0,12,1,165,
		80,5,12,1,31,81,176,42,0,95,5,106,2,38,
		0,12,2,96,6,0,129,1,1,28,61,176,43,0,
		176,42,0,95,6,106,2,61,0,12,2,165,80,2,
		12,1,92,2,8,28,34,176,44,0,95,2,92,2,
		1,12,1,48,48,0,95,1,112,0,176,46,0,176,
		44,0,95,2,122,1,12,1,12,1,2,130,31,199,
		132,176,47,0,176,35,0,106,12,72,84,84,80,95,
		67,79,79,75,73,69,0,12,1,165,80,5,12,1,
		31,81,176,42,0,95,5,106,2,59,0,12,2,96,
		6,0,129,1,1,28,61,176,43,0,176,42,0,95,
		6,106,2,61,0,12,2,165,80,2,12,1,92,2,
		8,28,34,176,44,0,95,2,92,2,1,12,1,48,
		49,0,95,1,112,0,176,46,0,176,44,0,95,2,
		122,1,12,1,12,1,2,130,31,199,132,95,1,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_HEADER )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,50,0,95,1,12,1,28,31,176,47,
		0,95,1,12,1,31,22,48,32,0,102,147,95,1,
		106,2,13,0,72,106,2,10,0,72,135,25,36,48,
		32,0,102,147,106,26,67,111,110,116,101,110,116,45,
		84,121,112,101,58,32,116,101,120,116,47,104,116,109,
		108,13,10,0,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_REDIRECT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,50,0,95,1,12,1,28,43,176,47,
		0,95,1,12,1,31,34,48,32,0,102,147,106,11,
		76,111,99,97,116,105,111,110,58,32,0,95,1,72,
		106,2,13,0,72,106,2,10,0,72,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_FLUSH )
{
	static const HB_BYTE pcode[] =
	{
		13,6,0,102,80,1,176,51,0,48,49,0,95,1,
		112,0,89,58,0,2,0,1,0,1,0,48,32,0,
		95,255,147,106,13,83,101,116,45,67,111,111,107,105,
		101,58,32,0,95,1,72,106,2,61,0,72,95,2,
		72,106,2,59,0,72,106,2,13,0,72,106,2,10,
		0,72,139,6,20,2,48,52,0,95,1,112,0,106,
		2,13,0,72,106,2,10,0,72,48,53,0,95,1,
		112,0,72,106,2,13,0,72,106,2,10,0,72,80,
		2,176,54,0,176,55,0,12,0,95,2,12,2,176,
		56,0,95,2,12,1,8,80,3,48,57,0,95,1,
		112,0,28,63,48,58,0,95,1,112,0,100,8,28,
		15,48,59,0,95,1,176,60,0,12,0,112,1,73,
		176,61,0,176,62,0,48,58,0,95,1,112,0,12,
		1,106,10,100,117,109,112,46,104,116,109,108,0,72,
		48,53,0,95,1,112,0,20,2,48,32,0,95,1,
		106,1,0,112,1,73,48,33,0,95,1,106,1,0,
		112,1,73,176,47,0,48,63,0,95,1,112,0,12,
		1,32,243,0,176,62,0,48,64,0,95,1,112,0,
		12,1,106,11,83,69,83,83,73,79,78,73,68,95,
		0,72,48,63,0,95,1,112,0,72,80,5,176,65,
		0,95,5,93,17,3,12,2,165,80,4,100,69,28,
		114,48,66,0,95,1,112,0,80,6,176,67,0,95,
		4,95,6,12,2,176,56,0,95,6,12,1,69,28,
		77,48,68,0,95,1,106,33,69,82,82,79,82,58,
		32,79,110,32,119,114,105,116,105,110,103,32,115,101,
		115,115,105,111,110,32,102,105,108,101,58,32,0,95,
		5,72,106,15,44,32,70,105,108,101,32,101,114,114,
		111,114,58,32,0,72,176,69,0,176,70,0,12,0,
		12,1,72,112,1,73,176,71,0,95,4,20,1,25,
		77,48,68,0,95,1,106,33,69,82,82,79,82,58,
		32,79,110,32,119,114,105,116,105,110,103,32,115,101,
		115,115,105,111,110,32,102,105,108,101,58,32,0,95,
		5,72,106,15,44,32,70,105,108,101,32,101,114,114,
		111,114,58,32,0,72,176,69,0,176,70,0,12,0,
		12,1,72,112,1,73,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_SAVEHTMLPAGE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,61,0,95,1,48,53,0,102,112,0,
		106,2,13,0,72,106,2,10,0,72,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_STARTSESSION )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,176,50,0,95,1,12,1,28,11,176,47,
		0,95,1,12,1,28,85,176,72,0,48,48,0,102,
		112,0,106,10,83,69,83,83,73,79,78,73,68,0,
		96,1,0,12,3,31,57,176,72,0,48,45,0,102,
		112,0,106,10,83,69,83,83,73,79,78,73,68,0,
		96,1,0,12,3,31,29,176,72,0,48,49,0,102,
		112,0,106,10,83,69,83,83,73,79,78,73,68,0,
		96,1,0,12,3,73,48,64,0,102,112,0,100,8,
		28,14,48,73,0,102,176,60,0,12,0,112,1,73,
		176,47,0,95,1,12,1,32,18,1,48,19,0,102,
		95,1,112,1,73,176,62,0,48,64,0,102,112,0,
		12,1,106,11,83,69,83,83,73,79,78,73,68,95,
		0,72,95,1,72,80,3,176,74,0,95,3,12,1,
		29,157,0,176,65,0,95,3,121,12,2,165,80,2,
		100,69,29,226,0,176,75,0,95,2,12,1,80,4,
		176,76,0,95,2,121,121,20,3,176,37,0,95,4,
		12,1,80,5,176,77,0,95,2,96,5,0,95,4,
		12,3,95,4,69,28,78,48,31,0,102,106,33,69,
		82,82,79,82,58,32,79,110,32,114,101,97,100,105,
		110,103,32,115,101,115,115,105,111,110,32,102,105,108,
		101,58,32,0,95,3,72,106,15,44,32,70,105,108,
		101,32,101,114,114,111,114,58,32,0,72,176,69,0,
		176,70,0,12,0,12,1,72,112,1,73,25,11,48,
		78,0,102,95,5,112,1,73,176,71,0,95,2,20,
		1,25,87,48,31,0,102,106,33,69,82,82,79,82,
		58,32,79,110,32,111,112,101,110,105,110,103,32,115,
		101,115,115,105,111,110,32,102,105,108,101,58,32,0,
		95,3,72,106,18,44,32,102,105,108,101,32,110,111,
		116,32,101,120,105,115,116,46,0,72,112,1,73,25,
		19,48,79,0,102,112,0,73,48,80,0,102,177,0,
		0,112,1,73,48,63,0,102,112,0,48,49,0,102,
		112,0,106,10,83,69,83,83,73,79,78,73,68,0,
		2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_SESSIONENCODE )
{
	static const HB_BYTE pcode[] =
	{
		176,81,0,48,82,0,102,112,0,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_SESSIONDECODE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,83,0,48,80,0,102,176,84,0,95,
		1,12,1,112,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_DESTROYSESSION )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,176,50,0,95,1,12,1,28,17,176,47,
		0,95,1,12,1,31,8,95,1,80,3,25,10,48,
		63,0,102,112,0,80,3,176,47,0,95,3,12,1,
		32,215,0,48,80,0,102,177,0,0,112,1,73,176,
		62,0,48,64,0,102,112,0,12,1,106,11,83,69,
		83,83,73,79,78,73,68,95,0,72,95,3,72,80,
		2,176,85,0,95,2,12,1,92,255,69,165,80,4,
		28,84,95,3,106,12,59,32,101,120,112,105,114,101,
		115,61,32,0,72,176,86,0,176,87,0,12,0,17,
		12,1,72,48,49,0,102,112,0,106,10,83,69,83,
		83,73,79,78,73,68,0,2,48,79,0,102,112,0,
		73,48,63,0,102,112,0,48,49,0,102,112,0,106,
		10,83,69,83,83,73,79,78,73,68,0,2,25,77,
		48,68,0,102,106,34,69,82,82,79,82,58,32,79,
		110,32,100,101,108,101,116,105,110,103,32,115,101,115,
		115,105,111,110,32,102,105,108,101,58,32,0,95,2,
		72,106,15,44,32,70,105,108,101,32,101,114,114,111,
		114,58,32,0,72,176,69,0,176,70,0,12,0,12,
		1,72,112,1,73,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_ERRHANDLER )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,106,48,60,116,97,98,108,101,32,98,111,
		114,100,101,114,61,34,49,34,62,60,116,114,62,60,
		116,100,62,83,67,82,73,80,84,32,78,65,77,69,
		58,60,47,116,100,62,60,116,100,62,0,176,35,0,
		106,12,83,67,82,73,80,84,95,78,65,77,69,0,
		12,1,72,106,11,60,47,116,100,62,60,47,116,114,
		62,0,72,80,3,176,88,0,95,1,12,1,29,13,
		1,96,3,0,106,33,60,116,114,62,60,116,100,62,
		67,82,73,84,73,67,65,76,32,69,82,82,79,82,
		58,60,47,116,100,62,60,116,100,62,0,48,89,0,
		95,1,112,0,72,106,11,60,47,116,100,62,60,47,
		116,114,62,0,72,106,28,60,116,114,62,60,116,100,
		62,79,80,69,82,65,84,73,79,78,58,60,47,116,
		100,62,60,116,100,62,0,72,48,90,0,95,1,112,
		0,72,106,11,60,47,116,100,62,60,47,116,114,62,
		0,72,106,27,60,116,114,62,60,116,100,62,79,83,
		32,69,82,82,79,82,58,60,47,116,100,62,60,116,
		100,62,0,72,176,40,0,48,91,0,95,1,112,0,
		12,1,72,106,5,32,73,78,32,0,72,48,92,0,
		95,1,112,0,72,106,2,47,0,72,176,40,0,48,
		93,0,95,1,112,0,12,1,72,106,11,60,47,116,
		100,62,60,47,116,114,62,0,72,106,27,60,116,114,
		62,60,116,100,62,70,73,76,69,78,65,77,69,58,
		60,47,116,100,62,60,116,100,62,0,72,176,94,0,
		48,95,0,95,1,112,0,92,40,12,2,72,106,11,
		60,47,116,100,62,60,47,116,114,62,0,72,135,25,
		71,176,50,0,95,1,12,1,28,62,96,3,0,106,
		32,60,116,114,62,60,116,100,62,69,82,82,79,82,
		32,77,69,83,83,65,71,69,58,60,47,116,100,62,
		60,116,100,62,0,176,96,0,95,1,12,1,72,106,
		11,60,47,116,100,62,60,47,116,114,62,0,72,135,
		121,80,2,176,47,0,176,97,0,175,2,0,12,1,
		12,1,31,78,96,3,0,106,28,60,116,114,62,60,
		116,100,62,80,82,79,67,47,76,73,78,69,58,60,
		47,116,100,62,60,116,100,62,0,176,97,0,95,2,
		12,1,72,106,2,47,0,72,176,40,0,176,98,0,
		95,2,12,1,12,1,72,106,11,60,47,116,100,62,
		60,47,116,114,62,0,72,135,25,167,96,3,0,106,
		9,60,47,116,97,98,108,101,62,0,135,48,68,0,
		102,95,3,112,1,73,176,99,0,95,3,20,1,48,
		100,0,102,112,0,73,176,101,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_WRITE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,48,33,0,102,147,95,1,106,2,13,0,
		72,106,2,10,0,72,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_STARTHTML )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,48,33,0,102,147,106,45,60,33,68,79,
		67,84,89,80,69,32,104,116,109,108,62,13,10,60,
		104,116,109,108,62,60,104,101,97,100,62,60,109,101,
		116,97,32,99,104,97,114,115,101,116,61,34,0,176,
		102,0,95,1,106,9,101,110,99,111,100,105,110,103,
		0,12,2,72,106,5,34,32,47,62,0,72,176,103,
		0,95,1,106,6,116,105,116,108,101,0,106,6,116,
		105,116,108,101,0,12,3,72,176,104,0,95,1,12,
		1,72,176,105,0,95,1,12,1,72,176,106,0,95,
		1,12,1,72,106,8,60,47,104,101,97,100,62,0,
		72,106,7,60,98,111,100,121,32,0,72,176,107,0,
		95,1,12,1,72,106,2,62,0,72,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TIPCGI_ENDHTML )
{
	static const HB_BYTE pcode[] =
	{
		48,33,0,102,147,106,15,60,47,98,111,100,121,62,
		60,47,104,116,109,108,62,0,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTMLTAG )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,176,83,0,95,1,12,1,28,36,176,47,
		0,95,2,12,1,31,27,95,2,95,1,24,28,20,
		95,1,95,2,1,80,4,176,108,0,95,1,95,2,
		20,2,25,7,106,1,0,80,4,95,4,106,1,0,
		8,28,14,176,109,0,95,3,106,1,0,12,2,80,
		4,95,4,106,1,0,8,28,6,95,4,110,7,106,
		2,60,0,95,2,72,106,2,62,0,72,95,4,72,
		106,3,60,47,0,72,95,2,72,106,2,62,0,72,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTMLOPTION )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,106,1,0,80,6,176,83,0,95,1,12,
		1,28,103,176,47,0,95,2,12,1,28,8,95,1,
		80,6,25,88,95,2,95,1,24,28,81,95,1,95,
		2,1,80,6,176,109,0,95,5,9,12,2,28,11,
		176,108,0,95,1,95,2,20,2,95,2,106,2,61,
		0,72,106,2,34,0,72,95,6,72,106,2,34,0,
		72,80,6,176,50,0,95,3,12,1,28,9,95,3,
		95,6,72,80,6,176,50,0,95,4,12,1,28,8,
		96,6,0,95,4,135,95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTMLALLOPTION )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,106,1,0,80,3,176,83,0,95,1,12,
		1,28,54,176,110,0,96,2,0,106,2,32,0,20,
		2,176,51,0,95,1,89,33,0,1,0,3,0,3,
		0,1,0,2,0,96,255,255,176,102,0,95,254,95,
		1,100,100,120,12,5,95,253,72,139,6,20,2,95,
		3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTMLSCRIPT )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,106,1,0,80,3,176,110,0,96,2,0,
		106,7,115,99,114,105,112,116,0,20,2,176,72,0,
		95,1,95,2,96,4,0,12,3,29,70,1,176,72,
		0,95,4,106,4,115,114,99,0,96,5,0,12,3,
		28,126,176,50,0,95,5,12,1,28,9,95,5,4,
		1,0,80,5,176,111,0,95,5,12,1,28,101,106,
		1,0,80,6,176,112,0,95,5,89,81,0,1,0,
		1,0,6,0,96,255,255,106,14,60,115,99,114,105,
		112,116,32,115,114,99,61,34,0,95,1,72,106,35,
		34,32,116,121,112,101,61,34,116,101,120,116,47,106,
		97,118,97,115,99,114,105,112,116,34,62,60,47,115,
		99,114,105,112,116,62,0,72,106,2,13,0,72,106,
		2,10,0,72,139,6,20,2,96,3,0,95,6,135,
		176,72,0,95,4,106,4,118,97,114,0,96,5,0,
		12,3,29,156,0,176,50,0,95,5,12,1,28,9,
		95,5,4,1,0,80,5,176,111,0,95,5,12,1,
		29,130,0,106,1,0,80,6,176,112,0,95,5,89,
		16,0,1,0,1,0,6,0,96,255,255,95,1,139,
		6,20,2,96,3,0,106,40,60,115,99,114,105,112,
		116,32,116,121,112,101,61,34,116,101,120,116,47,106,
		97,118,97,115,99,114,105,112,116,34,62,13,10,60,
		33,45,45,13,10,0,95,6,72,106,2,13,0,72,
		106,2,10,0,72,106,4,45,45,62,0,72,106,2,
		13,0,72,106,2,10,0,72,106,10,60,47,115,99,
		114,105,112,116,62,0,72,106,2,13,0,72,106,2,
		10,0,72,135,176,108,0,95,1,95,2,20,2,95,
		3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTMLSTYLE )
{
	static const HB_BYTE pcode[] =
	{
		13,4,2,106,1,0,80,3,176,110,0,96,2,0,
		106,6,115,116,121,108,101,0,20,2,176,72,0,95,
		1,95,2,96,4,0,12,3,29,60,1,176,72,0,
		95,4,106,4,115,114,99,0,96,5,0,12,3,28,
		126,176,50,0,95,5,12,1,28,9,95,5,4,1,
		0,80,5,176,111,0,95,5,12,1,28,101,106,1,
		0,80,6,176,112,0,95,5,89,81,0,1,0,1,
		0,6,0,96,255,255,106,30,60,108,105,110,107,32,
		114,101,108,61,34,83,116,121,108,101,83,104,101,101,
		116,34,32,104,114,101,102,61,34,0,95,1,72,106,
		19,34,32,116,121,112,101,61,34,116,101,120,116,47,
		99,115,115,34,62,0,72,106,2,13,0,72,106,2,
		10,0,72,139,6,20,2,96,3,0,95,6,135,176,
		72,0,95,4,106,4,118,97,114,0,96,5,0,12,
		3,29,146,0,176,50,0,95,5,12,1,28,9,95,
		5,4,1,0,80,5,176,111,0,95,5,12,1,28,
		120,106,1,0,80,6,176,112,0,95,5,89,16,0,
		1,0,1,0,6,0,96,255,255,95,1,139,6,20,
		2,96,3,0,106,32,60,115,116,121,108,101,32,116,
		121,112,101,61,34,116,101,120,116,47,99,115,115,34,
		62,13,10,60,33,45,45,13,10,0,95,6,72,106,
		2,13,0,72,106,2,10,0,72,106,4,45,45,62,
		0,72,106,2,13,0,72,106,2,10,0,72,106,9,
		60,47,115,116,121,108,101,62,0,72,106,2,13,0,
		72,106,2,10,0,72,135,176,108,0,95,1,95,2,
		20,2,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HTMLLINKREL )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,106,1,0,80,3,176,110,0,96,2,0,
		106,5,108,105,110,107,0,20,2,176,72,0,95,1,
		95,2,96,4,0,12,3,29,132,0,176,72,0,95,
		4,106,4,114,101,108,0,96,5,0,12,3,28,104,
		176,50,0,95,5,12,1,28,11,95,5,95,5,4,
		2,0,80,5,176,111,0,95,5,12,1,28,77,176,
		112,0,95,5,89,68,0,1,0,1,0,3,0,96,
		255,255,106,12,60,108,105,110,107,32,114,101,108,61,
		34,0,95,1,122,1,72,106,9,34,32,104,114,101,
		102,61,34,0,72,95,1,92,2,1,72,106,4,34,
		47,62,0,72,106,2,13,0,72,106,2,10,0,72,
		139,6,20,2,176,108,0,95,1,95,2,20,2,95,
		3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,113,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

