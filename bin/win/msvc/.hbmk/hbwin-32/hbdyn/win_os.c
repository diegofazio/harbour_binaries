/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "..\contrib\hbwin\win_os.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WIN_OSNETREGOK );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_DEFAULTVALUE );
HB_FUNC_EXTERN( HB_OSISWINVISTA );
HB_FUNC_EXTERN( HB_OSISWIN9X );
HB_FUNC_EXTERN( WIN_REGQUERY );
HB_FUNC_EXTERN( HB_OSISWINNT );
HB_FUNC_EXTERN( WAPI_ISUSERANADMIN );
HB_FUNC_EXTERN( HB_OSISWIN7 );
HB_FUNC_EXTERN( HB_OSISWIN2K );
HB_FUNC( WIN_OSNETVREDIROK );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( HB_GETENV );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_WIN_OS )
{ "WIN_OSNETREGOK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OSNETREGOK )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_DEFAULTVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULTVALUE )}, NULL },
{ "HB_OSISWINVISTA", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWINVISTA )}, NULL },
{ "HB_OSISWIN9X", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWIN9X )}, NULL },
{ "WIN_REGQUERY", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_REGQUERY )}, NULL },
{ "HB_OSISWINNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWINNT )}, NULL },
{ "WAPI_ISUSERANADMIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( WAPI_ISUSERANADMIN )}, NULL },
{ "HB_OSISWIN7", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWIN7 )}, NULL },
{ "HB_OSISWIN2K", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_OSISWIN2K )}, NULL },
{ "WIN_OSNETVREDIROK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OSNETVREDIROK )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL },
{ "HB_GETENV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GETENV )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_WIN_OS, "..\\contrib\\hbwin\\win_os.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_WIN_OS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_WIN_OS )
   #include "hbiniseg.h"
#endif

HB_FUNC( WIN_OSNETREGOK )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,120,80,3,176,1,0,96,1,0,9,20,
		2,176,2,0,95,2,120,12,2,31,10,176,3,0,
		12,0,32,75,4,176,4,0,12,0,28,92,176,5,
		0,128,2,0,0,128,0,0,0,0,106,45,83,121,
		115,116,101,109,92,67,117,114,114,101,110,116,67,111,
		110,116,114,111,108,83,101,116,92,83,101,114,118,105,
		99,101,115,92,86,120,68,92,86,82,69,68,73,82,
		0,106,19,68,105,115,99,97,114,100,67,97,99,104,
		101,79,110,79,112,101,110,0,122,95,1,12,5,80,
		3,26,234,3,106,58,83,121,115,116,101,109,92,67,
		117,114,114,101,110,116,67,111,110,116,114,111,108,83,
		101,116,92,83,101,114,118,105,99,101,115,92,76,97,
		110,109,97,110,83,101,114,118,101,114,92,80,97,114,
		97,109,101,116,101,114,115,0,80,4,106,63,83,121,
		115,116,101,109,92,67,117,114,114,101,110,116,67,111,
		110,116,114,111,108,83,101,116,92,83,101,114,118,105,
		99,101,115,92,76,97,110,109,97,110,87,111,114,107,
		83,116,97,116,105,111,110,92,80,97,114,97,109,101,
		116,101,114,115,0,80,5,95,1,28,19,176,6,0,
		12,0,68,21,31,8,73,176,7,0,12,0,80,1,
		95,3,21,28,40,73,176,5,0,128,2,0,0,128,
		0,0,0,0,95,4,106,16,67,97,99,104,101,100,
		79,112,101,110,76,105,109,105,116,0,121,95,1,12,
		5,80,3,95,3,21,28,38,73,176,5,0,128,2,
		0,0,128,0,0,0,0,95,4,106,14,69,110,97,
		98,108,101,79,112,76,111,99,107,115,0,121,95,1,
		12,5,80,3,95,3,21,28,47,73,176,5,0,128,
		2,0,0,128,0,0,0,0,95,4,106,23,69,110,
		97,98,108,101,79,112,76,111,99,107,70,111,114,99,
		101,67,108,111,115,101,0,122,95,1,12,5,80,3,
		95,3,21,28,46,73,176,5,0,128,2,0,0,128,
		0,0,0,0,95,4,106,22,83,104,97,114,105,110,
		103,86,105,111,108,97,116,105,111,110,68,101,108,97,
		121,0,121,95,1,12,5,80,3,95,3,21,28,48,
		73,176,5,0,128,2,0,0,128,0,0,0,0,95,
		4,106,24,83,104,97,114,105,110,103,86,105,111,108,
		97,116,105,111,110,82,101,116,114,105,101,115,0,121,
		95,1,12,5,80,3,95,3,21,28,48,73,176,5,
		0,128,2,0,0,128,0,0,0,0,95,5,106,24,
		85,115,101,79,112,112,111,114,116,117,110,105,115,116,
		105,99,76,111,99,107,105,110,103,0,121,95,1,12,
		5,80,3,95,3,21,28,38,73,176,5,0,128,2,
		0,0,128,0,0,0,0,95,5,106,14,69,110,97,
		98,108,101,79,112,76,111,99,107,115,0,121,95,1,
		12,5,80,3,95,3,21,28,47,73,176,5,0,128,
		2,0,0,128,0,0,0,0,95,5,106,23,69,110,
		97,98,108,101,79,112,76,111,99,107,70,111,114,99,
		101,67,108,111,115,101,0,122,95,1,12,5,80,3,
		95,3,21,28,41,73,176,5,0,128,2,0,0,128,
		0,0,0,0,95,5,106,17,85,116,105,108,105,122,
		101,78,116,67,97,99,104,105,110,103,0,121,95,1,
		12,5,80,3,95,3,21,28,42,73,176,5,0,128,
		2,0,0,128,0,0,0,0,95,5,106,18,85,115,
		101,76,111,99,107,82,101,97,100,85,110,108,111,99,
		107,0,121,95,1,12,5,80,3,176,8,0,12,0,
		28,48,95,3,21,28,39,73,176,5,0,128,2,0,
		0,128,0,0,0,0,95,4,106,15,68,105,115,97,
		98,108,101,76,101,97,115,105,110,103,0,122,95,1,
		12,5,80,3,25,43,176,3,0,12,0,28,36,95,
		3,21,28,29,73,176,5,0,128,2,0,0,128,0,
		0,0,0,95,4,106,5,83,77,66,50,0,121,95,
		1,12,5,80,3,176,3,0,12,0,29,161,0,95,
		3,21,28,46,73,176,5,0,128,2,0,0,128,0,
		0,0,0,95,5,106,22,70,105,108,101,73,110,102,
		111,67,97,99,104,101,76,105,102,101,116,105,109,101,
		0,121,95,1,12,5,80,3,95,3,21,28,50,73,
		176,5,0,128,2,0,0,128,0,0,0,0,95,5,
		106,26,70,105,108,101,78,111,116,70,111,117,110,100,
		67,97,99,104,101,76,105,102,101,116,105,109,101,0,
		121,95,1,12,5,80,3,95,3,21,28,47,73,176,
		5,0,128,2,0,0,128,0,0,0,0,95,5,106,
		23,68,105,114,101,99,116,111,114,121,67,97,99,104,
		101,76,105,102,101,116,105,109,101,0,121,95,1,12,
		5,80,3,176,9,0,12,0,28,99,95,3,21,28,
		92,73,176,5,0,128,2,0,0,128,0,0,0,0,
		106,52,83,121,115,116,101,109,92,67,117,114,114,101,
		110,116,67,111,110,116,114,111,108,83,101,116,92,83,
		101,114,118,105,99,101,115,92,77,82,88,83,109,98,
		92,80,97,114,97,109,101,116,101,114,115,0,106,16,
		79,112,76,111,99,107,115,68,105,115,97,98,108,101,
		100,0,122,95,1,12,5,80,3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WIN_OSNETVREDIROK )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,121,80,1,176,4,0,12,0,29,149,0,
		176,11,0,176,12,0,176,13,0,106,7,87,73,78,
		68,73,82,0,106,11,67,58,92,87,73,78,68,79,
		87,83,0,12,2,106,19,92,83,89,83,84,69,77,
		92,86,82,69,68,73,82,46,86,88,68,0,72,12,
		1,165,80,2,12,1,31,84,25,58,95,2,122,1,
		92,4,1,106,9,49,49,58,49,49,58,49,48,0,
		8,28,61,93,87,4,80,1,25,54,95,2,122,1,
		92,4,1,106,9,48,57,58,53,48,58,48,48,0,
		8,28,33,93,182,3,80,1,25,26,95,2,122,1,
		92,2,1,133,2,0,97,77,100,2,0,25,185,97,
		55,36,2,0,25,206,95,1,121,8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

