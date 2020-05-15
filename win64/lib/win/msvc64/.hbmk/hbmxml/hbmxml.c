/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (64-bit)
 * Generated C source from "hbmxml\hbmxml.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_MXMLGETATTRS );
HB_FUNC_EXTERN( HB_MXMLGETATTRSARRAY );
HB_FUNC_EXTERN( HB_MXMLGETATTRSCOUNT );
HB_FUNC_EXTERN( HB_MXMLVERSION );
HB_FUNC_EXTERN( MXMLADD );
HB_FUNC_EXTERN( MXMLDELETE );
HB_FUNC_EXTERN( MXMLELEMENTDELETEATTR );
HB_FUNC_EXTERN( MXMLELEMENTGETATTR );
HB_FUNC_EXTERN( MXMLELEMENTSETATTR );
HB_FUNC_EXTERN( MXMLELEMENTSETATTRF );
HB_FUNC_EXTERN( MXMLENTITYGETNAME );
HB_FUNC_EXTERN( MXMLENTITYGETVALUE );
HB_FUNC_EXTERN( MXMLFINDELEMENT );
HB_FUNC_EXTERN( MXMLFINDPATH );
HB_FUNC_EXTERN( MXMLGETCDATA );
HB_FUNC_EXTERN( MXMLGETCUSTOM );
HB_FUNC_EXTERN( MXMLGETELEMENT );
HB_FUNC_EXTERN( MXMLGETFIRSTCHILD );
HB_FUNC_EXTERN( MXMLGETINTEGER );
HB_FUNC_EXTERN( MXMLGETLASTCHILD );
HB_FUNC_EXTERN( MXMLGETNEXTSIBLING );
HB_FUNC_EXTERN( MXMLGETOPAQUE );
HB_FUNC_EXTERN( MXMLGETPARENT );
HB_FUNC_EXTERN( MXMLGETPREVSIBLING );
HB_FUNC_EXTERN( MXMLGETREAL );
HB_FUNC_EXTERN( MXMLGETREFCOUNT );
HB_FUNC_EXTERN( MXMLGETTEXT );
HB_FUNC_EXTERN( MXMLGETTYPE );
HB_FUNC_EXTERN( MXMLGETUSERDATA );
HB_FUNC_EXTERN( MXMLINDEXDELETE );
HB_FUNC_EXTERN( MXMLINDEXENUM );
HB_FUNC_EXTERN( MXMLINDEXFIND );
HB_FUNC_EXTERN( MXMLINDEXGETCOUNT );
HB_FUNC_EXTERN( MXMLINDEXNEW );
HB_FUNC_EXTERN( MXMLINDEXRESET );
HB_FUNC_EXTERN( MXMLLOADFILE );
HB_FUNC_EXTERN( MXMLLOADSTRING );
HB_FUNC_EXTERN( MXMLNEWCDATA );
HB_FUNC_EXTERN( MXMLNEWCUSTOM );
HB_FUNC_EXTERN( MXMLNEWELEMENT );
HB_FUNC_EXTERN( MXMLNEWINTEGER );
HB_FUNC_EXTERN( MXMLNEWOPAQUE );
HB_FUNC_EXTERN( MXMLNEWREAL );
HB_FUNC_EXTERN( MXMLNEWTEXT );
HB_FUNC_EXTERN( MXMLNEWTEXTF );
HB_FUNC_EXTERN( MXMLNEWXML );
HB_FUNC_EXTERN( MXMLREMOVE );
HB_FUNC_EXTERN( MXMLSAVEALLOCSTRING );
HB_FUNC_EXTERN( MXMLSAVEFILE );
HB_FUNC_EXTERN( MXMLSAVESTRING );
HB_FUNC_EXTERN( MXMLSAXLOADFILE );
HB_FUNC_EXTERN( MXMLSAXLOADSTRING );
HB_FUNC_EXTERN( MXMLSETCDATA );
HB_FUNC_EXTERN( MXMLSETCUSTOM );
HB_FUNC_EXTERN( MXMLSETCUSTOMHANDLERS );
HB_FUNC_EXTERN( MXMLSETELEMENT );
HB_FUNC_EXTERN( MXMLSETERRORCALLBACK );
HB_FUNC_EXTERN( MXMLSETINTEGER );
HB_FUNC_EXTERN( MXMLSETOPAQUE );
HB_FUNC_EXTERN( MXMLSETREAL );
HB_FUNC_EXTERN( MXMLSETTEXT );
HB_FUNC_EXTERN( MXMLSETTEXTF );
HB_FUNC_EXTERN( MXMLSETUSERDATA );
HB_FUNC_EXTERN( MXMLSETWRAPMARGIN );
HB_FUNC_EXTERN( MXMLWALKNEXT );
HB_FUNC_EXTERN( MXMLWALKPREV );
HB_FUNC( __HBEXTERN__HBMXML__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBMXML )
{ "HB_MXMLGETATTRS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MXMLGETATTRS )}, NULL },
{ "HB_MXMLGETATTRSARRAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MXMLGETATTRSARRAY )}, NULL },
{ "HB_MXMLGETATTRSCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MXMLGETATTRSCOUNT )}, NULL },
{ "HB_MXMLVERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MXMLVERSION )}, NULL },
{ "MXMLADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLADD )}, NULL },
{ "MXMLDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLDELETE )}, NULL },
{ "MXMLELEMENTDELETEATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLELEMENTDELETEATTR )}, NULL },
{ "MXMLELEMENTGETATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLELEMENTGETATTR )}, NULL },
{ "MXMLELEMENTSETATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLELEMENTSETATTR )}, NULL },
{ "MXMLELEMENTSETATTRF", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLELEMENTSETATTRF )}, NULL },
{ "MXMLENTITYGETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLENTITYGETNAME )}, NULL },
{ "MXMLENTITYGETVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLENTITYGETVALUE )}, NULL },
{ "MXMLFINDELEMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLFINDELEMENT )}, NULL },
{ "MXMLFINDPATH", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLFINDPATH )}, NULL },
{ "MXMLGETCDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETCDATA )}, NULL },
{ "MXMLGETCUSTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETCUSTOM )}, NULL },
{ "MXMLGETELEMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETELEMENT )}, NULL },
{ "MXMLGETFIRSTCHILD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETFIRSTCHILD )}, NULL },
{ "MXMLGETINTEGER", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETINTEGER )}, NULL },
{ "MXMLGETLASTCHILD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETLASTCHILD )}, NULL },
{ "MXMLGETNEXTSIBLING", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETNEXTSIBLING )}, NULL },
{ "MXMLGETOPAQUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETOPAQUE )}, NULL },
{ "MXMLGETPARENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETPARENT )}, NULL },
{ "MXMLGETPREVSIBLING", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETPREVSIBLING )}, NULL },
{ "MXMLGETREAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETREAL )}, NULL },
{ "MXMLGETREFCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETREFCOUNT )}, NULL },
{ "MXMLGETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETTEXT )}, NULL },
{ "MXMLGETTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETTYPE )}, NULL },
{ "MXMLGETUSERDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLGETUSERDATA )}, NULL },
{ "MXMLINDEXDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLINDEXDELETE )}, NULL },
{ "MXMLINDEXENUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLINDEXENUM )}, NULL },
{ "MXMLINDEXFIND", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLINDEXFIND )}, NULL },
{ "MXMLINDEXGETCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLINDEXGETCOUNT )}, NULL },
{ "MXMLINDEXNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLINDEXNEW )}, NULL },
{ "MXMLINDEXRESET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLINDEXRESET )}, NULL },
{ "MXMLLOADFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLLOADFILE )}, NULL },
{ "MXMLLOADSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLLOADSTRING )}, NULL },
{ "MXMLNEWCDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWCDATA )}, NULL },
{ "MXMLNEWCUSTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWCUSTOM )}, NULL },
{ "MXMLNEWELEMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWELEMENT )}, NULL },
{ "MXMLNEWINTEGER", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWINTEGER )}, NULL },
{ "MXMLNEWOPAQUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWOPAQUE )}, NULL },
{ "MXMLNEWREAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWREAL )}, NULL },
{ "MXMLNEWTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWTEXT )}, NULL },
{ "MXMLNEWTEXTF", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWTEXTF )}, NULL },
{ "MXMLNEWXML", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLNEWXML )}, NULL },
{ "MXMLREMOVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLREMOVE )}, NULL },
{ "MXMLSAVEALLOCSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSAVEALLOCSTRING )}, NULL },
{ "MXMLSAVEFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSAVEFILE )}, NULL },
{ "MXMLSAVESTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSAVESTRING )}, NULL },
{ "MXMLSAXLOADFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSAXLOADFILE )}, NULL },
{ "MXMLSAXLOADSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSAXLOADSTRING )}, NULL },
{ "MXMLSETCDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETCDATA )}, NULL },
{ "MXMLSETCUSTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETCUSTOM )}, NULL },
{ "MXMLSETCUSTOMHANDLERS", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETCUSTOMHANDLERS )}, NULL },
{ "MXMLSETELEMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETELEMENT )}, NULL },
{ "MXMLSETERRORCALLBACK", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETERRORCALLBACK )}, NULL },
{ "MXMLSETINTEGER", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETINTEGER )}, NULL },
{ "MXMLSETOPAQUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETOPAQUE )}, NULL },
{ "MXMLSETREAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETREAL )}, NULL },
{ "MXMLSETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETTEXT )}, NULL },
{ "MXMLSETTEXTF", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETTEXTF )}, NULL },
{ "MXMLSETUSERDATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETUSERDATA )}, NULL },
{ "MXMLSETWRAPMARGIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLSETWRAPMARGIN )}, NULL },
{ "MXMLWALKNEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLWALKNEXT )}, NULL },
{ "MXMLWALKPREV", {HB_FS_PUBLIC}, {HB_FUNCNAME( MXMLWALKPREV )}, NULL },
{ "__HBEXTERN__HBMXML__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBMXML__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBMXML, "hbmxml\\hbmxml.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBMXML
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBMXML )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBMXML__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

