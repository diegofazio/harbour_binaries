/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "..\contrib\hbct\keysec.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( KEYSEC );
HB_FUNC_EXTERN( HB_IDLEDEL );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_MILLISECONDS );
HB_FUNC_EXTERN( HB_IDLEADD );
HB_FUNC_STATIC( DOKEYSEC );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( NEXTKEY );
HB_FUNC_EXTERN( HB_KEYPUT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_KEYSEC )
{ "KEYSEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( KEYSEC )}, NULL },
{ "HB_IDLEDEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLEDEL )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_MILLISECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MILLISECONDS )}, NULL },
{ "HB_IDLEADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_IDLEADD )}, NULL },
{ "DOKEYSEC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( DOKEYSEC )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "NEXTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( NEXTKEY )}, NULL },
{ "HB_KEYPUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_KEYPUT )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_KEYSEC, "..\\contrib\\hbct\\keysec.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_KEYSEC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_KEYSEC )
   #include "hbiniseg.h"
#endif

HB_FUNC( KEYSEC )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,116,10,0,103,1,0,100,69,28,14,176,
		1,0,103,1,0,20,1,100,82,1,0,176,2,0,
		95,1,12,1,28,117,176,2,0,95,2,12,1,31,
		7,121,80,2,25,25,95,2,121,35,28,19,95,2,
		66,101,51,51,51,51,51,51,50,64,10,1,18,80,
		2,96,2,0,93,232,3,137,176,3,0,96,3,0,
		122,20,2,176,3,0,96,4,0,9,20,2,176,4,
		0,12,0,80,5,176,5,0,89,35,0,0,0,5,
		0,1,0,2,0,4,0,3,0,5,0,176,6,0,
		95,255,95,254,95,253,96,252,255,96,251,255,12,5,
		6,12,1,82,1,0,120,110,7,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( DOKEYSEC )
{
	static const HB_BYTE pcode[] =
	{
		13,1,5,116,10,0,176,4,0,12,0,80,6,95,
		3,28,20,176,7,0,176,8,0,12,0,12,1,31,
		8,95,6,80,5,25,58,95,4,121,69,28,52,95,
		6,95,5,49,95,2,16,28,42,176,9,0,95,1,
		20,1,95,4,121,15,28,5,173,4,0,95,4,121,
		8,28,16,176,1,0,103,1,0,20,1,100,82,1,
		0,25,6,95,6,80,5,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,10,0,1,0,116,10,0,179,1,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
