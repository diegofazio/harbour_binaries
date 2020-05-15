/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbmisc\hbmisc.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( ADAYS );
HB_FUNC_EXTERN( AMONTHS );
HB_FUNC_EXTERN( BINTODEC );
HB_FUNC_EXTERN( BUBBLEBABBLEENCODE );
HB_FUNC_EXTERN( CALLDLL32 );
HB_FUNC_EXTERN( DATETOTXTRU );
HB_FUNC_EXTERN( DEBUG );
HB_FUNC_EXTERN( DECTOBIN );
HB_FUNC_EXTERN( DECTOHEXA );
HB_FUNC_EXTERN( DECTOOCTAL );
HB_FUNC_EXTERN( DECTOROMAN );
HB_FUNC_EXTERN( EDITORADDTEXT );
HB_FUNC_EXTERN( EDITORCARGO );
HB_FUNC_EXTERN( EDITOREDIT );
HB_FUNC_EXTERN( EDITORFILE );
HB_FUNC_EXTERN( EDITORGETLINE );
HB_FUNC_EXTERN( EDITORGETTEXT );
HB_FUNC_EXTERN( EDITORINSTEXT );
HB_FUNC_EXTERN( EDITORKILL );
HB_FUNC_EXTERN( EDITORLCOUNT );
HB_FUNC_EXTERN( EDITORMODE );
HB_FUNC_EXTERN( EDITORNEW );
HB_FUNC_EXTERN( EDITORNEXTLINE );
HB_FUNC_EXTERN( EDITORREAD );
HB_FUNC_EXTERN( EDITORSETTEXT );
HB_FUNC_EXTERN( EDITORSIZE );
HB_FUNC_EXTERN( EDITORTITLE );
HB_FUNC_EXTERN( ED_ADDTEXT );
HB_FUNC_EXTERN( ED_BOTTOM );
HB_FUNC_EXTERN( ED_BSPACE );
HB_FUNC_EXTERN( ED_COL );
HB_FUNC_EXTERN( ED_CONFIG );
HB_FUNC_EXTERN( ED_DELCHAR );
HB_FUNC_EXTERN( ED_DELLINE );
HB_FUNC_EXTERN( ED_DELWORD );
HB_FUNC_EXTERN( ED_DOWN );
HB_FUNC_EXTERN( ED_END );
HB_FUNC_EXTERN( ED_GETLINE );
HB_FUNC_EXTERN( ED_GETNEXT );
HB_FUNC_EXTERN( ED_GETTEXT );
HB_FUNC_EXTERN( ED_GOTO );
HB_FUNC_EXTERN( ED_HOME );
HB_FUNC_EXTERN( ED_INSTEXT );
HB_FUNC_EXTERN( ED_LCOUNT );
HB_FUNC_EXTERN( ED_LEFT );
HB_FUNC_EXTERN( ED_LENGTH );
HB_FUNC_EXTERN( ED_MAXLINE );
HB_FUNC_EXTERN( ED_NEW );
HB_FUNC_EXTERN( ED_NWORD );
HB_FUNC_EXTERN( ED_PGDOWN );
HB_FUNC_EXTERN( ED_PGUP );
HB_FUNC_EXTERN( ED_PUTCHAR );
HB_FUNC_EXTERN( ED_PWORD );
HB_FUNC_EXTERN( ED_READTEXT );
HB_FUNC_EXTERN( ED_RETURN );
HB_FUNC_EXTERN( ED_RIGHT );
HB_FUNC_EXTERN( ED_ROW );
HB_FUNC_EXTERN( ED_SETTEXT );
HB_FUNC_EXTERN( ED_STABILIZE );
HB_FUNC_EXTERN( ED_STABLE );
HB_FUNC_EXTERN( ED_TOP );
HB_FUNC_EXTERN( ED_UP );
HB_FUNC_EXTERN( ED_WINCOL );
HB_FUNC_EXTERN( ED_WINROW );
HB_FUNC_EXTERN( FCOMMA );
HB_FUNC_EXTERN( FCOMMA_GETFUNCTABLE );
HB_FUNC_EXTERN( FILEFINDATTR );
HB_FUNC_EXTERN( FILEFINDDATE );
HB_FUNC_EXTERN( FILEFINDFIRST );
HB_FUNC_EXTERN( FILEFINDNAME );
HB_FUNC_EXTERN( FILEFINDNEXT );
HB_FUNC_EXTERN( FILEFINDSIZE );
HB_FUNC_EXTERN( FILEFINDTIME );
HB_FUNC_EXTERN( HBMISC_DAYSINMONTH );
HB_FUNC_EXTERN( HB_DYNACALL1 );
HB_FUNC_EXTERN( HB_FATEOF );
HB_FUNC_EXTERN( HB_FEOF );
HB_FUNC_EXTERN( HB_FGOBOTTOM );
HB_FUNC_EXTERN( HB_FGOTO );
HB_FUNC_EXTERN( HB_FGOTOP );
HB_FUNC_EXTERN( HB_FINFO );
HB_FUNC_EXTERN( HB_FLASTREC );
HB_FUNC_EXTERN( HB_FREADANDSKIP );
HB_FUNC_EXTERN( HB_FREADLN );
HB_FUNC_EXTERN( HB_FRECNO );
HB_FUNC_EXTERN( HB_FSELECT );
HB_FUNC_EXTERN( HB_FSKIP );
HB_FUNC_EXTERN( HB_FUSE );
HB_FUNC_EXTERN( HB_UDPDS_FIND );
HB_FUNC_EXTERN( HB_UDPDS_START );
HB_FUNC_EXTERN( HB_UDPDS_STOP );
HB_FUNC_EXTERN( HEXATODEC );
HB_FUNC_EXTERN( IRMEXECUTE );
HB_FUNC_EXTERN( IRMMAPCOUNT );
HB_FUNC_EXTERN( IRMMAPNEXT );
HB_FUNC_EXTERN( IRMMAPSKIP );
HB_FUNC_EXTERN( ISBIN );
HB_FUNC_EXTERN( ISDEC );
HB_FUNC_EXTERN( ISHEXA );
HB_FUNC_EXTERN( ISLEAPYEAR );
HB_FUNC_EXTERN( ISOCTAL );
HB_FUNC_EXTERN( MNYTOTXTRU );
HB_FUNC_EXTERN( NUMTOTXTEN );
HB_FUNC_EXTERN( NUMTOTXTHU );
HB_FUNC_EXTERN( NUMTOTXTRU );
HB_FUNC_EXTERN( OCTALTODEC );
HB_FUNC_EXTERN( PTRSTR );
HB_FUNC_EXTERN( RESTBOX );
HB_FUNC_EXTERN( ROT13 );
HB_FUNC_EXTERN( SAVEBOX );
HB_FUNC_EXTERN( SQL_SPRINTF );
HB_FUNC_EXTERN( STRDUMP );
HB_FUNC_EXTERN( STRFORMAT );
HB_FUNC_EXTERN( STRPTR );
HB_FUNC_EXTERN( STRTOKEN );
HB_FUNC_EXTERN( TFILEREAD );
HB_FUNC_EXTERN( TOCHAR );
HB_FUNC_EXTERN( TWIRLER );
HB_FUNC_EXTERN( UNLOADALLDLL );
HB_FUNC_EXTERN( WOY );
HB_FUNC( __HBEXTERN__HBMISC__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBMISC )
{ "ADAYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADAYS )}, NULL },
{ "AMONTHS", {HB_FS_PUBLIC}, {HB_FUNCNAME( AMONTHS )}, NULL },
{ "BINTODEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( BINTODEC )}, NULL },
{ "BUBBLEBABBLEENCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( BUBBLEBABBLEENCODE )}, NULL },
{ "CALLDLL32", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALLDLL32 )}, NULL },
{ "DATETOTXTRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATETOTXTRU )}, NULL },
{ "DEBUG", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEBUG )}, NULL },
{ "DECTOBIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( DECTOBIN )}, NULL },
{ "DECTOHEXA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DECTOHEXA )}, NULL },
{ "DECTOOCTAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DECTOOCTAL )}, NULL },
{ "DECTOROMAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( DECTOROMAN )}, NULL },
{ "EDITORADDTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORADDTEXT )}, NULL },
{ "EDITORCARGO", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORCARGO )}, NULL },
{ "EDITOREDIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITOREDIT )}, NULL },
{ "EDITORFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORFILE )}, NULL },
{ "EDITORGETLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORGETLINE )}, NULL },
{ "EDITORGETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORGETTEXT )}, NULL },
{ "EDITORINSTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORINSTEXT )}, NULL },
{ "EDITORKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORKILL )}, NULL },
{ "EDITORLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORLCOUNT )}, NULL },
{ "EDITORMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORMODE )}, NULL },
{ "EDITORNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORNEW )}, NULL },
{ "EDITORNEXTLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORNEXTLINE )}, NULL },
{ "EDITORREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORREAD )}, NULL },
{ "EDITORSETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORSETTEXT )}, NULL },
{ "EDITORSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORSIZE )}, NULL },
{ "EDITORTITLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( EDITORTITLE )}, NULL },
{ "ED_ADDTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_ADDTEXT )}, NULL },
{ "ED_BOTTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_BOTTOM )}, NULL },
{ "ED_BSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_BSPACE )}, NULL },
{ "ED_COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_COL )}, NULL },
{ "ED_CONFIG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_CONFIG )}, NULL },
{ "ED_DELCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_DELCHAR )}, NULL },
{ "ED_DELLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_DELLINE )}, NULL },
{ "ED_DELWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_DELWORD )}, NULL },
{ "ED_DOWN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_DOWN )}, NULL },
{ "ED_END", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_END )}, NULL },
{ "ED_GETLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_GETLINE )}, NULL },
{ "ED_GETNEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_GETNEXT )}, NULL },
{ "ED_GETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_GETTEXT )}, NULL },
{ "ED_GOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_GOTO )}, NULL },
{ "ED_HOME", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_HOME )}, NULL },
{ "ED_INSTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_INSTEXT )}, NULL },
{ "ED_LCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_LCOUNT )}, NULL },
{ "ED_LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_LEFT )}, NULL },
{ "ED_LENGTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_LENGTH )}, NULL },
{ "ED_MAXLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_MAXLINE )}, NULL },
{ "ED_NEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_NEW )}, NULL },
{ "ED_NWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_NWORD )}, NULL },
{ "ED_PGDOWN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_PGDOWN )}, NULL },
{ "ED_PGUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_PGUP )}, NULL },
{ "ED_PUTCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_PUTCHAR )}, NULL },
{ "ED_PWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_PWORD )}, NULL },
{ "ED_READTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_READTEXT )}, NULL },
{ "ED_RETURN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_RETURN )}, NULL },
{ "ED_RIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_RIGHT )}, NULL },
{ "ED_ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_ROW )}, NULL },
{ "ED_SETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_SETTEXT )}, NULL },
{ "ED_STABILIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_STABILIZE )}, NULL },
{ "ED_STABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_STABLE )}, NULL },
{ "ED_TOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_TOP )}, NULL },
{ "ED_UP", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_UP )}, NULL },
{ "ED_WINCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_WINCOL )}, NULL },
{ "ED_WINROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ED_WINROW )}, NULL },
{ "FCOMMA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCOMMA )}, NULL },
{ "FCOMMA_GETFUNCTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCOMMA_GETFUNCTABLE )}, NULL },
{ "FILEFINDATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILEFINDATTR )}, NULL },
{ "FILEFINDDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILEFINDDATE )}, NULL },
{ "FILEFINDFIRST", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILEFINDFIRST )}, NULL },
{ "FILEFINDNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILEFINDNAME )}, NULL },
{ "FILEFINDNEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILEFINDNEXT )}, NULL },
{ "FILEFINDSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILEFINDSIZE )}, NULL },
{ "FILEFINDTIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILEFINDTIME )}, NULL },
{ "HBMISC_DAYSINMONTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBMISC_DAYSINMONTH )}, NULL },
{ "HB_DYNACALL1", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_DYNACALL1 )}, NULL },
{ "HB_FATEOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FATEOF )}, NULL },
{ "HB_FEOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FEOF )}, NULL },
{ "HB_FGOBOTTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FGOBOTTOM )}, NULL },
{ "HB_FGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FGOTO )}, NULL },
{ "HB_FGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FGOTOP )}, NULL },
{ "HB_FINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FINFO )}, NULL },
{ "HB_FLASTREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FLASTREC )}, NULL },
{ "HB_FREADANDSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FREADANDSKIP )}, NULL },
{ "HB_FREADLN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FREADLN )}, NULL },
{ "HB_FRECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FRECNO )}, NULL },
{ "HB_FSELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FSELECT )}, NULL },
{ "HB_FSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FSKIP )}, NULL },
{ "HB_FUSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_FUSE )}, NULL },
{ "HB_UDPDS_FIND", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UDPDS_FIND )}, NULL },
{ "HB_UDPDS_START", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UDPDS_START )}, NULL },
{ "HB_UDPDS_STOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_UDPDS_STOP )}, NULL },
{ "HEXATODEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HEXATODEC )}, NULL },
{ "IRMEXECUTE", {HB_FS_PUBLIC}, {HB_FUNCNAME( IRMEXECUTE )}, NULL },
{ "IRMMAPCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IRMMAPCOUNT )}, NULL },
{ "IRMMAPNEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IRMMAPNEXT )}, NULL },
{ "IRMMAPSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( IRMMAPSKIP )}, NULL },
{ "ISBIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISBIN )}, NULL },
{ "ISDEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISDEC )}, NULL },
{ "ISHEXA", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISHEXA )}, NULL },
{ "ISLEAPYEAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISLEAPYEAR )}, NULL },
{ "ISOCTAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( ISOCTAL )}, NULL },
{ "MNYTOTXTRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( MNYTOTXTRU )}, NULL },
{ "NUMTOTXTEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( NUMTOTXTEN )}, NULL },
{ "NUMTOTXTHU", {HB_FS_PUBLIC}, {HB_FUNCNAME( NUMTOTXTHU )}, NULL },
{ "NUMTOTXTRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( NUMTOTXTRU )}, NULL },
{ "OCTALTODEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( OCTALTODEC )}, NULL },
{ "PTRSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PTRSTR )}, NULL },
{ "RESTBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTBOX )}, NULL },
{ "ROT13", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROT13 )}, NULL },
{ "SAVEBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVEBOX )}, NULL },
{ "SQL_SPRINTF", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQL_SPRINTF )}, NULL },
{ "STRDUMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRDUMP )}, NULL },
{ "STRFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRFORMAT )}, NULL },
{ "STRPTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRPTR )}, NULL },
{ "STRTOKEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTOKEN )}, NULL },
{ "TFILEREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( TFILEREAD )}, NULL },
{ "TOCHAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOCHAR )}, NULL },
{ "TWIRLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( TWIRLER )}, NULL },
{ "UNLOADALLDLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( UNLOADALLDLL )}, NULL },
{ "WOY", {HB_FS_PUBLIC}, {HB_FUNCNAME( WOY )}, NULL },
{ "__HBEXTERN__HBMISC__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBMISC__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBMISC, "hbmisc\\hbmisc.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBMISC
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBMISC )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBMISC__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}
