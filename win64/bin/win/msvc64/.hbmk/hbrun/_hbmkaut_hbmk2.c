/* This temp source file was generated by hbmk2 tool. */
/* You can safely delete it. */

#include "hbapi.h"

HB_FUNC_EXTERN( __HBMK_PUBLIC_ENTRY );
HB_FUNC_EXTERN( __HBEXTERN__HBCT__ );
HB_FUNC_EXTERN( __HBEXTERN__HBEXPAT__ );
HB_FUNC_EXTERN( __HBEXTERN__HBMEMIO__ );
HB_FUNC_EXTERN( __HBEXTERN__HBMZIP__ );
HB_FUNC_EXTERN( __HBEXTERN__HBNETIO__ );
HB_FUNC_EXTERN( __HBEXTERN__HBWIN__ );

void _hb_lnk_ForceLink_hbmk( void )
{
   HB_FUNC_EXEC( __HBMK_PUBLIC_ENTRY );
   HB_FUNC_EXEC( __HBEXTERN__HBCT__ );
   HB_FUNC_EXEC( __HBEXTERN__HBEXPAT__ );
   HB_FUNC_EXEC( __HBEXTERN__HBMEMIO__ );
   HB_FUNC_EXEC( __HBEXTERN__HBMZIP__ );
   HB_FUNC_EXEC( __HBEXTERN__HBNETIO__ );
   HB_FUNC_EXEC( __HBEXTERN__HBWIN__ );
}

#include "hbinit.h"

HB_CALL_ON_STARTUP_BEGIN( _hb_hbmk_setdef_ )
   hb_vmSetLinkedMain( "@__HBMK_PUBLIC_ENTRY" );
HB_CALL_ON_STARTUP_END( _hb_hbmk_setdef_ )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup _hb_hbmk_setdef_
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( _hb_hbmk_setdef_ )
   #include "hbiniseg.h"
#endif
