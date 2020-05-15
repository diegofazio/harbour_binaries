/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.25.28614 (32-bit)
 * Generated C source from "hbhpdf\hbhpdf.hbx"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC_EXTERN( HB_HPDF_GETERRORSTRING );
HB_FUNC_EXTERN( HB_HPDF_ISVERSION );
HB_FUNC_EXTERN( HB_HPDF_VERSION );
HB_FUNC_EXTERN( HPDF_ADDPAGE );
HB_FUNC_EXTERN( HPDF_ADDPAGELABEL );
HB_FUNC_EXTERN( HPDF_ANNOTATION_SETBORDERSTYLE );
HB_FUNC_EXTERN( HPDF_ANNOT_SET3DVIEW );
HB_FUNC_EXTERN( HPDF_ANNOT_SETCMYKCOLOR );
HB_FUNC_EXTERN( HPDF_ANNOT_SETGRAYCOLOR );
HB_FUNC_EXTERN( HPDF_ANNOT_SETNOCOLOR );
HB_FUNC_EXTERN( HPDF_ANNOT_SETRGBCOLOR );
HB_FUNC_EXTERN( HPDF_ATTACHFILE );
HB_FUNC_EXTERN( HPDF_CHECKERROR );
HB_FUNC_EXTERN( HPDF_CREATEEXTGSTATE );
HB_FUNC_EXTERN( HPDF_CREATEOUTLINE );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETFIT );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETFITB );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETFITBH );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETFITBV );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETFITH );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETFITR );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETFITV );
HB_FUNC_EXTERN( HPDF_DESTINATION_SETXYZ );
HB_FUNC_EXTERN( HPDF_ENCODER_GETBYTETYPE );
HB_FUNC_EXTERN( HPDF_ENCODER_GETTYPE );
HB_FUNC_EXTERN( HPDF_ENCODER_GETUNICODE );
HB_FUNC_EXTERN( HPDF_ENCODER_GETWRITINGMODE );
HB_FUNC_EXTERN( HPDF_EXTGSTATE_SETALPHAFILL );
HB_FUNC_EXTERN( HPDF_EXTGSTATE_SETALPHASTROKE );
HB_FUNC_EXTERN( HPDF_EXTGSTATE_SETBLENDMODE );
HB_FUNC_EXTERN( HPDF_FONT_GETASCENT );
HB_FUNC_EXTERN( HPDF_FONT_GETBBOX );
HB_FUNC_EXTERN( HPDF_FONT_GETCAPHEIGHT );
HB_FUNC_EXTERN( HPDF_FONT_GETDESCENT );
HB_FUNC_EXTERN( HPDF_FONT_GETENCODINGNAME );
HB_FUNC_EXTERN( HPDF_FONT_GETFONTNAME );
HB_FUNC_EXTERN( HPDF_FONT_GETUNICODEWIDTH );
HB_FUNC_EXTERN( HPDF_FONT_GETXHEIGHT );
HB_FUNC_EXTERN( HPDF_FONT_MEASURETEXT );
HB_FUNC_EXTERN( HPDF_FONT_TEXTWIDTH );
HB_FUNC_EXTERN( HPDF_FREE );
HB_FUNC_EXTERN( HPDF_FREEDOC );
HB_FUNC_EXTERN( HPDF_FREEDOCALL );
HB_FUNC_EXTERN( HPDF_FREETEXTANNOT_SET2POINTCALLOUTLINE );
HB_FUNC_EXTERN( HPDF_FREETEXTANNOT_SET3POINTCALLOUTLINE );
HB_FUNC_EXTERN( HPDF_FREETEXTANNOT_SETDEFAULTSTYLE );
HB_FUNC_EXTERN( HPDF_FREETEXTANNOT_SETLINEENDINGSTYLE );
HB_FUNC_EXTERN( HPDF_GETCONTENTS );
HB_FUNC_EXTERN( HPDF_GETCURRENTENCODER );
HB_FUNC_EXTERN( HPDF_GETCURRENTPAGE );
HB_FUNC_EXTERN( HPDF_GETENCODER );
HB_FUNC_EXTERN( HPDF_GETERROR );
HB_FUNC_EXTERN( HPDF_GETERRORDETAIL );
HB_FUNC_EXTERN( HPDF_GETFONT );
HB_FUNC_EXTERN( HPDF_GETINFOATTR );
HB_FUNC_EXTERN( HPDF_GETPAGELAYOUT );
HB_FUNC_EXTERN( HPDF_GETPAGEMODE );
HB_FUNC_EXTERN( HPDF_GETSTREAMSIZE );
HB_FUNC_EXTERN( HPDF_HASDOC );
HB_FUNC_EXTERN( HPDF_ICC_LOADICCFROMMEM );
HB_FUNC_EXTERN( HPDF_IMAGE_ADDSMASK );
HB_FUNC_EXTERN( HPDF_IMAGE_GETBITSPERCOMPONENT );
HB_FUNC_EXTERN( HPDF_IMAGE_GETCOLORSPACE );
HB_FUNC_EXTERN( HPDF_IMAGE_GETHEIGHT );
HB_FUNC_EXTERN( HPDF_IMAGE_GETSIZE );
HB_FUNC_EXTERN( HPDF_IMAGE_GETWIDTH );
HB_FUNC_EXTERN( HPDF_IMAGE_SETCOLORMASK );
HB_FUNC_EXTERN( HPDF_IMAGE_SETMASKIMAGE );
HB_FUNC_EXTERN( HPDF_INSERTPAGE );
HB_FUNC_EXTERN( HPDF_LINEANNOT_SETCAPTION );
HB_FUNC_EXTERN( HPDF_LINEANNOT_SETLEADER );
HB_FUNC_EXTERN( HPDF_LINEANNOT_SETPOSITION );
HB_FUNC_EXTERN( HPDF_LINKANNOT_SETBORDERSTYLE );
HB_FUNC_EXTERN( HPDF_LINKANNOT_SETHIGHLIGHTMODE );
HB_FUNC_EXTERN( HPDF_LOADICCPROFILEFROMFILE );
HB_FUNC_EXTERN( HPDF_LOADJPEGIMAGEFROMFILE );
HB_FUNC_EXTERN( HPDF_LOADJPEGIMAGEFROMMEM );
HB_FUNC_EXTERN( HPDF_LOADPNGIMAGEFROMFILE );
HB_FUNC_EXTERN( HPDF_LOADPNGIMAGEFROMFILE2 );
HB_FUNC_EXTERN( HPDF_LOADPNGIMAGEFROMMEM );
HB_FUNC_EXTERN( HPDF_LOADRAWIMAGEFROMFILE );
HB_FUNC_EXTERN( HPDF_LOADRAWIMAGEFROMMEM );
HB_FUNC_EXTERN( HPDF_LOADTTFONTFROMFILE );
HB_FUNC_EXTERN( HPDF_LOADTTFONTFROMFILE2 );
HB_FUNC_EXTERN( HPDF_LOADTYPE1FONTFROMFILE );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETCLOUDEFFECT );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETCREATIONDATE );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETINTENT );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETINTERIORCMYKCOLOR );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETINTERIORGRAYCOLOR );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETINTERIORRGBCOLOR );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETINTERIORTRANSPARENT );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETPOPUP );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETRECTDIFF );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETSUBJECT );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETTITLE );
HB_FUNC_EXTERN( HPDF_MARKUPANNOT_SETTRANSPARENCY );
HB_FUNC_EXTERN( HPDF_NEW );
HB_FUNC_EXTERN( HPDF_NEWDOC );
HB_FUNC_EXTERN( HPDF_OUTLINE_SETDESTINATION );
HB_FUNC_EXTERN( HPDF_OUTLINE_SETOPENED );
HB_FUNC_EXTERN( HPDF_PAGE_ARC );
HB_FUNC_EXTERN( HPDF_PAGE_BEGINTEXT );
HB_FUNC_EXTERN( HPDF_PAGE_CIRCLE );
HB_FUNC_EXTERN( HPDF_PAGE_CLIP );
HB_FUNC_EXTERN( HPDF_PAGE_CLOSEPATH );
HB_FUNC_EXTERN( HPDF_PAGE_CLOSEPATHEOFILLSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_CLOSEPATHFILLSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_CLOSEPATHSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_CONCAT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATE3DVIEW );
HB_FUNC_EXTERN( HPDF_PAGE_CREATECIRCLEANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATEDESTINATION );
HB_FUNC_EXTERN( HPDF_PAGE_CREATEFREETEXTANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATEHIGHLIGHTANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATELINEANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATELINKANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATEPOPUPANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATESQUAREANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATESQUIGGLYANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATESTAMPANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATESTRIKEOUTANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATETEXTANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATETEXTMARKUPANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATEUNDERLINEANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CREATEURILINKANNOT );
HB_FUNC_EXTERN( HPDF_PAGE_CURVETO );
HB_FUNC_EXTERN( HPDF_PAGE_CURVETO2 );
HB_FUNC_EXTERN( HPDF_PAGE_CURVETO3 );
HB_FUNC_EXTERN( HPDF_PAGE_DRAWIMAGE );
HB_FUNC_EXTERN( HPDF_PAGE_ELLIPSE );
HB_FUNC_EXTERN( HPDF_PAGE_ENDPATH );
HB_FUNC_EXTERN( HPDF_PAGE_ENDTEXT );
HB_FUNC_EXTERN( HPDF_PAGE_EOCLIP );
HB_FUNC_EXTERN( HPDF_PAGE_EOFILL );
HB_FUNC_EXTERN( HPDF_PAGE_EOFILLSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_EXECUTEXOBJECT );
HB_FUNC_EXTERN( HPDF_PAGE_FILL );
HB_FUNC_EXTERN( HPDF_PAGE_FILLSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_GETCHARSPACE );
HB_FUNC_EXTERN( HPDF_PAGE_GETCMYKFILL );
HB_FUNC_EXTERN( HPDF_PAGE_GETCMYKSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_GETCURRENTFONT );
HB_FUNC_EXTERN( HPDF_PAGE_GETCURRENTFONTSIZE );
HB_FUNC_EXTERN( HPDF_PAGE_GETCURRENTPOS );
HB_FUNC_EXTERN( HPDF_PAGE_GETCURRENTTEXTPOS );
HB_FUNC_EXTERN( HPDF_PAGE_GETDASH );
HB_FUNC_EXTERN( HPDF_PAGE_GETFILLINGCOLORSPACE );
HB_FUNC_EXTERN( HPDF_PAGE_GETFLAT );
HB_FUNC_EXTERN( HPDF_PAGE_GETGMODE );
HB_FUNC_EXTERN( HPDF_PAGE_GETGRAYFILL );
HB_FUNC_EXTERN( HPDF_PAGE_GETGRAYSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_GETGSTATEDEPTH );
HB_FUNC_EXTERN( HPDF_PAGE_GETHEIGHT );
HB_FUNC_EXTERN( HPDF_PAGE_GETHORIZONTALSCALLING );
HB_FUNC_EXTERN( HPDF_PAGE_GETLINECAP );
HB_FUNC_EXTERN( HPDF_PAGE_GETLINEJOIN );
HB_FUNC_EXTERN( HPDF_PAGE_GETLINEWIDTH );
HB_FUNC_EXTERN( HPDF_PAGE_GETMITERLIMIT );
HB_FUNC_EXTERN( HPDF_PAGE_GETRGBFILL );
HB_FUNC_EXTERN( HPDF_PAGE_GETRGBSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_GETSTROKINGCOLORSPACE );
HB_FUNC_EXTERN( HPDF_PAGE_GETTEXTLEADING );
HB_FUNC_EXTERN( HPDF_PAGE_GETTEXTMATRIX );
HB_FUNC_EXTERN( HPDF_PAGE_GETTEXTRENDERINGMODE );
HB_FUNC_EXTERN( HPDF_PAGE_GETTEXTRISE );
HB_FUNC_EXTERN( HPDF_PAGE_GETTRANSMATRIX );
HB_FUNC_EXTERN( HPDF_PAGE_GETWIDTH );
HB_FUNC_EXTERN( HPDF_PAGE_GETWORDSPACE );
HB_FUNC_EXTERN( HPDF_PAGE_GRESTORE );
HB_FUNC_EXTERN( HPDF_PAGE_GSAVE );
HB_FUNC_EXTERN( HPDF_PAGE_LINETO );
HB_FUNC_EXTERN( HPDF_PAGE_MEASURETEXT );
HB_FUNC_EXTERN( HPDF_PAGE_MOVETEXTPOS );
HB_FUNC_EXTERN( HPDF_PAGE_MOVETEXTPOS2 );
HB_FUNC_EXTERN( HPDF_PAGE_MOVETO );
HB_FUNC_EXTERN( HPDF_PAGE_MOVETONEXTLINE );
HB_FUNC_EXTERN( HPDF_PAGE_RECTANGLE );
HB_FUNC_EXTERN( HPDF_PAGE_SETCHARSPACE );
HB_FUNC_EXTERN( HPDF_PAGE_SETCMYKFILL );
HB_FUNC_EXTERN( HPDF_PAGE_SETCMYKSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_SETDASH );
HB_FUNC_EXTERN( HPDF_PAGE_SETEXTGSTATE );
HB_FUNC_EXTERN( HPDF_PAGE_SETFONTANDSIZE );
HB_FUNC_EXTERN( HPDF_PAGE_SETGRAYFILL );
HB_FUNC_EXTERN( HPDF_PAGE_SETGRAYSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_SETHEIGHT );
HB_FUNC_EXTERN( HPDF_PAGE_SETHORIZONTALSCALLING );
HB_FUNC_EXTERN( HPDF_PAGE_SETLINECAP );
HB_FUNC_EXTERN( HPDF_PAGE_SETLINEJOIN );
HB_FUNC_EXTERN( HPDF_PAGE_SETLINEWIDTH );
HB_FUNC_EXTERN( HPDF_PAGE_SETMITERLIMIT );
HB_FUNC_EXTERN( HPDF_PAGE_SETRGBFILL );
HB_FUNC_EXTERN( HPDF_PAGE_SETRGBSTROKE );
HB_FUNC_EXTERN( HPDF_PAGE_SETROTATE );
HB_FUNC_EXTERN( HPDF_PAGE_SETSIZE );
HB_FUNC_EXTERN( HPDF_PAGE_SETSLIDESHOW );
HB_FUNC_EXTERN( HPDF_PAGE_SETTEXTLEADING );
HB_FUNC_EXTERN( HPDF_PAGE_SETTEXTMATRIX );
HB_FUNC_EXTERN( HPDF_PAGE_SETTEXTRENDERINGMODE );
HB_FUNC_EXTERN( HPDF_PAGE_SETTEXTRISE );
HB_FUNC_EXTERN( HPDF_PAGE_SETWIDTH );
HB_FUNC_EXTERN( HPDF_PAGE_SETWORDSPACE );
HB_FUNC_EXTERN( HPDF_PAGE_SETZOOM );
HB_FUNC_EXTERN( HPDF_PAGE_SHOWTEXT );
HB_FUNC_EXTERN( HPDF_PAGE_SHOWTEXTNEXTLINE );
HB_FUNC_EXTERN( HPDF_PAGE_SHOWTEXTNEXTLINEEX );
HB_FUNC_EXTERN( HPDF_PAGE_STROKE );
HB_FUNC_EXTERN( HPDF_PAGE_TEXTOUT );
HB_FUNC_EXTERN( HPDF_PAGE_TEXTRECT );
HB_FUNC_EXTERN( HPDF_PAGE_TEXTWIDTH );
HB_FUNC_EXTERN( HPDF_PDFA_SETPDFACONFORMANCE );
HB_FUNC_EXTERN( HPDF_POPUPANNOT_SETOPENED );
HB_FUNC_EXTERN( HPDF_READFROMSTREAM );
HB_FUNC_EXTERN( HPDF_RESETERROR );
HB_FUNC_EXTERN( HPDF_RESETSTREAM );
HB_FUNC_EXTERN( HPDF_SAVETOFILE );
HB_FUNC_EXTERN( HPDF_SAVETOSTREAM );
HB_FUNC_EXTERN( HPDF_SETCOMPRESSIONMODE );
HB_FUNC_EXTERN( HPDF_SETCURRENTENCODER );
HB_FUNC_EXTERN( HPDF_SETENCRYPTIONMODE );
HB_FUNC_EXTERN( HPDF_SETERRORHANDLER );
HB_FUNC_EXTERN( HPDF_SETINFOATTR );
HB_FUNC_EXTERN( HPDF_SETINFODATEATTR );
HB_FUNC_EXTERN( HPDF_SETOPENACTION );
HB_FUNC_EXTERN( HPDF_SETPAGELAYOUT );
HB_FUNC_EXTERN( HPDF_SETPAGEMODE );
HB_FUNC_EXTERN( HPDF_SETPAGESCONFIGURATION );
HB_FUNC_EXTERN( HPDF_SETPASSWORD );
HB_FUNC_EXTERN( HPDF_SETPERMISSION );
HB_FUNC_EXTERN( HPDF_TEXTANNOT_SETICON );
HB_FUNC_EXTERN( HPDF_TEXTANNOT_SETOPENED );
HB_FUNC_EXTERN( HPDF_TEXTMARKUPANNOT_SETQUADPOINTS );
HB_FUNC_EXTERN( HPDF_USECNSENCODINGS );
HB_FUNC_EXTERN( HPDF_USECNSFONTS );
HB_FUNC_EXTERN( HPDF_USECNTENCODINGS );
HB_FUNC_EXTERN( HPDF_USECNTFONTS );
HB_FUNC_EXTERN( HPDF_USEJPENCODINGS );
HB_FUNC_EXTERN( HPDF_USEJPFONTS );
HB_FUNC_EXTERN( HPDF_USEKRENCODINGS );
HB_FUNC_EXTERN( HPDF_USEKRFONTS );
HB_FUNC_EXTERN( HPDF_USEUTFENCODINGS );
HB_FUNC_EXTERN( HPDF_VERSION_TEXT );
HB_FUNC( __HBEXTERN__HBHPDF__ );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HBHPDF )
{ "HB_HPDF_GETERRORSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HPDF_GETERRORSTRING )}, NULL },
{ "HB_HPDF_ISVERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HPDF_ISVERSION )}, NULL },
{ "HB_HPDF_VERSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_HPDF_VERSION )}, NULL },
{ "HPDF_ADDPAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ADDPAGE )}, NULL },
{ "HPDF_ADDPAGELABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ADDPAGELABEL )}, NULL },
{ "HPDF_ANNOTATION_SETBORDERSTYLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ANNOTATION_SETBORDERSTYLE )}, NULL },
{ "HPDF_ANNOT_SET3DVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ANNOT_SET3DVIEW )}, NULL },
{ "HPDF_ANNOT_SETCMYKCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ANNOT_SETCMYKCOLOR )}, NULL },
{ "HPDF_ANNOT_SETGRAYCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ANNOT_SETGRAYCOLOR )}, NULL },
{ "HPDF_ANNOT_SETNOCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ANNOT_SETNOCOLOR )}, NULL },
{ "HPDF_ANNOT_SETRGBCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ANNOT_SETRGBCOLOR )}, NULL },
{ "HPDF_ATTACHFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ATTACHFILE )}, NULL },
{ "HPDF_CHECKERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_CHECKERROR )}, NULL },
{ "HPDF_CREATEEXTGSTATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_CREATEEXTGSTATE )}, NULL },
{ "HPDF_CREATEOUTLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_CREATEOUTLINE )}, NULL },
{ "HPDF_DESTINATION_SETFIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETFIT )}, NULL },
{ "HPDF_DESTINATION_SETFITB", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETFITB )}, NULL },
{ "HPDF_DESTINATION_SETFITBH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETFITBH )}, NULL },
{ "HPDF_DESTINATION_SETFITBV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETFITBV )}, NULL },
{ "HPDF_DESTINATION_SETFITH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETFITH )}, NULL },
{ "HPDF_DESTINATION_SETFITR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETFITR )}, NULL },
{ "HPDF_DESTINATION_SETFITV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETFITV )}, NULL },
{ "HPDF_DESTINATION_SETXYZ", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_DESTINATION_SETXYZ )}, NULL },
{ "HPDF_ENCODER_GETBYTETYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ENCODER_GETBYTETYPE )}, NULL },
{ "HPDF_ENCODER_GETTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ENCODER_GETTYPE )}, NULL },
{ "HPDF_ENCODER_GETUNICODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ENCODER_GETUNICODE )}, NULL },
{ "HPDF_ENCODER_GETWRITINGMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ENCODER_GETWRITINGMODE )}, NULL },
{ "HPDF_EXTGSTATE_SETALPHAFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_EXTGSTATE_SETALPHAFILL )}, NULL },
{ "HPDF_EXTGSTATE_SETALPHASTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_EXTGSTATE_SETALPHASTROKE )}, NULL },
{ "HPDF_EXTGSTATE_SETBLENDMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_EXTGSTATE_SETBLENDMODE )}, NULL },
{ "HPDF_FONT_GETASCENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETASCENT )}, NULL },
{ "HPDF_FONT_GETBBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETBBOX )}, NULL },
{ "HPDF_FONT_GETCAPHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETCAPHEIGHT )}, NULL },
{ "HPDF_FONT_GETDESCENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETDESCENT )}, NULL },
{ "HPDF_FONT_GETENCODINGNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETENCODINGNAME )}, NULL },
{ "HPDF_FONT_GETFONTNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETFONTNAME )}, NULL },
{ "HPDF_FONT_GETUNICODEWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETUNICODEWIDTH )}, NULL },
{ "HPDF_FONT_GETXHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_GETXHEIGHT )}, NULL },
{ "HPDF_FONT_MEASURETEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_MEASURETEXT )}, NULL },
{ "HPDF_FONT_TEXTWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FONT_TEXTWIDTH )}, NULL },
{ "HPDF_FREE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FREE )}, NULL },
{ "HPDF_FREEDOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FREEDOC )}, NULL },
{ "HPDF_FREEDOCALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FREEDOCALL )}, NULL },
{ "HPDF_FREETEXTANNOT_SET2POINTCALLOUTLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FREETEXTANNOT_SET2POINTCALLOUTLINE )}, NULL },
{ "HPDF_FREETEXTANNOT_SET3POINTCALLOUTLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FREETEXTANNOT_SET3POINTCALLOUTLINE )}, NULL },
{ "HPDF_FREETEXTANNOT_SETDEFAULTSTYLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FREETEXTANNOT_SETDEFAULTSTYLE )}, NULL },
{ "HPDF_FREETEXTANNOT_SETLINEENDINGSTYLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_FREETEXTANNOT_SETLINEENDINGSTYLE )}, NULL },
{ "HPDF_GETCONTENTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETCONTENTS )}, NULL },
{ "HPDF_GETCURRENTENCODER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETCURRENTENCODER )}, NULL },
{ "HPDF_GETCURRENTPAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETCURRENTPAGE )}, NULL },
{ "HPDF_GETENCODER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETENCODER )}, NULL },
{ "HPDF_GETERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETERROR )}, NULL },
{ "HPDF_GETERRORDETAIL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETERRORDETAIL )}, NULL },
{ "HPDF_GETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETFONT )}, NULL },
{ "HPDF_GETINFOATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETINFOATTR )}, NULL },
{ "HPDF_GETPAGELAYOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETPAGELAYOUT )}, NULL },
{ "HPDF_GETPAGEMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETPAGEMODE )}, NULL },
{ "HPDF_GETSTREAMSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_GETSTREAMSIZE )}, NULL },
{ "HPDF_HASDOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_HASDOC )}, NULL },
{ "HPDF_ICC_LOADICCFROMMEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_ICC_LOADICCFROMMEM )}, NULL },
{ "HPDF_IMAGE_ADDSMASK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_ADDSMASK )}, NULL },
{ "HPDF_IMAGE_GETBITSPERCOMPONENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_GETBITSPERCOMPONENT )}, NULL },
{ "HPDF_IMAGE_GETCOLORSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_GETCOLORSPACE )}, NULL },
{ "HPDF_IMAGE_GETHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_GETHEIGHT )}, NULL },
{ "HPDF_IMAGE_GETSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_GETSIZE )}, NULL },
{ "HPDF_IMAGE_GETWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_GETWIDTH )}, NULL },
{ "HPDF_IMAGE_SETCOLORMASK", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_SETCOLORMASK )}, NULL },
{ "HPDF_IMAGE_SETMASKIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_IMAGE_SETMASKIMAGE )}, NULL },
{ "HPDF_INSERTPAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_INSERTPAGE )}, NULL },
{ "HPDF_LINEANNOT_SETCAPTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LINEANNOT_SETCAPTION )}, NULL },
{ "HPDF_LINEANNOT_SETLEADER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LINEANNOT_SETLEADER )}, NULL },
{ "HPDF_LINEANNOT_SETPOSITION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LINEANNOT_SETPOSITION )}, NULL },
{ "HPDF_LINKANNOT_SETBORDERSTYLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LINKANNOT_SETBORDERSTYLE )}, NULL },
{ "HPDF_LINKANNOT_SETHIGHLIGHTMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LINKANNOT_SETHIGHLIGHTMODE )}, NULL },
{ "HPDF_LOADICCPROFILEFROMFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADICCPROFILEFROMFILE )}, NULL },
{ "HPDF_LOADJPEGIMAGEFROMFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADJPEGIMAGEFROMFILE )}, NULL },
{ "HPDF_LOADJPEGIMAGEFROMMEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADJPEGIMAGEFROMMEM )}, NULL },
{ "HPDF_LOADPNGIMAGEFROMFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADPNGIMAGEFROMFILE )}, NULL },
{ "HPDF_LOADPNGIMAGEFROMFILE2", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADPNGIMAGEFROMFILE2 )}, NULL },
{ "HPDF_LOADPNGIMAGEFROMMEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADPNGIMAGEFROMMEM )}, NULL },
{ "HPDF_LOADRAWIMAGEFROMFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADRAWIMAGEFROMFILE )}, NULL },
{ "HPDF_LOADRAWIMAGEFROMMEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADRAWIMAGEFROMMEM )}, NULL },
{ "HPDF_LOADTTFONTFROMFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADTTFONTFROMFILE )}, NULL },
{ "HPDF_LOADTTFONTFROMFILE2", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADTTFONTFROMFILE2 )}, NULL },
{ "HPDF_LOADTYPE1FONTFROMFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_LOADTYPE1FONTFROMFILE )}, NULL },
{ "HPDF_MARKUPANNOT_SETCLOUDEFFECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETCLOUDEFFECT )}, NULL },
{ "HPDF_MARKUPANNOT_SETCREATIONDATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETCREATIONDATE )}, NULL },
{ "HPDF_MARKUPANNOT_SETINTENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETINTENT )}, NULL },
{ "HPDF_MARKUPANNOT_SETINTERIORCMYKCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETINTERIORCMYKCOLOR )}, NULL },
{ "HPDF_MARKUPANNOT_SETINTERIORGRAYCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETINTERIORGRAYCOLOR )}, NULL },
{ "HPDF_MARKUPANNOT_SETINTERIORRGBCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETINTERIORRGBCOLOR )}, NULL },
{ "HPDF_MARKUPANNOT_SETINTERIORTRANSPARENT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETINTERIORTRANSPARENT )}, NULL },
{ "HPDF_MARKUPANNOT_SETPOPUP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETPOPUP )}, NULL },
{ "HPDF_MARKUPANNOT_SETRECTDIFF", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETRECTDIFF )}, NULL },
{ "HPDF_MARKUPANNOT_SETSUBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETSUBJECT )}, NULL },
{ "HPDF_MARKUPANNOT_SETTITLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETTITLE )}, NULL },
{ "HPDF_MARKUPANNOT_SETTRANSPARENCY", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_MARKUPANNOT_SETTRANSPARENCY )}, NULL },
{ "HPDF_NEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_NEW )}, NULL },
{ "HPDF_NEWDOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_NEWDOC )}, NULL },
{ "HPDF_OUTLINE_SETDESTINATION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_OUTLINE_SETDESTINATION )}, NULL },
{ "HPDF_OUTLINE_SETOPENED", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_OUTLINE_SETOPENED )}, NULL },
{ "HPDF_PAGE_ARC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_ARC )}, NULL },
{ "HPDF_PAGE_BEGINTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_BEGINTEXT )}, NULL },
{ "HPDF_PAGE_CIRCLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CIRCLE )}, NULL },
{ "HPDF_PAGE_CLIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CLIP )}, NULL },
{ "HPDF_PAGE_CLOSEPATH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CLOSEPATH )}, NULL },
{ "HPDF_PAGE_CLOSEPATHEOFILLSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CLOSEPATHEOFILLSTROKE )}, NULL },
{ "HPDF_PAGE_CLOSEPATHFILLSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CLOSEPATHFILLSTROKE )}, NULL },
{ "HPDF_PAGE_CLOSEPATHSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CLOSEPATHSTROKE )}, NULL },
{ "HPDF_PAGE_CONCAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CONCAT )}, NULL },
{ "HPDF_PAGE_CREATE3DVIEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATE3DVIEW )}, NULL },
{ "HPDF_PAGE_CREATECIRCLEANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATECIRCLEANNOT )}, NULL },
{ "HPDF_PAGE_CREATEDESTINATION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATEDESTINATION )}, NULL },
{ "HPDF_PAGE_CREATEFREETEXTANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATEFREETEXTANNOT )}, NULL },
{ "HPDF_PAGE_CREATEHIGHLIGHTANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATEHIGHLIGHTANNOT )}, NULL },
{ "HPDF_PAGE_CREATELINEANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATELINEANNOT )}, NULL },
{ "HPDF_PAGE_CREATELINKANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATELINKANNOT )}, NULL },
{ "HPDF_PAGE_CREATEPOPUPANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATEPOPUPANNOT )}, NULL },
{ "HPDF_PAGE_CREATESQUAREANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATESQUAREANNOT )}, NULL },
{ "HPDF_PAGE_CREATESQUIGGLYANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATESQUIGGLYANNOT )}, NULL },
{ "HPDF_PAGE_CREATESTAMPANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATESTAMPANNOT )}, NULL },
{ "HPDF_PAGE_CREATESTRIKEOUTANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATESTRIKEOUTANNOT )}, NULL },
{ "HPDF_PAGE_CREATETEXTANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATETEXTANNOT )}, NULL },
{ "HPDF_PAGE_CREATETEXTMARKUPANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATETEXTMARKUPANNOT )}, NULL },
{ "HPDF_PAGE_CREATEUNDERLINEANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATEUNDERLINEANNOT )}, NULL },
{ "HPDF_PAGE_CREATEURILINKANNOT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CREATEURILINKANNOT )}, NULL },
{ "HPDF_PAGE_CURVETO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CURVETO )}, NULL },
{ "HPDF_PAGE_CURVETO2", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CURVETO2 )}, NULL },
{ "HPDF_PAGE_CURVETO3", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_CURVETO3 )}, NULL },
{ "HPDF_PAGE_DRAWIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_DRAWIMAGE )}, NULL },
{ "HPDF_PAGE_ELLIPSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_ELLIPSE )}, NULL },
{ "HPDF_PAGE_ENDPATH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_ENDPATH )}, NULL },
{ "HPDF_PAGE_ENDTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_ENDTEXT )}, NULL },
{ "HPDF_PAGE_EOCLIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_EOCLIP )}, NULL },
{ "HPDF_PAGE_EOFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_EOFILL )}, NULL },
{ "HPDF_PAGE_EOFILLSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_EOFILLSTROKE )}, NULL },
{ "HPDF_PAGE_EXECUTEXOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_EXECUTEXOBJECT )}, NULL },
{ "HPDF_PAGE_FILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_FILL )}, NULL },
{ "HPDF_PAGE_FILLSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_FILLSTROKE )}, NULL },
{ "HPDF_PAGE_GETCHARSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETCHARSPACE )}, NULL },
{ "HPDF_PAGE_GETCMYKFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETCMYKFILL )}, NULL },
{ "HPDF_PAGE_GETCMYKSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETCMYKSTROKE )}, NULL },
{ "HPDF_PAGE_GETCURRENTFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETCURRENTFONT )}, NULL },
{ "HPDF_PAGE_GETCURRENTFONTSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETCURRENTFONTSIZE )}, NULL },
{ "HPDF_PAGE_GETCURRENTPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETCURRENTPOS )}, NULL },
{ "HPDF_PAGE_GETCURRENTTEXTPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETCURRENTTEXTPOS )}, NULL },
{ "HPDF_PAGE_GETDASH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETDASH )}, NULL },
{ "HPDF_PAGE_GETFILLINGCOLORSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETFILLINGCOLORSPACE )}, NULL },
{ "HPDF_PAGE_GETFLAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETFLAT )}, NULL },
{ "HPDF_PAGE_GETGMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETGMODE )}, NULL },
{ "HPDF_PAGE_GETGRAYFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETGRAYFILL )}, NULL },
{ "HPDF_PAGE_GETGRAYSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETGRAYSTROKE )}, NULL },
{ "HPDF_PAGE_GETGSTATEDEPTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETGSTATEDEPTH )}, NULL },
{ "HPDF_PAGE_GETHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETHEIGHT )}, NULL },
{ "HPDF_PAGE_GETHORIZONTALSCALLING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETHORIZONTALSCALLING )}, NULL },
{ "HPDF_PAGE_GETLINECAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETLINECAP )}, NULL },
{ "HPDF_PAGE_GETLINEJOIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETLINEJOIN )}, NULL },
{ "HPDF_PAGE_GETLINEWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETLINEWIDTH )}, NULL },
{ "HPDF_PAGE_GETMITERLIMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETMITERLIMIT )}, NULL },
{ "HPDF_PAGE_GETRGBFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETRGBFILL )}, NULL },
{ "HPDF_PAGE_GETRGBSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETRGBSTROKE )}, NULL },
{ "HPDF_PAGE_GETSTROKINGCOLORSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETSTROKINGCOLORSPACE )}, NULL },
{ "HPDF_PAGE_GETTEXTLEADING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETTEXTLEADING )}, NULL },
{ "HPDF_PAGE_GETTEXTMATRIX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETTEXTMATRIX )}, NULL },
{ "HPDF_PAGE_GETTEXTRENDERINGMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETTEXTRENDERINGMODE )}, NULL },
{ "HPDF_PAGE_GETTEXTRISE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETTEXTRISE )}, NULL },
{ "HPDF_PAGE_GETTRANSMATRIX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETTRANSMATRIX )}, NULL },
{ "HPDF_PAGE_GETWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETWIDTH )}, NULL },
{ "HPDF_PAGE_GETWORDSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GETWORDSPACE )}, NULL },
{ "HPDF_PAGE_GRESTORE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GRESTORE )}, NULL },
{ "HPDF_PAGE_GSAVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_GSAVE )}, NULL },
{ "HPDF_PAGE_LINETO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_LINETO )}, NULL },
{ "HPDF_PAGE_MEASURETEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_MEASURETEXT )}, NULL },
{ "HPDF_PAGE_MOVETEXTPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_MOVETEXTPOS )}, NULL },
{ "HPDF_PAGE_MOVETEXTPOS2", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_MOVETEXTPOS2 )}, NULL },
{ "HPDF_PAGE_MOVETO", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_MOVETO )}, NULL },
{ "HPDF_PAGE_MOVETONEXTLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_MOVETONEXTLINE )}, NULL },
{ "HPDF_PAGE_RECTANGLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_RECTANGLE )}, NULL },
{ "HPDF_PAGE_SETCHARSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETCHARSPACE )}, NULL },
{ "HPDF_PAGE_SETCMYKFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETCMYKFILL )}, NULL },
{ "HPDF_PAGE_SETCMYKSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETCMYKSTROKE )}, NULL },
{ "HPDF_PAGE_SETDASH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETDASH )}, NULL },
{ "HPDF_PAGE_SETEXTGSTATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETEXTGSTATE )}, NULL },
{ "HPDF_PAGE_SETFONTANDSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETFONTANDSIZE )}, NULL },
{ "HPDF_PAGE_SETGRAYFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETGRAYFILL )}, NULL },
{ "HPDF_PAGE_SETGRAYSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETGRAYSTROKE )}, NULL },
{ "HPDF_PAGE_SETHEIGHT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETHEIGHT )}, NULL },
{ "HPDF_PAGE_SETHORIZONTALSCALLING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETHORIZONTALSCALLING )}, NULL },
{ "HPDF_PAGE_SETLINECAP", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETLINECAP )}, NULL },
{ "HPDF_PAGE_SETLINEJOIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETLINEJOIN )}, NULL },
{ "HPDF_PAGE_SETLINEWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETLINEWIDTH )}, NULL },
{ "HPDF_PAGE_SETMITERLIMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETMITERLIMIT )}, NULL },
{ "HPDF_PAGE_SETRGBFILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETRGBFILL )}, NULL },
{ "HPDF_PAGE_SETRGBSTROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETRGBSTROKE )}, NULL },
{ "HPDF_PAGE_SETROTATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETROTATE )}, NULL },
{ "HPDF_PAGE_SETSIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETSIZE )}, NULL },
{ "HPDF_PAGE_SETSLIDESHOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETSLIDESHOW )}, NULL },
{ "HPDF_PAGE_SETTEXTLEADING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETTEXTLEADING )}, NULL },
{ "HPDF_PAGE_SETTEXTMATRIX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETTEXTMATRIX )}, NULL },
{ "HPDF_PAGE_SETTEXTRENDERINGMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETTEXTRENDERINGMODE )}, NULL },
{ "HPDF_PAGE_SETTEXTRISE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETTEXTRISE )}, NULL },
{ "HPDF_PAGE_SETWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETWIDTH )}, NULL },
{ "HPDF_PAGE_SETWORDSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETWORDSPACE )}, NULL },
{ "HPDF_PAGE_SETZOOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SETZOOM )}, NULL },
{ "HPDF_PAGE_SHOWTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SHOWTEXT )}, NULL },
{ "HPDF_PAGE_SHOWTEXTNEXTLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SHOWTEXTNEXTLINE )}, NULL },
{ "HPDF_PAGE_SHOWTEXTNEXTLINEEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_SHOWTEXTNEXTLINEEX )}, NULL },
{ "HPDF_PAGE_STROKE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_STROKE )}, NULL },
{ "HPDF_PAGE_TEXTOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_TEXTOUT )}, NULL },
{ "HPDF_PAGE_TEXTRECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_TEXTRECT )}, NULL },
{ "HPDF_PAGE_TEXTWIDTH", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PAGE_TEXTWIDTH )}, NULL },
{ "HPDF_PDFA_SETPDFACONFORMANCE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_PDFA_SETPDFACONFORMANCE )}, NULL },
{ "HPDF_POPUPANNOT_SETOPENED", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_POPUPANNOT_SETOPENED )}, NULL },
{ "HPDF_READFROMSTREAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_READFROMSTREAM )}, NULL },
{ "HPDF_RESETERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_RESETERROR )}, NULL },
{ "HPDF_RESETSTREAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_RESETSTREAM )}, NULL },
{ "HPDF_SAVETOFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SAVETOFILE )}, NULL },
{ "HPDF_SAVETOSTREAM", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SAVETOSTREAM )}, NULL },
{ "HPDF_SETCOMPRESSIONMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETCOMPRESSIONMODE )}, NULL },
{ "HPDF_SETCURRENTENCODER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETCURRENTENCODER )}, NULL },
{ "HPDF_SETENCRYPTIONMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETENCRYPTIONMODE )}, NULL },
{ "HPDF_SETERRORHANDLER", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETERRORHANDLER )}, NULL },
{ "HPDF_SETINFOATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETINFOATTR )}, NULL },
{ "HPDF_SETINFODATEATTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETINFODATEATTR )}, NULL },
{ "HPDF_SETOPENACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETOPENACTION )}, NULL },
{ "HPDF_SETPAGELAYOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETPAGELAYOUT )}, NULL },
{ "HPDF_SETPAGEMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETPAGEMODE )}, NULL },
{ "HPDF_SETPAGESCONFIGURATION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETPAGESCONFIGURATION )}, NULL },
{ "HPDF_SETPASSWORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETPASSWORD )}, NULL },
{ "HPDF_SETPERMISSION", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_SETPERMISSION )}, NULL },
{ "HPDF_TEXTANNOT_SETICON", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_TEXTANNOT_SETICON )}, NULL },
{ "HPDF_TEXTANNOT_SETOPENED", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_TEXTANNOT_SETOPENED )}, NULL },
{ "HPDF_TEXTMARKUPANNOT_SETQUADPOINTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_TEXTMARKUPANNOT_SETQUADPOINTS )}, NULL },
{ "HPDF_USECNSENCODINGS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USECNSENCODINGS )}, NULL },
{ "HPDF_USECNSFONTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USECNSFONTS )}, NULL },
{ "HPDF_USECNTENCODINGS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USECNTENCODINGS )}, NULL },
{ "HPDF_USECNTFONTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USECNTFONTS )}, NULL },
{ "HPDF_USEJPENCODINGS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USEJPENCODINGS )}, NULL },
{ "HPDF_USEJPFONTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USEJPFONTS )}, NULL },
{ "HPDF_USEKRENCODINGS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USEKRENCODINGS )}, NULL },
{ "HPDF_USEKRFONTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USEKRFONTS )}, NULL },
{ "HPDF_USEUTFENCODINGS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_USEUTFENCODINGS )}, NULL },
{ "HPDF_VERSION_TEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HPDF_VERSION_TEXT )}, NULL },
{ "__HBEXTERN__HBHPDF__", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBEXTERN__HBHPDF__ )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HBHPDF, "hbhpdf\\hbhpdf.hbx", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HBHPDF
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HBHPDF )
   #include "hbiniseg.h"
#endif

HB_FUNC( __HBEXTERN__HBHPDF__ )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

