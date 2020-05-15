/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbnf\linked.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_LINKED );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( ALERT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( TYPE );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_LINKED )
{ "FT_LINKED", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_LINKED )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "ALERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALERT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "TYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TYPE )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_LINKED, "hbnf\\linked.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_LINKED
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_LINKED )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_LINKED )
{
	static const HB_BYTE pcode[] =
	{
		13,5,1,4,0,0,80,2,9,80,6,176,1,0,
		106,2,40,0,95,1,12,2,121,8,28,78,176,2,
		0,106,66,87,97,114,110,105,110,103,58,32,69,120,
		112,101,99,116,101,100,32,102,117,110,99,116,105,111,
		110,40,115,41,32,105,110,32,102,116,95,76,105,110,
		107,101,100,40,41,44,32,98,117,116,32,110,111,110,
		101,32,119,101,114,101,32,102,111,117,110,100,0,20,
		1,26,204,0,176,1,0,106,2,40,0,95,1,12,
		2,165,80,5,121,15,29,154,0,176,3,0,95,2,
		176,4,0,95,1,95,5,12,2,106,2,41,0,72,
		20,2,176,5,0,95,1,95,5,23,12,2,80,1,
		176,1,0,106,2,32,0,95,1,12,2,80,3,176,
		1,0,106,2,44,0,95,1,12,2,80,4,95,4,
		121,15,28,9,95,4,95,5,35,31,15,95,3,121,
		15,28,161,95,3,95,5,35,28,154,95,4,121,15,
		28,16,176,5,0,95,1,95,4,23,12,2,80,1,
		25,20,95,3,121,15,28,14,176,5,0,95,1,95,
		3,23,12,2,80,1,176,1,0,106,2,32,0,95,
		1,12,2,80,3,176,1,0,106,2,44,0,95,1,
		12,2,80,4,25,166,176,6,0,95,2,89,20,0,
		1,0,0,0,176,7,0,95,1,12,1,106,2,85,
		0,8,6,12,2,121,8,80,6,95,6,110,7
	};

	hb_vmExecute( pcode, symbols );
}
