/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbsqlit3\hbsqlit3.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_SQLITE3_ERRSTR_SHORT );
HB_FUNC_EXTERN( HDBCSQLTCONNECTION );
HB_FUNC_EXTERN( HDBCSQLTDATABASEMETADATA );
HB_FUNC_EXTERN( HDBCSQLTPREPAREDSTATEMENT );
HB_FUNC_EXTERN( HDBCSQLTRESULTSET );
HB_FUNC_EXTERN( HDBCSQLTRESULTSETMETADATA );
HB_FUNC_EXTERN( HDBCSQLTSTATEMENT );
HB_FUNC_EXTERN( SQLITE3_BACKUP_FINISH );
HB_FUNC_EXTERN( SQLITE3_BACKUP_INIT );
HB_FUNC_EXTERN( SQLITE3_BACKUP_PAGECOUNT );
HB_FUNC_EXTERN( SQLITE3_BACKUP_REMAINING );
HB_FUNC_EXTERN( SQLITE3_BACKUP_STEP );
HB_FUNC_EXTERN( SQLITE3_BIND_BLOB );
HB_FUNC_EXTERN( SQLITE3_BIND_DOUBLE );
HB_FUNC_EXTERN( SQLITE3_BIND_INT );
HB_FUNC_EXTERN( SQLITE3_BIND_INT64 );
HB_FUNC_EXTERN( SQLITE3_BIND_NULL );
HB_FUNC_EXTERN( SQLITE3_BIND_PARAMETER_COUNT );
HB_FUNC_EXTERN( SQLITE3_BIND_PARAMETER_INDEX );
HB_FUNC_EXTERN( SQLITE3_BIND_PARAMETER_NAME );
HB_FUNC_EXTERN( SQLITE3_BIND_TEXT );
HB_FUNC_EXTERN( SQLITE3_BIND_ZEROBLOB );
HB_FUNC_EXTERN( SQLITE3_BLOB_BYTES );
HB_FUNC_EXTERN( SQLITE3_BLOB_CLOSE );
HB_FUNC_EXTERN( SQLITE3_BLOB_OPEN );
HB_FUNC_EXTERN( SQLITE3_BLOB_READ );
HB_FUNC_EXTERN( SQLITE3_BLOB_REOPEN );
HB_FUNC_EXTERN( SQLITE3_BLOB_WRITE );
HB_FUNC_EXTERN( SQLITE3_BUFF_TO_FILE );
HB_FUNC_EXTERN( SQLITE3_BUSY_HANDLER );
HB_FUNC_EXTERN( SQLITE3_BUSY_TIMEOUT );
HB_FUNC_EXTERN( SQLITE3_CHANGES );
HB_FUNC_EXTERN( SQLITE3_CLEAR_BINDINGS );
HB_FUNC_EXTERN( SQLITE3_COLUMN_BLOB );
HB_FUNC_EXTERN( SQLITE3_COLUMN_BYTES );
HB_FUNC_EXTERN( SQLITE3_COLUMN_COUNT );
HB_FUNC_EXTERN( SQLITE3_COLUMN_DATABASE_NAME );
HB_FUNC_EXTERN( SQLITE3_COLUMN_DECLTYPE );
HB_FUNC_EXTERN( SQLITE3_COLUMN_DOUBLE );
HB_FUNC_EXTERN( SQLITE3_COLUMN_INT );
HB_FUNC_EXTERN( SQLITE3_COLUMN_INT64 );
HB_FUNC_EXTERN( SQLITE3_COLUMN_NAME );
HB_FUNC_EXTERN( SQLITE3_COLUMN_ORIGIN_NAME );
HB_FUNC_EXTERN( SQLITE3_COLUMN_TABLE_NAME );
HB_FUNC_EXTERN( SQLITE3_COLUMN_TEXT );
HB_FUNC_EXTERN( SQLITE3_COLUMN_TYPE );
HB_FUNC_EXTERN( SQLITE3_COMMIT_HOOK );
HB_FUNC_EXTERN( SQLITE3_COMPILEOPTION_GET );
HB_FUNC_EXTERN( SQLITE3_COMPILEOPTION_USED );
HB_FUNC_EXTERN( SQLITE3_COMPLETE );
HB_FUNC_EXTERN( SQLITE3_CREATE_FUNCTION );
HB_FUNC_EXTERN( SQLITE3_DB_STATUS );
HB_FUNC_EXTERN( SQLITE3_ENABLE_LOAD_EXTENSION );
HB_FUNC_EXTERN( SQLITE3_ENABLE_SHARED_CACHE );
HB_FUNC_EXTERN( SQLITE3_ERRCODE );
HB_FUNC_EXTERN( SQLITE3_ERRMSG );
HB_FUNC_EXTERN( SQLITE3_ERRSTR );
HB_FUNC_EXTERN( SQLITE3_EXEC );
HB_FUNC_EXTERN( SQLITE3_EXTENDED_ERRCODE );
HB_FUNC_EXTERN( SQLITE3_EXTENDED_RESULT_CODES );
HB_FUNC_EXTERN( SQLITE3_FILE_TO_BUFF );
HB_FUNC_EXTERN( SQLITE3_FINALIZE );
HB_FUNC_EXTERN( SQLITE3_GET_AUTOCOMMIT );
HB_FUNC_EXTERN( SQLITE3_GET_TABLE );
HB_FUNC_EXTERN( SQLITE3_INITIALIZE );
HB_FUNC_EXTERN( SQLITE3_INTERRUPT );
HB_FUNC_EXTERN( SQLITE3_LAST_INSERT_ROWID );
HB_FUNC_EXTERN( SQLITE3_LIBVERSION );
HB_FUNC_EXTERN( SQLITE3_LIBVERSION_NUMBER );
HB_FUNC_EXTERN( SQLITE3_LIMIT );
HB_FUNC_EXTERN( SQLITE3_LOAD_EXTENSION );
HB_FUNC_EXTERN( SQLITE3_MEMORY_HIGHWATER );
HB_FUNC_EXTERN( SQLITE3_MEMORY_USED );
HB_FUNC_EXTERN( SQLITE3_OPEN );
HB_FUNC_EXTERN( SQLITE3_OPEN_V2 );
HB_FUNC_EXTERN( SQLITE3_PREPARE );
HB_FUNC_EXTERN( SQLITE3_PROFILE );
HB_FUNC_EXTERN( SQLITE3_PROGRESS_HANDLER );
HB_FUNC_EXTERN( SQLITE3_RESET );
HB_FUNC_EXTERN( SQLITE3_RESET_AUTO_EXTENSION );
HB_FUNC_EXTERN( SQLITE3_ROLLBACK_HOOK );
HB_FUNC_EXTERN( SQLITE3_SET_AUTHORIZER );
HB_FUNC_EXTERN( SQLITE3_SHUTDOWN );
HB_FUNC_EXTERN( SQLITE3_SLEEP );
HB_FUNC_EXTERN( SQLITE3_SOURCEID );
HB_FUNC_EXTERN( SQLITE3_SQL );
HB_FUNC_EXTERN( SQLITE3_STATUS );
HB_FUNC_EXTERN( SQLITE3_STEP );
HB_FUNC_EXTERN( SQLITE3_STMT_READONLY );
HB_FUNC_EXTERN( SQLITE3_STMT_STATUS );
HB_FUNC_EXTERN( SQLITE3_TABLE_COLUMN_METADATA );
HB_FUNC_EXTERN( SQLITE3_TEMP_DIRECTORY );
HB_FUNC_EXTERN( SQLITE3_THREADSAFE );
HB_FUNC_EXTERN( SQLITE3_TOTAL_CHANGES );
HB_FUNC_EXTERN( SQLITE3_TRACE );
HB_FUNC( __HBEXTERN__HBSQLIT3__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBSQLIT3 )
{ "HB_SQLITE3_ERRSTR_SHORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_SQLITE3_ERRSTR_SHORT )}, NULL },
{ "HDBCSQLTCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDBCSQLTCONNECTION )}, NULL },
{ "HDBCSQLTDATABASEMETADATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDBCSQLTDATABASEMETADATA )}, NULL },
{ "HDBCSQLTPREPAREDSTATEMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDBCSQLTPREPAREDSTATEMENT )}, NULL },
{ "HDBCSQLTRESULTSET", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDBCSQLTRESULTSET )}, NULL },
{ "HDBCSQLTRESULTSETMETADATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDBCSQLTRESULTSETMETADATA )}, NULL },
{ "HDBCSQLTSTATEMENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HDBCSQLTSTATEMENT )}, NULL },
{ "SQLITE3_BACKUP_FINISH", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BACKUP_FINISH )}, NULL },
{ "SQLITE3_BACKUP_INIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BACKUP_INIT )}, NULL },
{ "SQLITE3_BACKUP_PAGECOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BACKUP_PAGECOUNT )}, NULL },
{ "SQLITE3_BACKUP_REMAINING", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BACKUP_REMAINING )}, NULL },
{ "SQLITE3_BACKUP_STEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BACKUP_STEP )}, NULL },
{ "SQLITE3_BIND_BLOB", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_BLOB )}, NULL },
{ "SQLITE3_BIND_DOUBLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_DOUBLE )}, NULL },
{ "SQLITE3_BIND_INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_INT )}, NULL },
{ "SQLITE3_BIND_INT64", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_INT64 )}, NULL },
{ "SQLITE3_BIND_NULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_NULL )}, NULL },
{ "SQLITE3_BIND_PARAMETER_COUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_PARAMETER_COUNT )}, NULL },
{ "SQLITE3_BIND_PARAMETER_INDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_PARAMETER_INDEX )}, NULL },
{ "SQLITE3_BIND_PARAMETER_NAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_PARAMETER_NAME )}, NULL },
{ "SQLITE3_BIND_TEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_TEXT )}, NULL },
{ "SQLITE3_BIND_ZEROBLOB", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BIND_ZEROBLOB )}, NULL },
{ "SQLITE3_BLOB_BYTES", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BLOB_BYTES )}, NULL },
{ "SQLITE3_BLOB_CLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BLOB_CLOSE )}, NULL },
{ "SQLITE3_BLOB_OPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BLOB_OPEN )}, NULL },
{ "SQLITE3_BLOB_READ", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BLOB_READ )}, NULL },
{ "SQLITE3_BLOB_REOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BLOB_REOPEN )}, NULL },
{ "SQLITE3_BLOB_WRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BLOB_WRITE )}, NULL },
{ "SQLITE3_BUFF_TO_FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BUFF_TO_FILE )}, NULL },
{ "SQLITE3_BUSY_HANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BUSY_HANDLER )}, NULL },
{ "SQLITE3_BUSY_TIMEOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_BUSY_TIMEOUT )}, NULL },
{ "SQLITE3_CHANGES", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_CHANGES )}, NULL },
{ "SQLITE3_CLEAR_BINDINGS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_CLEAR_BINDINGS )}, NULL },
{ "SQLITE3_COLUMN_BLOB", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_BLOB )}, NULL },
{ "SQLITE3_COLUMN_BYTES", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_BYTES )}, NULL },
{ "SQLITE3_COLUMN_COUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_COUNT )}, NULL },
{ "SQLITE3_COLUMN_DATABASE_NAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_DATABASE_NAME )}, NULL },
{ "SQLITE3_COLUMN_DECLTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_DECLTYPE )}, NULL },
{ "SQLITE3_COLUMN_DOUBLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_DOUBLE )}, NULL },
{ "SQLITE3_COLUMN_INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_INT )}, NULL },
{ "SQLITE3_COLUMN_INT64", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_INT64 )}, NULL },
{ "SQLITE3_COLUMN_NAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_NAME )}, NULL },
{ "SQLITE3_COLUMN_ORIGIN_NAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_ORIGIN_NAME )}, NULL },
{ "SQLITE3_COLUMN_TABLE_NAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_TABLE_NAME )}, NULL },
{ "SQLITE3_COLUMN_TEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_TEXT )}, NULL },
{ "SQLITE3_COLUMN_TYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COLUMN_TYPE )}, NULL },
{ "SQLITE3_COMMIT_HOOK", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COMMIT_HOOK )}, NULL },
{ "SQLITE3_COMPILEOPTION_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COMPILEOPTION_GET )}, NULL },
{ "SQLITE3_COMPILEOPTION_USED", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COMPILEOPTION_USED )}, NULL },
{ "SQLITE3_COMPLETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_COMPLETE )}, NULL },
{ "SQLITE3_CREATE_FUNCTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_CREATE_FUNCTION )}, NULL },
{ "SQLITE3_DB_STATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_DB_STATUS )}, NULL },
{ "SQLITE3_ENABLE_LOAD_EXTENSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_ENABLE_LOAD_EXTENSION )}, NULL },
{ "SQLITE3_ENABLE_SHARED_CACHE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_ENABLE_SHARED_CACHE )}, NULL },
{ "SQLITE3_ERRCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_ERRCODE )}, NULL },
{ "SQLITE3_ERRMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_ERRMSG )}, NULL },
{ "SQLITE3_ERRSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_ERRSTR )}, NULL },
{ "SQLITE3_EXEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_EXEC )}, NULL },
{ "SQLITE3_EXTENDED_ERRCODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_EXTENDED_ERRCODE )}, NULL },
{ "SQLITE3_EXTENDED_RESULT_CODES", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_EXTENDED_RESULT_CODES )}, NULL },
{ "SQLITE3_FILE_TO_BUFF", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_FILE_TO_BUFF )}, NULL },
{ "SQLITE3_FINALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_FINALIZE )}, NULL },
{ "SQLITE3_GET_AUTOCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_GET_AUTOCOMMIT )}, NULL },
{ "SQLITE3_GET_TABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_GET_TABLE )}, NULL },
{ "SQLITE3_INITIALIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_INITIALIZE )}, NULL },
{ "SQLITE3_INTERRUPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_INTERRUPT )}, NULL },
{ "SQLITE3_LAST_INSERT_ROWID", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_LAST_INSERT_ROWID )}, NULL },
{ "SQLITE3_LIBVERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_LIBVERSION )}, NULL },
{ "SQLITE3_LIBVERSION_NUMBER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_LIBVERSION_NUMBER )}, NULL },
{ "SQLITE3_LIMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_LIMIT )}, NULL },
{ "SQLITE3_LOAD_EXTENSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_LOAD_EXTENSION )}, NULL },
{ "SQLITE3_MEMORY_HIGHWATER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_MEMORY_HIGHWATER )}, NULL },
{ "SQLITE3_MEMORY_USED", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_MEMORY_USED )}, NULL },
{ "SQLITE3_OPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_OPEN )}, NULL },
{ "SQLITE3_OPEN_V2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_OPEN_V2 )}, NULL },
{ "SQLITE3_PREPARE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_PREPARE )}, NULL },
{ "SQLITE3_PROFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_PROFILE )}, NULL },
{ "SQLITE3_PROGRESS_HANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_PROGRESS_HANDLER )}, NULL },
{ "SQLITE3_RESET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_RESET )}, NULL },
{ "SQLITE3_RESET_AUTO_EXTENSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_RESET_AUTO_EXTENSION )}, NULL },
{ "SQLITE3_ROLLBACK_HOOK", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_ROLLBACK_HOOK )}, NULL },
{ "SQLITE3_SET_AUTHORIZER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_SET_AUTHORIZER )}, NULL },
{ "SQLITE3_SHUTDOWN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_SHUTDOWN )}, NULL },
{ "SQLITE3_SLEEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_SLEEP )}, NULL },
{ "SQLITE3_SOURCEID", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_SOURCEID )}, NULL },
{ "SQLITE3_SQL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_SQL )}, NULL },
{ "SQLITE3_STATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_STATUS )}, NULL },
{ "SQLITE3_STEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_STEP )}, NULL },
{ "SQLITE3_STMT_READONLY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_STMT_READONLY )}, NULL },
{ "SQLITE3_STMT_STATUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_STMT_STATUS )}, NULL },
{ "SQLITE3_TABLE_COLUMN_METADATA", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_TABLE_COLUMN_METADATA )}, NULL },
{ "SQLITE3_TEMP_DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_TEMP_DIRECTORY )}, NULL },
{ "SQLITE3_THREADSAFE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_THREADSAFE )}, NULL },
{ "SQLITE3_TOTAL_CHANGES", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_TOTAL_CHANGES )}, NULL },
{ "SQLITE3_TRACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLITE3_TRACE )}, NULL },
{ "__HBEXTERN__HBSQLIT3__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBSQLIT3__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBSQLIT3, "hbsqlit3\\hbsqlit3.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBSQLIT3
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBSQLIT3 )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBSQLIT3__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}
