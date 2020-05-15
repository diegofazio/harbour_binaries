/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "..\contrib\hbct\fcopy.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( FILECOPY );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FREAD );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_EXTERN( HB_FGETDATETIME );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_FSETDATETIME );
HB_FUNC( FILECOPEN );
HB_FUNC( FILECDATI );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC( FILECCONT );
HB_FUNC( FILECCLOSE );
HB_FUNC( FILEAPPEND );
HB_FUNC_EXTERN( HB_FILEEXISTS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FCOPY )
{ "FILECOPY", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILECOPY )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "FREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( FREAD )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "HB_FGETDATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FGETDATETIME )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_FSETDATETIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FSETDATETIME )}, NULL },
{ "FILECOPEN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILECOPEN )}, NULL },
{ "FILECDATI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILECDATI )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "FILECCONT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILECCONT )}, NULL },
{ "FILECCLOSE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILECCLOSE )}, NULL },
{ "FILEAPPEND", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FILEAPPEND )}, NULL },
{ "HB_FILEEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FILEEXISTS )}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_FCOPY, "..\\contrib\\hbct\\fcopy.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FCOPY
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FCOPY )
   #include "hbiniseg.h"
#endif

HB_FUNC( FILECOPY )
{
	static const HB_BYTE pcode[] =
	{
		13,6,3,116,19,0,176,1,0,93,0,2,12,1,
		80,5,9,80,6,121,80,9,176,2,0,96,3,0,
		9,20,2,103,1,0,92,255,69,28,10,176,3,0,
		103,1,0,20,1,176,4,0,95,1,121,12,2,82,
		1,0,103,1,0,92,255,69,29,175,0,176,5,0,
		95,2,12,1,80,4,95,4,92,255,69,29,145,0,
		176,6,0,103,1,0,96,5,0,93,0,2,12,3,
		80,7,95,7,121,8,28,7,120,80,6,25,52,176,
		7,0,95,4,95,5,95,7,12,3,80,8,95,8,
		121,15,28,8,96,9,0,95,8,135,95,8,95,7,
		35,28,199,95,3,28,16,176,8,0,103,1,0,95,
		8,95,7,49,122,20,3,176,3,0,95,4,20,1,
		95,6,31,6,95,3,31,15,176,3,0,103,1,0,
		20,1,92,255,82,1,0,176,9,0,95,1,104,3,
		0,20,2,103,2,0,28,37,176,10,0,103,3,0,
		12,1,31,27,176,11,0,95,2,103,3,0,20,2,
		25,15,176,3,0,103,1,0,20,1,92,255,82,1,
		0,95,9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILECOPEN )
{
	static const HB_BYTE pcode[] =
	{
		116,19,0,103,1,0,92,255,69,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILECDATI )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,19,0,103,2,0,80,2,176,14,0,
		95,1,12,1,28,7,95,1,82,2,0,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILECCONT )
{
	static const HB_BYTE pcode[] =
	{
		13,6,1,116,19,0,176,1,0,93,0,2,12,1,
		80,3,9,80,4,121,80,7,103,1,0,92,255,69,
		28,126,176,5,0,95,1,12,1,80,2,95,2,92,
		255,69,28,110,176,6,0,103,1,0,96,3,0,93,
		0,2,12,3,80,5,95,5,121,8,28,7,120,80,
		4,25,34,176,7,0,95,2,95,3,95,5,12,3,
		80,6,95,6,121,15,28,8,96,7,0,95,6,135,
		95,6,95,5,35,28,199,176,3,0,95,2,20,1,
		95,4,28,15,176,3,0,103,1,0,20,1,92,255,
		82,1,0,103,2,0,28,22,176,10,0,103,3,0,
		12,1,31,12,176,11,0,95,1,103,3,0,20,2,
		95,7,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILECCLOSE )
{
	static const HB_BYTE pcode[] =
	{
		116,19,0,103,1,0,92,255,69,28,18,176,3,0,
		103,1,0,20,1,92,255,82,1,0,120,110,7,9,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( FILEAPPEND )
{
	static const HB_BYTE pcode[] =
	{
		13,6,2,176,1,0,93,0,2,12,1,80,3,121,
		80,8,176,4,0,95,1,121,12,2,80,4,95,4,
		92,255,69,28,112,176,18,0,95,2,12,1,31,13,
		176,5,0,95,2,12,1,80,5,25,22,176,4,0,
		95,2,122,12,2,80,5,176,8,0,95,5,121,92,
		2,20,3,95,5,92,255,69,28,58,176,6,0,95,
		4,96,3,0,93,0,2,12,3,80,6,95,6,121,
		8,31,30,176,7,0,95,5,95,3,95,6,12,3,
		80,7,95,7,95,6,35,31,10,96,8,0,95,7,
		135,25,209,176,3,0,95,5,20,1,176,3,0,95,
		4,20,1,95,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,19,0,3,0,116,19,0,92,255,82,1,0,120,
		82,2,0,179,3,0,1,0,2,0,3,0,7
	};

	hb_vmExecute( pcode, symbols );
}
