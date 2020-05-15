/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "xhb\xhbmemo.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( XHB_TMEMOEDITOR );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( XHBEDITOR );
HB_FUNC_STATIC( XHB_TMEMOEDITOR_MEMOINIT );
HB_FUNC_STATIC( XHB_TMEMOEDITOR_EDIT );
HB_FUNC_STATIC( XHB_TMEMOEDITOR_KEYBOARDHOOK );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_STATIC( XHB_TMEMOEDITOR_HANDLEUDF );
HB_FUNC_STATIC( XHB_TMEMOEDITOR_CALLUDF );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( NEXTKEY );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( READVAR );
HB_FUNC_EXTERN( DO );
HB_FUNC( XHB_MEMOEDIT );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( MAXCOL );
HB_FUNC_EXTERN( HB_ISNIL );
HB_FUNC_EXTERN( HB_ISMEMO );
HB_FUNC_EXTERN( THROW );
HB_FUNC_EXTERN( ERRORNEW );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( MIN );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_XHBMEMO )
{ "XHB_TMEMOEDITOR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_TMEMOEDITOR )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "XHBEDITOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( XHBEDITOR )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "XHB_TMEMOEDITOR_MEMOINIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_TMEMOEDITOR_MEMOINIT )}, NULL },
{ "XHB_TMEMOEDITOR_EDIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_TMEMOEDITOR_EDIT )}, NULL },
{ "XHB_TMEMOEDITOR_KEYBOARDHOOK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_TMEMOEDITOR_KEYBOARDHOOK )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "XUSERFUNCTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "XHB_TMEMOEDITOR_HANDLEUDF", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_TMEMOEDITOR_HANDLEUDF )}, NULL },
{ "XHB_TMEMOEDITOR_CALLUDF", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_TMEMOEDITOR_CALLUDF )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "_AEDITKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AASCIIKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "AASCIIKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "_XUSERFUNCTION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACONFIGURABLEKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AEXTKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_AMOUSEKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXISTUDF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "CALLUDF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HANDLEUDF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEXTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( NEXTKEY )}, NULL },
{ "LEXITEDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "_BKEYBLOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BKEYBLOCK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READVAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( READVAR )}, NULL },
{ "AEDITKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACONFIGURABLEKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEXTKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EDIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEDITALLOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "KEYBOARDHOOK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCHANGED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AMOUSEKEYS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAYINSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINSERT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LWORDWRAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LWORDWRAP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LVERTICALSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LVERTICALSCROLL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WORDRIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOTTOM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ROW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DO )}, NULL },
{ "NROW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCOL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "XHB_MEMOEDIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_MEMOEDIT )}, NULL },
{ "MAXROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXROW )}, NULL },
{ "MAXCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXCOL )}, NULL },
{ "HB_ISNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNIL )}, NULL },
{ "HB_ISMEMO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISMEMO )}, NULL },
{ "THROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( THROW )}, NULL },
{ "ERRORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORNEW )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "_PROCNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PROCLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "MEMOINIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REFRESHWINDOW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LSAVED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GETTEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "MIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MIN )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_XHBMEMO, "xhb\\xhbmemo.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_XHBMEMO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_XHBMEMO )
   #include "hbiniseg.h"
#endif

HB_FUNC( XHB_TMEMOEDITOR )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,89,0,103,1,0,100,8,29,206,1,
		176,1,0,104,1,0,12,1,29,195,1,166,133,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,16,
		120,104,98,95,84,77,101,109,111,69,100,105,116,111,
		114,0,108,4,4,1,0,108,0,112,3,80,2,48,
		5,0,95,2,100,100,95,1,106,14,120,85,115,101,
		114,70,117,110,99,116,105,111,110,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,100,95,1,106,10,
		97,69,100,105,116,75,101,121,115,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,100,95,1,106,11,
		97,65,115,99,105,105,75,101,121,115,0,4,1,0,
		9,112,5,73,48,5,0,95,2,100,100,95,1,106,
		18,97,67,111,110,102,105,103,117,114,97,98,108,101,
		75,101,121,115,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,100,95,1,106,11,97,77,111,117,115,
		101,75,101,121,115,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,100,95,1,106,9,97,69,120,116,
		75,101,121,115,0,4,1,0,9,112,5,73,48,6,
		0,95,2,106,9,77,101,109,111,73,110,105,116,0,
		108,7,95,1,112,3,73,48,6,0,95,2,106,5,
		69,100,105,116,0,108,8,95,1,112,3,73,48,6,
		0,95,2,106,13,75,101,121,98,111,97,114,100,72,
		111,111,107,0,108,9,95,1,112,3,73,48,10,0,
		95,2,106,9,69,120,105,115,116,85,100,102,0,89,
		20,0,1,0,0,0,176,11,0,48,12,0,95,1,
		112,0,12,1,6,95,1,112,3,73,48,6,0,95,
		2,106,10,72,97,110,100,108,101,85,100,102,0,108,
		13,95,1,112,3,73,48,6,0,95,2,106,8,67,
		97,108,108,85,100,102,0,108,14,95,1,112,3,73,
		48,15,0,95,2,112,0,73,167,14,0,0,176,16,
		0,104,1,0,95,2,20,2,168,48,17,0,95,2,
		112,0,80,3,176,18,0,95,3,106,10,73,110,105,
		116,67,108,97,115,115,0,12,2,28,12,48,19,0,
		95,3,164,146,1,0,73,95,3,110,7,48,17,0,
		103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XHB_TMEMOEDITOR_MEMOINIT )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,102,80,2,176,20,0,96,1,0,100,20,
		2,48,21,0,95,2,92,24,92,5,92,19,92,4,
		92,26,92,2,122,92,6,92,29,92,23,92,18,92,
		3,92,31,92,30,92,13,92,13,92,7,92,8,92,
		127,92,9,93,15,1,4,21,0,112,1,73,48,22,
		0,95,2,93,224,0,3,1,0,112,1,73,176,23,
		0,48,24,0,95,2,112,0,89,38,0,2,0,1,
		0,2,0,176,25,0,95,1,12,1,28,20,95,2,
		92,31,72,165,48,24,0,95,255,112,0,95,2,2,
		25,3,100,6,20,2,48,26,0,95,2,95,1,112,
		1,73,48,27,0,95,2,92,14,92,25,92,20,92,
		2,92,23,4,5,0,112,1,73,48,28,0,95,2,
		4,0,0,112,1,73,48,29,0,95,2,93,235,3,
		93,246,3,93,247,3,4,3,0,112,1,73,48,30,
		0,95,2,112,0,28,43,176,31,0,121,100,4,2,
		0,48,32,0,95,2,92,3,112,1,165,80,3,12,
		2,121,8,28,17,48,33,0,95,2,95,3,95,3,
		9,112,3,73,25,217,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XHB_TMEMOEDITOR_EDIT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,176,34,0,12,0,121,8,28,18,48,30,
		0,102,112,0,28,10,48,32,0,102,121,112,1,73,
		121,80,3,48,35,0,102,112,0,32,4,2,95,3,
		121,8,28,12,176,36,0,121,12,1,80,1,25,9,
		95,3,80,1,121,80,3,95,3,121,8,28,66,48,
		37,0,102,176,38,0,95,1,12,1,112,1,100,69,
		28,49,48,39,0,48,40,0,102,112,0,48,41,0,
		102,112,0,48,42,0,102,112,0,176,43,0,12,0,
		112,3,73,176,34,0,12,0,80,3,95,3,121,69,
		28,7,176,36,0,20,0,48,40,0,102,112,0,100,
		8,29,212,0,176,31,0,48,44,0,102,112,0,95,
		1,12,2,121,15,31,83,176,31,0,48,24,0,102,
		112,0,95,1,12,2,121,15,31,66,176,31,0,48,
		45,0,102,112,0,95,1,12,2,121,15,31,49,176,
		31,0,48,46,0,102,112,0,95,1,12,2,121,15,
		31,32,95,1,92,22,8,28,10,48,30,0,102,112,
		0,28,17,95,1,92,27,8,28,26,48,30,0,102,
		112,0,31,18,48,47,0,48,48,0,102,112,0,95,
		1,112,1,73,25,97,176,31,0,48,45,0,102,112,
		0,95,1,12,2,121,8,28,33,176,31,0,48,46,
		0,102,112,0,95,1,12,2,121,8,28,16,95,1,
		93,255,0,15,31,46,95,1,121,35,31,40,95,1,
		92,22,8,28,18,48,49,0,102,112,0,28,10,48,
		30,0,102,112,0,31,17,95,1,92,27,8,28,19,
		48,30,0,102,112,0,28,11,48,50,0,102,95,1,
		112,1,73,48,30,0,102,112,0,29,184,254,176,31,
		0,48,44,0,102,112,0,95,1,12,2,121,15,31,
		61,176,31,0,48,24,0,102,112,0,95,1,12,2,
		121,15,31,44,176,31,0,48,45,0,102,112,0,95,
		1,12,2,121,15,31,27,176,31,0,48,46,0,102,
		112,0,95,1,12,2,121,15,31,10,95,1,92,28,
		8,29,108,254,176,34,0,12,0,121,8,28,37,176,
		31,0,48,45,0,102,112,0,95,1,12,2,121,8,
		28,20,95,1,92,28,69,28,13,48,32,0,102,121,
		112,1,80,2,25,51,176,31,0,48,45,0,102,112,
		0,95,1,12,2,121,8,28,25,48,32,0,102,48,
		51,0,102,112,0,28,6,92,2,25,3,122,112,1,
		80,2,25,11,48,32,0,102,122,112,1,80,2,48,
		33,0,102,95,1,95,2,48,40,0,102,112,0,100,
		8,112,3,73,26,249,253,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XHB_TMEMOEDITOR_KEYBOARDHOOK )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,30,0,102,112,0,28,35,48,32,0,
		102,48,51,0,102,112,0,28,6,92,2,25,3,122,
		112,1,80,2,48,33,0,102,95,1,95,2,9,112,
		3,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XHB_TMEMOEDITOR_HANDLEUDF )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,20,0,96,2,0,121,20,2,176,20,
		0,96,3,0,9,20,2,26,39,1,95,3,32,102,
		1,176,31,0,48,24,0,102,112,0,95,1,12,2,
		121,15,31,70,176,31,0,93,17,1,92,23,4,2,
		0,95,1,12,2,121,15,31,51,176,31,0,48,46,
		0,102,112,0,95,1,12,2,121,15,31,34,95,1,
		92,27,8,31,27,95,1,92,22,8,31,20,176,31,
		0,48,52,0,102,112,0,95,1,12,2,121,15,29,
		17,1,48,47,0,48,48,0,102,112,0,95,1,112,
		1,73,26,0,1,48,53,0,102,48,54,0,102,112,
		0,112,1,73,26,240,0,95,3,32,235,0,176,31,
		0,48,24,0,102,112,0,95,1,12,2,121,15,31,
		34,176,31,0,48,46,0,102,112,0,95,1,12,2,
		121,15,31,17,95,1,92,27,8,31,10,95,1,92,
		22,8,29,186,0,48,47,0,48,48,0,102,112,0,
		95,1,112,1,73,26,169,0,48,55,0,102,48,56,
		0,102,112,0,68,112,1,73,26,152,0,48,57,0,
		102,48,58,0,102,112,0,68,112,1,73,26,135,0,
		48,59,0,102,112,0,73,25,125,48,60,0,102,112,
		0,73,48,61,0,102,112,0,73,25,109,25,107,95,
		2,80,1,95,3,31,99,95,1,122,16,28,93,95,
		1,92,31,34,28,86,48,47,0,48,48,0,102,112,
		0,95,1,112,1,73,25,70,95,2,133,9,0,97,
		0,0,0,0,26,210,254,97,32,0,0,0,26,53,
		255,97,33,0,0,0,26,61,255,97,34,0,0,0,
		26,124,255,97,35,0,0,0,25,133,97,100,0,0,
		0,25,143,97,101,0,0,0,25,145,97,110,0,0,
		0,25,154,100,25,153,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( XHB_TMEMOEDITOR_CALLUDF )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,48,62,0,102,112,0,80,2,48,63,0,
		102,112,0,80,3,48,30,0,102,112,0,28,42,176,
		64,0,48,12,0,102,112,0,95,1,48,65,0,102,
		112,0,48,66,0,102,112,0,17,102,12,5,80,4,
		48,67,0,102,95,2,95,3,112,2,73,95,4,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( XHB_MEMOEDIT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,13,176,20,0,96,1,0,106,1,0,20,2,
		176,20,0,96,2,0,121,20,2,176,20,0,96,3,
		0,121,20,2,176,20,0,96,4,0,176,69,0,12,
		0,20,2,176,20,0,96,5,0,176,70,0,12,0,
		20,2,176,20,0,96,6,0,120,20,2,176,20,0,
		96,8,0,100,20,2,176,20,0,96,9,0,92,3,
		20,2,176,20,0,96,10,0,122,20,2,176,20,0,
		96,11,0,121,20,2,176,20,0,96,12,0,121,20,
		2,176,20,0,96,13,0,95,11,20,2,176,71,0,
		95,1,12,1,31,78,176,11,0,95,1,12,1,31,
		69,176,72,0,95,1,12,1,31,60,176,73,0,176,
		74,0,106,5,66,65,83,69,0,121,93,103,4,106,
		30,60,99,83,116,114,105,110,103,62,32,65,114,103,
		117,109,101,110,116,32,116,121,112,101,32,101,114,114,
		111,114,0,176,75,0,12,0,12,5,20,1,176,71,
		0,95,2,12,1,31,66,176,76,0,95,2,12,1,
		31,57,176,73,0,176,74,0,106,5,66,65,83,69,
		0,121,93,103,4,106,27,60,110,84,111,112,62,32,
		65,114,103,117,109,101,110,116,32,116,121,112,101,32,
		101,114,114,111,114,0,176,75,0,12,0,12,5,20,
		1,176,71,0,95,3,12,1,31,67,176,76,0,95,
		3,12,1,31,58,176,73,0,176,74,0,106,5,66,
		65,83,69,0,121,93,103,4,106,28,60,110,76,101,
		102,116,62,32,65,114,103,117,109,101,110,116,32,116,
		121,112,101,32,101,114,114,111,114,0,176,75,0,12,
		0,12,5,20,1,176,71,0,95,5,12,1,31,68,
		176,76,0,95,5,12,1,31,59,176,73,0,176,74,
		0,106,5,66,65,83,69,0,121,93,103,4,106,29,
		60,110,82,105,103,104,116,62,32,65,114,103,117,109,
		101,110,116,32,116,121,112,101,32,101,114,114,111,114,
		0,176,75,0,12,0,12,5,20,1,176,71,0,95,
		4,12,1,31,69,176,76,0,95,4,12,1,31,60,
		176,73,0,176,74,0,106,5,66,65,83,69,0,121,
		93,103,4,106,30,60,110,66,111,116,116,111,109,62,
		32,65,114,103,117,109,101,110,116,32,116,121,112,101,
		32,101,114,114,111,114,0,176,75,0,12,0,12,5,
		20,1,176,71,0,95,6,12,1,31,71,176,77,0,
		95,6,12,1,31,62,176,73,0,176,74,0,106,5,
		66,65,83,69,0,121,93,103,4,106,32,60,108,69,
		100,105,116,77,111,100,101,62,32,65,114,103,117,109,
		101,110,116,32,116,121,112,101,32,101,114,114,111,114,
		0,176,75,0,12,0,12,5,20,1,176,71,0,95,
		7,12,1,31,84,176,11,0,95,7,12,1,31,75,
		176,77,0,95,7,12,1,31,66,176,73,0,176,74,
		0,106,5,66,65,83,69,0,121,93,103,4,106,36,
		60,99,85,115,101,114,70,117,110,99,116,105,111,110,
		62,32,65,114,103,117,109,101,110,116,32,116,121,112,
		101,32,101,114,114,111,114,0,176,75,0,12,0,12,
		5,20,1,176,71,0,95,8,12,1,31,73,176,76,
		0,95,8,12,1,31,64,176,73,0,176,74,0,106,
		5,66,65,83,69,0,121,93,103,4,106,34,60,110,
		76,105,110,101,76,101,110,103,116,104,62,32,65,114,
		103,117,109,101,110,116,32,116,121,112,101,32,101,114,
		114,111,114,0,176,75,0,12,0,12,5,20,1,176,
		71,0,95,9,12,1,31,70,176,76,0,95,9,12,
		1,31,61,176,73,0,176,74,0,106,5,66,65,83,
		69,0,121,93,103,4,106,31,60,110,84,97,98,83,
		105,122,101,62,32,65,114,103,117,109,101,110,116,32,
		116,121,112,101,32,101,114,114,111,114,0,176,75,0,
		12,0,12,5,20,1,176,71,0,95,10,12,1,31,
		74,176,76,0,95,10,12,1,31,65,176,73,0,176,
		74,0,106,5,66,65,83,69,0,121,93,103,4,106,
		35,60,110,84,101,120,116,66,117,102,102,82,111,119,
		62,32,65,114,103,117,109,101,110,116,32,116,121,112,
		101,32,101,114,114,111,114,0,176,75,0,12,0,12,
		5,20,1,176,71,0,95,11,12,1,31,77,176,76,
		0,95,11,12,1,31,68,176,73,0,176,74,0,106,
		5,66,65,83,69,0,121,93,103,4,106,38,60,110,
		84,101,120,116,66,117,102,102,67,111,108,117,109,110,
		62,32,65,114,103,117,109,101,110,116,32,116,121,112,
		101,32,101,114,114,111,114,0,176,75,0,12,0,12,
		5,20,1,176,71,0,95,12,12,1,31,72,176,76,
		0,95,12,12,1,31,63,176,73,0,176,74,0,106,
		5,66,65,83,69,0,121,93,103,4,106,33,60,110,
		87,105,110,100,111,119,82,111,119,62,32,65,114,103,
		117,109,101,110,116,32,116,121,112,101,32,101,114,114,
		111,114,0,176,75,0,12,0,12,5,20,1,176,71,
		0,95,13,12,1,31,75,176,76,0,95,13,12,1,
		31,66,176,73,0,176,74,0,106,5,66,65,83,69,
		0,121,93,103,4,106,36,60,110,87,105,110,100,111,
		119,67,111,108,117,109,110,62,32,65,114,103,117,109,
		101,110,116,32,116,121,112,101,32,101,114,114,111,114,
		0,176,75,0,12,0,12,5,20,1,95,2,95,4,
		15,31,9,95,3,95,5,15,28,73,176,73,0,176,
		74,0,106,5,66,65,83,69,0,121,93,103,4,106,
		43,60,110,84,111,112,44,110,76,101,102,116,44,110,
		82,105,103,104,116,44,110,66,111,116,116,111,109,62,
		32,65,114,103,117,109,101,110,116,32,101,114,114,111,
		114,0,176,75,0,12,0,12,5,20,1,176,11,0,
		95,7,12,1,28,14,176,25,0,95,7,12,1,28,
		5,100,80,7,48,2,0,176,0,0,12,0,176,78,
		0,95,1,106,2,9,0,176,79,0,95,9,12,1,
		12,3,95,2,95,3,95,4,95,5,95,6,95,8,
		95,9,95,10,95,11,95,12,95,13,112,12,80,14,
		48,80,0,95,14,176,75,0,122,12,1,112,1,73,
		48,81,0,95,14,176,82,0,122,12,1,112,1,73,
		48,83,0,95,14,95,7,112,1,73,48,84,0,95,
		14,112,0,73,176,77,0,95,7,12,1,31,31,48,
		47,0,95,14,112,0,73,48,85,0,95,14,112,0,
		28,32,48,86,0,95,14,120,112,1,80,1,25,20,
		176,87,0,176,88,0,95,4,176,69,0,12,0,12,
		2,121,20,2,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,89,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
