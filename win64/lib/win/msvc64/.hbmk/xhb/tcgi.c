/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "xhb\tcgi.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TCGI );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( THTML );
HB_FUNC_STATIC( TCGI_NEW );
HB_FUNC_STATIC( TCGI_FIELD );
HB_FUNC_STATIC( TCGI_TOOBJECT );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HTMLPAGEHANDLE );
HB_FUNC_EXTERN( GETENV );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( FREADSTR );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_ATOKENS );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HTMLDECODEURL );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC( PARSESTRING );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC( CGIPARSEVAR );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TCGI )
{ "TCGI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCGI )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "THTML", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTML )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TCGI_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCGI_NEW )}, NULL },
{ "TCGI_FIELD", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCGI_FIELD )}, NULL },
{ "TCGI_TOOBJECT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TCGI_TOOBJECT )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTMLPAGEHANDLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTMLPAGEHANDLE )}, NULL },
{ "_SERVER_SOFTWARE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETENV", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETENV )}, NULL },
{ "_SERVER_NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_GATEWAY_INTERFACE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SERVER_PROTOCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SERVER_PORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_REQUEST_METHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HTTP_ACCEPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HTTP_USER_AGENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HTTP_REFERER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PATH_INFO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PATH_TRANSLATED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SCRIPT_NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_QUERY_STRING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_REMOTE_HOST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_REMOTE_ADDR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_IPADDRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_REMOTE_USER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AUTH_TYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AUTH_USER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AUTH_PASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CONTENT_TYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CONTENT_LENGTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ANNOTATION_SERVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "REQUEST_METHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FREADSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREADSTR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "CONTENT_LENGTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "QUERY_STRING", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AQUERYFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ATOKENS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ATOKENS )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "AQUERYFIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTMLDECODEURL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTMLDECODEURL )}, NULL },
{ "TOOBJECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ADDDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SERVER_SOFTWARE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SERVER_NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GATEWAY_INTERFACE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SERVER_PROTOCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SERVER_PORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTTP_ACCEPT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTTP_USER_AGENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTTP_REFERER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PATH_INFO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PATH_TRANSLATED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SCRIPT_NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REMOTE_HOST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REMOTE_ADDR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IPADDRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REMOTE_USER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTH_TYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONTENT_TYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ANNOTATION_SERVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "PARSESTRING", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PARSESTRING )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "CGIPARSEVAR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CGIPARSEVAR )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TCGI, "xhb\\tcgi.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TCGI
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TCGI )
   #include "hbiniseg.h"
#endif

HB_FUNC( TCGI )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,84,0,103,1,0,100,8,29,178,3,
		176,1,0,104,1,0,12,1,29,167,3,166,105,3,
		0,122,80,1,48,2,0,176,3,0,12,0,106,5,
		84,67,103,105,0,108,4,4,1,0,108,0,112,3,
		80,2,48,5,0,95,2,100,100,95,1,106,3,110,
		72,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,100,95,1,106,16,83,101,114,118,101,114,95,83,
		111,102,116,119,97,114,101,0,4,1,0,9,112,5,
		73,48,5,0,95,2,100,100,95,1,106,12,83,101,
		114,118,101,114,95,78,97,109,101,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,100,95,1,106,18,
		71,97,116,101,119,97,121,95,73,110,116,101,114,102,
		97,99,101,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,100,95,1,106,16,83,101,114,118,101,114,
		95,80,114,111,116,111,99,111,108,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,100,95,1,106,12,
		83,101,114,118,101,114,95,80,111,114,116,0,4,1,
		0,9,112,5,73,48,5,0,95,2,100,100,95,1,
		106,15,82,101,113,117,101,115,116,95,77,101,116,104,
		111,100,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,100,95,1,106,12,72,116,116,112,95,65,99,
		99,101,112,116,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,100,95,1,106,16,72,116,116,112,95,
		85,115,101,114,95,97,103,101,110,116,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,100,95,1,106,
		13,72,116,116,112,95,82,101,102,101,114,101,114,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,100,
		95,1,106,10,80,97,116,104,95,73,110,102,111,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,100,
		95,1,106,16,80,97,116,104,95,84,114,97,110,115,
		108,97,116,101,100,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,100,95,1,106,12,83,99,114,105,
		112,116,95,78,97,109,101,0,4,1,0,9,112,5,
		73,48,5,0,95,2,100,100,95,1,106,13,81,117,
		101,114,121,95,83,116,114,105,110,103,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,100,95,1,106,
		12,82,101,109,111,116,101,95,72,111,115,116,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,100,95,
		1,106,12,82,101,109,111,116,101,95,65,100,100,114,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		100,95,1,106,10,105,112,65,100,100,114,101,115,115,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		100,95,1,106,12,82,101,109,111,116,101,95,85,115,
		101,114,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,100,95,1,106,10,65,117,116,104,95,84,121,
		112,101,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,100,95,1,106,10,65,117,116,104,95,85,115,
		101,114,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,100,95,1,106,10,65,117,116,104,95,80,97,
		115,115,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,100,95,1,106,13,67,111,110,116,101,110,116,
		95,84,121,112,101,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,100,95,1,106,15,67,111,110,116,
		101,110,116,95,76,101,110,103,116,104,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,100,95,1,106,
		18,65,110,110,111,116,97,116,105,111,110,95,83,101,
		114,118,101,114,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,4,0,0,95,1,106,13,97,81,117,
		101,114,121,70,105,101,108,100,115,0,4,1,0,9,
		112,5,73,48,6,0,95,2,106,4,78,101,119,0,
		108,7,95,1,112,3,73,48,6,0,95,2,106,6,
		70,105,101,108,100,0,108,8,95,1,112,3,73,48,
		6,0,95,2,106,9,84,111,79,98,106,101,99,116,
		0,108,9,95,1,112,3,73,48,10,0,95,2,112,
		0,73,167,14,0,0,176,11,0,104,1,0,95,2,
		20,2,168,48,12,0,95,2,112,0,80,3,176,13,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,14,0,95,3,164,146,1,0,
		73,95,3,110,7,48,12,0,103,1,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCGI_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,48,15,0,102,176,16,0,12,0,112,1,
		73,48,17,0,102,176,18,0,106,16,83,69,82,86,
		69,82,95,83,79,70,84,87,65,82,69,0,12,1,
		112,1,73,48,19,0,102,176,18,0,106,12,83,69,
		82,86,69,82,95,78,65,77,69,0,12,1,112,1,
		73,48,20,0,102,176,18,0,106,18,71,65,84,69,
		87,65,89,95,73,78,84,69,82,70,65,67,69,0,
		12,1,112,1,73,48,21,0,102,176,18,0,106,16,
		83,69,82,86,69,82,95,80,82,79,84,79,67,79,
		76,0,12,1,112,1,73,48,22,0,102,176,18,0,
		106,12,83,69,82,86,69,82,95,80,79,82,84,0,
		12,1,112,1,73,48,23,0,102,176,18,0,106,15,
		82,69,81,85,69,83,84,95,77,69,84,72,79,68,
		0,12,1,112,1,73,48,24,0,102,176,18,0,106,
		12,72,84,84,80,95,65,67,67,69,80,84,0,12,
		1,112,1,73,48,25,0,102,176,18,0,106,16,72,
		84,84,80,95,85,83,69,82,95,65,71,69,78,84,
		0,12,1,112,1,73,48,26,0,102,176,18,0,106,
		13,72,84,84,80,95,82,69,70,69,82,69,82,0,
		12,1,112,1,73,48,27,0,102,176,18,0,106,10,
		80,65,84,72,95,73,78,70,79,0,12,1,112,1,
		73,48,28,0,102,176,18,0,106,16,80,65,84,72,
		95,84,82,65,78,83,76,65,84,69,68,0,12,1,
		112,1,73,48,29,0,102,176,18,0,106,12,83,67,
		82,73,80,84,95,78,65,77,69,0,12,1,112,1,
		73,48,30,0,102,176,18,0,106,13,81,85,69,82,
		89,95,83,84,82,73,78,71,0,12,1,112,1,73,
		48,31,0,102,176,18,0,106,12,82,69,77,79,84,
		69,95,72,79,83,84,0,12,1,112,1,73,48,32,
		0,102,176,18,0,106,12,82,69,77,79,84,69,95,
		65,68,68,82,0,12,1,112,1,73,48,33,0,102,
		176,18,0,106,12,82,69,77,79,84,69,95,65,68,
		68,82,0,12,1,112,1,73,48,34,0,102,176,18,
		0,106,12,82,69,77,79,84,69,95,85,83,69,82,
		0,12,1,112,1,73,48,35,0,102,176,18,0,106,
		10,65,85,84,72,95,84,89,80,69,0,12,1,112,
		1,73,48,36,0,102,176,18,0,106,10,65,85,84,
		72,95,85,83,69,82,0,12,1,112,1,73,48,37,
		0,102,176,18,0,106,10,65,85,84,72,95,80,65,
		83,83,0,12,1,112,1,73,48,38,0,102,176,18,
		0,106,13,67,79,78,84,69,78,84,95,84,89,80,
		69,0,12,1,112,1,73,48,39,0,102,176,18,0,
		106,15,67,79,78,84,69,78,84,95,76,69,78,71,
		84,72,0,12,1,112,1,73,48,40,0,102,176,18,
		0,106,18,65,78,78,79,84,65,84,73,79,78,95,
		83,69,82,86,69,82,0,12,1,112,1,73,95,1,
		100,69,28,18,48,30,0,102,176,41,0,95,1,12,
		1,112,1,73,25,52,106,5,80,79,83,84,0,176,
		42,0,48,43,0,102,112,0,12,1,24,28,31,48,
		30,0,102,176,41,0,176,44,0,121,176,45,0,48,
		46,0,102,112,0,12,1,12,2,12,1,112,1,73,
		176,47,0,48,48,0,102,112,0,12,1,31,104,48,
		49,0,102,4,0,0,112,1,73,176,50,0,48,48,
		0,102,112,0,106,2,38,0,12,2,80,3,122,165,
		80,2,25,61,176,50,0,95,3,95,2,1,106,2,
		61,0,12,2,80,4,176,51,0,95,4,12,1,92,
		2,8,28,30,176,52,0,48,53,0,102,112,0,95,
		4,122,1,176,54,0,95,4,92,2,1,12,1,4,
		2,0,20,2,175,2,0,176,51,0,95,3,12,1,
		15,28,189,48,55,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCGI_TOOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,116,84,0,122,80,2,48,2,0,176,3,
		0,12,0,106,7,78,101,119,67,103,105,0,176,56,
		0,104,2,0,172,92,3,12,2,72,106,5,84,67,
		103,105,0,4,1,0,112,2,80,3,122,165,80,1,
		25,89,48,53,0,102,112,0,95,1,1,92,2,1,
		100,8,31,21,176,47,0,48,53,0,102,112,0,95,
		1,1,92,2,1,12,1,28,17,106,1,0,48,53,
		0,102,112,0,95,1,1,92,2,2,48,57,0,95,
		3,48,53,0,102,112,0,95,1,1,122,1,48,53,
		0,102,112,0,95,1,1,92,2,1,100,95,2,112,
		4,73,175,1,0,176,51,0,48,53,0,102,112,0,
		12,1,15,28,157,48,10,0,95,3,112,0,73,48,
		12,0,95,3,112,0,80,4,48,49,0,95,4,48,
		53,0,102,112,0,112,1,73,48,17,0,95,4,48,
		58,0,102,112,0,112,1,73,48,19,0,95,4,48,
		59,0,102,112,0,112,1,73,48,20,0,95,4,48,
		60,0,102,112,0,112,1,73,48,21,0,95,4,48,
		61,0,102,112,0,112,1,73,48,22,0,95,4,48,
		62,0,102,112,0,112,1,73,48,23,0,95,4,48,
		43,0,102,112,0,112,1,73,48,24,0,95,4,48,
		63,0,102,112,0,112,1,73,48,25,0,95,4,48,
		64,0,102,112,0,112,1,73,48,26,0,95,4,48,
		65,0,102,112,0,112,1,73,48,27,0,95,4,48,
		66,0,102,112,0,112,1,73,48,28,0,95,4,48,
		67,0,102,112,0,112,1,73,48,29,0,95,4,48,
		68,0,102,112,0,112,1,73,48,30,0,95,4,48,
		48,0,102,112,0,112,1,73,48,31,0,95,4,48,
		69,0,102,112,0,112,1,73,48,32,0,95,4,48,
		70,0,102,112,0,112,1,73,48,33,0,95,4,48,
		71,0,102,112,0,112,1,73,48,34,0,95,4,48,
		72,0,102,112,0,112,1,73,48,35,0,95,4,48,
		73,0,102,112,0,112,1,73,48,38,0,95,4,48,
		74,0,102,112,0,112,1,73,48,39,0,95,4,48,
		46,0,102,112,0,112,1,73,48,40,0,95,4,48,
		75,0,102,112,0,112,1,73,48,15,0,95,4,176,
		16,0,12,0,100,8,28,5,122,25,7,176,16,0,
		12,0,112,1,73,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TCGI_FIELD )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,106,1,0,80,2,176,76,0,96,1,0,
		106,1,0,20,2,176,77,0,48,53,0,102,112,0,
		89,27,0,1,0,1,0,1,0,176,42,0,95,1,
		122,1,12,1,176,42,0,95,255,12,1,8,6,12,
		2,80,3,95,3,121,15,28,16,48,53,0,102,112,
		0,95,3,1,92,2,1,80,2,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( PARSESTRING )
{
	static const HB_BYTE pcode[] =
	{
		13,5,3,176,51,0,95,1,12,1,176,51,0,176,
		79,0,95,1,95,2,12,2,12,1,49,23,80,7,
		95,7,3,1,0,80,5,95,1,80,4,122,165,80,
		8,25,66,176,80,0,95,2,95,4,12,2,80,6,
		95,6,121,15,28,20,176,81,0,95,4,122,95,6,
		17,12,3,95,5,95,8,2,25,9,95,4,95,5,
		95,8,2,176,81,0,95,4,95,6,23,176,51,0,
		95,4,12,1,12,3,80,4,175,8,0,95,7,15,
		28,189,95,5,95,3,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CGIPARSEVAR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,54,0,95,1,12,1,80,1,106,2,
		61,0,95,1,24,28,51,176,51,0,95,1,12,1,
		176,80,0,106,2,61,0,95,1,12,2,15,28,30,
		176,83,0,176,81,0,95,1,176,80,0,106,2,61,
		0,95,1,12,2,23,12,2,12,1,80,1,25,7,
		106,1,0,80,1,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,84,0,2,0,116,84,0,121,82,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}

