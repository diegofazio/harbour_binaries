/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "xhb\hbcomprs.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( HB_COMPRESS );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( ERRORNEW );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( HB_ZCOMPRESS );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC( HB_UNCOMPRESS );
HB_FUNC_EXTERN( HB_ZUNCOMPRESS );
HB_FUNC( HB_COMPRESSERROR );
HB_FUNC( HB_COMPRESSERRORDESC );
HB_FUNC_EXTERN( HB_ZERROR );
HB_FUNC( HB_COMPRESSBUFLEN );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBCOMPRS )
{ "HB_COMPRESS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_COMPRESS )}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "ERRORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORNEW )}, NULL },
{ "_SEVERITY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_GENCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SUBSYSTEM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SUBCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ARGS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EVAL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "HB_ZCOMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZCOMPRESS )}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "HB_UNCOMPRESS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_UNCOMPRESS )}, NULL },
{ "HB_ZUNCOMPRESS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZUNCOMPRESS )}, NULL },
{ "HB_COMPRESSERROR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_COMPRESSERROR )}, NULL },
{ "HB_COMPRESSERRORDESC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_COMPRESSERRORDESC )}, NULL },
{ "HB_ZERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ZERROR )}, NULL },
{ "HB_COMPRESSBUFLEN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HB_COMPRESSBUFLEN )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBCOMPRS, "xhb\\hbcomprs.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBCOMPRS
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBCOMPRS )
   #include "hbiniseg.h"
#endif

HB_FUNC( HB_COMPRESS )
{
	static const HB_BYTE pcode[] =
	{
		13,6,5,116,22,0,176,1,0,95,1,12,1,28,
		30,95,1,80,6,95,2,80,7,95,3,80,8,95,
		5,80,9,176,2,0,12,0,92,4,16,80,10,25,
		28,92,255,80,6,95,1,80,7,95,2,80,8,95,
		4,80,9,176,2,0,12,0,92,3,16,80,10,176,
		3,0,95,7,12,1,31,83,176,4,0,12,0,80,
		11,48,5,0,95,11,92,2,112,1,73,48,6,0,
		95,11,122,112,1,73,48,7,0,95,11,106,5,66,
		65,83,69,0,112,1,73,48,8,0,95,11,93,196,
		11,112,1,73,48,9,0,95,11,95,7,4,1,0,
		112,1,73,48,10,0,176,11,0,12,0,95,11,112,
		1,73,100,110,7,176,1,0,95,9,12,1,31,5,
		100,80,9,176,1,0,95,8,12,1,28,31,95,8,
		121,16,28,25,95,8,176,12,0,95,7,12,1,35,
		28,13,176,13,0,95,7,95,8,12,2,80,7,95,
		10,28,90,176,1,0,95,1,12,1,28,40,176,14,
		0,95,7,95,9,104,1,0,95,6,12,4,80,4,
		176,15,0,96,4,0,106,1,0,20,2,176,12,0,
		95,4,12,1,80,5,25,38,176,14,0,95,7,95,
		9,104,1,0,95,6,12,4,80,3,176,15,0,96,
		3,0,106,1,0,20,2,176,12,0,95,3,12,1,
		80,4,103,1,0,110,7,176,14,0,95,7,95,9,
		104,1,0,95,6,20,4,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_UNCOMPRESS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,116,22,0,176,1,0,95,1,12,1,28,
		11,176,3,0,95,2,12,1,31,83,176,4,0,12,
		0,80,5,48,5,0,95,5,92,2,112,1,73,48,
		6,0,95,5,122,112,1,73,48,7,0,95,5,106,
		5,66,65,83,69,0,112,1,73,48,8,0,95,5,
		93,196,11,112,1,73,48,9,0,95,5,95,1,4,
		1,0,112,1,73,48,10,0,176,11,0,12,0,95,
		5,112,1,73,100,110,7,176,1,0,95,3,12,1,
		28,31,95,3,121,16,28,25,95,3,176,12,0,95,
		2,12,1,35,28,13,176,13,0,95,2,95,3,12,
		2,80,2,176,2,0,12,0,92,4,16,28,21,176,
		17,0,95,2,95,1,104,1,0,12,3,80,4,103,
		1,0,110,7,176,17,0,95,2,95,1,104,1,0,
		20,3,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_COMPRESSERROR )
{
	static const HB_BYTE pcode[] =
	{
		116,22,0,103,1,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_COMPRESSERRORDESC )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,20,0,95,1,20,1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HB_COMPRESSBUFLEN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,15,0,96,1,0,121,20,2,95,1,
		80,2,96,2,0,95,2,92,100,18,92,15,65,92,
		12,72,135,95,1,92,100,50,121,69,28,6,126,2,
		15,0,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,22,0,1,0,116,22,0,121,82,1,0,179,1,
		0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

