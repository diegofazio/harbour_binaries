/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbodbc\todbc.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( TODBCFIELD );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( TODBCFIELD_NEW );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC( TODBC );
HB_FUNC_STATIC( TODBC_NEW );
HB_FUNC_STATIC( TODBC_DESTROY );
HB_FUNC_STATIC( TODBC_SETSQL );
HB_FUNC_STATIC( TODBC_OPEN );
HB_FUNC_STATIC( TODBC_EXECSQL );
HB_FUNC_STATIC( TODBC_CLOSE );
HB_FUNC_STATIC( TODBC_LOADDATA );
HB_FUNC_EXTERN( AEVAL );
HB_FUNC_STATIC( TODBC_FIELDBYNAME );
HB_FUNC_STATIC( TODBC_FETCH );
HB_FUNC_STATIC( TODBC_NEXT );
HB_FUNC_STATIC( TODBC_PRIOR );
HB_FUNC_STATIC( TODBC_FIRST );
HB_FUNC_STATIC( TODBC_LAST );
HB_FUNC_STATIC( TODBC_MOVEBY );
HB_FUNC_STATIC( TODBC_GOTO );
HB_FUNC_STATIC( TODBC_SKIP );
HB_FUNC_STATIC( TODBC_EOF );
HB_FUNC_STATIC( TODBC_BOF );
HB_FUNC_STATIC( TODBC_RECNO );
HB_FUNC_STATIC( TODBC_RECCOUNT );
HB_FUNC_STATIC( TODBC_LASTREC );
HB_FUNC_STATIC( TODBC_SQLERRORMESSAGE );
HB_FUNC_STATIC( TODBC_SETCNNOPTIONS );
HB_FUNC_STATIC( TODBC_GETCNNOPTIONS );
HB_FUNC_STATIC( TODBC_COMMIT );
HB_FUNC_STATIC( TODBC_ROLLBACK );
HB_FUNC_STATIC( TODBC_SETSTMTOPTIONS );
HB_FUNC_STATIC( TODBC_GETSTMTOPTIONS );
HB_FUNC_STATIC( TODBC_SETAUTOCOMMIT );
HB_FUNC_EXTERN( SQLERROR );
HB_FUNC_EXTERN( HB_DEFAULT );
HB_FUNC_EXTERN( SQLALLOCENV );
HB_FUNC_EXTERN( SQLALLOCCONNECT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( SQLCONNECT );
HB_FUNC_EXTERN( SQLDRIVERCONNECT );
HB_FUNC_EXTERN( SQLDISCONNECT );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( SQLGETCONNECTATTR );
HB_FUNC_EXTERN( SQLSETCONNECTATTR );
HB_FUNC_EXTERN( SQLCOMMIT );
HB_FUNC_EXTERN( SQLROLLBACK );
HB_FUNC_EXTERN( SQLGETSTMTATTR );
HB_FUNC_EXTERN( SQLSETSTMTATTR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SQLALLOCSTMT );
HB_FUNC_EXTERN( SQLEXECDIRECT );
HB_FUNC_EXTERN( SQLNUMRESULTCOLS );
HB_FUNC_EXTERN( SQLROWCOUNT );
HB_FUNC_EXTERN( SQLDESCRIBECOL );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( SQLFETCHSCROLL );
HB_FUNC_EXTERN( SQLGETDATA );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( HB_ODBCNUMSETLEN );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TODBC )
{ "TODBCFIELD", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBCFIELD )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TODBCFIELD_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBCFIELD_NEW )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TODBC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC )}, NULL },
{ "TODBC_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_NEW )}, NULL },
{ "TODBC_DESTROY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_DESTROY )}, NULL },
{ "TODBC_SETSQL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_SETSQL )}, NULL },
{ "TODBC_OPEN", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_OPEN )}, NULL },
{ "TODBC_EXECSQL", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_EXECSQL )}, NULL },
{ "TODBC_CLOSE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_CLOSE )}, NULL },
{ "TODBC_LOADDATA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_LOADDATA )}, NULL },
{ "ADDINLINE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AEVAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( AEVAL )}, NULL },
{ "FIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TODBC_FIELDBYNAME", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_FIELDBYNAME )}, NULL },
{ "TODBC_FETCH", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_FETCH )}, NULL },
{ "TODBC_NEXT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_NEXT )}, NULL },
{ "TODBC_PRIOR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_PRIOR )}, NULL },
{ "TODBC_FIRST", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_FIRST )}, NULL },
{ "TODBC_LAST", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_LAST )}, NULL },
{ "TODBC_MOVEBY", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_MOVEBY )}, NULL },
{ "TODBC_GOTO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_GOTO )}, NULL },
{ "TODBC_SKIP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_SKIP )}, NULL },
{ "TODBC_EOF", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_EOF )}, NULL },
{ "TODBC_BOF", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_BOF )}, NULL },
{ "TODBC_RECNO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_RECNO )}, NULL },
{ "TODBC_RECCOUNT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_RECCOUNT )}, NULL },
{ "TODBC_LASTREC", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_LASTREC )}, NULL },
{ "TODBC_SQLERRORMESSAGE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_SQLERRORMESSAGE )}, NULL },
{ "TODBC_SETCNNOPTIONS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_SETCNNOPTIONS )}, NULL },
{ "TODBC_GETCNNOPTIONS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_GETCNNOPTIONS )}, NULL },
{ "TODBC_COMMIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_COMMIT )}, NULL },
{ "TODBC_ROLLBACK", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_ROLLBACK )}, NULL },
{ "TODBC_SETSTMTOPTIONS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_SETSTMTOPTIONS )}, NULL },
{ "TODBC_GETSTMTOPTIONS", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_GETSTMTOPTIONS )}, NULL },
{ "TODBC_SETAUTOCOMMIT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( TODBC_SETAUTOCOMMIT )}, NULL },
{ "SQLERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLERROR )}, NULL },
{ "HENV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HDBC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HSTMT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DEFAULT )}, NULL },
{ "_CODBCSTR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LCACHERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLALLOCENV", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLALLOCENV )}, NULL },
{ "_HENV", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NRETCODE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLALLOCCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLALLOCCONNECT )}, NULL },
{ "_HDBC", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "SQLCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLCONNECT )}, NULL },
{ "SQLDRIVERCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLDRIVERCONNECT )}, NULL },
{ "CODBCSTR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CODBCRES", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LAUTOCOMMIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCNNOPTIONS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LAUTOCOMMIT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLDISCONNECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLDISCONNECT )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "SQLGETCONNECTATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLGETCONNECTATTR )}, NULL },
{ "SQLSETCONNECTATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLSETCONNECTATTR )}, NULL },
{ "SQLCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLCOMMIT )}, NULL },
{ "SQLROLLBACK", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLROLLBACK )}, NULL },
{ "SQLGETSTMTATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLGETSTMTATTR )}, NULL },
{ "SQLSETSTMTATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLSETSTMTATTR )}, NULL },
{ "ACTIVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOSE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_CSQL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CSQL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLALLOCSTMT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLALLOCSTMT )}, NULL },
{ "_HSTMT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLEXECDIRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLEXECDIRECT )}, NULL },
{ "SQLNUMRESULTCOLS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLNUMRESULTCOLS )}, NULL },
{ "SQLROWCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLROWCOUNT )}, NULL },
{ "_NRECCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FIELDS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLDESCRIBECOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLDESCRIBECOL )}, NULL },
{ "_FIELDID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_FIELDNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DATASIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DATATYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_DATADECS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ALLOWNULL", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCACHERS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ARECORDSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FETCH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ARECORDSET", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "FIRST", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NRECNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ACTIVE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_LBOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "FIELDNAME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLEARDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRECNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRECCOUNT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLFETCHSCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLFETCHSCROLL )}, NULL },
{ "LOADDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEXT", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBOF", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMINDEX", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SQLGETDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLGETDATA )}, NULL },
{ "FIELDID", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATATYPE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "DATASIZE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ODBCNUMSETLEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ODBCNUMSETLEN )}, NULL },
{ "DATADECS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TODBC, "hbodbc\\todbc.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TODBC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TODBC )
   #include "hbiniseg.h"
#endif

HB_FUNC( TODBCFIELD )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,123,0,103,1,0,100,8,29,75,1,
		176,1,0,104,1,0,12,1,29,64,1,166,2,1,
		0,122,80,1,48,2,0,176,3,0,12,0,106,11,
		84,79,68,66,67,70,105,101,108,100,0,108,4,4,
		1,0,108,0,112,3,80,2,48,5,0,95,2,100,
		92,255,95,1,106,8,70,105,101,108,100,73,68,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,106,
		1,0,95,1,106,10,70,105,101,108,100,78,97,109,
		101,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,92,255,95,1,106,9,68,97,116,97,84,121,112,
		101,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,92,255,95,1,106,9,68,97,116,97,83,105,122,
		101,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,92,255,95,1,106,9,68,97,116,97,68,101,99,
		115,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,9,95,1,106,10,65,108,108,111,119,78,117,108,
		108,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,100,95,1,106,6,86,97,108,117,101,0,4,1,
		0,9,112,5,73,48,6,0,95,2,106,4,78,101,
		119,0,108,7,95,1,112,3,73,48,8,0,95,2,
		112,0,73,167,14,0,0,176,9,0,104,1,0,95,
		2,20,2,168,48,10,0,95,2,112,0,80,3,176,
		11,0,95,3,106,10,73,110,105,116,67,108,97,115,
		115,0,12,2,28,12,48,12,0,95,3,164,146,1,
		0,73,95,3,110,7,48,10,0,103,1,0,112,0,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBCFIELD_NEW )
{
	static const HB_BYTE pcode[] =
	{
		102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( TODBC )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,123,0,103,2,0,100,8,29,216,4,
		176,1,0,104,2,0,12,1,29,205,4,166,143,4,
		0,122,80,1,48,2,0,176,3,0,12,0,106,6,
		84,79,68,66,67,0,108,4,4,1,0,108,13,112,
		3,80,2,48,5,0,95,2,100,100,95,1,106,5,
		104,69,110,118,0,4,1,0,9,112,5,73,48,5,
		0,95,2,100,100,95,1,106,5,104,68,98,99,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,100,
		95,1,106,6,104,83,116,109,116,0,4,1,0,9,
		112,5,73,48,5,0,95,2,100,100,95,1,106,9,
		99,79,68,66,67,83,116,114,0,4,1,0,9,112,
		5,73,48,5,0,95,2,100,100,95,1,106,9,99,
		79,68,66,67,82,101,115,0,4,1,0,9,112,5,
		73,48,5,0,95,2,100,100,95,1,106,5,99,83,
		81,76,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,9,95,1,106,7,65,99,116,105,118,101,0,
		4,1,0,9,112,5,73,48,5,0,95,2,100,4,
		0,0,95,1,106,7,70,105,101,108,100,115,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,121,95,
		1,106,5,110,69,111,102,0,4,1,0,9,112,5,
		73,48,5,0,95,2,100,9,95,1,106,5,108,66,
		111,102,0,4,1,0,9,112,5,73,48,5,0,95,
		2,100,100,95,1,106,9,110,82,101,116,67,111,100,
		101,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,121,95,1,106,10,110,82,101,99,67,111,117,110,
		116,0,4,1,0,9,112,5,73,48,5,0,95,2,
		100,121,95,1,106,7,110,82,101,99,78,111,0,4,
		1,0,9,112,5,73,48,5,0,95,2,100,100,95,
		1,106,9,108,67,97,99,104,101,82,83,0,4,1,
		0,9,112,5,73,48,5,0,95,2,100,4,0,0,
		95,1,106,11,97,82,101,99,111,114,100,83,101,116,
		0,4,1,0,9,112,5,73,48,5,0,95,2,106,
		8,76,79,71,73,67,65,76,0,120,95,1,106,12,
		108,65,117,116,111,67,111,109,109,105,116,0,4,1,
		0,9,112,5,73,48,6,0,95,2,106,4,78,101,
		119,0,108,14,95,1,112,3,73,48,6,0,95,2,
		106,8,68,101,115,116,114,111,121,0,108,15,95,1,
		112,3,73,48,6,0,95,2,106,7,83,101,116,83,
		81,76,0,108,16,95,1,112,3,73,48,6,0,95,
		2,106,5,79,112,101,110,0,108,17,95,1,112,3,
		73,48,6,0,95,2,106,8,69,120,101,99,83,81,
		76,0,108,18,95,1,112,3,73,48,6,0,95,2,
		106,6,67,108,111,115,101,0,108,19,95,1,112,3,
		73,48,6,0,95,2,106,9,76,111,97,100,68,97,
		116,97,0,108,20,95,1,112,3,73,48,21,0,95,
		2,106,10,67,108,101,97,114,68,97,116,97,0,89,
		36,0,1,0,0,0,176,22,0,48,23,0,95,1,
		112,0,89,16,0,1,0,0,0,48,24,0,95,1,
		100,112,1,6,12,2,6,95,1,112,3,73,48,6,
		0,95,2,106,12,70,105,101,108,100,66,121,78,97,
		109,101,0,108,25,95,1,112,3,73,48,6,0,95,
		2,106,6,70,101,116,99,104,0,108,26,95,1,112,
		3,73,48,6,0,95,2,106,5,78,101,120,116,0,
		108,27,95,1,112,3,73,48,6,0,95,2,106,6,
		80,114,105,111,114,0,108,28,95,1,112,3,73,48,
		6,0,95,2,106,6,70,105,114,115,116,0,108,29,
		95,1,112,3,73,48,6,0,95,2,106,5,76,97,
		115,116,0,108,30,95,1,112,3,73,48,6,0,95,
		2,106,7,77,111,118,101,66,121,0,108,31,95,1,
		112,3,73,48,6,0,95,2,106,5,71,111,84,111,
		0,108,32,95,1,112,3,73,48,6,0,95,2,106,
		5,83,107,105,112,0,108,33,95,1,112,3,73,48,
		6,0,95,2,106,4,69,111,102,0,108,34,95,1,
		112,3,73,48,6,0,95,2,106,4,66,111,102,0,
		108,35,95,1,112,3,73,48,6,0,95,2,106,6,
		82,101,99,78,111,0,108,36,95,1,112,3,73,48,
		6,0,95,2,106,9,82,101,99,67,111,117,110,116,
		0,108,37,95,1,112,3,73,48,6,0,95,2,106,
		8,76,97,115,116,82,101,99,0,108,38,95,1,112,
		3,73,48,6,0,95,2,106,16,83,81,76,69,114,
		114,111,114,77,101,115,115,97,103,101,0,108,39,95,
		1,112,3,73,48,6,0,95,2,106,14,83,101,116,
		67,110,110,79,112,116,105,111,110,115,0,108,40,95,
		1,112,3,73,48,6,0,95,2,106,14,71,101,116,
		67,110,110,79,112,116,105,111,110,115,0,108,41,95,
		1,112,3,73,48,6,0,95,2,106,7,67,111,109,
		109,105,116,0,108,42,95,1,112,3,73,48,6,0,
		95,2,106,9,82,111,108,108,66,97,99,107,0,108,
		43,95,1,112,3,73,48,6,0,95,2,106,15,83,
		101,116,83,116,109,116,79,112,116,105,111,110,115,0,
		108,44,95,1,112,3,73,48,6,0,95,2,106,15,
		71,101,116,83,116,109,116,79,112,116,105,111,110,115,
		0,108,45,95,1,112,3,73,48,6,0,95,2,106,
		14,83,101,116,65,117,116,111,67,111,109,109,105,116,
		0,108,46,95,1,112,3,73,48,8,0,95,2,112,
		0,73,167,14,0,0,176,9,0,104,2,0,95,2,
		20,2,168,48,10,0,95,2,112,0,80,3,176,11,
		0,95,3,106,10,73,110,105,116,67,108,97,115,115,
		0,12,2,28,12,48,12,0,95,3,164,146,1,0,
		73,95,3,110,7,48,10,0,103,2,0,112,0,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_SQLERRORMESSAGE )
{
	static const HB_BYTE pcode[] =
	{
		13,3,0,176,47,0,48,48,0,102,112,0,48,49,
		0,102,112,0,48,50,0,102,112,0,96,1,0,96,
		2,0,96,3,0,20,6,106,7,69,114,114,111,114,
		32,0,95,1,72,106,4,32,45,32,0,72,95,3,
		72,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,1,4,176,51,0,96,4,0,120,20,2,48,52,
		0,102,95,1,112,1,73,48,53,0,102,95,4,112,
		1,73,176,54,0,48,55,0,102,147,12,1,165,80,
		5,121,69,28,14,48,56,0,102,95,5,112,1,73,
		100,110,7,176,57,0,48,48,0,102,112,0,48,58,
		0,102,147,20,2,176,59,0,95,2,12,1,28,45,
		176,51,0,96,3,0,106,1,0,20,2,176,60,0,
		48,49,0,102,112,0,95,1,95,2,95,3,12,4,
		165,80,5,121,8,31,32,95,5,122,8,28,26,25,
		24,176,61,0,48,49,0,102,112,0,48,62,0,102,
		112,0,48,63,0,102,147,20,3,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_SETAUTOCOMMIT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,64,0,102,112,0,80,2,176,51,0,
		96,1,0,120,20,2,95,1,95,2,69,28,28,48,
		65,0,102,92,102,95,1,28,5,122,25,3,121,112,
		2,73,48,66,0,102,95,1,112,1,73,95,2,110,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_DESTROY )
{
	static const HB_BYTE pcode[] =
	{
		176,67,0,48,49,0,102,112,0,20,1,48,58,0,
		102,100,112,1,73,48,55,0,102,100,112,1,73,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_GETCNNOPTIONS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,68,0,93,0,1,12,1,80,2,48,
		56,0,102,176,69,0,48,49,0,102,112,0,95,1,
		96,2,0,12,3,112,1,73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_SETCNNOPTIONS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,56,0,102,176,70,0,48,49,0,102,
		112,0,95,1,95,2,12,3,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_COMMIT )
{
	static const HB_BYTE pcode[] =
	{
		48,56,0,102,176,71,0,48,48,0,102,112,0,48,
		49,0,102,112,0,12,2,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_ROLLBACK )
{
	static const HB_BYTE pcode[] =
	{
		48,56,0,102,176,72,0,48,48,0,102,112,0,48,
		49,0,102,112,0,12,2,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_GETSTMTOPTIONS )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,176,68,0,93,0,1,12,1,80,2,48,
		56,0,102,176,73,0,48,50,0,102,112,0,95,1,
		96,2,0,12,3,112,1,73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_SETSTMTOPTIONS )
{
	static const HB_BYTE pcode[] =
	{
		13,0,2,48,56,0,102,176,74,0,48,50,0,102,
		112,0,95,1,95,2,12,3,112,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_SETSQL )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,48,75,0,102,112,0,28,9,48,76,0,
		102,112,0,73,48,77,0,102,95,1,112,1,73,100,
		110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_OPEN )
{
	static const HB_BYTE pcode[] =
	{
		13,13,0,48,75,0,102,112,0,28,9,92,255,80,
		1,26,146,1,176,78,0,48,79,0,102,112,0,12,
		1,28,9,92,255,80,1,26,126,1,176,80,0,48,
		49,0,102,112,0,48,81,0,102,147,20,2,176,82,
		0,48,50,0,102,112,0,48,79,0,102,112,0,12,
		2,165,80,1,121,69,32,85,1,176,83,0,48,50,
		0,102,112,0,96,2,0,20,2,176,84,0,48,50,
		0,102,112,0,96,3,0,12,2,80,11,95,11,121,
		8,28,11,48,85,0,102,95,3,112,1,73,48,86,
		0,102,95,2,3,1,0,112,1,73,122,165,80,4,
		25,123,176,87,0,48,50,0,102,112,0,95,4,96,
		5,0,93,255,0,96,6,0,96,7,0,96,8,0,
		96,9,0,96,10,0,20,9,48,2,0,176,0,0,
		12,0,112,0,165,80,13,48,23,0,102,112,0,95,
		4,2,48,88,0,95,13,95,4,112,1,73,48,89,
		0,95,13,95,5,112,1,73,48,90,0,95,13,95,
		8,112,1,73,48,91,0,95,13,95,7,112,1,73,
		48,92,0,95,13,95,9,112,1,73,48,93,0,95,
		13,95,10,121,69,112,1,73,175,4,0,95,2,15,
		28,132,48,94,0,102,112,0,28,99,48,95,0,102,
		4,0,0,112,1,73,48,96,0,102,122,122,112,2,
		121,8,28,57,95,2,3,1,0,80,12,122,165,80,
		4,25,24,48,97,0,48,23,0,102,112,0,95,4,
		1,112,0,95,12,95,4,2,175,4,0,95,2,15,
		28,231,176,98,0,48,99,0,102,112,0,95,12,20,
		2,25,191,48,85,0,102,176,100,0,48,99,0,102,
		112,0,12,1,112,1,73,25,30,48,101,0,102,112,
		0,121,8,28,12,48,85,0,102,122,112,1,73,25,
		10,48,85,0,102,121,112,1,73,48,102,0,102,122,
		112,1,73,48,103,0,102,120,112,1,73,95,1,121,
		8,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_EXECSQL )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,176,78,0,48,79,0,102,112,0,12,1,
		28,8,92,255,80,1,25,44,176,80,0,48,49,0,
		102,112,0,48,81,0,102,147,20,2,176,82,0,48,
		50,0,102,112,0,48,79,0,102,112,0,12,2,80,
		1,48,76,0,102,112,0,73,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_CLOSE )
{
	static const HB_BYTE pcode[] =
	{
		48,81,0,102,100,112,1,73,48,103,0,102,9,112,
		1,73,48,94,0,102,112,0,28,12,48,95,0,102,
		4,0,0,112,1,73,48,85,0,102,121,112,1,73,
		48,102,0,102,121,112,1,73,48,104,0,102,120,112,
		1,73,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_FIELDBYNAME )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,100,80,3,176,59,0,95,1,12,1,28,
		62,176,105,0,48,23,0,102,112,0,89,30,0,1,
		0,1,0,1,0,176,106,0,48,107,0,95,1,112,
		0,12,1,176,106,0,95,255,12,1,8,6,12,2,
		80,2,95,2,121,69,28,13,48,23,0,102,112,0,
		95,2,1,80,3,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_FETCH )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,100,80,4,48,108,0,102,112,0,73,48,
		94,0,102,112,0,29,254,0,48,75,0,102,112,0,
		29,245,0,26,187,0,48,109,0,102,112,0,48,110,
		0,102,112,0,8,28,9,92,100,80,3,26,237,0,
		121,80,3,48,109,0,102,112,0,23,80,4,26,222,
		0,48,109,0,102,112,0,122,8,28,9,92,100,80,
		3,26,205,0,121,80,3,48,109,0,102,112,0,17,
		80,4,26,190,0,121,80,3,122,80,4,26,181,0,
		121,80,3,48,110,0,102,112,0,80,4,26,167,0,
		48,109,0,102,112,0,95,2,72,48,110,0,102,112,
		0,15,31,15,48,109,0,102,112,0,95,2,72,122,
		35,28,9,92,255,80,3,26,129,0,121,80,3,48,
		109,0,102,112,0,95,2,72,80,4,25,112,95,2,
		48,110,0,102,112,0,15,31,8,95,2,122,35,28,
		8,92,255,80,3,25,89,121,80,3,95,2,80,4,
		25,80,92,255,80,3,25,74,95,1,133,7,0,97,
		1,0,0,0,26,62,255,97,4,0,0,0,26,91,
		255,97,2,0,0,0,26,115,255,97,3,0,0,0,
		26,116,255,97,6,0,0,0,26,122,255,97,5,0,
		0,0,25,168,100,25,197,176,111,0,48,50,0,102,
		112,0,95,1,95,2,12,3,80,3,95,3,121,8,
		31,8,95,3,122,8,28,22,121,80,3,48,112,0,
		102,95,4,112,1,73,48,104,0,102,9,112,1,73,
		95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_NEXT )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,48,96,0,102,122,122,112,2,80,1,95,
		1,121,8,28,32,48,102,0,102,147,172,48,110,0,
		102,112,0,15,28,45,48,85,0,102,48,109,0,102,
		112,0,112,1,73,25,30,95,1,92,100,8,28,23,
		48,109,0,102,112,0,48,110,0,102,112,0,8,28,
		8,48,102,0,102,147,170,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_PRIOR )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,48,96,0,102,92,4,122,112,2,80,1,
		95,1,121,8,28,10,48,102,0,102,147,169,25,40,
		95,1,92,100,8,28,33,48,109,0,102,112,0,122,
		8,28,23,48,102,0,102,147,169,48,113,0,102,112,
		0,73,48,104,0,102,120,112,1,73,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_FIRST )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,48,96,0,102,92,2,122,112,2,80,1,
		95,1,121,8,28,10,48,102,0,102,122,112,1,73,
		95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_LAST )
{
	static const HB_BYTE pcode[] =
	{
		13,1,0,48,96,0,102,92,3,122,112,2,80,1,
		95,1,121,8,28,15,48,102,0,102,48,110,0,102,
		112,0,112,1,73,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_MOVEBY )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,96,0,102,92,6,95,1,112,2,80,
		2,95,2,121,8,28,10,48,102,0,102,147,95,1,
		135,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_GOTO )
{
	static const HB_BYTE pcode[] =
	{
		13,1,1,48,96,0,102,92,5,95,1,112,2,80,
		2,95,2,121,8,28,11,48,102,0,102,95,1,112,
		1,73,95,2,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_SKIP )
{
	static const HB_BYTE pcode[] =
	{
		48,113,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_EOF )
{
	static const HB_BYTE pcode[] =
	{
		48,110,0,102,112,0,121,8,21,31,16,73,48,109,
		0,102,112,0,48,110,0,102,112,0,15,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_BOF )
{
	static const HB_BYTE pcode[] =
	{
		48,114,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_RECNO )
{
	static const HB_BYTE pcode[] =
	{
		48,109,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_RECCOUNT )
{
	static const HB_BYTE pcode[] =
	{
		48,110,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_LASTREC )
{
	static const HB_BYTE pcode[] =
	{
		48,110,0,102,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( TODBC_LOADDATA )
{
	static const HB_BYTE pcode[] =
	{
		13,2,1,48,23,0,102,112,0,96,3,0,129,1,
		1,29,237,0,48,94,0,102,112,0,28,53,48,75,
		0,102,112,0,28,45,95,1,121,15,28,33,95,1,
		48,110,0,102,112,0,34,28,22,48,99,0,102,112,
		0,95,1,1,48,115,0,96,3,0,112,0,1,25,
		3,100,80,2,26,164,0,176,116,0,48,50,0,102,
		112,0,48,117,0,95,3,112,0,48,118,0,95,3,
		112,0,100,96,2,0,20,5,25,45,176,119,0,95,
		2,48,120,0,95,3,112,0,12,2,80,2,25,114,
		176,121,0,95,2,48,120,0,95,3,112,0,48,122,
		0,95,3,112,0,12,3,80,2,25,89,48,118,0,
		95,3,112,0,133,11,0,97,1,0,0,0,25,198,
		97,248,255,255,255,25,191,97,2,0,0,0,25,202,
		97,3,0,0,0,25,195,97,8,0,0,0,25,188,
		97,6,0,0,0,25,181,97,7,0,0,0,25,174,
		97,250,255,255,255,25,167,97,5,0,0,0,25,160,
		97,251,255,255,255,25,153,97,4,0,0,0,25,146,
		48,24,0,95,3,95,2,112,1,73,130,32,25,255,
		132,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,123,0,2,0,7
	};

	hb_vmExecute( pcode, symbols );
}
