/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "..\contrib\hbtip\hbtip.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( ANSITOHTML );
HB_FUNC_EXTERN( HB_MAILASSEMBLE );
HB_FUNC_EXTERN( HB_SENDMAIL );
HB_FUNC_EXTERN( HTMLTOANSI );
HB_FUNC_EXTERN( HTMLTOOEM );
HB_FUNC_EXTERN( OEMTOHTML );
HB_FUNC_EXTERN( THTMLCLEANUP );
HB_FUNC_EXTERN( THTMLDOCUMENT );
HB_FUNC_EXTERN( THTMLINIT );
HB_FUNC_EXTERN( THTMLISVALID );
HB_FUNC_EXTERN( THTMLITERATOR );
HB_FUNC_EXTERN( THTMLITERATORREGEX );
HB_FUNC_EXTERN( THTMLITERATORSCAN );
HB_FUNC_EXTERN( THTMLNODE );
HB_FUNC_EXTERN( THTMLTAGTYPE );
HB_FUNC_EXTERN( TIPCGI );
HB_FUNC_EXTERN( TIPCLIENT );
HB_FUNC_EXTERN( TIPCLIENTFTP );
HB_FUNC_EXTERN( TIPCLIENTHTTP );
HB_FUNC_EXTERN( TIPCLIENTPOP );
HB_FUNC_EXTERN( TIPCLIENTSMTP );
HB_FUNC_EXTERN( TIPENCODER );
HB_FUNC_EXTERN( TIPENCODERBASE64 );
HB_FUNC_EXTERN( TIPENCODERQP );
HB_FUNC_EXTERN( TIPENCODERURL );
HB_FUNC_EXTERN( TIPLOG );
HB_FUNC_EXTERN( TIPMAIL );
HB_FUNC_EXTERN( TIP_BASE64DECODEURL );
HB_FUNC_EXTERN( TIP_BASE64ENCODEURL );
HB_FUNC_EXTERN( TIP_CHECKSID );
HB_FUNC_EXTERN( TIP_CRLF );
HB_FUNC_EXTERN( TIP_DATETOGMT );
HB_FUNC_EXTERN( TIP_FILEMIMETYPE );
HB_FUNC_EXTERN( TIP_FILENAMEMIMETYPE );
HB_FUNC_EXTERN( TIP_GENERATESID );
HB_FUNC_EXTERN( TIP_GETENCODER );
HB_FUNC_EXTERN( TIP_GETNAMEEMAIL );
HB_FUNC_EXTERN( TIP_GETRAWEMAIL );
HB_FUNC_EXTERN( TIP_HTMLSPECIALCHARS );
HB_FUNC_EXTERN( TIP_HTMLTOSTR );
HB_FUNC_EXTERN( TIP_JSONSPECIALCHARS );
HB_FUNC_EXTERN( TIP_MAILASSEMBLE );
HB_FUNC_EXTERN( TIP_MAILSEND );
HB_FUNC_EXTERN( TIP_MIMETYPE );
HB_FUNC_EXTERN( TIP_QPDECODE );
HB_FUNC_EXTERN( TIP_QPENCODE );
HB_FUNC_EXTERN( TIP_SSL );
HB_FUNC_EXTERN( TIP_STRTOHTML );
HB_FUNC_EXTERN( TIP_TIMESTAMP );
HB_FUNC_EXTERN( TIP_URLDECODE );
HB_FUNC_EXTERN( TIP_URLENCODE );
HB_FUNC_EXTERN( TURL );
HB_FUNC_EXTERN( __TIP_FATTRTOUMASK );
HB_FUNC_EXTERN( __TIP_SSLCONNECTFD );
HB_FUNC( __HBEXTERN__HBTIP__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBTIP )
{ "ANSITOHTML", {HB_FS_PUBLIC}, {HB_FUNCNAME( ANSITOHTML )}, NULL },
{ "HB_MAILASSEMBLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MAILASSEMBLE )}, NULL },
{ "HB_SENDMAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SENDMAIL )}, NULL },
{ "HTMLTOANSI", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTMLTOANSI )}, NULL },
{ "HTMLTOOEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HTMLTOOEM )}, NULL },
{ "OEMTOHTML", {HB_FS_PUBLIC}, {HB_FUNCNAME( OEMTOHTML )}, NULL },
{ "THTMLCLEANUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLCLEANUP )}, NULL },
{ "THTMLDOCUMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLDOCUMENT )}, NULL },
{ "THTMLINIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLINIT )}, NULL },
{ "THTMLISVALID", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLISVALID )}, NULL },
{ "THTMLITERATOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLITERATOR )}, NULL },
{ "THTMLITERATORREGEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLITERATORREGEX )}, NULL },
{ "THTMLITERATORSCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLITERATORSCAN )}, NULL },
{ "THTMLNODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLNODE )}, NULL },
{ "THTMLTAGTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( THTMLTAGTYPE )}, NULL },
{ "TIPCGI", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCGI )}, NULL },
{ "TIPCLIENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENT )}, NULL },
{ "TIPCLIENTFTP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENTFTP )}, NULL },
{ "TIPCLIENTHTTP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENTHTTP )}, NULL },
{ "TIPCLIENTPOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENTPOP )}, NULL },
{ "TIPCLIENTSMTP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPCLIENTSMTP )}, NULL },
{ "TIPENCODER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPENCODER )}, NULL },
{ "TIPENCODERBASE64", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPENCODERBASE64 )}, NULL },
{ "TIPENCODERQP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPENCODERQP )}, NULL },
{ "TIPENCODERURL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPENCODERURL )}, NULL },
{ "TIPLOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPLOG )}, NULL },
{ "TIPMAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIPMAIL )}, NULL },
{ "TIP_BASE64DECODEURL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_BASE64DECODEURL )}, NULL },
{ "TIP_BASE64ENCODEURL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_BASE64ENCODEURL )}, NULL },
{ "TIP_CHECKSID", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_CHECKSID )}, NULL },
{ "TIP_CRLF", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_CRLF )}, NULL },
{ "TIP_DATETOGMT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_DATETOGMT )}, NULL },
{ "TIP_FILEMIMETYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_FILEMIMETYPE )}, NULL },
{ "TIP_FILENAMEMIMETYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_FILENAMEMIMETYPE )}, NULL },
{ "TIP_GENERATESID", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_GENERATESID )}, NULL },
{ "TIP_GETENCODER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_GETENCODER )}, NULL },
{ "TIP_GETNAMEEMAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_GETNAMEEMAIL )}, NULL },
{ "TIP_GETRAWEMAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_GETRAWEMAIL )}, NULL },
{ "TIP_HTMLSPECIALCHARS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_HTMLSPECIALCHARS )}, NULL },
{ "TIP_HTMLTOSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_HTMLTOSTR )}, NULL },
{ "TIP_JSONSPECIALCHARS", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_JSONSPECIALCHARS )}, NULL },
{ "TIP_MAILASSEMBLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_MAILASSEMBLE )}, NULL },
{ "TIP_MAILSEND", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_MAILSEND )}, NULL },
{ "TIP_MIMETYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_MIMETYPE )}, NULL },
{ "TIP_QPDECODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_QPDECODE )}, NULL },
{ "TIP_QPENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_QPENCODE )}, NULL },
{ "TIP_SSL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_SSL )}, NULL },
{ "TIP_STRTOHTML", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_STRTOHTML )}, NULL },
{ "TIP_TIMESTAMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_TIMESTAMP )}, NULL },
{ "TIP_URLDECODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_URLDECODE )}, NULL },
{ "TIP_URLENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIP_URLENCODE )}, NULL },
{ "TURL", {HB_FS_PUBLIC}, {HB_FUNCNAME( TURL )}, NULL },
{ "__TIP_FATTRTOUMASK", {HB_FS_PUBLIC}, {HB_FUNCNAME( __TIP_FATTRTOUMASK )}, NULL },
{ "__TIP_SSLCONNECTFD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __TIP_SSLCONNECTFD )}, NULL },
{ "__HBEXTERN__HBTIP__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBTIP__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBTIP, "..\\contrib\\hbtip\\hbtip.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBTIP
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBTIP )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBTIP__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

