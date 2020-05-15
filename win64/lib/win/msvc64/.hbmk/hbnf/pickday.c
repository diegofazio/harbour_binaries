/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbnf\pickday.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_PICKDAY );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( HB_DISPBOX );
HB_FUNC_EXTERN( HB_UTF8TOSTRBOX );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( RESTSCREEN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PICKDAY )
{ "FT_PICKDAY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_PICKDAY )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "HB_DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DISPBOX )}, NULL },
{ "HB_UTF8TOSTRBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UTF8TOSTRBOX )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PICKDAY, "hbnf\\pickday.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PICKDAY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PICKDAY )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_PICKDAY )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,106,7,83,85,78,68,65,89,0,106,7,
		77,79,78,68,65,89,0,106,8,84,85,69,83,68,
		65,89,0,106,10,87,69,68,78,69,83,68,65,89,
		0,106,9,84,72,85,82,83,68,65,89,0,106,7,
		70,82,73,68,65,89,0,106,9,83,65,84,85,82,
		68,65,89,0,4,7,0,80,1,121,80,2,176,1,
		0,92,8,92,35,92,16,92,45,12,4,80,3,176,
		2,0,106,5,43,119,47,114,0,12,1,80,4,176,
		3,0,92,8,92,35,92,16,92,45,176,4,0,106,
		26,226,148,140,226,148,128,226,148,144,226,148,130,226,
		148,152,226,148,128,226,148,148,226,148,130,32,0,12,
		1,20,5,95,2,121,8,28,21,176,5,0,92,9,
		92,36,92,15,92,44,95,1,12,5,80,2,25,233,
		176,6,0,92,8,92,35,92,16,92,45,95,3,20,
		5,176,2,0,95,4,20,1,95,1,95,2,1,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

