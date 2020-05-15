/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "xhb\hjwindow.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TJSWINDOW );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TJSWINDOW_NEW );
HB_FUNC_STATIC( TJSWINDOW_SETSIZE );
HB_FUNC_STATIC( TJSWINDOW_WRITE );
HB_FUNC_STATIC( TJSWINDOW_PUT );
HB_FUNC_STATIC( TJSWINDOW_BEGIN );
HB_FUNC_STATIC( TJSWINDOW_END );
HB_FUNC_STATIC( TJSWINDOW_QOUT );
HB_FUNC_STATIC( TJSWINDOW_SETFEATURES );
HB_FUNC_STATIC( TJSWINDOW_IMAGEURL );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( __DEFAULTNIL );
HB_FUNC_EXTERN( HTMLPAGEHANDLE );
HB_FUNC_EXTERN( HTMLPAGEOBJECT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( HB_NTOS );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( HTMLJSCMD );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HJWINDOW )
{ "TJSWINDOW", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TJSWINDOW_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_NEW )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ONLOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ONUNLOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QOUT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TJSWINDOW_SETSIZE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_SETSIZE )}, NULL },
{ "TJSWINDOW_WRITE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_WRITE )}, NULL },
{ "TJSWINDOW_PUT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_PUT )}, NULL },
{ "TJSWINDOW_BEGIN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_BEGIN )}, NULL },
{ "TJSWINDOW_END", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_END )}, NULL },
{ "TJSWINDOW_QOUT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_QOUT )}, NULL },
{ "TJSWINDOW_SETFEATURES", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_SETFEATURES )}, NULL },
{ "TJSWINDOW_IMAGEURL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TJSWINDOW_IMAGEURL )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DEFAULTNIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DEFAULTNIL )}, NULL },
{ "_NH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTMLPAGEHANDLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTMLPAGEHANDLE )}, NULL },
{ "_OHTM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTMLPAGEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTMLPAGEOBJECT )}, NULL },
{ "_VARNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_URL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SCREENX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SCREENY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_WIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALWAYSRAISED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALWAYSLOWERED", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RESIZABLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENUBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PERSONALBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEPENDENT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOCATION", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DIRECTORIES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SCROLLBARS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STATUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TITLEBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TOOLBAR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COPYHISTORY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FEATURES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "FEATURES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SCREENX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SCREENY", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HEIGHT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIDTH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_NTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NTOS )}, NULL },
{ "NH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETSIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETFEATURES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "VARNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "URL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HTMLJSCMD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTMLJSCMD )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "TITLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCRIPTSRC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ASERVERSRC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STYLE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONLOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ONUNLOAD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BGCOLOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FONTCOLOR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BGIMAGE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HJWINDOW, "xhb\\hjwindow.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HJWINDOW
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HJWINDOW )
   #include "hbiniseg.h"
#endif

HB_FUNC( TJSWINDOW )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,76,0,103,1,0,100,8,29,46,6,
		176,1,0,104,1,0,12,1,29,35,6,166,229,5,
		0,122,80,1,48,2,0,176,3,0,12,0,106,10,
		84,74,83,87,105,110,100,111,119,0,108,4,4,1,
		0,108,0,112,3,80,2,48,5,0,95,2,100,100,
		95,1,106,3,110,72,0,4,1,0,9,112,5,73,
		48,5,0,95,2,100,106,1,0,95,1,106,5,78,
		97,109,101,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,100,95,1,106,5,111,72,116,109,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,106,1,
		0,95,1,106,8,86,97,114,78,97,109,101,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,106,1,
		0,95,1,106,4,85,82,76,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,106,1,0,95,1,106,
		9,70,101,97,116,117,114,101,115,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,92,100,95,1,106,
		8,83,99,114,101,101,110,88,0,106,8,83,99,114,
		101,101,110,89,0,4,2,0,9,112,5,73,48,5,
		0,95,2,100,93,44,1,95,1,106,7,72,69,73,
		71,72,84,0,106,6,87,73,68,84,72,0,4,2,
		0,9,112,5,73,48,5,0,95,2,100,121,95,1,
		106,12,105,110,110,101,114,72,101,105,103,104,116,0,
		106,11,105,110,110,101,114,87,105,100,116,104,0,106,
		12,111,117,116,101,114,72,101,105,103,104,116,0,4,
		3,0,9,112,5,73,48,5,0,95,2,100,9,95,
		1,106,13,97,108,119,97,121,115,82,97,105,115,101,
		100,0,106,14,97,108,119,97,121,115,76,111,119,101,
		114,101,100,0,4,2,0,9,112,5,73,48,5,0,
		95,2,100,9,95,1,106,8,77,101,110,117,98,97,
		114,0,106,12,112,101,114,115,111,110,97,108,66,97,
		114,0,4,2,0,9,112,5,73,48,5,0,95,2,
		100,9,95,1,106,9,108,111,99,97,116,105,111,110,
		0,106,12,100,105,114,101,99,116,111,114,105,101,115,
		0,106,12,99,111,112,121,72,105,115,116,111,114,121,
		0,4,3,0,9,112,5,73,48,5,0,95,2,100,
		9,95,1,106,8,84,111,111,108,98,97,114,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,120,95,
		1,106,7,83,116,97,116,117,115,0,106,9,84,105,
		116,108,101,66,97,114,0,4,2,0,9,112,5,73,
		48,5,0,95,2,100,120,95,1,106,11,83,99,114,
		111,108,108,98,97,114,115,0,106,10,82,101,115,105,
		122,97,98,108,101,0,106,10,100,101,112,101,110,100,
		101,110,116,0,4,3,0,9,112,5,73,48,5,0,
		95,2,100,100,95,1,106,6,84,73,84,76,69,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,100,
		95,1,106,11,97,83,99,114,105,112,116,83,82,67,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		100,95,1,106,11,97,83,101,114,118,101,114,83,82,
		67,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,100,95,1,106,8,66,71,73,77,65,71,69,0,
		106,8,66,71,67,79,76,79,82,0,106,10,102,111,
		110,116,67,111,108,111,114,0,4,3,0,9,112,5,
		73,48,5,0,95,2,100,100,95,1,106,6,83,116,
		121,108,101,0,4,1,0,9,112,5,73,48,5,0,
		95,2,100,100,95,1,106,7,111,110,76,111,97,100,
		0,4,1,0,9,112,5,73,48,5,0,95,2,100,
		100,95,1,106,9,111,110,85,110,76,111,97,100,0,
		4,1,0,9,112,5,73,48,6,0,95,2,106,4,
		78,101,119,0,108,7,95,1,112,3,73,48,8,0,
		95,2,106,10,115,101,116,79,110,76,111,97,100,0,
		89,17,0,2,0,0,0,48,9,0,95,1,95,2,
		112,1,6,95,1,112,3,73,48,8,0,95,2,106,
		12,115,101,116,79,110,85,110,76,111,97,100,0,89,
		17,0,2,0,0,0,48,10,0,95,1,95,2,112,
		1,6,95,1,112,3,73,48,8,0,95,2,106,6,
		65,108,101,114,116,0,89,34,0,2,0,0,0,48,
		11,0,95,1,106,8,65,108,101,114,116,40,39,0,
		95,2,72,106,3,39,41,0,72,112,1,6,95,1,
		112,3,73,48,8,0,95,2,106,8,99,111,110,102,
		105,114,109,0,89,36,0,2,0,0,0,48,11,0,
		95,1,106,10,99,111,110,102,105,114,109,40,39,0,
		95,2,72,106,3,39,41,0,72,112,1,6,95,1,
		112,3,73,48,6,0,95,2,106,8,83,101,116,83,
		105,122,101,0,108,12,95,1,112,3,73,48,6,0,
		95,2,106,6,87,114,105,116,101,0,108,13,95,1,
		112,3,73,48,8,0,95,2,106,10,108,105,110,101,
		66,114,101,97,107,0,89,24,0,1,0,0,0,48,
		11,0,95,1,106,7,60,98,114,32,47,62,0,112,
		1,6,95,1,112,3,73,48,8,0,95,2,106,10,
		80,97,114,97,103,114,97,112,104,0,89,25,0,1,
		0,0,0,48,11,0,95,1,106,8,60,112,62,60,
		47,112,62,0,112,1,6,95,1,112,3,73,48,8,
		0,95,2,106,7,67,101,110,116,101,114,0,89,44,
		0,2,0,0,0,48,11,0,95,1,95,2,28,15,
		106,9,60,99,101,110,116,101,114,62,0,25,14,106,
		10,60,47,99,101,110,116,101,114,62,0,112,1,6,
		95,1,112,3,73,48,8,0,95,2,106,5,98,111,
		108,100,0,89,34,0,2,0,0,0,48,11,0,95,
		1,95,2,28,10,106,4,60,98,62,0,25,9,106,
		5,60,47,98,62,0,112,1,6,95,1,112,3,73,
		48,8,0,95,2,106,7,73,116,97,108,105,99,0,
		89,34,0,2,0,0,0,48,11,0,95,1,95,2,
		28,10,106,4,60,105,62,0,25,9,106,5,60,47,
		105,62,0,112,1,6,95,1,112,3,73,48,8,0,
		95,2,106,6,85,76,105,110,101,0,89,34,0,2,
		0,0,0,48,11,0,95,1,95,2,28,10,106,4,
		60,117,62,0,25,9,106,5,60,47,117,62,0,112,
		1,6,95,1,112,3,73,48,6,0,95,2,106,4,
		80,117,116,0,108,14,95,1,112,3,73,48,6,0,
		95,2,106,6,66,101,103,105,110,0,108,15,95,1,
		112,3,73,48,6,0,95,2,106,4,69,110,100,0,
		108,16,95,1,112,3,73,48,6,0,95,2,106,5,
		81,79,117,116,0,108,17,95,1,112,3,73,48,8,
		0,95,2,106,8,87,114,105,116,101,76,78,0,89,
		17,0,2,0,0,0,48,11,0,95,1,95,2,112,
		1,6,95,1,112,3,73,48,6,0,95,2,106,12,
		83,101,116,70,101,97,116,117,114,101,115,0,108,18,
		95,1,112,3,73,48,6,0,95,2,106,9,73,109,
		97,103,101,85,82,76,0,108,19,95,1,112,3,73,
		48,20,0,95,2,112,0,73,167,14,0,0,176,21,
		0,104,1,0,95,2,20,2,168,48,22,0,95,2,
		112,0,80,3,176,23,0,95,3,106,10,73,110,105,
		116,67,108,97,115,115,0,12,2,28,12,48,24,0,
		95,3,164,146,1,0,73,95,3,110,7,48,22,0,
		103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,7,176,25,0,96,1,0,106,7,110,101,119,
		87,105,110,0,20,2,176,25,0,96,2,0,106,2,
		32,0,20,2,176,25,0,96,3,0,95,1,20,2,
		176,25,0,96,4,0,92,100,20,2,176,25,0,96,
		5,0,92,100,20,2,176,25,0,96,7,0,93,44,
		1,20,2,176,25,0,96,6,0,93,44,1,20,2,
		48,26,0,102,176,27,0,12,0,112,1,73,48,28,
		0,102,176,29,0,12,0,112,1,73,48,30,0,102,
		95,1,112,1,73,48,31,0,102,95,2,112,1,73,
		48,32,0,102,95,3,112,1,73,48,33,0,102,95,
		4,112,1,73,48,34,0,102,95,5,112,1,73,48,
		35,0,102,95,7,112,1,73,48,36,0,102,95,6,
		112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_SETFEATURES )
{
	static const HB_BYTE pcode[] =
	{
		13,1,13,106,1,0,80,14,176,25,0,96,1,0,
		48,37,0,102,112,0,20,2,176,25,0,96,2,0,
		48,38,0,102,112,0,20,2,176,25,0,96,3,0,
		48,39,0,102,112,0,20,2,176,25,0,96,4,0,
		48,40,0,102,112,0,20,2,176,25,0,96,5,0,
		48,41,0,102,112,0,20,2,176,25,0,96,6,0,
		48,42,0,102,112,0,20,2,176,25,0,96,7,0,
		48,43,0,102,112,0,20,2,176,25,0,96,8,0,
		48,44,0,102,112,0,20,2,176,25,0,96,9,0,
		48,45,0,102,112,0,20,2,176,25,0,96,10,0,
		48,46,0,102,112,0,20,2,176,25,0,96,11,0,
		48,47,0,102,112,0,20,2,176,25,0,96,12,0,
		48,48,0,102,112,0,20,2,176,25,0,96,13,0,
		48,49,0,102,112,0,20,2,95,1,28,28,96,14,
		0,106,18,97,108,119,97,121,115,114,97,105,115,101,
		100,61,121,101,115,44,0,135,25,25,96,14,0,106,
		17,97,108,119,97,121,115,114,97,105,115,101,100,61,
		110,111,44,0,135,95,2,28,29,96,14,0,106,19,
		97,108,119,97,121,115,108,111,119,101,114,101,100,61,
		121,101,115,44,0,135,25,26,96,14,0,106,18,97,
		108,119,97,121,115,108,111,119,101,114,101,100,61,110,
		111,44,0,135,95,3,28,25,96,14,0,106,15,114,
		101,115,105,122,97,98,108,101,61,121,101,115,44,0,
		135,25,22,96,14,0,106,14,114,101,115,105,122,97,
		98,108,101,61,110,111,44,0,135,95,4,28,23,96,
		14,0,106,13,109,101,110,117,98,97,114,61,121,101,
		115,44,0,135,25,20,96,14,0,106,12,109,101,110,
		117,98,97,114,61,110,111,44,0,135,95,5,28,27,
		96,14,0,106,17,112,101,114,115,111,110,97,108,98,
		97,114,61,121,101,115,44,0,135,25,24,96,14,0,
		106,16,112,101,114,115,111,110,97,108,98,97,114,61,
		110,111,44,0,135,95,6,28,25,96,14,0,106,15,
		100,101,112,101,110,100,101,110,116,61,121,101,115,44,
		0,135,25,22,96,14,0,106,14,100,101,112,101,110,
		100,101,110,116,61,110,111,44,0,135,95,7,28,24,
		96,14,0,106,14,108,111,99,97,116,105,111,110,61,
		121,101,115,44,0,135,25,21,96,14,0,106,13,108,
		111,99,97,116,105,111,110,61,110,111,44,0,135,95,
		8,28,27,96,14,0,106,17,100,105,114,101,99,116,
		111,114,105,101,115,61,121,101,115,44,0,135,25,24,
		96,14,0,106,16,100,105,114,101,99,116,111,114,105,
		101,115,61,110,111,44,0,135,95,9,28,26,96,14,
		0,106,16,115,99,114,111,108,108,98,97,114,115,61,
		121,101,115,44,0,135,25,23,96,14,0,106,15,115,
		99,114,111,108,108,98,97,114,115,61,110,111,44,0,
		135,95,10,28,22,96,14,0,106,12,115,116,97,116,
		117,115,61,121,101,115,44,0,135,25,19,96,14,0,
		106,11,115,116,97,116,117,115,61,110,111,44,0,135,
		95,11,28,24,96,14,0,106,14,116,105,116,108,101,
		98,97,114,61,121,101,115,44,0,135,25,21,96,14,
		0,106,13,116,105,116,108,101,98,97,114,61,110,111,
		44,0,135,95,12,28,23,96,14,0,106,13,116,111,
		111,108,98,97,114,61,121,101,115,44,0,135,25,20,
		96,14,0,106,12,116,111,111,108,98,97,114,61,110,
		111,44,0,135,95,13,28,27,96,14,0,106,17,99,
		111,112,121,72,105,115,116,111,114,121,61,121,101,115,
		44,0,135,25,24,96,14,0,106,16,99,111,112,121,
		72,105,115,116,111,114,121,61,110,111,44,0,135,48,
		50,0,102,147,176,51,0,48,52,0,102,112,0,12,
		1,28,11,95,14,106,2,44,0,72,25,4,95,14,
		135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_SETSIZE )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,106,1,0,80,5,176,25,0,96,1,0,
		48,53,0,102,112,0,20,2,176,25,0,96,2,0,
		48,54,0,102,112,0,20,2,176,25,0,96,3,0,
		48,55,0,102,112,0,20,2,176,25,0,96,4,0,
		48,56,0,102,112,0,20,2,48,33,0,102,95,1,
		112,1,73,48,34,0,102,95,2,112,1,73,48,35,
		0,102,95,3,112,1,73,48,36,0,102,95,4,112,
		1,73,106,9,115,99,114,101,101,110,88,61,0,176,
		57,0,48,53,0,102,112,0,12,1,72,106,2,44,
		0,72,80,5,96,5,0,106,9,115,99,114,101,101,
		110,89,61,0,176,57,0,48,54,0,102,112,0,12,
		1,72,106,2,44,0,72,135,96,5,0,106,8,104,
		101,105,103,104,116,61,0,176,57,0,48,55,0,102,
		112,0,12,1,72,106,2,44,0,72,135,96,5,0,
		106,7,119,105,100,116,104,61,0,176,57,0,48,56,
		0,102,112,0,12,1,72,135,48,50,0,102,147,176,
		51,0,48,52,0,102,112,0,12,1,28,11,95,5,
		106,2,44,0,72,25,4,95,5,135,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_PUT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,106,1,0,80,1,48,58,0,102,112,0,
		100,8,28,27,48,26,0,102,176,27,0,12,0,112,
		1,73,48,58,0,102,112,0,100,8,28,5,102,110,
		7,176,51,0,48,52,0,102,112,0,12,1,28,16,
		48,59,0,102,112,0,73,48,60,0,102,112,0,73,
		176,61,0,48,32,0,102,147,106,7,110,101,119,87,
		105,110,0,20,2,96,1,0,48,62,0,102,112,0,
		106,17,32,61,32,119,105,110,100,111,119,46,111,112,
		101,110,40,39,0,72,48,63,0,102,112,0,72,106,
		5,39,44,32,39,0,72,48,62,0,102,112,0,72,
		106,5,39,44,32,39,0,72,48,52,0,102,112,0,
		72,106,3,39,41,0,72,135,176,64,0,48,58,0,
		102,112,0,95,1,20,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_WRITE )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,64,0,48,58,0,102,112,0,48,62,
		0,102,112,0,106,18,46,100,111,99,117,109,101,110,
		116,46,119,114,105,116,101,40,39,0,72,95,1,72,
		106,3,39,41,0,72,106,2,13,0,72,106,2,10,
		0,72,20,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_QOUT )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,176,65,0,48,58,0,102,112,0,48,62,
		0,102,112,0,106,18,46,100,111,99,117,109,101,110,
		116,46,119,114,105,116,101,40,39,0,72,95,1,72,
		106,3,39,41,0,72,106,2,13,0,72,106,2,10,
		0,72,20,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_BEGIN )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,65,0,48,58,0,102,112,0,106,35,
		60,115,99,114,105,112,116,32,108,97,110,103,117,97,
		103,101,61,74,97,118,97,83,99,114,105,112,116,32,
		49,46,50,62,13,10,0,20,2,176,65,0,48,58,
		0,102,112,0,106,7,60,33,45,45,13,10,0,20,
		2,48,11,0,102,106,13,60,104,116,109,108,62,60,
		104,101,97,100,62,0,112,1,73,48,66,0,102,112,
		0,100,69,28,38,48,11,0,102,106,8,60,116,105,
		116,108,101,62,0,48,66,0,102,112,0,72,106,9,
		60,47,116,105,116,108,101,62,0,72,112,1,73,48,
		67,0,102,112,0,100,69,28,93,122,165,80,1,25,
		73,48,11,0,102,106,34,60,115,99,114,105,112,116,
		32,108,97,110,103,117,97,103,101,61,74,97,118,97,
		83,99,114,105,112,116,32,115,114,99,61,34,0,48,
		67,0,102,112,0,95,1,1,72,106,12,34,62,60,
		47,115,99,114,105,112,116,62,0,72,112,1,73,175,
		1,0,176,68,0,48,67,0,102,112,0,12,1,15,
		28,173,48,69,0,102,112,0,100,69,28,106,122,165,
		80,1,25,86,48,11,0,102,106,34,60,115,99,114,
		105,112,116,32,108,97,110,103,117,97,103,101,61,74,
		97,118,97,83,99,114,105,112,116,32,115,114,99,61,
		34,0,48,69,0,102,112,0,95,1,1,72,106,25,
		34,32,114,117,110,97,116,61,83,69,82,86,69,82,
		62,60,47,115,99,114,105,112,116,62,0,72,112,1,
		73,175,1,0,176,68,0,48,69,0,102,112,0,12,
		1,15,28,160,48,70,0,102,112,0,100,69,28,40,
		48,11,0,102,106,9,60,115,116,121,108,101,62,32,
		0,48,70,0,102,112,0,72,106,10,32,60,47,115,
		116,121,108,101,62,0,72,112,1,73,48,11,0,102,
		106,13,60,47,104,101,97,100,62,60,98,111,100,121,
		0,112,1,73,48,71,0,102,112,0,100,69,28,35,
		48,11,0,102,106,12,32,32,32,111,110,76,111,97,
		100,61,34,0,48,71,0,102,112,0,72,106,2,34,
		0,72,112,1,73,48,72,0,102,112,0,100,69,28,
		35,48,11,0,102,106,12,32,111,110,85,110,108,111,
		97,100,61,34,0,48,72,0,102,112,0,72,106,2,
		34,0,72,112,1,73,48,11,0,102,106,2,62,0,
		112,1,73,48,73,0,102,112,0,100,69,28,40,48,
		11,0,102,106,16,60,98,111,100,121,32,98,103,99,
		111,108,111,114,61,34,0,48,73,0,102,112,0,72,
		106,3,34,62,0,72,112,1,73,48,74,0,102,112,
		0,100,69,28,37,48,11,0,102,106,13,60,98,111,
		100,121,32,116,101,120,116,61,34,0,48,74,0,102,
		112,0,72,106,3,34,62,0,72,112,1,73,48,75,
		0,102,112,0,100,69,28,43,48,11,0,102,106,19,
		60,98,111,100,121,32,98,97,99,107,103,114,111,117,
		110,100,61,34,0,48,75,0,102,112,0,72,106,3,
		34,62,0,72,112,1,73,176,65,0,48,58,0,102,
		112,0,106,6,47,47,45,45,62,0,20,2,176,65,
		0,48,58,0,102,112,0,106,12,60,47,115,99,114,
		105,112,116,62,13,10,0,20,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_END )
{
	static const HB_BYTE pcode[] =
	{
		176,64,0,48,58,0,102,112,0,48,62,0,102,112,
		0,106,34,46,100,111,99,117,109,101,110,116,46,119,
		114,105,116,101,40,39,60,47,98,111,100,121,62,60,
		47,104,116,109,108,62,39,41,0,72,106,2,13,0,
		72,106,2,10,0,72,20,2,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TJSWINDOW_IMAGEURL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,9,106,1,0,80,10,176,25,0,96,2,0,
		106,1,0,20,2,95,8,100,69,28,35,96,10,0,
		106,9,32,110,97,109,101,61,32,34,0,95,8,72,
		106,2,34,0,72,106,2,13,0,72,106,2,10,0,
		72,135,95,9,100,69,28,34,96,10,0,106,8,32,
		97,108,116,61,32,34,0,95,9,72,106,2,34,0,
		72,106,2,13,0,72,106,2,10,0,72,135,95,4,
		100,69,28,36,96,10,0,106,10,32,98,111,114,100,
		101,114,61,32,0,176,57,0,95,4,12,1,72,106,
		2,13,0,72,106,2,10,0,72,135,95,3,100,69,
		28,42,96,10,0,106,10,32,104,101,105,103,104,116,
		61,32,0,176,57,0,95,3,12,1,72,106,3,37,
		32,0,72,106,2,13,0,72,106,2,10,0,72,135,
		95,5,100,69,28,37,96,10,0,106,11,32,111,110,
		67,108,105,99,107,61,34,0,95,5,72,106,2,34,
		0,72,106,2,13,0,72,106,2,10,0,72,135,95,
		6,100,69,28,41,96,10,0,106,15,32,111,110,77,
		111,117,115,101,79,118,101,114,61,34,0,95,6,72,
		106,2,34,0,72,106,2,13,0,72,106,2,10,0,
		72,135,95,7,100,69,28,40,96,10,0,106,14,32,
		111,110,77,111,117,115,101,79,117,116,61,34,0,95,
		7,72,106,2,34,0,72,106,2,13,0,72,106,2,
		10,0,72,135,95,2,100,69,28,60,48,11,0,102,
		106,9,60,97,32,104,114,101,102,61,0,95,2,72,
		106,12,62,60,105,109,103,32,115,114,99,61,34,0,
		72,95,1,72,106,2,34,0,72,95,10,72,106,6,
		62,60,47,97,62,0,72,112,1,73,25,42,48,11,
		0,102,106,11,60,105,109,103,32,115,114,99,61,34,
		0,95,1,72,106,2,34,0,72,95,10,72,106,6,
		62,60,47,97,62,0,72,112,1,73,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,76,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

