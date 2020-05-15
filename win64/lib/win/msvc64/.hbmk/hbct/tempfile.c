/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbct\tempfile.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TEMPFILE );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_DIRSEPADD );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( SETFCREATE );
HB_FUNC_EXTERN( HB_FTEMPCREATEEX );
HB_FUNC_EXTERN( FCLOSE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TEMPFILE )
{ "TEMPFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TEMPFILE )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_DIRSEPADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DIRSEPADD )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "SETFCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETFCREATE )}, NULL },
{ "HB_FTEMPCREATEEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FTEMPCREATEEX )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TEMPFILE, "..\\contrib\\hbct\\tempfile.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TEMPFILE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TEMPFILE )
   #include "hbiniseg.h"
#endif

HB_FUNC( TEMPFILE )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,176,1,0,95,1,12,1,28,11,176,2,
		0,95,1,12,1,80,1,176,1,0,95,2,12,1,
		28,26,176,3,0,95,2,122,12,2,106,2,46,0,
		8,31,11,106,2,46,0,95,2,72,80,2,176,4,
		0,96,3,0,176,5,0,12,0,20,2,176,6,0,
		96,4,0,95,1,100,95,2,95,3,12,5,80,5,
		95,5,92,255,69,28,13,176,7,0,95,5,20,1,
		95,4,110,7,106,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

