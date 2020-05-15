/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbxpp\runshell.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( RUNSHELL );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( GETENV );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_OSISWINNT );
HB_FUNC_EXTERN( HB_PROCESSRUN );
HB_FUNC_EXTERN( LTRIM );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_RUNSHELL )
{ "RUNSHELL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RUNSHELL )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "GETENV", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETENV )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_OSISWINNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWINNT )}, NULL },
{ "HB_PROCESSRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PROCESSRUN )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_RUNSHELL, "..\\contrib\\hbxpp\\runshell.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_RUNSHELL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_RUNSHELL )
   #include "hbiniseg.h"
#endif

HB_FUNC( RUNSHELL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,1,0,95,2,12,1,31,65,176,2,
		0,106,8,67,79,77,83,80,69,67,0,12,1,80,
		2,176,3,0,95,2,12,1,28,39,176,4,0,12,
		0,28,16,106,8,99,109,100,46,101,120,101,0,80,
		2,25,18,106,12,99,111,109,109,97,110,100,46,99,
		111,109,0,80,2,176,1,0,95,1,12,1,28,16,
		96,2,0,106,5,32,47,99,32,0,95,1,72,135,
		176,5,0,176,6,0,95,2,12,1,100,100,100,95,
		3,20,5,7
	};

	hb_vmExecute( pcode, symbols );
}

