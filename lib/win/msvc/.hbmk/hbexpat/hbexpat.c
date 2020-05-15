/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbexpat\hbexpat.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_XML_EXPATVERSIONINFO );
HB_FUNC_EXTERN( HB_XML_GET_UNICODE_TABLE );
HB_FUNC_EXTERN( XML_DEFAULTCURRENT );
HB_FUNC_EXTERN( XML_ERRORSTRING );
HB_FUNC_EXTERN( XML_EXPATVERSION );
HB_FUNC_EXTERN( XML_EXPATVERSIONINFO );
HB_FUNC_EXTERN( XML_GETBASE );
HB_FUNC_EXTERN( XML_GETCURRENTBYTECOUNT );
HB_FUNC_EXTERN( XML_GETCURRENTBYTEINDEX );
HB_FUNC_EXTERN( XML_GETCURRENTCOLUMNNUMBER );
HB_FUNC_EXTERN( XML_GETCURRENTLINENUMBER );
HB_FUNC_EXTERN( XML_GETERRORCODE );
HB_FUNC_EXTERN( XML_GETIDATTRIBUTEINDEX );
HB_FUNC_EXTERN( XML_GETPARSINGSTATUS );
HB_FUNC_EXTERN( XML_GETSPECIFIEDATTRIBUTECOUNT );
HB_FUNC_EXTERN( XML_GETUSERDATA );
HB_FUNC_EXTERN( XML_PARSE );
HB_FUNC_EXTERN( XML_PARSERCREATE );
HB_FUNC_EXTERN( XML_PARSERFREE );
HB_FUNC_EXTERN( XML_PARSERRESET );
HB_FUNC_EXTERN( XML_RESUMEPARSER );
HB_FUNC_EXTERN( XML_SETATTLISTDECLHANDLER );
HB_FUNC_EXTERN( XML_SETBASE );
HB_FUNC_EXTERN( XML_SETCDATASECTIONHANDLER );
HB_FUNC_EXTERN( XML_SETCHARACTERDATAHANDLER );
HB_FUNC_EXTERN( XML_SETCOMMENTHANDLER );
HB_FUNC_EXTERN( XML_SETDEFAULTHANDLER );
HB_FUNC_EXTERN( XML_SETDEFAULTHANDLEREXPAND );
HB_FUNC_EXTERN( XML_SETELEMENTHANDLER );
HB_FUNC_EXTERN( XML_SETENCODING );
HB_FUNC_EXTERN( XML_SETENDCDATASECTIONHANDLER );
HB_FUNC_EXTERN( XML_SETENDDOCTYPEDECLHANDLER );
HB_FUNC_EXTERN( XML_SETENDELEMENTHANDLER );
HB_FUNC_EXTERN( XML_SETENDNAMESPACEDECLHANDLER );
HB_FUNC_EXTERN( XML_SETENTITYDECLHANDLER );
HB_FUNC_EXTERN( XML_SETHASHSALT );
HB_FUNC_EXTERN( XML_SETNAMESPACEDECLHANDLER );
HB_FUNC_EXTERN( XML_SETNOTATIONDECLHANDLER );
HB_FUNC_EXTERN( XML_SETNOTSTANDALONEHANDLER );
HB_FUNC_EXTERN( XML_SETPARAMENTITYPARSING );
HB_FUNC_EXTERN( XML_SETPROCESSINGINSTRUCTIONHANDLER );
HB_FUNC_EXTERN( XML_SETRETURNNSTRIPLET );
HB_FUNC_EXTERN( XML_SETSKIPPEDENTITYHANDLER );
HB_FUNC_EXTERN( XML_SETSTARTCDATASECTIONHANDLER );
HB_FUNC_EXTERN( XML_SETSTARTDOCTYPEDECLHANDLER );
HB_FUNC_EXTERN( XML_SETSTARTELEMENTHANDLER );
HB_FUNC_EXTERN( XML_SETSTARTNAMESPACEDECLHANDLER );
HB_FUNC_EXTERN( XML_SETUNKNOWNENCODINGHANDLER );
HB_FUNC_EXTERN( XML_SETUSERDATA );
HB_FUNC_EXTERN( XML_SETXMLDECLHANDLER );
HB_FUNC_EXTERN( XML_STOPPARSER );
HB_FUNC_EXTERN( XML_USEFOREIGNDTD );
HB_FUNC_EXTERN( __HB_XML_CDPU16MAP );
HB_FUNC( __HBEXTERN__HBEXPAT__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBEXPAT )
{ "HB_XML_EXPATVERSIONINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_XML_EXPATVERSIONINFO )}, NULL },
{ "HB_XML_GET_UNICODE_TABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_XML_GET_UNICODE_TABLE )}, NULL },
{ "XML_DEFAULTCURRENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_DEFAULTCURRENT )}, NULL },
{ "XML_ERRORSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_ERRORSTRING )}, NULL },
{ "XML_EXPATVERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_EXPATVERSION )}, NULL },
{ "XML_EXPATVERSIONINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_EXPATVERSIONINFO )}, NULL },
{ "XML_GETBASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETBASE )}, NULL },
{ "XML_GETCURRENTBYTECOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETCURRENTBYTECOUNT )}, NULL },
{ "XML_GETCURRENTBYTEINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETCURRENTBYTEINDEX )}, NULL },
{ "XML_GETCURRENTCOLUMNNUMBER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETCURRENTCOLUMNNUMBER )}, NULL },
{ "XML_GETCURRENTLINENUMBER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETCURRENTLINENUMBER )}, NULL },
{ "XML_GETERRORCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETERRORCODE )}, NULL },
{ "XML_GETIDATTRIBUTEINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETIDATTRIBUTEINDEX )}, NULL },
{ "XML_GETPARSINGSTATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETPARSINGSTATUS )}, NULL },
{ "XML_GETSPECIFIEDATTRIBUTECOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETSPECIFIEDATTRIBUTECOUNT )}, NULL },
{ "XML_GETUSERDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_GETUSERDATA )}, NULL },
{ "XML_PARSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_PARSE )}, NULL },
{ "XML_PARSERCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_PARSERCREATE )}, NULL },
{ "XML_PARSERFREE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_PARSERFREE )}, NULL },
{ "XML_PARSERRESET", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_PARSERRESET )}, NULL },
{ "XML_RESUMEPARSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_RESUMEPARSER )}, NULL },
{ "XML_SETATTLISTDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETATTLISTDECLHANDLER )}, NULL },
{ "XML_SETBASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETBASE )}, NULL },
{ "XML_SETCDATASECTIONHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETCDATASECTIONHANDLER )}, NULL },
{ "XML_SETCHARACTERDATAHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETCHARACTERDATAHANDLER )}, NULL },
{ "XML_SETCOMMENTHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETCOMMENTHANDLER )}, NULL },
{ "XML_SETDEFAULTHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETDEFAULTHANDLER )}, NULL },
{ "XML_SETDEFAULTHANDLEREXPAND", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETDEFAULTHANDLEREXPAND )}, NULL },
{ "XML_SETELEMENTHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETELEMENTHANDLER )}, NULL },
{ "XML_SETENCODING", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETENCODING )}, NULL },
{ "XML_SETENDCDATASECTIONHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETENDCDATASECTIONHANDLER )}, NULL },
{ "XML_SETENDDOCTYPEDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETENDDOCTYPEDECLHANDLER )}, NULL },
{ "XML_SETENDELEMENTHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETENDELEMENTHANDLER )}, NULL },
{ "XML_SETENDNAMESPACEDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETENDNAMESPACEDECLHANDLER )}, NULL },
{ "XML_SETENTITYDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETENTITYDECLHANDLER )}, NULL },
{ "XML_SETHASHSALT", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETHASHSALT )}, NULL },
{ "XML_SETNAMESPACEDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETNAMESPACEDECLHANDLER )}, NULL },
{ "XML_SETNOTATIONDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETNOTATIONDECLHANDLER )}, NULL },
{ "XML_SETNOTSTANDALONEHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETNOTSTANDALONEHANDLER )}, NULL },
{ "XML_SETPARAMENTITYPARSING", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETPARAMENTITYPARSING )}, NULL },
{ "XML_SETPROCESSINGINSTRUCTIONHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETPROCESSINGINSTRUCTIONHANDLER )}, NULL },
{ "XML_SETRETURNNSTRIPLET", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETRETURNNSTRIPLET )}, NULL },
{ "XML_SETSKIPPEDENTITYHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETSKIPPEDENTITYHANDLER )}, NULL },
{ "XML_SETSTARTCDATASECTIONHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETSTARTCDATASECTIONHANDLER )}, NULL },
{ "XML_SETSTARTDOCTYPEDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETSTARTDOCTYPEDECLHANDLER )}, NULL },
{ "XML_SETSTARTELEMENTHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETSTARTELEMENTHANDLER )}, NULL },
{ "XML_SETSTARTNAMESPACEDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETSTARTNAMESPACEDECLHANDLER )}, NULL },
{ "XML_SETUNKNOWNENCODINGHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETUNKNOWNENCODINGHANDLER )}, NULL },
{ "XML_SETUSERDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETUSERDATA )}, NULL },
{ "XML_SETXMLDECLHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_SETXMLDECLHANDLER )}, NULL },
{ "XML_STOPPARSER", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_STOPPARSER )}, NULL },
{ "XML_USEFOREIGNDTD", {HB_FS_PUBLIC}, {HB_FUNCNAME( XML_USEFOREIGNDTD )}, NULL },
{ "__HB_XML_CDPU16MAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __HB_XML_CDPU16MAP )}, NULL },
{ "__HBEXTERN__HBEXPAT__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBEXPAT__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBEXPAT, "hbexpat\\hbexpat.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBEXPAT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBEXPAT )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBEXPAT__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}
