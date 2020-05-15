/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbmisc\udpds.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_UDPDS_FIND );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_SOCKETOPEN );
HB_FUNC_EXTERN( HB_SOCKETSETBROADCAST );
HB_FUNC_EXTERN( HB_STRTOUTF8 );
HB_FUNC_STATIC( S_SENDBROADCASTMESSAGES );
HB_FUNC_EXTERN( HB_MILLISECONDS );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( HB_SOCKETRECVFROM );
HB_FUNC_EXTERN( HB_BLEFT );
HB_FUNC_EXTERN( HB_BLEN );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( HB_BSUBSTR );
HB_FUNC_EXTERN( HB_SOCKETCLOSE );
HB_FUNC_STATIC( S_GETBROADCASTADDRESSES );
HB_FUNC_EXTERN( HB_SOCKETSENDTO );
HB_FUNC_EXTERN( HB_SOCKETGETIFACES );
HB_FUNC_EXTERN( HB_ASCAN );
HB_FUNC_EXTERN( HB_AINS );
HB_FUNC( HB_UDPDS_START );
HB_FUNC_EXTERN( HB_SOCKETBIND );
HB_FUNC_EXTERN( HB_THREADDETACH );
HB_FUNC_EXTERN( HB_THREADSTART );
HB_FUNC_STATIC( UDPDS );
HB_FUNC( HB_UDPDS_STOP );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( __BREAKBLOCK );
HB_FUNC_EXTERN( HB_SOCKETGETERROR );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_UDPDS )
{ "HB_UDPDS_FIND", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_UDPDS_FIND )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "HB_SOCKETOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETOPEN )}, NULL },
{ "HB_SOCKETSETBROADCAST", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETSETBROADCAST )}, NULL },
{ "HB_STRTOUTF8", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_STRTOUTF8 )}, NULL },
{ "S_SENDBROADCASTMESSAGES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( S_SENDBROADCASTMESSAGES )}, NULL },
{ "HB_MILLISECONDS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MILLISECONDS )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "HB_SOCKETRECVFROM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETRECVFROM )}, NULL },
{ "HB_BLEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEFT )}, NULL },
{ "HB_BLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BLEN )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "HB_BSUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_BSUBSTR )}, NULL },
{ "HB_SOCKETCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETCLOSE )}, NULL },
{ "S_GETBROADCASTADDRESSES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( S_GETBROADCASTADDRESSES )}, NULL },
{ "HB_SOCKETSENDTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETSENDTO )}, NULL },
{ "HB_SOCKETGETIFACES", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETGETIFACES )}, NULL },
{ "HB_ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ASCAN )}, NULL },
{ "HB_AINS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_AINS )}, NULL },
{ "HB_UDPDS_START", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_UDPDS_START )}, NULL },
{ "HB_SOCKETBIND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETBIND )}, NULL },
{ "HB_THREADDETACH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADDETACH )}, NULL },
{ "HB_THREADSTART", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_THREADSTART )}, NULL },
{ "UDPDS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( UDPDS )}, NULL },
{ "HB_UDPDS_STOP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_UDPDS_STOP )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "__BREAKBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __BREAKBLOCK )}, NULL },
{ "HB_SOCKETGETERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SOCKETGETERROR )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_UDPDS, "hbmisc\\udpds.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_UDPDS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_UDPDS )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_UDPDS_FIND )
{
	static const HB_BYTE pcode[] =
	{
		13,7,2,176,1,0,176,2,0,100,92,2,12,2,
		165,80,3,12,1,32,228,0,176,3,0,95,3,120,
		20,2,176,4,0,95,2,12,1,80,2,176,5,0,
		95,3,95,1,106,2,5,0,95,2,72,106,2,0,
		0,72,12,3,29,180,0,176,6,0,12,0,80,6,
		95,6,92,100,72,80,5,4,0,0,80,4,95,5,
		95,6,15,29,153,0,176,7,0,93,208,7,12,1,
		80,7,176,8,0,95,3,96,7,0,100,100,96,9,
		0,95,5,95,6,49,12,6,80,8,176,9,0,95,
		7,176,10,0,95,2,12,1,92,2,72,12,2,106,
		2,6,0,95,2,72,106,2,0,0,72,8,28,78,
		176,11,0,95,4,89,20,0,1,0,1,0,9,0,
		95,1,122,1,95,255,92,2,1,8,6,12,2,121,
		8,28,47,176,12,0,95,4,95,9,92,2,1,176,
		13,0,95,7,176,10,0,95,2,12,1,92,3,72,
		95,8,176,10,0,95,2,12,1,49,92,2,49,12,
		3,4,2,0,20,2,176,6,0,12,0,80,6,26,
		101,255,176,14,0,95,3,20,1,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( S_SENDBROADCASTMESSAGES )
{
	static const HB_BYTE pcode[] =
	{
		13,2,3,9,80,4,176,15,0,12,0,96,5,0,
		129,1,1,28,38,176,16,0,95,1,95,3,100,100,
		92,2,95,5,95,2,4,3,0,12,5,176,10,0,
		95,3,12,1,8,28,5,120,80,4,130,31,222,132,
		95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( S_GETBROADCASTADDRESSES )
{
	static const HB_BYTE pcode[] =
	{
		13,4,0,9,80,3,4,0,0,80,4,176,17,0,
		12,0,96,1,0,129,1,1,28,74,176,1,0,95,
		1,92,6,1,165,80,2,12,1,28,31,95,3,31,
		52,95,1,92,4,1,106,10,49,50,55,46,48,46,
		48,46,49,0,8,28,32,120,80,3,25,27,176,18,
		0,95,4,95,2,100,100,120,12,5,121,8,28,11,
		176,12,0,95,4,95,2,20,2,130,31,186,132,176,
		1,0,95,4,12,1,28,27,176,12,0,95,4,106,
		16,50,53,53,46,50,53,53,46,50,53,53,46,50,
		53,53,0,20,2,95,3,28,23,176,19,0,95,4,
		122,106,10,49,50,55,46,48,46,48,46,49,0,120,
		20,4,95,4,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_UDPDS_START )
{
	static const HB_BYTE pcode[] =
	{
		13,1,3,176,1,0,176,2,0,100,92,2,12,2,
		165,80,4,12,1,31,57,176,21,0,95,4,92,2,
		106,8,48,46,48,46,48,46,48,0,95,1,4,3,
		0,12,2,28,24,176,22,0,176,23,0,108,24,95,
		4,95,2,95,3,12,4,20,1,95,4,110,7,176,
		14,0,95,4,20,1,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_UDPDS_STOP )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,14,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( UDPDS )
{
	static const HB_BYTE pcode[] =
	{
		13,3,3,176,4,0,95,2,12,1,80,2,176,26,
		0,95,3,12,1,28,11,176,4,0,95,3,12,1,
		25,5,106,1,0,80,3,176,7,0,93,208,7,12,
		1,80,4,113,35,0,0,176,27,0,12,0,178,176,
		8,0,95,1,96,4,0,100,100,96,6,0,93,232,
		3,12,6,80,5,73,114,9,0,0,115,73,100,80,
		5,95,5,100,8,31,88,95,5,92,255,8,28,13,
		176,28,0,12,0,92,2,69,28,185,7,176,9,0,
		95,4,95,5,12,2,106,2,5,0,95,2,72,106,
		2,0,0,72,8,28,160,113,37,0,0,176,27,0,
		12,0,178,176,16,0,95,1,106,2,6,0,95,2,
		72,106,2,0,0,72,95,3,72,100,100,95,6,20,
		5,73,114,4,0,0,26,117,255,7
	};

	hb_vmExecute( pcode, symbols );
}

