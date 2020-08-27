/*
 * Harbour 3.2.0dev (r2002101434)
 * GNU C 7.4 (64-bit)
 * Generated C source from "hbformat/utils/hbformat.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( ATAIL );
HB_FUNC_STATIC( ABOUT );
HB_FUNC_EXTERN( HB_LEFTEQ );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( HBFORMATCODE );
HB_FUNC_EXTERN( HB_FNAMEMERGE );
HB_FUNC_EXTERN( HB_DIRBASE );
HB_FUNC_EXTERN( OUTSTD );
HB_FUNC_EXTERN( HB_STRFORMAT );
HB_FUNC_EXTERN( HB_UTF8TOSTR );
HB_FUNC_EXTERN( HB_I18N_GETTEXT );
HB_FUNC_EXTERN( HB_EOL );
HB_FUNC_STATIC( FCALLBACK );
HB_FUNC_EXTERN( HB_FNAMEEXT );
HB_FUNC_EXTERN( OUTERR );
HB_FUNC_EXTERN( HB_FNAMEDIR );
HB_FUNC_EXTERN( HB_ISNULL );
HB_FUNC_EXTERN( HB_PS );
HB_FUNC_STATIC( DIREVAL );
HB_FUNC_EXTERN( HB_FNAMENAMEEXT );
HB_FUNC_STATIC( REFORMAT );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_DIRSEPADD );
HB_FUNC_EXTERN( HB_OSFILEMASK );
HB_FUNC_EXTERN( HB_VFDIRECTORY );
HB_FUNC_STATIC( HBRAWVERSION );
HB_FUNC_EXTERN( HB_VERSION );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( VERSION );
HB_FUNC_EXTERN( HB_GT_CGI_DEFAULT );
HB_FUNC( HB_GTSYS );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBFORMAT )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
{ "ABOUT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ABOUT )}, NULL },
{ "HB_LEFTEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LEFTEQ )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBFORMATCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBFORMATCODE )}, NULL },
{ "HB_FNAMEMERGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEMERGE )}, NULL },
{ "HB_DIRBASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRBASE )}, NULL },
{ "NERR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OUTSTD", {HB_FS_PUBLIC}, {HB_FUNCNAME( OUTSTD )}, NULL },
{ "HB_STRFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STRFORMAT )}, NULL },
{ "NLINEERR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_UTF8TOSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UTF8TOSTR )}, NULL },
{ "HB_I18N_GETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_I18N_GETTEXT )}, NULL },
{ "CLINEERR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_EOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_EOL )}, NULL },
{ "_BCALLBACK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCALLBACK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( FCALLBACK )}, NULL },
{ "HB_FNAMEEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEEXT )}, NULL },
{ "OUTERR", {HB_FS_PUBLIC}, {HB_FUNCNAME( OUTERR )}, NULL },
{ "HB_FNAMEDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEDIR )}, NULL },
{ "HB_ISNULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNULL )}, NULL },
{ "HB_PS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PS )}, NULL },
{ "DIREVAL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( DIREVAL )}, NULL },
{ "HB_FNAMENAMEEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMENAMEEXT )}, NULL },
{ "REFORMAT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( REFORMAT )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "FILE2ARRAY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFORMAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARRAY2FILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DIRSEPADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRSEPADD )}, NULL },
{ "HB_OSFILEMASK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSFILEMASK )}, NULL },
{ "HB_VFDIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFDIRECTORY )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBRAWVERSION", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HBRAWVERSION )}, NULL },
{ "HB_VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VERSION )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERSION )}, NULL },
{ "HB_GT_CGI_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GT_CGI_DEFAULT )}, NULL },
{ "HB_GTSYS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_GTSYS )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBFORMAT, "hbformat/utils/hbformat.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBFORMAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBFORMAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		149,6,0,9,80,6,176,1,0,12,0,80,2,176,
		2,0,95,2,12,1,31,26,176,3,0,176,4,0,
		95,2,12,1,165,80,3,122,12,2,106,3,64,45,
		0,24,28,8,176,5,0,20,0,7,95,2,96,5,
		0,129,1,1,28,45,176,6,0,95,5,106,2,45,
		0,12,2,28,29,176,7,0,95,5,92,2,12,2,
		106,2,114,0,8,28,13,120,80,6,106,2,35,0,
		80,5,25,5,130,31,215,132,48,8,0,176,9,0,
		12,0,95,2,176,10,0,176,11,0,12,0,106,13,
		104,98,102,111,114,109,97,116,46,105,110,105,0,12,
		2,112,2,80,1,48,12,0,95,1,112,0,121,15,
		29,167,0,176,13,0,176,14,0,48,15,0,95,1,
		112,0,121,8,28,61,176,16,0,176,17,0,106,45,
		73,110,105,116,105,97,108,105,122,97,116,105,111,110,
		32,101,114,114,111,114,32,37,49,36,100,32,105,110,
		32,112,97,114,97,109,101,116,101,114,58,32,37,50,
		36,115,0,12,1,12,1,25,59,176,16,0,176,17,
		0,106,45,73,110,105,116,105,97,108,105,122,97,116,
		105,111,110,32,101,114,114,111,114,32,37,49,36,100,
		32,111,110,32,108,105,110,101,32,37,51,36,100,58,
		32,37,50,36,115,0,12,1,12,1,48,12,0,95,
		1,112,0,48,18,0,95,1,112,0,48,15,0,95,
		1,112,0,12,4,176,19,0,12,0,72,20,1,48,
		20,0,95,1,89,17,0,2,0,0,0,176,21,0,
		95,1,95,2,12,2,6,112,1,73,106,2,42,0,
		95,3,24,31,12,106,2,63,0,95,3,24,29,128,
		0,176,7,0,176,22,0,95,3,12,1,92,2,122,
		12,3,106,2,97,0,35,28,38,176,23,0,176,16,
		0,176,17,0,106,11,87,114,111,110,103,32,109,97,
		115,107,0,12,1,12,1,176,19,0,12,0,72,20,
		1,25,78,176,24,0,95,3,12,1,80,4,176,25,
		0,95,4,12,1,28,14,106,2,46,0,176,26,0,
		12,0,72,80,4,176,27,0,95,4,176,28,0,95,
		3,12,1,95,6,89,19,0,1,0,1,0,1,0,
		176,29,0,95,255,95,1,12,2,6,20,4,25,11,
		176,29,0,95,1,95,3,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( FCALLBACK )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,95,2,176,30,0,176,31,0,95,1,12,
		1,92,40,18,12,1,50,122,8,28,11,176,13,0,
		106,2,46,0,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( REFORMAT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,2,0,48,32,0,95,1,95,2,112,
		1,165,80,3,12,1,32,202,0,176,13,0,176,14,
		0,176,16,0,176,17,0,106,31,82,101,102,111,114,
		109,97,116,116,105,110,103,32,37,49,36,115,32,40,
		37,50,36,100,32,108,105,110,101,115,41,0,12,1,
		12,1,95,2,176,31,0,95,3,12,1,12,3,176,
		19,0,12,0,72,20,1,176,13,0,106,2,60,0,
		20,1,48,33,0,95,1,95,3,112,1,28,32,48,
		34,0,95,1,95,2,95,3,112,2,73,176,13,0,
		106,2,62,0,176,19,0,12,0,72,20,1,26,137,
		0,176,23,0,176,14,0,176,16,0,176,17,0,106,
		30,69,114,114,111,114,32,37,49,36,100,32,111,110,
		32,108,105,110,101,32,37,50,36,100,58,32,37,51,
		36,115,0,12,1,12,1,48,12,0,95,1,112,0,
		48,15,0,95,1,112,0,48,18,0,95,1,112,0,
		12,4,176,19,0,12,0,72,20,1,25,55,176,23,
		0,176,14,0,176,16,0,176,17,0,106,23,39,37,
		49,36,115,39,32,105,115,32,110,111,116,32,102,111,
		117,110,100,46,46,46,0,12,1,12,1,95,2,12,
		2,176,19,0,12,0,72,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( DIREVAL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,176,35,0,95,1,12,1,80,1,95,2,
		100,8,28,9,176,36,0,12,0,25,4,95,2,80,
		2,176,37,0,95,1,95,2,72,106,4,72,83,68,
		0,12,2,96,5,0,129,1,1,28,85,106,2,68,
		0,95,5,92,5,1,24,28,49,106,2,46,0,95,
		5,122,1,8,31,59,106,3,46,46,0,95,5,122,
		1,8,31,47,95,3,28,43,176,27,0,95,1,95,
		5,122,1,72,95,2,95,3,95,4,20,4,25,23,
		95,4,100,69,28,17,48,38,0,95,4,95,1,95,
		5,122,1,72,112,1,73,130,31,175,132,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( ABOUT )
{
	static const HB_BYTE pcode[] =
	{
		176,13,0,106,26,72,97,114,98,111,117,114,32,83,
		111,117,114,99,101,32,70,111,114,109,97,116,116,101,
		114,32,0,176,39,0,12,0,72,176,19,0,12,0,
		72,106,20,67,111,112,121,114,105,103,104,116,32,40,
		99,41,32,50,48,49,48,45,0,72,106,5,50,48,
		50,48,0,72,106,3,44,32,0,72,176,40,0,92,
		27,12,1,72,176,19,0,12,0,72,106,39,67,111,
		112,121,114,105,103,104,116,32,40,99,41,32,50,48,
		48,57,44,32,65,108,101,120,97,110,100,101,114,32,
		83,46,75,114,101,115,105,110,0,72,176,19,0,12,
		0,72,176,19,0,12,0,72,20,1,176,13,0,176,
		16,0,176,17,0,106,48,83,121,110,116,97,120,58,
		32,32,104,98,102,111,114,109,97,116,32,91,111,112,
		116,105,111,110,115,93,32,91,64,99,111,110,102,105,
		103,93,32,60,102,105,108,101,91,115,93,62,0,12,
		1,12,1,176,19,0,12,0,72,176,19,0,12,0,
		72,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HBRAWVERSION )
{
	static const HB_BYTE pcode[] =
	{
		176,41,0,176,42,0,12,0,106,9,72,97,114,98,
		111,117,114,32,0,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_GTSYS )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}
