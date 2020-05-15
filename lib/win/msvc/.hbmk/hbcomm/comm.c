/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbcomm\comm.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_MUTEXCREATE );
HB_FUNC( INIT_PORT );
HB_FUNC_EXTERN( HB_MUTEXLOCK );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_COMGETDEVICE );
HB_FUNC_EXTERN( HB_COMSETDEVICE );
HB_FUNC_EXTERN( HB_COMCLOSE );
HB_FUNC_EXTERN( HB_COMOPEN );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( HB_COMINIT );
HB_FUNC_EXTERN( HB_MUTEXUNLOCK );
HB_FUNC( OUTBUFCLR );
HB_FUNC_EXTERN( HB_COMFLUSH );
HB_FUNC( ISWORKING );
HB_FUNC( INCHR );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( HB_COMRECV );
HB_FUNC( OUTCHR );
HB_FUNC_EXTERN( HB_BLEN );
HB_FUNC_EXTERN( HB_COMSEND );
HB_FUNC_EXTERN( HB_BSUBSTR );
HB_FUNC( INBUFSIZE );
HB_FUNC_EXTERN( HB_COMINPUTCOUNT );
HB_FUNC( OUTBUFSIZE );
HB_FUNC_EXTERN( HB_COMOUTPUTCOUNT );
HB_FUNC( UNINT_PORT );
HB_FUNC_EXTERN( HB_HDEL );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_COMM )
{ "HB_MUTEXCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MUTEXCREATE )}, NULL },
{ "INIT_PORT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INIT_PORT )}, NULL },
{ "HB_MUTEXLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MUTEXLOCK )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "HB_COMGETDEVICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMGETDEVICE )}, NULL },
{ "HB_COMSETDEVICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMSETDEVICE )}, NULL },
{ "HB_COMCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMCLOSE )}, NULL },
{ "HB_COMOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMOPEN )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "HB_COMINIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMINIT )}, NULL },
{ "HB_MUTEXUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MUTEXUNLOCK )}, NULL },
{ "OUTBUFCLR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OUTBUFCLR )}, NULL },
{ "HB_COMFLUSH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMFLUSH )}, NULL },
{ "ISWORKING", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISWORKING )}, NULL },
{ "INCHR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INCHR )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "HB_COMRECV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMRECV )}, NULL },
{ "OUTCHR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OUTCHR )}, NULL },
{ "HB_BLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEN )}, NULL },
{ "HB_COMSEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMSEND )}, NULL },
{ "HB_BSUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BSUBSTR )}, NULL },
{ "INBUFSIZE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( INBUFSIZE )}, NULL },
{ "HB_COMINPUTCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMINPUTCOUNT )}, NULL },
{ "OUTBUFSIZE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OUTBUFSIZE )}, NULL },
{ "HB_COMOUTPUTCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_COMOUTPUTCOUNT )}, NULL },
{ "UNINT_PORT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( UNINT_PORT )}, NULL },
{ "HB_HDEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HDEL )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_COMM, "hbcomm\\comm.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_COMM
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_COMM )
   #include "hbiniseg.h"
#endif

HB_FUNC( INIT_PORT )
{
	static const HB_BYTE pcode[] =
	{
		13,3,6,116,29,0,176,2,0,103,2,0,20,1,
		176,3,0,103,1,0,12,1,23,80,7,176,4,0,
		95,1,12,1,28,20,176,5,0,95,7,12,1,80,
		8,176,6,0,95,7,95,1,20,2,176,7,0,95,
		7,20,1,176,8,0,95,7,12,1,29,149,0,176,
		9,0,96,2,0,93,128,37,20,2,106,2,78,0,
		80,9,176,10,0,95,4,12,1,28,69,25,34,106,
		2,78,0,80,9,25,59,106,2,79,0,80,9,25,
		51,106,2,77,0,80,9,25,43,106,2,69,0,80,
		9,25,35,95,4,133,4,0,97,0,0,0,0,25,
		214,97,1,0,0,0,25,215,97,2,0,0,0,25,
		216,97,3,0,0,0,25,217,176,9,0,96,5,0,
		122,20,2,176,11,0,95,7,95,2,95,9,95,3,
		95,5,12,5,28,22,95,8,103,1,0,95,7,2,
		176,12,0,103,2,0,20,1,95,7,110,7,176,7,
		0,95,7,20,1,95,8,100,69,28,11,176,6,0,
		95,7,95,8,20,2,176,12,0,103,2,0,20,1,
		121,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OUTBUFCLR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,14,0,95,1,92,2,20,2,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISWORKING )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,116,29,0,95,1,103,1,0,24,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( INCHR )
{
	static const HB_BYTE pcode[] =
	{
		13,0,3,176,10,0,95,2,12,1,28,11,176,17,
		0,95,2,12,1,25,5,106,1,0,80,3,176,18,
		0,95,1,96,3,0,95,2,20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OUTCHR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,2,176,20,0,95,2,12,1,121,15,28,40,
		176,21,0,95,1,95,2,100,93,232,3,12,4,80,
		3,95,3,121,34,28,5,9,110,7,176,22,0,95,
		2,95,3,23,12,2,80,2,25,209,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( INBUFSIZE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,24,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OUTBUFSIZE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,26,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( UNINT_PORT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,116,29,0,9,80,2,176,2,0,103,2,
		0,20,1,95,1,103,1,0,24,28,47,176,7,0,
		95,1,12,1,28,38,103,1,0,95,1,1,100,69,
		28,15,176,6,0,95,1,103,1,0,95,1,1,20,
		2,176,28,0,103,1,0,95,1,20,2,120,80,2,
		176,12,0,103,2,0,20,1,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,29,0,2,0,116,29,0,177,0,0,82,1,0,
		176,0,0,12,0,82,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}
