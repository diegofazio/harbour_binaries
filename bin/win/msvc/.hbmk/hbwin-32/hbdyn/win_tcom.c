/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "..\contrib\hbwin\win_tcom.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WIN_COM );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( WIN_COM_INIT );
HB_FUNC_STATIC( WIN_COM_QUEUESIZE );
HB_FUNC_STATIC( WIN_COM_TIMEOUTS );
HB_FUNC_STATIC( WIN_COM_READ );
HB_FUNC_STATIC( WIN_COM_RECV );
HB_FUNC_STATIC( WIN_COM_RECVTO );
HB_FUNC_STATIC( WIN_COM_WRITE );
HB_FUNC_STATIC( WIN_COM_STATUS );
HB_FUNC_STATIC( WIN_COM_QUEUESTATUS );
HB_FUNC_STATIC( WIN_COM_SETRTS );
HB_FUNC_STATIC( WIN_COM_SETDTR );
HB_FUNC_STATIC( WIN_COM_RTSFLOW );
HB_FUNC_STATIC( WIN_COM_DTRFLOW );
HB_FUNC_STATIC( WIN_COM_XONXOFFFLOW );
HB_FUNC_STATIC( WIN_COM_PURGE );
HB_FUNC_STATIC( WIN_COM_PURGERX );
HB_FUNC_STATIC( WIN_COM_PURGETX );
HB_FUNC_STATIC( WIN_COM_CLOSE );
HB_FUNC_STATIC( WIN_COM_DEBUGDCB );
HB_FUNC_STATIC( WIN_COM_ERRORTEXT );
HB_FUNC_STATIC( WIN_COM_ERROR );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( WIN_COMOPEN );
HB_FUNC_EXTERN( WIN_COMSETQUEUESIZE );
HB_FUNC_EXTERN( WIN_COMSETTIMEOUTS );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( WIN_COMREAD );
HB_FUNC_EXTERN( WIN_COMRECV );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( WIN_COMWRITE );
HB_FUNC_EXTERN( WIN_COMSTATUS );
HB_FUNC_EXTERN( WIN_COMQUEUESTATUS );
HB_FUNC_EXTERN( WIN_COMSETRTS );
HB_FUNC_EXTERN( WIN_COMSETDTR );
HB_FUNC_EXTERN( WIN_COMRTSFLOW );
HB_FUNC_EXTERN( WIN_COMDTRFLOW );
HB_FUNC_EXTERN( WIN_COMXONXOFFFLOW );
HB_FUNC_EXTERN( WIN_COMPURGE );
HB_FUNC_EXTERN( WIN_COMCLOSE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( WIN_COMDEBUGDCB );
HB_FUNC_EXTERN( WIN_COMFUNCLAST );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( WAPI_FORMATMESSAGE );
HB_FUNC_EXTERN( WIN_COMERROR );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_WIN_TCOM )
{ "WIN_COM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPORTNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_COM_INIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_INIT )}, NULL },
{ "WIN_COM_QUEUESIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_QUEUESIZE )}, NULL },
{ "WIN_COM_TIMEOUTS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_TIMEOUTS )}, NULL },
{ "WIN_COM_READ", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_READ )}, NULL },
{ "WIN_COM_RECV", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_RECV )}, NULL },
{ "WIN_COM_RECVTO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_RECVTO )}, NULL },
{ "WIN_COM_WRITE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_WRITE )}, NULL },
{ "WIN_COM_STATUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_STATUS )}, NULL },
{ "WIN_COM_QUEUESTATUS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_QUEUESTATUS )}, NULL },
{ "WIN_COM_SETRTS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_SETRTS )}, NULL },
{ "WIN_COM_SETDTR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_SETDTR )}, NULL },
{ "WIN_COM_RTSFLOW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_RTSFLOW )}, NULL },
{ "WIN_COM_DTRFLOW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_DTRFLOW )}, NULL },
{ "WIN_COM_XONXOFFFLOW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_XONXOFFFLOW )}, NULL },
{ "WIN_COM_PURGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_PURGE )}, NULL },
{ "WIN_COM_PURGERX", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_PURGERX )}, NULL },
{ "WIN_COM_PURGETX", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_PURGETX )}, NULL },
{ "WIN_COM_CLOSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_CLOSE )}, NULL },
{ "WIN_COM_DEBUGDCB", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_DEBUGDCB )}, NULL },
{ "WIN_COM_ERRORTEXT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_ERRORTEXT )}, NULL },
{ "WIN_COM_ERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_COM_ERROR )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CPORTNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "_NPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "WIN_COMOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMOPEN )}, NULL },
{ "NPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LOPEN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_COMSETQUEUESIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMSETQUEUESIZE )}, NULL },
{ "WIN_COMSETTIMEOUTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMSETTIMEOUTS )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "WIN_COMREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMREAD )}, NULL },
{ "WIN_COMRECV", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMRECV )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "WIN_COMWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMWRITE )}, NULL },
{ "WIN_COMSTATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMSTATUS )}, NULL },
{ "WIN_COMQUEUESTATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMQUEUESTATUS )}, NULL },
{ "WIN_COMSETRTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMSETRTS )}, NULL },
{ "WIN_COMSETDTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMSETDTR )}, NULL },
{ "WIN_COMRTSFLOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMRTSFLOW )}, NULL },
{ "WIN_COMDTRFLOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMDTRFLOW )}, NULL },
{ "WIN_COMXONXOFFFLOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMXONXOFFFLOW )}, NULL },
{ "WIN_COMPURGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMPURGE )}, NULL },
{ "WIN_COMCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMCLOSE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "WIN_COMDEBUGDCB", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMDEBUGDCB )}, NULL },
{ "WIN_COMFUNCLAST", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMFUNCLAST )}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "WAPI_FORMATMESSAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WAPI_FORMATMESSAGE )}, NULL },
{ "WIN_COMERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_COMERROR )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_WIN_TCOM, "..\\contrib\\hbwin\\win_tcom.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_WIN_TCOM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_WIN_TCOM )
   #include "hbiniseg.h"
#endif

HB_FUNC( WIN_COM )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,67,0,103,1,0,100,8,29,207,2,
		176,1,0,104,1,0,12,1,29,196,2,166,134,2,
		0,122,80,1,48,2,0,176,3,0,12,0,106,8,
		119,105,110,95,67,111,109,0,108,4,4,1,0,108,
		0,112,3,80,2,48,5,0,95,2,106,5,79,112,
		101,110,0,89,15,0,1,0,0,0,48,6,0,95,
		1,112,0,6,95,1,112,3,73,48,5,0,95,2,
		106,9,80,111,114,116,78,97,109,101,0,89,15,0,
		1,0,0,0,48,7,0,95,1,112,0,6,95,1,
		112,3,73,48,8,0,95,2,100,92,255,92,2,106,
		6,110,80,111,114,116,0,4,1,0,9,112,5,73,
		48,8,0,95,2,100,9,92,2,106,6,108,79,112,
		101,110,0,4,1,0,9,112,5,73,48,8,0,95,
		2,100,106,1,0,92,2,106,10,99,80,111,114,116,
		78,97,109,101,0,4,1,0,9,112,5,73,48,9,
		0,95,2,106,5,73,110,105,116,0,108,10,95,1,
		112,3,73,48,9,0,95,2,106,10,81,117,101,117,
		101,83,105,122,101,0,108,11,95,1,112,3,73,48,
		9,0,95,2,106,9,84,105,109,101,79,117,116,115,
		0,108,12,95,1,112,3,73,48,9,0,95,2,106,
		5,82,101,97,100,0,108,13,95,1,112,3,73,48,
		9,0,95,2,106,5,82,101,99,118,0,108,14,95,
		1,112,3,73,48,9,0,95,2,106,7,82,101,99,
		118,84,111,0,108,15,95,1,112,3,73,48,9,0,
		95,2,106,6,87,114,105,116,101,0,108,16,95,1,
		112,3,73,48,9,0,95,2,106,7,83,116,97,116,
		117,115,0,108,17,95,1,112,3,73,48,9,0,95,
		2,106,12,81,117,101,117,101,83,116,97,116,117,115,
		0,108,18,95,1,112,3,73,48,9,0,95,2,106,
		7,83,101,116,82,84,83,0,108,19,95,1,112,3,
		73,48,9,0,95,2,106,7,83,101,116,68,84,82,
		0,108,20,95,1,112,3,73,48,9,0,95,2,106,
		8,82,84,83,70,108,111,119,0,108,21,95,1,112,
		3,73,48,9,0,95,2,106,8,68,84,82,70,108,
		111,119,0,108,22,95,1,112,3,73,48,9,0,95,
		2,106,12,88,111,110,88,111,102,102,70,108,111,119,
		0,108,23,95,1,112,3,73,48,9,0,95,2,106,
		6,80,117,114,103,101,0,108,24,95,1,112,3,73,
		48,9,0,95,2,106,8,80,117,114,103,101,82,88,
		0,108,25,95,1,112,3,73,48,9,0,95,2,106,
		8,80,117,114,103,101,84,88,0,108,26,95,1,112,
		3,73,48,9,0,95,2,106,6,67,108,111,115,101,
		0,108,27,95,1,112,3,73,48,9,0,95,2,106,
		9,68,101,98,117,103,68,67,66,0,108,28,95,1,
		112,3,73,48,9,0,95,2,106,10,69,114,114,111,
		114,84,101,120,116,0,108,29,95,1,112,3,73,48,
		9,0,95,2,106,6,69,114,114,111,114,0,108,30,
		95,1,112,3,73,48,31,0,95,2,112,0,73,167,
		14,0,0,176,32,0,104,1,0,95,2,20,2,168,
		48,33,0,95,2,112,0,80,3,176,34,0,95,3,
		106,10,73,110,105,116,67,108,97,115,115,0,12,2,
		28,12,48,35,0,95,3,164,146,1,0,73,95,3,
		110,7,48,33,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_INIT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,48,36,0,102,176,37,0,95,1,12,1,
		112,1,73,176,38,0,48,7,0,102,112,0,92,3,
		12,2,106,4,67,79,77,0,8,28,60,48,39,0,
		102,176,40,0,176,41,0,48,7,0,102,112,0,92,
		4,12,2,12,1,17,112,1,73,176,42,0,48,43,
		0,102,112,0,95,2,95,3,95,4,95,5,12,5,
		92,255,69,28,10,48,44,0,102,120,112,1,73,102,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_QUEUESIZE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,45,0,48,43,0,102,112,0,95,1,
		95,2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_TIMEOUTS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,176,46,0,48,43,0,102,112,0,95,1,
		95,2,95,3,95,4,95,5,20,6,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_READ )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,47,0,95,2,12,1,80,1,176,48,
		0,48,43,0,102,112,0,96,1,0,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_RECV )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,49,0,48,43,0,102,112,0,95,1,
		96,2,0,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_RECVTO )
{
	static const HB_BYTE pcode[] =
	{
		13,3,2,106,1,0,80,4,176,47,0,122,12,1,
		80,5,176,48,0,48,43,0,102,112,0,96,5,0,
		12,2,165,80,3,92,255,69,28,39,95,3,121,8,
		31,33,96,4,0,95,5,135,95,1,100,69,28,9,
		95,5,95,1,8,31,14,176,50,0,95,4,12,1,
		95,2,8,28,191,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_WRITE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,51,0,48,43,0,102,112,0,95,1,
		20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_STATUS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,4,176,52,0,48,43,0,102,112,0,96,1,
		0,96,2,0,96,3,0,96,4,0,20,5,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_QUEUESTATUS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,7,176,53,0,48,43,0,102,112,0,96,1,
		0,96,2,0,96,3,0,96,4,0,96,5,0,96,
		6,0,96,7,0,20,8,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_SETRTS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,54,0,48,43,0,102,112,0,95,1,
		20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_SETDTR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,55,0,48,43,0,102,112,0,95,1,
		20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_RTSFLOW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,56,0,48,43,0,102,112,0,95,1,
		20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_DTRFLOW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,57,0,48,43,0,102,112,0,95,1,
		20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_XONXOFFFLOW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,58,0,48,43,0,102,112,0,95,1,
		20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_PURGE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,176,59,0,48,43,0,102,112,0,95,1,
		95,2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_PURGERX )
{
	static const HB_BYTE pcode[] =
	{
		176,59,0,48,43,0,102,112,0,120,9,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_PURGETX )
{
	static const HB_BYTE pcode[] =
	{
		176,59,0,48,43,0,102,112,0,9,120,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_CLOSE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,60,0,48,43,0,102,112,0,176,61,
		0,95,1,12,1,28,5,121,25,4,95,1,20,2,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_DEBUGDCB )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,62,0,48,43,0,102,112,0,95,1,
		20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_ERRORTEXT )
{
	static const HB_BYTE pcode[] =
	{
		13,5,0,176,63,0,48,43,0,102,112,0,12,1,
		80,1,106,11,67,114,101,97,116,101,70,105,108,101,
		0,106,13,71,101,116,67,111,109,109,83,116,97,116,
		101,0,106,13,83,101,116,67,111,109,109,83,116,97,
		116,101,0,106,10,83,101,116,117,112,67,111,109,109,
		0,106,16,71,101,116,67,111,109,109,84,105,109,101,
		111,117,116,115,0,106,16,83,101,116,67,111,109,109,
		84,105,109,101,111,117,116,115,0,106,12,67,108,111,
		115,101,72,97,110,100,108,101,0,106,10,87,114,105,
		116,101,70,105,108,101,0,106,9,82,101,97,100,70,
		105,108,101,0,106,19,71,101,116,67,111,109,109,77,
		111,100,101,109,83,116,97,116,117,115,0,106,10,80,
		117,114,103,101,67,111,109,109,0,106,15,67,108,101,
		97,114,67,111,109,109,69,114,114,111,114,0,106,19,
		69,115,99,97,112,101,67,111,109,109,70,117,110,99,
		116,105,111,110,0,106,18,71,101,116,67,111,109,109,
		80,114,111,112,101,114,116,105,101,115,0,4,14,0,
		80,5,95,1,122,16,28,31,95,1,176,50,0,95,
		5,12,1,34,28,19,95,5,95,1,1,106,5,40,
		41,44,32,0,72,80,2,25,47,106,18,70,117,110,
		99,116,105,111,110,32,110,117,109,98,101,114,32,40,
		0,176,64,0,95,1,12,1,72,106,12,41,32,105,
		110,118,97,108,105,100,44,32,0,72,80,2,176,47,
		0,93,0,1,12,1,80,4,176,65,0,100,100,176,
		66,0,48,43,0,102,112,0,12,1,165,80,3,100,
		96,4,0,20,5,95,2,106,8,101,114,114,111,114,
		32,40,0,72,176,64,0,95,3,12,1,72,106,5,
		41,32,58,32,0,72,95,4,72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_COM_ERROR )
{
	static const HB_BYTE pcode[] =
	{
		176,66,0,48,43,0,102,112,0,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,67,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
