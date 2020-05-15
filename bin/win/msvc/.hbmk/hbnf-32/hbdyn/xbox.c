/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbnf\xbox.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_XBOX );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( MIN );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( MAX );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( HB_SCROLL );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( HB_DISPBOX );
HB_FUNC_EXTERN( HB_UTF8TOSTRBOX );
HB_FUNC_EXTERN( HB_SHADOW );
HB_FUNC_EXTERN( HB_DISPOUTAT );
HB_FUNC_EXTERN( INKEY );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XBOX )
{ "FT_XBOX", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_XBOX )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "MAX", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAX )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "HB_SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SCROLL )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "HB_DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPBOX )}, NULL },
{ "HB_UTF8TOSTRBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UTF8TOSTRBOX )}, NULL },
{ "HB_SHADOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SHADOW )}, NULL },
{ "HB_DISPOUTAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPOUTAT )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XBOX, "hbnf\\xbox.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XBOX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XBOX )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_XBOX )
{
	static const HB_BYTE pcode[] =
	{
		13,10,15,121,80,16,92,8,3,1,0,80,25,176,
		1,0,96,1,0,106,1,0,20,2,176,1,0,96,
		2,0,106,1,0,20,2,176,1,0,96,3,0,106,
		1,0,20,2,176,1,0,96,4,0,106,4,78,47,
		87,0,20,2,176,1,0,96,5,0,106,4,87,47,
		78,0,20,2,176,1,0,96,6,0,92,99,20,2,
		176,1,0,96,7,0,92,99,20,2,176,2,0,95,
		1,12,1,80,1,176,2,0,95,2,12,1,80,2,
		176,2,0,95,3,12,1,80,3,176,3,0,176,4,
		0,12,0,92,7,49,92,8,12,2,80,24,176,5,
		0,95,8,12,1,28,18,176,6,0,176,7,0,95,
		8,92,74,12,2,12,1,25,5,106,1,0,95,25,
		122,2,176,5,0,95,9,12,1,28,18,176,6,0,
		176,7,0,95,9,92,74,12,2,12,1,25,5,106,
		1,0,95,25,92,2,2,176,5,0,95,10,12,1,
		28,18,176,6,0,176,7,0,95,10,92,74,12,2,
		12,1,25,5,106,1,0,95,25,92,3,2,176,5,
		0,95,11,12,1,28,18,176,6,0,176,7,0,95,
		11,92,74,12,2,12,1,25,5,106,1,0,95,25,
		92,4,2,176,5,0,95,12,12,1,28,18,176,6,
		0,176,7,0,95,12,92,74,12,2,12,1,25,5,
		106,1,0,95,25,92,5,2,176,5,0,95,13,12,
		1,28,18,176,6,0,176,7,0,95,13,92,74,12,
		2,12,1,25,5,106,1,0,95,25,92,6,2,176,
		5,0,95,14,12,1,28,18,176,6,0,176,7,0,
		95,14,92,74,12,2,12,1,25,5,106,1,0,95,
		25,92,7,2,176,5,0,95,15,12,1,28,18,176,
		6,0,176,7,0,95,15,92,74,12,2,12,1,25,
		5,106,1,0,95,25,92,8,2,176,8,0,95,25,
		176,3,0,95,24,92,8,12,2,20,2,122,80,21,
		176,9,0,95,25,89,38,0,0,0,3,0,25,0,
		16,0,21,0,176,10,0,95,254,176,11,0,95,255,
		95,253,1,12,1,12,2,80,254,96,253,255,158,170,
		6,20,2,95,7,92,99,8,28,17,176,12,0,92,
		76,95,16,49,92,2,18,12,1,25,14,176,3,0,
		95,7,92,74,95,16,49,12,2,80,17,95,17,95,
		16,72,92,3,72,80,18,95,6,92,99,8,28,17,
		176,12,0,92,24,95,24,49,92,2,18,12,1,25,
		14,176,3,0,95,6,92,22,95,24,49,12,2,80,
		19,95,19,95,24,72,23,80,20,176,13,0,95,19,
		95,17,95,20,95,18,20,4,176,14,0,95,4,20,
		1,176,7,0,95,3,122,12,2,106,2,68,0,8,
		28,49,176,15,0,95,19,95,17,95,20,95,18,176,
		16,0,106,25,226,149,148,226,149,144,226,149,151,226,
		149,145,226,149,157,226,149,144,226,149,154,226,149,145,
		0,12,1,20,5,25,47,176,15,0,95,19,95,17,
		95,20,95,18,176,16,0,106,25,226,148,140,226,148,
		128,226,148,144,226,148,130,226,148,152,226,148,128,226,
		148,148,226,148,130,0,12,1,20,5,176,17,0,95,
		19,95,17,95,20,95,18,20,4,176,14,0,95,5,
		20,1,122,80,21,176,9,0,95,25,89,97,0,1,
		0,8,0,19,0,21,0,22,0,25,0,1,0,17,
		0,16,0,23,0,95,255,95,254,72,80,253,176,7,
		0,95,251,122,12,2,106,2,76,0,8,28,9,95,
		250,92,2,72,25,29,95,250,92,2,72,95,249,176,
		12,0,176,11,0,95,252,95,254,1,12,1,12,1,
		49,92,2,18,72,80,248,96,254,255,170,176,18,0,
		95,253,95,248,95,1,12,3,6,20,2,176,7,0,
		95,2,122,12,2,106,2,87,0,8,28,8,176,19,
		0,121,20,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}
