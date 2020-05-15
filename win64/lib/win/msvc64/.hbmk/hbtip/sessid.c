/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbtip\sessid.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TIP_GENERATESID );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( HB_RANDINT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC( TIP_CHECKSID );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( RIGHT );
HB_FUNC( TIP_DATETOGMT );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_DATETIME );
HB_FUNC_EXTERN( DOW );
HB_FUNC_EXTERN( DAY );
HB_FUNC_EXTERN( MONTH );
HB_FUNC_EXTERN( YEAR );
HB_FUNC_EXTERN( HB_TTOC );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SESSID )
{ "TIP_GENERATESID", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_GENERATESID )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "HB_RANDINT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_RANDINT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "TIP_CHECKSID", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_CHECKSID )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RIGHT )}, NULL },
{ "TIP_DATETOGMT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_DATETOGMT )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_DATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DATETIME )}, NULL },
{ "DOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOW )}, NULL },
{ "DAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DAY )}, NULL },
{ "MONTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( MONTH )}, NULL },
{ "YEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( YEAR )}, NULL },
{ "HB_TTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_TTOC )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_SESSID, "..\\contrib\\hbtip\\sessid.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_SESSID
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_SESSID )
   #include "hbiniseg.h"
#endif

HB_FUNC( TIP_GENERATESID )
{
	static const HB_BYTE pcode[] =
	{
		13,9,1,106,63,48,49,50,51,52,53,54,55,56,
		57,65,66,67,68,69,70,71,72,73,74,75,76,77,
		78,79,80,81,82,83,84,85,86,87,88,89,90,97,
		98,99,100,101,102,103,104,105,106,107,108,109,110,111,
		112,113,114,115,116,117,118,119,120,121,122,0,80,9,
		176,1,0,95,9,12,1,80,10,176,2,0,176,3,
		0,95,1,106,11,65,107,51,121,83,116,82,49,78,
		103,0,12,2,92,10,12,2,80,1,106,1,0,80,
		2,121,80,7,122,165,80,5,25,34,176,4,0,95,
		10,12,1,80,8,96,2,0,176,5,0,95,9,95,
		8,122,12,3,135,96,7,0,95,8,135,175,5,0,
		92,25,15,28,221,95,7,92,51,65,80,3,176,6,
		0,95,3,92,5,12,2,80,6,106,1,0,80,4,
		122,165,80,5,25,33,96,4,0,176,5,0,95,1,
		176,7,0,176,5,0,95,6,95,5,122,12,3,12,
		1,23,122,12,3,135,175,5,0,176,1,0,95,6,
		12,1,15,28,217,95,2,95,4,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TIP_CHECKSID )
{
	static const HB_BYTE pcode[] =
	{
		13,5,2,176,2,0,176,3,0,95,2,106,11,65,
		107,51,121,83,116,82,49,78,103,0,12,2,92,10,
		12,2,80,2,121,80,7,122,165,80,5,25,89,96,
		7,0,176,9,0,176,5,0,95,1,95,5,122,12,
		3,106,63,48,49,50,51,52,53,54,55,56,57,65,
		66,67,68,69,70,71,72,73,74,75,76,77,78,79,
		80,81,82,83,84,85,86,87,88,89,90,97,98,99,
		100,101,102,103,104,105,106,107,108,109,110,111,112,113,
		114,115,116,117,118,119,120,121,122,0,12,2,135,175,
		5,0,92,25,15,28,166,95,7,92,51,65,80,3,
		176,6,0,95,3,92,5,12,2,80,6,106,1,0,
		80,4,122,165,80,5,25,33,96,4,0,176,5,0,
		95,2,176,7,0,176,5,0,95,6,95,5,122,12,
		3,12,1,23,122,12,3,135,175,5,0,176,1,0,
		95,6,12,1,15,28,217,176,10,0,95,1,92,5,
		12,2,95,4,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TIP_DATETOGMT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,12,0,96,1,0,176,13,0,12,0,
		20,2,106,4,83,117,110,0,106,4,77,111,110,0,
		106,4,84,117,101,0,106,4,87,101,100,0,106,4,
		84,104,117,0,106,4,70,114,105,0,106,4,83,97,
		116,0,4,7,0,176,14,0,95,1,12,1,1,106,
		3,44,32,0,72,176,6,0,176,15,0,95,1,12,
		1,92,2,12,2,72,106,2,32,0,72,106,4,74,
		97,110,0,106,4,70,101,98,0,106,4,77,97,114,
		0,106,4,65,112,114,0,106,4,77,97,121,0,106,
		4,74,117,110,0,106,4,74,117,108,0,106,4,65,
		117,103,0,106,4,83,101,112,0,106,4,79,99,116,
		0,106,4,78,111,118,0,106,4,68,101,99,0,4,
		12,0,176,16,0,95,1,12,1,1,72,106,2,32,
		0,72,176,6,0,176,17,0,95,1,12,1,92,4,
		12,2,72,106,2,32,0,72,176,18,0,95,1,106,
		1,0,106,9,104,104,58,109,109,58,115,115,0,12,
		3,72,106,5,32,71,77,84,0,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

