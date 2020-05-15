/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbmisc\numtxten.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( NUMTOTXTEN );
HB_FUNC_STATIC( INT_TO_STRING );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( RTRIM );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_NUMTXTEN )
{ "NUMTOTXTEN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( NUMTOTXTEN )}, NULL },
{ "INT_TO_STRING", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( INT_TO_STRING )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_NUMTXTEN, "hbmisc\\numtxten.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_NUMTXTEN
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_NUMTXTEN )
   #include "hbiniseg.h"
#endif

HB_FUNC( NUMTOTXTEN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,106,1,0,80,2,95,1,121,8,28,11,
		106,5,122,101,114,111,0,110,7,95,1,121,35,28,
		20,95,1,66,80,1,96,2,0,106,7,109,105,110,
		117,115,32,0,135,95,1,97,64,66,15,0,16,29,
		146,0,95,1,97,0,225,245,5,16,28,60,96,2,
		0,176,1,0,176,2,0,95,1,97,0,225,245,5,
		18,12,1,12,1,106,10,32,104,117,110,100,114,101,
		100,32,0,72,135,96,1,0,97,0,225,245,5,176,
		2,0,95,1,97,0,225,245,5,18,12,1,65,136,
		95,1,97,64,66,15,0,16,28,52,96,2,0,176,
		1,0,176,2,0,95,1,97,64,66,15,0,18,12,
		1,12,1,106,2,32,0,72,135,96,1,0,97,64,
		66,15,0,176,2,0,95,1,97,64,66,15,0,18,
		12,1,65,136,96,2,0,106,9,109,105,108,108,105,
		111,110,32,0,135,95,1,93,232,3,16,29,139,0,
		95,1,97,160,134,1,0,16,28,60,96,2,0,176,
		1,0,176,2,0,95,1,97,160,134,1,0,18,12,
		1,12,1,106,10,32,104,117,110,100,114,101,100,32,
		0,72,135,96,1,0,97,160,134,1,0,176,2,0,
		95,1,97,160,134,1,0,18,12,1,65,136,95,1,
		93,232,3,16,28,46,96,2,0,176,1,0,176,2,
		0,95,1,93,232,3,18,12,1,12,1,106,2,32,
		0,72,135,96,1,0,93,232,3,176,2,0,95,1,
		93,232,3,18,12,1,65,136,96,2,0,106,10,116,
		104,111,117,115,97,110,100,32,0,135,95,1,92,100,
		16,28,51,96,2,0,176,1,0,176,2,0,95,1,
		92,100,18,12,1,12,1,106,10,32,104,117,110,100,
		114,101,100,32,0,72,135,96,1,0,92,100,176,2,
		0,95,1,92,100,18,12,1,65,136,95,1,122,16,
		28,29,96,2,0,176,1,0,176,2,0,95,1,12,
		1,12,1,135,96,1,0,176,2,0,95,1,12,1,
		136,176,3,0,95,2,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( INT_TO_STRING )
{
	static const HB_BYTE pcode[] =
	{
		13,3,1,106,4,111,110,101,0,106,4,116,119,111,
		0,106,6,116,104,114,101,101,0,106,5,102,111,117,
		114,0,106,5,102,105,118,101,0,106,4,115,105,120,
		0,106,6,115,101,118,101,110,0,106,6,101,105,103,
		104,116,0,106,5,110,105,110,101,0,106,4,116,101,
		110,0,106,7,101,108,101,118,101,110,0,106,7,116,
		119,101,108,118,101,0,106,9,116,104,105,114,116,101,
		101,110,0,106,9,102,111,117,114,116,101,101,110,0,
		106,8,102,105,102,116,101,101,110,0,106,8,115,105,
		120,116,101,101,110,0,106,10,115,101,118,101,110,116,
		101,101,110,0,106,9,101,105,103,104,116,101,101,110,
		0,106,9,110,105,110,101,116,101,101,110,0,4,19,
		0,80,3,106,4,116,101,110,0,106,7,116,119,101,
		110,116,121,0,106,7,116,104,105,114,116,121,0,106,
		6,102,111,114,116,121,0,106,6,102,105,102,116,121,
		0,106,6,115,105,120,116,121,0,106,8,115,101,118,
		101,110,116,121,0,106,7,101,105,103,104,116,121,0,
		106,7,110,105,110,101,116,121,0,4,9,0,80,4,
		95,1,92,20,35,28,11,95,3,95,1,1,80,2,
		25,64,95,4,176,2,0,95,1,92,10,18,12,1,
		1,80,2,96,1,0,92,10,176,2,0,95,1,92,
		10,18,12,1,65,136,176,2,0,95,1,12,1,122,
		16,28,21,96,2,0,106,2,32,0,95,3,176,2,
		0,95,1,12,1,1,72,135,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}
