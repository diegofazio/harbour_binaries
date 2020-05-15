/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbtip\url.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TURL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TURL_NEW );
HB_FUNC_STATIC( TURL_SETADDRESS );
HB_FUNC_STATIC( TURL_BUILDADDRESS );
HB_FUNC_STATIC( TURL_BUILDQUERY );
HB_FUNC_STATIC( TURL_ADDGETFORM );
HB_FUNC_EXTERN( HB_REGEXCOMP );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_REGEX );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC_EXTERN( HB_ISHASH );
HB_FUNC_EXTERN( TIP_URLENCODE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( HB_CSTR );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_URL )
{ "TURL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TURL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TURL_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TURL_NEW )}, NULL },
{ "TURL_SETADDRESS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TURL_SETADDRESS )}, NULL },
{ "TURL_BUILDADDRESS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TURL_BUILDADDRESS )}, NULL },
{ "TURL_BUILDQUERY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TURL_BUILDQUERY )}, NULL },
{ "TURL_ADDGETFORM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TURL_ADDGETFORM )}, NULL },
{ "ADDMULTICLSDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_REGEXCOMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_REGEXCOMP )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETADDRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "_CADDRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPROTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CUSERID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPASSWORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSERVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CQUERY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_REGEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_REGEX )}, NULL },
{ "CREURI", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "CRESERV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "NPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CREFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPROTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUSERID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPASSWORD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "CPATH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CQUERY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISHASH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISHASH )}, NULL },
{ "TIP_URLENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_URLENCODE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "HB_CSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CSTR )}, NULL },
{ "__ENUMKEY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMISLAST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "__ENUMINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_URL, "..\\contrib\\hbtip\\url.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_URL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_URL )
   #include "hbiniseg.h"
#endif

HB_FUNC( TURL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,55,0,103,1,0,100,8,29,162,2,
		176,1,0,104,1,0,12,1,29,151,2,166,89,2,
		0,122,80,1,48,2,0,176,3,0,12,0,106,5,
		84,85,114,108,0,108,4,4,1,0,108,0,112,3,
		80,2,48,5,0,95,2,100,106,1,0,95,1,106,
		9,99,65,100,100,114,101,115,115,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,106,1,0,95,1,
		106,7,99,80,114,111,116,111,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,106,1,0,95,1,106,
		8,99,85,115,101,114,105,100,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,106,1,0,95,1,106,
		10,99,80,97,115,115,119,111,114,100,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,106,1,0,95,
		1,106,8,99,83,101,114,118,101,114,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,106,1,0,95,
		1,106,6,99,80,97,116,104,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,106,1,0,95,1,106,
		7,99,81,117,101,114,121,0,4,1,0,9,112,5,
		73,48,5,0,95,2,100,106,1,0,95,1,106,6,
		99,70,105,108,101,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,92,255,95,1,106,6,110,80,111,
		114,116,0,4,1,0,9,112,5,73,48,6,0,95,
		2,106,4,78,101,119,0,108,7,95,1,112,3,73,
		48,6,0,95,2,106,11,83,101,116,65,100,100,114,
		101,115,115,0,108,8,95,1,112,3,73,48,6,0,
		95,2,106,13,66,117,105,108,100,65,100,100,114,101,
		115,115,0,108,9,95,1,112,3,73,48,6,0,95,
		2,106,11,66,117,105,108,100,81,117,101,114,121,0,
		108,10,95,1,112,3,73,48,6,0,95,2,106,11,
		65,100,100,71,101,116,70,111,114,109,0,108,11,95,
		1,112,3,73,92,4,80,1,48,12,0,95,2,100,
		176,13,0,106,37,40,63,58,40,46,42,41,58,47,
		47,41,63,40,91,94,63,47,93,42,41,40,47,91,
		94,63,93,42,41,63,92,63,63,40,46,42,41,0,
		12,1,95,1,106,7,99,82,69,117,114,105,0,4,
		1,0,9,112,5,73,48,12,0,95,2,100,176,13,
		0,106,38,40,63,58,40,91,94,58,64,93,42,41,
		58,63,40,91,94,64,58,93,42,41,64,124,41,40,
		91,94,58,93,43,41,58,63,40,46,42,41,0,12,
		1,95,1,106,8,99,82,69,83,101,114,118,0,4,
		1,0,9,112,5,73,48,12,0,95,2,100,176,13,
		0,106,20,94,40,40,63,58,47,46,42,47,41,124,
		47,41,42,40,46,42,41,36,0,12,1,95,1,106,
		8,99,82,69,70,105,108,101,0,4,1,0,9,112,
		5,73,48,14,0,95,2,112,0,73,167,14,0,0,
		176,15,0,104,1,0,95,2,20,2,168,48,16,0,
		95,2,112,0,80,3,176,17,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		18,0,95,3,164,146,1,0,73,95,3,110,7,48,
		16,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TURL_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,48,19,0,102,95,1,112,1,73,102,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TURL_SETADDRESS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,176,20,0,95,1,12,1,31,5,9,110,
		7,48,21,0,102,95,1,112,1,73,48,22,0,102,
		48,23,0,102,48,24,0,102,48,25,0,102,48,26,
		0,102,48,27,0,102,48,28,0,102,106,1,0,112,
		1,112,1,112,1,112,1,112,1,112,1,112,1,73,
		48,29,0,102,92,255,112,1,73,95,1,106,1,0,
		8,28,5,120,110,7,176,30,0,176,31,0,48,32,
		0,102,112,0,95,1,12,2,165,80,2,12,1,28,
		5,9,110,7,48,22,0,102,176,33,0,95,2,92,
		2,1,12,1,112,1,73,95,2,92,3,1,80,3,
		95,2,92,4,1,80,4,48,27,0,102,95,2,92,
		5,1,112,1,73,176,31,0,48,34,0,102,112,0,
		95,3,12,2,80,2,48,23,0,102,95,2,92,2,
		1,112,1,73,48,24,0,102,95,2,92,3,1,112,
		1,73,48,25,0,102,95,2,92,4,1,112,1,73,
		48,29,0,102,176,35,0,95,2,92,5,1,12,1,
		112,1,73,48,36,0,102,112,0,122,35,28,11,48,
		29,0,102,92,255,112,1,73,176,31,0,48,37,0,
		102,112,0,95,4,12,2,80,2,48,26,0,102,95,
		2,92,2,1,112,1,73,48,28,0,102,95,2,92,
		3,1,112,1,73,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TURL_BUILDADDRESS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,106,1,0,80,1,48,38,0,102,112,0,
		100,69,28,20,48,22,0,102,176,33,0,48,38,0,
		102,112,0,12,1,112,1,73,176,30,0,48,38,0,
		102,112,0,12,1,31,29,48,39,0,102,112,0,106,
		1,0,8,31,17,48,38,0,102,112,0,106,4,58,
		47,47,0,72,80,1,48,40,0,102,112,0,106,1,
		0,8,31,47,96,1,0,48,40,0,102,112,0,135,
		48,41,0,102,112,0,106,1,0,8,31,17,96,1,
		0,106,2,58,0,48,41,0,102,112,0,72,135,96,
		1,0,106,2,64,0,135,48,39,0,102,112,0,106,
		1,0,8,31,42,96,1,0,48,39,0,102,112,0,
		135,48,36,0,102,112,0,121,15,28,22,96,1,0,
		106,2,58,0,176,42,0,48,36,0,102,112,0,12,
		1,72,135,48,43,0,102,112,0,106,1,0,8,31,
		21,176,44,0,48,43,0,102,112,0,122,12,2,106,
		2,47,0,8,31,12,48,26,0,102,147,106,2,47,
		0,135,96,1,0,48,43,0,102,112,0,48,45,0,
		102,112,0,72,135,48,46,0,102,112,0,106,1,0,
		8,31,17,96,1,0,106,2,63,0,48,46,0,102,
		112,0,72,135,95,1,106,1,0,8,28,5,100,25,
		10,48,21,0,102,95,1,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TURL_BUILDQUERY )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,48,43,0,102,112,0,106,1,0,8,31,
		21,176,44,0,48,43,0,102,112,0,122,12,2,106,
		2,47,0,8,31,12,48,26,0,102,147,106,2,47,
		0,135,48,43,0,102,112,0,48,45,0,102,112,0,
		72,80,1,48,46,0,102,112,0,106,1,0,8,31,
		17,96,1,0,106,2,63,0,48,46,0,102,112,0,
		72,135,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TURL_ADDGETFORM )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,106,1,0,80,2,176,47,0,95,1,12,
		1,28,86,95,1,96,3,0,129,1,1,28,73,96,
		2,0,176,48,0,176,49,0,176,50,0,48,51,0,
		96,3,0,112,0,12,1,12,1,12,1,106,2,61,
		0,72,176,48,0,176,49,0,176,50,0,95,3,12,
		1,12,1,12,1,72,135,48,52,0,96,3,0,112,
		0,31,10,96,2,0,106,2,38,0,135,130,31,187,
		132,25,108,176,53,0,95,1,12,1,28,86,95,1,
		96,3,0,129,1,1,28,73,96,2,0,176,48,0,
		176,49,0,176,50,0,48,54,0,96,3,0,112,0,
		12,1,12,1,12,1,106,2,61,0,72,176,48,0,
		176,49,0,176,50,0,95,3,12,1,12,1,12,1,
		72,135,48,52,0,96,3,0,112,0,31,10,96,2,
		0,106,2,38,0,135,130,31,187,132,25,15,176,20,
		0,95,1,12,1,28,6,95,1,80,2,95,2,106,
		1,0,8,28,5,100,25,32,48,27,0,102,147,48,
		46,0,102,112,0,106,1,0,8,28,7,106,1,0,
		25,6,106,2,38,0,95,2,72,139,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,55,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

