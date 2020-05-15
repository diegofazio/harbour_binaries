/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbxpp\dbfuncsx.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( _DBEXPORT );
HB_FUNC_EXTERN( __DBCOPY );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC( XPP_DBUSEAREA );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( DBUSEAREA );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DBFUNCSX )
{ "_DBEXPORT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( _DBEXPORT )}, NULL },
{ "__DBCOPY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBCOPY )}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "XPP_DBUSEAREA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XPP_DBUSEAREA )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_DBFUNCSX, "..\\contrib\\hbxpp\\dbfuncsx.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DBFUNCSX
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DBFUNCSX )
   #include "hbiniseg.h"
#endif

HB_FUNC( _DBEXPORT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,9,25,60,176,1,0,95,1,95,2,95,3,
		95,4,95,5,95,6,95,7,106,4,83,68,70,0,
		20,8,7,176,1,0,95,1,95,2,95,3,95,4,
		95,5,95,6,95,7,106,6,68,69,76,73,77,0,
		100,100,95,9,20,11,7,176,2,0,95,8,106,1,
		0,12,2,133,2,0,106,7,83,68,70,68,66,69,
		0,25,176,106,7,68,69,76,68,66,69,0,25,191,
		176,1,0,95,1,95,2,95,3,95,4,95,5,95,
		6,95,7,95,8,20,8,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( XPP_DBUSEAREA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,6,176,4,0,95,1,12,1,28,83,95,1,
		28,79,176,5,0,96,4,0,106,1,0,20,2,176,
		6,0,95,4,12,1,28,6,95,3,80,4,176,7,
		0,95,4,12,1,28,46,176,8,0,12,0,80,7,
		176,8,0,95,4,12,1,165,80,8,121,15,28,18,
		96,4,0,106,2,95,0,176,9,0,95,8,12,1,
		72,135,176,10,0,95,7,20,1,176,11,0,95,1,
		95,2,95,3,95,4,95,5,95,6,20,6,7
	};

	hb_vmExecute( pcode, symbols );
}

