/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbmisc\nconvert.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( ISBIN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( LEN );
HB_FUNC( ISOCTAL );
HB_FUNC( ISDEC );
HB_FUNC( ISHEXA );
HB_FUNC( DECTOBIN );
HB_FUNC_EXTERN( INT );
HB_FUNC( DECTOOCTAL );
HB_FUNC( DECTOHEXA );
HB_FUNC( BINTODEC );
HB_FUNC_EXTERN( AT );
HB_FUNC( OCTALTODEC );
HB_FUNC( HEXATODEC );
HB_FUNC( DECTOROMAN );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_NCONVERT )
{ "ISBIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISBIN )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ISOCTAL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISOCTAL )}, NULL },
{ "ISDEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISDEC )}, NULL },
{ "ISHEXA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ISHEXA )}, NULL },
{ "DECTOBIN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DECTOBIN )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "DECTOOCTAL", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DECTOOCTAL )}, NULL },
{ "DECTOHEXA", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DECTOHEXA )}, NULL },
{ "BINTODEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BINTODEC )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "OCTALTODEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( OCTALTODEC )}, NULL },
{ "HEXATODEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( HEXATODEC )}, NULL },
{ "DECTOROMAN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DECTOROMAN )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_NCONVERT, "hbmisc\\nconvert.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_NCONVERT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_NCONVERT )
   #include "hbiniseg.h"
#endif

HB_FUNC( ISBIN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,1,0,95,1,12,1,80,1,122,165,
		80,2,25,26,176,2,0,95,1,95,2,122,12,3,
		106,3,48,49,0,24,31,5,9,110,7,175,2,0,
		176,3,0,95,1,12,1,15,28,224,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISOCTAL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,1,0,95,1,12,1,80,1,122,165,
		80,2,25,32,176,2,0,95,1,95,2,122,12,3,
		106,9,48,49,50,51,52,53,54,55,0,24,31,5,
		9,110,7,175,2,0,176,3,0,95,1,12,1,15,
		28,218,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISDEC )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,1,0,95,1,12,1,80,1,122,165,
		80,2,25,34,176,2,0,95,1,95,2,122,12,3,
		106,11,48,49,50,51,52,53,54,55,56,57,0,24,
		31,5,9,110,7,175,2,0,176,3,0,95,1,12,
		1,15,28,216,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( ISHEXA )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,1,0,95,1,12,1,80,1,122,165,
		80,2,25,40,176,2,0,95,1,95,2,122,12,3,
		106,17,48,49,50,51,52,53,54,55,56,57,65,66,
		67,68,69,70,0,24,31,5,9,110,7,175,2,0,
		176,3,0,95,1,12,1,15,28,210,120,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DECTOBIN )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,106,1,0,80,2,95,1,121,15,28,45,
		95,1,92,2,50,80,3,176,2,0,106,3,48,49,
		0,95,3,23,122,12,3,95,2,72,80,2,176,8,
		0,95,1,95,3,49,92,2,18,12,1,80,1,25,
		209,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DECTOOCTAL )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,106,1,0,80,2,95,1,121,15,28,51,
		95,1,92,8,50,80,3,176,2,0,106,9,48,49,
		50,51,52,53,54,55,0,95,3,23,122,12,3,95,
		2,72,80,2,176,8,0,95,1,95,3,49,92,8,
		18,12,1,80,1,25,203,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DECTOHEXA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,106,1,0,80,2,95,1,121,15,28,59,
		95,1,92,16,50,80,3,176,2,0,106,17,48,49,
		50,51,52,53,54,55,56,57,65,66,67,68,69,70,
		0,95,3,23,122,12,3,95,2,72,80,2,176,8,
		0,95,1,95,3,49,92,16,18,12,1,80,1,25,
		195,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( BINTODEC )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,121,80,2,176,1,0,95,1,12,1,80,
		4,176,3,0,95,4,12,1,80,5,122,165,80,3,
		25,39,96,2,0,176,12,0,176,2,0,95,4,95,
		3,122,12,3,106,3,48,49,0,12,2,17,92,2,
		95,5,95,3,49,84,65,135,175,3,0,95,5,15,
		28,216,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( OCTALTODEC )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,121,80,2,176,1,0,95,1,12,1,80,
		4,176,3,0,95,4,12,1,80,5,122,165,80,3,
		25,45,96,2,0,176,12,0,176,2,0,95,4,95,
		3,122,12,3,106,9,48,49,50,51,52,53,54,55,
		0,12,2,17,92,8,95,5,95,3,49,84,65,135,
		175,3,0,95,5,15,28,210,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( HEXATODEC )
{
	static const HB_BYTE pcode[] =
	{
		13,4,1,121,80,2,176,1,0,95,1,12,1,80,
		4,176,3,0,95,4,12,1,80,5,122,165,80,3,
		25,53,96,2,0,176,12,0,176,2,0,95,4,95,
		3,122,12,3,106,17,48,49,50,51,52,53,54,55,
		56,57,65,66,67,68,69,70,0,12,2,17,92,16,
		95,5,95,3,49,84,65,135,175,3,0,95,5,15,
		28,202,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( DECTOROMAN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,106,1,0,80,2,95,1,93,232,3,16,
		28,16,96,2,0,106,2,77,0,135,126,1,24,252,
		25,236,95,1,93,132,3,16,28,17,96,2,0,106,
		3,67,77,0,135,126,1,124,252,25,235,95,1,93,
		244,1,16,28,16,96,2,0,106,2,68,0,135,126,
		1,12,254,25,236,95,1,93,144,1,16,28,17,96,
		2,0,106,3,67,68,0,135,126,1,112,254,25,235,
		95,1,92,100,16,28,16,96,2,0,106,2,67,0,
		135,126,1,156,255,25,237,95,1,92,90,16,28,17,
		96,2,0,106,3,88,67,0,135,126,1,166,255,25,
		236,95,1,92,50,16,28,16,96,2,0,106,2,76,
		0,135,126,1,206,255,25,237,95,1,92,40,16,28,
		17,96,2,0,106,3,88,76,0,135,126,1,216,255,
		25,236,95,1,92,10,16,28,16,96,2,0,106,2,
		88,0,135,126,1,246,255,25,237,95,1,92,9,16,
		28,17,96,2,0,106,3,73,88,0,135,126,1,247,
		255,25,236,95,1,92,5,16,28,16,96,2,0,106,
		2,86,0,135,126,1,251,255,25,237,95,1,92,4,
		16,28,17,96,2,0,106,3,73,86,0,135,126,1,
		252,255,25,236,95,1,122,16,28,15,96,2,0,106,
		2,73,0,135,173,1,0,25,239,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

