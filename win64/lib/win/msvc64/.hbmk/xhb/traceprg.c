/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "xhb\traceprg.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( XHB_SETTRACE );
HB_FUNC_EXTERN( HB_ISLOGICAL );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( UPPER );
HB_FUNC( XHB_SETTRACEFILE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC( XHB_SETTRACESTACK );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC( TRACELOG );
HB_FUNC_STATIC( CWITHPATH );
HB_FUNC_EXTERN( HB_FILEEXISTS );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( PROCFILE );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( HB_EOL );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( HB_CSTR );
HB_FUNC_EXTERN( HB_FNAMESPLIT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_PS );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TRACEPRG )
{ "XHB_SETTRACE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_SETTRACE )}, NULL },
{ "HB_ISLOGICAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISLOGICAL )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "XHB_SETTRACEFILE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_SETTRACEFILE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "XHB_SETTRACESTACK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( XHB_SETTRACESTACK )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "TRACELOG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRACELOG )}, NULL },
{ "CWITHPATH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CWITHPATH )}, NULL },
{ "HB_FILEEXISTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FILEEXISTS )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "PROCFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCFILE )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "HB_EOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_EOL )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "HB_CSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CSTR )}, NULL },
{ "HB_FNAMESPLIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FNAMESPLIT )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_PS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_PS )}, NULL },
{ "(_INITSTATICS00003)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TRACEPRG, "xhb\\traceprg.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TRACEPRG
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TRACEPRG )
   #include "hbiniseg.h"
#endif

HB_FUNC( XHB_SETTRACE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,27,0,103,1,0,80,2,176,1,0,
		95,1,12,1,28,9,95,1,82,1,0,25,52,176,
		2,0,95,1,12,1,28,43,176,3,0,95,1,12,
		1,106,3,79,78,0,8,28,8,120,82,1,0,25,
		22,176,3,0,95,1,12,1,106,4,79,70,70,0,
		8,28,6,9,82,1,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( XHB_SETTRACEFILE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,116,27,0,103,2,0,80,3,176,2,0,
		95,1,12,1,28,33,95,1,82,2,0,176,1,0,
		95,2,12,1,28,6,95,2,31,15,176,5,0,176,
		6,0,103,2,0,12,1,20,1,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( XHB_SETTRACESTACK )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,27,0,103,3,0,80,2,176,2,0,
		95,1,12,1,28,74,176,3,0,95,1,12,1,106,
		5,78,79,78,69,0,8,28,8,121,82,3,0,25,
		71,176,3,0,95,1,12,1,106,8,67,85,82,82,
		69,78,84,0,8,28,8,122,82,3,0,25,45,176,
		3,0,95,1,12,1,106,4,65,76,76,0,8,28,
		29,92,2,82,3,0,25,22,176,8,0,95,1,12,
		1,28,13,95,1,121,16,28,7,95,1,82,3,0,
		95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TRACELOG )
{
	static const HB_BYTE pcode[] =
	{
		149,5,0,116,27,0,103,1,0,31,5,120,110,7,
		103,2,0,80,1,103,3,0,80,3,176,10,0,95,
		1,12,1,80,1,176,11,0,95,1,12,1,28,14,
		176,12,0,95,1,122,12,2,80,2,25,11,176,6,
		0,95,1,12,1,80,2,176,13,0,95,2,121,92,
		2,20,3,95,3,121,15,28,57,176,14,0,95,2,
		106,2,91,0,176,15,0,122,12,1,72,106,3,45,
		62,0,72,176,16,0,122,12,1,72,106,4,93,32,
		40,0,72,176,17,0,176,18,0,122,12,1,12,1,
		72,106,2,41,0,72,20,2,95,3,122,15,29,128,
		0,176,16,0,92,2,12,1,106,1,0,8,31,114,
		176,14,0,95,2,106,15,32,67,97,108,108,101,100,
		32,102,114,111,109,58,32,0,176,19,0,12,0,72,
		20,2,122,80,3,176,16,0,175,3,0,12,1,165,
		80,4,106,1,0,8,31,76,176,14,0,95,2,176,
		20,0,92,30,12,1,176,15,0,95,3,12,1,72,
		106,3,45,62,0,72,95,4,72,106,2,40,0,72,
		176,17,0,176,18,0,95,3,12,1,12,1,72,106,
		2,41,0,72,176,19,0,12,0,72,20,2,25,179,
		176,14,0,95,2,176,19,0,12,0,20,2,176,21,
		0,12,0,96,5,0,129,1,1,28,58,176,14,0,
		95,2,106,7,84,121,112,101,58,32,0,176,22,0,
		95,5,12,1,72,106,5,32,62,62,62,0,72,176,
		23,0,95,5,12,1,72,106,4,60,60,60,0,72,
		176,19,0,12,0,72,20,2,130,31,202,132,176,14,
		0,95,2,176,19,0,12,0,20,2,176,5,0,95,
		2,20,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CWITHPATH )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,24,0,95,1,96,2,0,20,2,176,
		25,0,95,2,12,1,28,14,106,2,46,0,176,26,
		0,12,0,72,25,5,106,1,0,95,1,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,27,0,3,0,116,27,0,120,82,1,0,106,10,
		116,114,97,99,101,46,108,111,103,0,82,2,0,92,
		2,82,3,0,7
	};

	hb_vmExecute( pcode, symbols );
}

