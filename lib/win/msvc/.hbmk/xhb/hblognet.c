/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "xhb\hblognet.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_LOGEMAIL );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HB_LOGCHANNEL );
HB_FUNC_STATIC( HB_LOGEMAIL_NEW );
HB_FUNC_STATIC( HB_LOGEMAIL_OPEN );
HB_FUNC_STATIC( HB_LOGEMAIL_CLOSE );
HB_FUNC_STATIC( HB_LOGEMAIL_SEND );
HB_FUNC_STATIC( HB_LOGEMAIL_GETOK );
HB_FUNC_STATIC( HB_LOGEMAIL_PREPARE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( HB_INETINIT );
HB_FUNC_EXTERN( HB_INETCLEANUP );
HB_FUNC_EXTERN( HB_INETCREATE );
HB_FUNC_EXTERN( HB_INETTIMEOUT );
HB_FUNC_EXTERN( HB_INETCONNECT );
HB_FUNC_EXTERN( HB_INETERRORCODE );
HB_FUNC_EXTERN( HB_INETSENDALL );
HB_FUNC_EXTERN( HB_INETRECVLINE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC( HB_LOGINETPORT );
HB_FUNC_STATIC( HB_LOGINETPORT_NEW );
HB_FUNC_STATIC( HB_LOGINETPORT_OPEN );
HB_FUNC_STATIC( HB_LOGINETPORT_CLOSE );
HB_FUNC_STATIC( HB_LOGINETPORT_SEND );
HB_FUNC_STATIC( HB_LOGINETPORT_ACCEPTCON );
HB_FUNC_EXTERN( HB_INETSERVER );
HB_FUNC_EXTERN( HB_MUTEXCREATE );
HB_FUNC_EXTERN( HB_THREADSTART );
HB_FUNC_EXTERN( HB_THREADJOIN );
HB_FUNC_EXTERN( HB_INETCLOSE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATAIL );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( HB_MUTEXLOCK );
HB_FUNC_EXTERN( HB_ADEL );
HB_FUNC_EXTERN( HB_MUTEXUNLOCK );
HB_FUNC_EXTERN( HB_INETACCEPT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBLOGNET )
{ "HB_LOGEMAIL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGEMAIL )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HB_LOGCHANNEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LOGCHANNEL )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_LOGEMAIL_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGEMAIL_NEW )}, NULL },
{ "HB_LOGEMAIL_OPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGEMAIL_OPEN )}, NULL },
{ "HB_LOGEMAIL_CLOSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGEMAIL_CLOSE )}, NULL },
{ "HB_LOGEMAIL_SEND", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGEMAIL_SEND )}, NULL },
{ "HB_LOGEMAIL_GETOK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGEMAIL_GETOK )}, NULL },
{ "HB_LOGEMAIL_PREPARE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGEMAIL_PREPARE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUPER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "_NPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "_CSERVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSENDTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CHELO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSUBJECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CADDRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_INETINIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETINIT )}, NULL },
{ "HB_INETCLEANUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETCLEANUP )}, NULL },
{ "HB_INETCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETCREATE )}, NULL },
{ "HB_INETTIMEOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETTIMEOUT )}, NULL },
{ "HB_INETCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETCONNECT )}, NULL },
{ "CSERVER", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPORT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_INETERRORCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETERRORCODE )}, NULL },
{ "GETOK", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_INETSENDALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETSENDALL )}, NULL },
{ "CHELO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CADDRESS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSENDTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PREPARE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_INETRECVLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETRECVLINE )}, NULL },
{ "CSUBJECT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CPREFIX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FORMAT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPOSTFIX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_LOGINETPORT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGINETPORT )}, NULL },
{ "HB_LOGINETPORT_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGINETPORT_NEW )}, NULL },
{ "HB_LOGINETPORT_OPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGINETPORT_OPEN )}, NULL },
{ "HB_LOGINETPORT_CLOSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGINETPORT_CLOSE )}, NULL },
{ "HB_LOGINETPORT_SEND", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGINETPORT_SEND )}, NULL },
{ "HB_LOGINETPORT_ACCEPTCON", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_LOGINETPORT_ACCEPTCON )}, NULL },
{ "_SKIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_INETSERVER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETSERVER )}, NULL },
{ "SKIN", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_MTXBUSY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_MUTEXCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MUTEXCREATE )}, NULL },
{ "_NTHREAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_THREADSTART", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADSTART )}, NULL },
{ "_BTERMINATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_THREADJOIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADJOIN )}, NULL },
{ "NTHREAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_INETCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETCLOSE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ALISTENERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATAIL )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "HB_MUTEXLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MUTEXLOCK )}, NULL },
{ "MTXBUSY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ADEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ADEL )}, NULL },
{ "HB_MUTEXUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MUTEXUNLOCK )}, NULL },
{ "BTERMINATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_INETACCEPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_INETACCEPT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBLOGNET, "xhb\\hblognet.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBLOGNET
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBLOGNET )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_LOGEMAIL )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,76,0,103,1,0,100,8,29,22,2,
		176,1,0,104,1,0,12,1,29,11,2,166,205,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,12,
		72,66,95,76,111,103,69,109,97,105,108,0,108,4,
		4,1,0,108,0,112,3,80,2,48,5,0,95,2,
		100,100,95,1,106,8,99,83,101,114,118,101,114,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,106,
		16,108,111,103,64,101,120,97,109,112,108,101,46,111,
		114,103,0,95,1,106,9,99,65,100,100,114,101,115,
		115,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,106,38,76,111,103,32,109,101,115,115,97,103,101,
		32,102,114,111,109,32,120,72,97,114,98,111,117,114,
		32,97,112,112,108,105,99,97,116,105,111,110,0,95,
		1,106,9,99,83,117,98,106,101,99,116,0,4,1,
		0,9,112,5,73,48,5,0,95,2,100,100,95,1,
		106,8,99,83,101,110,100,84,111,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,106,22,120,72,97,
		114,98,111,117,114,32,69,109,97,105,108,32,76,111,
		103,103,101,114,0,95,1,106,6,99,72,101,108,111,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		92,25,95,1,106,6,110,80,111,114,116,0,4,1,
		0,9,112,5,73,48,5,0,95,2,100,100,95,1,
		106,8,99,80,114,101,102,105,120,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,100,95,1,106,9,
		99,80,111,115,116,102,105,120,0,4,1,0,9,112,
		5,73,48,6,0,95,2,106,4,78,101,119,0,108,
		7,95,1,112,3,73,48,6,0,95,2,106,5,79,
		112,101,110,0,108,8,95,1,112,3,73,48,6,0,
		95,2,106,6,67,108,111,115,101,0,108,9,95,1,
		112,3,73,92,2,80,1,48,6,0,95,2,106,5,
		83,101,110,100,0,108,10,95,1,112,3,73,92,4,
		80,1,48,6,0,95,2,106,6,71,101,116,79,107,
		0,108,11,95,1,112,3,73,48,6,0,95,2,106,
		8,80,114,101,112,97,114,101,0,108,12,95,1,112,
		3,73,48,13,0,95,2,112,0,73,167,14,0,0,
		176,14,0,104,1,0,95,2,20,2,168,48,15,0,
		95,2,112,0,80,3,176,16,0,95,3,106,10,73,
		110,105,116,67,108,97,115,115,0,12,2,28,12,48,
		17,0,95,3,164,146,1,0,73,95,3,110,7,48,
		15,0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGEMAIL_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,6,48,2,0,48,18,0,102,112,0,95,1,
		112,1,73,176,19,0,106,2,58,0,95,3,12,2,
		80,7,95,7,121,15,28,37,48,20,0,102,176,21,
		0,176,22,0,95,3,95,7,23,12,2,12,1,112,
		1,73,176,22,0,95,3,122,95,7,17,12,3,80,
		3,48,23,0,102,95,3,112,1,73,48,24,0,102,
		95,4,112,1,73,95,2,100,69,28,11,48,25,0,
		102,95,2,112,1,73,95,5,100,69,28,11,48,26,
		0,102,95,5,112,1,73,95,6,100,69,28,11,48,
		27,0,102,95,6,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGEMAIL_OPEN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,28,0,20,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGEMAIL_CLOSE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,29,0,20,0,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGEMAIL_SEND )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,176,30,0,12,0,80,5,176,31,0,95,
		5,93,16,39,20,2,176,32,0,48,33,0,102,112,
		0,48,34,0,102,112,0,95,5,20,3,176,35,0,
		95,5,12,1,121,69,31,12,48,36,0,102,95,5,
		112,1,31,5,9,110,7,176,37,0,95,5,106,6,
		72,69,76,79,32,0,48,38,0,102,112,0,72,106,
		2,13,0,72,106,2,10,0,72,20,2,48,36,0,
		102,95,5,112,1,31,5,9,110,7,176,37,0,95,
		5,106,13,77,65,73,76,32,70,82,79,77,58,32,
		60,0,48,39,0,102,112,0,72,106,2,62,0,72,
		106,2,13,0,72,106,2,10,0,72,20,2,48,36,
		0,102,95,5,112,1,31,5,9,110,7,176,37,0,
		95,5,106,11,82,67,80,84,32,84,79,58,32,60,
		0,48,40,0,102,112,0,72,106,2,62,0,72,106,
		2,13,0,72,106,2,10,0,72,20,2,48,36,0,
		102,95,5,112,1,31,5,9,110,7,176,37,0,95,
		5,106,7,68,65,84,65,13,10,0,20,2,48,36,
		0,102,95,5,112,1,31,5,9,110,7,48,41,0,
		102,95,1,95,2,95,3,95,4,112,4,80,2,176,
		37,0,95,5,95,2,106,2,13,0,72,106,2,10,
		0,72,106,2,46,0,72,106,2,13,0,72,106,2,
		10,0,72,20,2,48,36,0,102,95,5,112,1,31,
		5,9,110,7,176,37,0,95,5,106,7,81,85,73,
		84,13,10,0,20,2,48,36,0,102,95,5,112,1,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGEMAIL_GETOK )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,176,42,0,95,1,96,2,0,93,128,0,
		12,3,80,3,176,35,0,95,1,12,1,121,69,31,
		18,176,22,0,95,3,122,122,12,3,106,2,53,0,
		8,28,5,9,110,7,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGEMAIL_PREPARE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,106,7,70,82,79,77,58,32,0,48,39,
		0,102,112,0,72,106,2,13,0,72,106,2,10,0,
		72,106,5,84,79,58,32,0,72,48,40,0,102,112,
		0,72,106,2,13,0,72,106,2,10,0,72,106,9,
		83,117,98,106,101,99,116,58,0,72,48,43,0,102,
		112,0,72,106,2,13,0,72,106,2,10,0,72,106,
		2,13,0,72,106,2,10,0,72,80,5,176,44,0,
		48,45,0,102,112,0,12,1,31,32,96,5,0,48,
		45,0,102,112,0,106,2,13,0,72,106,2,10,0,
		72,106,2,13,0,72,106,2,10,0,72,135,96,5,
		0,48,46,0,102,95,1,95,2,95,3,95,4,112,
		4,135,176,44,0,48,47,0,102,112,0,12,1,31,
		30,96,5,0,106,5,13,10,13,10,0,48,47,0,
		102,112,0,72,106,2,13,0,72,106,2,10,0,72,
		135,95,5,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_LOGINETPORT )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,76,0,103,2,0,100,8,29,137,1,
		176,1,0,104,2,0,12,1,29,126,1,166,64,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,15,
		72,66,95,76,111,103,73,110,101,116,80,111,114,116,
		0,108,4,4,1,0,108,48,112,3,80,2,48,5,
		0,95,2,100,93,81,30,95,1,106,6,110,80,111,
		114,116,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,4,0,0,95,1,106,11,97,76,105,115,116,
		101,110,101,114,115,0,4,1,0,9,112,5,73,48,
		5,0,95,2,100,100,95,1,106,5,115,107,73,110,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		9,95,1,106,11,98,84,101,114,109,105,110,97,116,
		101,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,100,95,1,106,8,110,84,104,114,101,97,100,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,100,
		95,1,106,8,109,116,120,66,117,115,121,0,4,1,
		0,9,112,5,73,48,6,0,95,2,106,4,78,101,
		119,0,108,49,95,1,112,3,73,48,6,0,95,2,
		106,5,79,112,101,110,0,108,50,95,1,112,3,73,
		48,6,0,95,2,106,6,67,108,111,115,101,0,108,
		51,95,1,112,3,73,92,2,80,1,48,6,0,95,
		2,106,5,83,101,110,100,0,108,52,95,1,112,3,
		73,92,4,80,1,48,6,0,95,2,106,10,65,99,
		99,101,112,116,67,111,110,0,108,53,95,1,112,3,
		73,48,13,0,95,2,112,0,73,167,14,0,0,176,
		14,0,104,2,0,95,2,20,2,168,48,15,0,95,
		2,112,0,80,3,176,16,0,95,3,106,10,73,110,
		105,116,67,108,97,115,115,0,12,2,28,12,48,17,
		0,95,3,164,146,1,0,73,95,3,110,7,48,15,
		0,103,2,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGINETPORT_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,2,0,48,18,0,102,112,0,95,1,
		112,1,73,95,2,100,69,28,11,48,20,0,102,95,
		2,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGINETPORT_OPEN )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,28,0,20,0,48,54,0,102,176,55,
		0,48,34,0,102,112,0,12,1,112,1,73,48,56,
		0,102,112,0,100,8,28,5,9,110,7,48,57,0,
		102,176,58,0,12,0,112,1,73,48,59,0,102,176,
		60,0,102,106,10,65,99,99,101,112,116,67,111,110,
		0,12,2,112,1,73,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGINETPORT_CLOSE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,56,0,102,112,0,100,8,28,5,9,
		110,7,48,61,0,102,120,112,1,73,176,62,0,48,
		63,0,102,112,0,20,1,176,64,0,48,56,0,102,
		112,0,20,1,176,65,0,48,66,0,102,112,0,12,
		1,121,15,28,47,176,67,0,48,66,0,102,112,0,
		12,1,80,2,176,68,0,48,66,0,102,112,0,176,
		65,0,48,66,0,102,112,0,12,1,17,20,2,176,
		64,0,95,2,20,1,25,198,176,29,0,20,0,120,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGINETPORT_SEND )
{
	static const HB_BYTE pcode[] =
	{
		13,2,4,176,69,0,48,70,0,102,112,0,20,1,
		48,46,0,102,95,1,95,2,95,3,95,4,112,4,
		80,2,122,80,6,95,6,176,65,0,48,66,0,102,
		112,0,12,1,34,28,64,48,66,0,102,112,0,95,
		6,1,80,5,176,37,0,95,5,95,2,106,2,13,
		0,72,106,2,10,0,72,20,2,176,35,0,95,5,
		12,1,121,69,28,18,176,71,0,48,66,0,102,112,
		0,95,6,120,20,3,25,185,174,6,0,25,180,176,
		72,0,48,70,0,102,112,0,20,1,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( HB_LOGINETPORT_ACCEPTCON )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,31,0,48,56,0,102,112,0,93,250,
		0,20,2,48,73,0,102,112,0,31,58,176,74,0,
		48,56,0,102,112,0,12,1,80,1,95,1,100,69,
		28,231,176,69,0,48,70,0,102,112,0,20,1,176,
		75,0,48,66,0,102,112,0,95,1,20,2,176,72,
		0,48,70,0,102,112,0,20,1,25,194,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,76,0,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}
