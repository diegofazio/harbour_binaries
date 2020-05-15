/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbnf\aading.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FT_AADDITION );
HB_FUNC_EXTERN( ACLONE );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LEN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_AADING )
{ "FT_AADDITION", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FT_AADDITION )}, NULL },
{ "ACLONE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACLONE )}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_AADING, "hbnf\\aading.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_AADING
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_AADING )
   #include "hbiniseg.h"
#endif

HB_FUNC( FT_AADDITION )
{
	static const HB_BYTE pcode[] =
	{
		13,3,4,176,1,0,95,1,12,1,80,7,176,2,
		0,96,4,0,120,20,2,176,2,0,96,3,0,120,
		20,2,95,4,28,64,95,3,28,36,89,30,0,1,
		0,2,0,2,0,5,0,176,3,0,95,1,12,1,
		176,3,0,95,255,95,254,1,12,1,8,6,80,6,
		25,106,89,20,0,1,0,2,0,2,0,5,0,95,
		1,95,255,95,254,1,8,6,80,6,25,82,95,3,
		28,46,89,40,0,1,0,2,0,2,0,5,0,176,
		4,0,176,3,0,95,1,12,1,12,1,176,4,0,
		176,3,0,95,255,95,254,1,12,1,12,1,8,6,
		80,6,25,34,89,30,0,1,0,2,0,2,0,5,
		0,176,4,0,95,1,12,1,176,4,0,95,255,95,
		254,1,12,1,8,6,80,6,122,165,80,5,25,30,
		176,5,0,95,1,95,6,12,2,121,8,28,14,176,
		6,0,95,7,95,2,95,5,1,20,2,175,5,0,
		176,7,0,95,2,12,1,15,28,220,95,7,110,7
	};

	hb_vmExecute( pcode, symbols );
}

