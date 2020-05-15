/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "..\contrib\hbtip\mailsend.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_SENDMAIL );
HB_FUNC( TIP_MAILSEND );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_ISARRAY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_ADEL );
HB_FUNC_EXTERN( TIP_GETRAWEMAIL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( __BREAKBLOCK );
HB_FUNC_EXTERN( TURL );
HB_FUNC_EXTERN( TIPCLIENTPOP );
HB_FUNC_EXTERN( TIPCLIENTSMTP );
HB_FUNC_EXTERN( HB_VFEXISTS );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( HB_FNAMEEXT );
HB_FUNC_EXTERN( TIP_MAILASSEMBLE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAILSEND )
{ "HB_SENDMAIL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_SENDMAIL )}, NULL },
{ "TIP_MAILSEND", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIP_MAILSEND )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_ISARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISARRAY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "HB_ADEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ADEL )}, NULL },
{ "TIP_GETRAWEMAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_GETRAWEMAIL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "__ENUMISLAST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "__BREAKBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __BREAKBLOCK )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TURL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TURL )}, NULL },
{ "_CUSERID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPCLIENTPOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENTPOP )}, NULL },
{ "OPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CFILE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPCLIENTSMTP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENTSMTP )}, NULL },
{ "_NCONNTIMEOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPENSECURE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LTLS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LAUTHLOGIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LAUTHPLAIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUTHPLAIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_VFEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_VFEXISTS )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "HB_FNAMEEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMEEXT )}, NULL },
{ "OURL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WRITE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_MAILASSEMBLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_MAILASSEMBLE )}, NULL },
{ "COMMIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_MAILSEND, "..\\contrib\\hbtip\\mailsend.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_MAILSEND
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_MAILSEND )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_SENDMAIL )
{
	static const HB_BYTE pcode[] =
	{
		149,0,0,176,1,0,164,124,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TIP_MAILSEND )
{
	static const HB_BYTE pcode[] =
	{
		13,12,24,9,80,34,9,80,35,176,2,0,95,1,
		12,1,28,5,100,80,1,176,2,0,95,2,12,1,
		28,5,100,80,2,176,3,0,96,1,0,106,10,108,
		111,99,97,108,104,111,115,116,0,20,2,176,3,0,
		96,10,0,106,1,0,20,2,176,3,0,96,11,0,
		106,1,0,20,2,176,3,0,96,2,0,92,25,20,
		2,176,3,0,96,16,0,120,20,2,176,3,0,96,
		17,0,9,20,2,176,3,0,96,18,0,93,16,39,
		20,2,176,3,0,96,20,0,9,20,2,176,3,0,
		96,21,0,95,11,20,2,176,4,0,95,4,12,1,
		28,113,176,5,0,95,4,12,1,165,80,29,25,30,
		176,2,0,95,4,95,29,1,12,1,28,12,176,6,
		0,95,4,95,29,120,20,3,126,29,255,255,95,29,
		122,35,28,226,176,2,0,95,4,12,1,28,5,9,
		110,7,106,1,0,80,26,95,4,96,25,0,129,1,
		1,28,39,96,26,0,176,7,0,176,8,0,95,25,
		12,1,12,1,135,48,9,0,96,25,0,112,0,31,
		10,96,26,0,106,2,44,0,135,130,31,221,132,25,
		25,176,10,0,95,4,12,1,28,16,176,7,0,176,
		8,0,95,4,12,1,12,1,80,26,176,4,0,95,
		5,12,1,28,101,176,5,0,95,5,12,1,165,80,
		29,25,30,176,2,0,95,5,95,29,1,12,1,28,
		12,176,6,0,95,5,95,29,120,20,3,126,29,255,
		255,95,29,122,35,28,226,106,1,0,80,27,95,5,
		96,25,0,129,1,1,28,39,96,27,0,176,7,0,
		176,8,0,95,25,12,1,12,1,135,48,9,0,96,
		25,0,112,0,31,10,96,27,0,106,2,44,0,135,
		130,31,221,132,25,25,176,10,0,95,5,12,1,28,
		16,176,7,0,176,8,0,95,5,12,1,12,1,80,
		27,176,4,0,95,6,12,1,28,101,176,5,0,95,
		6,12,1,165,80,29,25,30,176,2,0,95,6,95,
		29,1,12,1,28,12,176,6,0,95,6,95,29,120,
		20,3,126,29,255,255,95,29,122,35,28,226,106,1,
		0,80,28,95,6,96,25,0,129,1,1,28,39,96,
		28,0,176,7,0,176,8,0,95,25,12,1,12,1,
		135,48,9,0,96,25,0,112,0,31,10,96,28,0,
		106,2,44,0,135,130,31,221,132,25,25,176,10,0,
		95,6,12,1,28,16,176,7,0,176,8,0,95,6,
		12,1,12,1,80,28,176,11,0,95,10,106,2,64,
		0,106,5,38,97,116,59,0,12,3,80,10,176,10,
		0,95,12,12,1,29,154,0,95,16,29,149,0,113,
		119,0,0,176,12,0,12,0,178,48,13,0,176,14,
		0,12,0,95,20,28,15,106,9,112,111,112,51,115,
		58,47,47,0,25,11,106,7,112,111,112,58,47,47,
		0,95,10,72,106,2,58,0,72,95,11,72,106,2,
		64,0,72,95,12,72,106,2,47,0,72,112,1,80,
		32,48,15,0,95,32,176,11,0,95,10,106,5,38,
		97,116,59,0,106,2,64,0,12,3,112,1,73,48,
		13,0,176,16,0,12,0,95,32,95,15,112,2,80,
		36,73,114,9,0,0,115,73,9,110,7,48,17,0,
		95,36,112,0,28,12,48,18,0,95,36,112,0,73,
		25,5,9,110,7,113,87,0,0,176,12,0,12,0,
		178,48,13,0,176,14,0,12,0,95,20,28,15,106,
		9,115,109,116,112,115,58,47,47,0,25,12,106,8,
		115,109,116,112,58,47,47,0,95,10,72,176,2,0,
		95,21,12,1,28,7,106,1,0,25,9,106,2,58,
		0,95,21,72,72,106,2,64,0,72,95,1,72,112,
		1,80,31,73,114,9,0,0,115,73,9,110,7,48,
		19,0,95,31,95,2,112,1,73,48,15,0,95,31,
		176,11,0,95,10,106,5,38,97,116,59,0,106,2,
		64,0,12,3,112,1,73,48,20,0,95,31,95,26,
		176,2,0,95,27,12,1,28,7,106,1,0,25,9,
		106,2,44,0,95,27,72,72,176,2,0,95,28,12,
		1,28,7,106,1,0,25,9,106,2,44,0,95,28,
		72,72,112,1,73,113,34,0,0,176,12,0,12,0,
		178,48,13,0,176,21,0,12,0,95,31,95,15,100,
		95,24,112,4,80,30,73,114,9,0,0,115,73,9,
		110,7,48,22,0,95,30,95,18,112,1,73,95,17,
		32,132,0,48,23,0,95,30,100,95,20,112,2,28,
		58,48,24,0,95,30,112,0,80,34,48,25,0,95,
		30,112,0,28,15,48,26,0,95,30,95,10,95,21,
		112,2,31,24,48,27,0,95,30,112,0,28,18,48,
		28,0,95,30,95,10,95,21,112,2,28,5,120,80,
		35,95,35,31,59,48,18,0,95,30,112,0,73,113,
		34,0,0,176,12,0,12,0,178,48,13,0,176,21,
		0,12,0,95,31,95,15,100,95,24,112,4,80,30,
		73,114,9,0,0,115,73,9,110,7,48,22,0,95,
		30,95,18,112,1,73,95,35,31,53,48,17,0,95,
		30,100,95,34,112,2,31,41,48,18,0,95,30,112,
		0,73,9,110,7,176,29,0,95,7,12,1,28,16,
		176,30,0,95,7,12,1,80,7,120,80,33,25,44,
		9,80,33,25,39,176,31,0,176,32,0,95,7,12,
		1,12,1,133,3,0,106,5,46,104,116,109,0,25,
		206,106,6,46,104,116,109,108,0,25,196,100,25,216,
		48,15,0,48,33,0,95,30,112,0,176,7,0,95,
		3,12,1,112,1,73,48,34,0,95,30,176,35,0,
		95,3,95,4,95,5,95,7,95,8,95,9,95,13,
		95,14,95,19,95,22,95,23,95,33,12,12,112,1,
		121,15,165,80,29,28,10,48,36,0,95,30,112,0,
		73,48,18,0,95,30,112,0,73,95,29,110,7
	};

	hb_vmExecute( pcode, symbols );
}

