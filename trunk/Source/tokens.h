#ifndef _TOKENS_H_
#define _TOKENS_H_

// the order of these two lists no longer needs to match. -J
enum 
{
  // header setting tokens
  TOK_NAME,
  TOK_CAPTION,
  TOK_UNINSTCAPTION,
  TOK_ICON,
  TOK_UNINSTICON,
  TOK_CHECKBITMAP,
  TOK_WINDOWICON,
  TOK_DIRTEXT,
  TOK_COMPTEXT,
  TOK_LICENSETEXT,
  TOK_LICENSEDATA,
  TOK_LICENSEBKCOLOR,
  TOK_UNINSTTEXT,
  TOK_SILENTINST,
  TOK_SILENTUNINST,
  TOK_INSTTYPE,
  TOK_OUTFILE,
  TOK_INSTDIR,
  TOK_INSTALLDIRREGKEY,
  TOK_UNINSTALLEXENAME,
  TOK_CRCCHECK,
  TOK_AUTOCLOSE,
  TOK_SHOWDETAILS,
  TOK_SHOWDETAILSUNINST,
  TOK_DIRSHOW,
  TOK_ROOTDIRINST,
  TOK_BGGRADIENT,
  TOK_INSTCOLORS,
  TOK_SUBCAPTION,
  TOK_UNINSTSUBCAPTION,
  TOK_BRANDINGTEXT,
  TOK_FILEERRORTEXT,
  TOK_INSTPROGRESSFLAGS,
  TOK_XPSTYLE,
  TOK_CHANGEUI,
  TOK_ADDBRANDINGIMAGE,
  TOK_SETFONT,
  TOK_SETCOMPRESSOR,
  TOK_LOADNLF,
  TOK_RESERVEFILE,

  TOK_MISCBUTTONTEXT,
  TOK_DETAILSBUTTONTEXT,
  TOK_UNINSTBUTTONTEXT,
  TOK_INSTBUTTONTEXT,
  TOK_SPACETEXTS,
  TOK_COMPLETEDTEXT,

  TOK_LANGSTRING,
  TOK_LANGSTRINGUP,
  
  // system "preprocessor"ish tokens
  TOK_P_IFDEF,
  TOK_P_IFNDEF,
  TOK_P_ELSE,  
  TOK_P_ENDIF,
  TOK_P_DEFINE,
  TOK_P_UNDEF,
  TOK_P_PACKEXEHEADER,
  TOK_P_SYSTEMEXEC,
  TOK_P_INCLUDE,
  TOK_P_CD,
  TOK_P_ECHO,
  TOK_P_WARNING,
  TOK_P_ERROR,

  TOK_P_VERBOSE,

  TOK_P_MACRO,
  TOK_P_MACROEND,
  TOK_P_INSERTMACRO,

  // section/function shit
  TOK_SECTION,
  TOK_SECTIONEND,
  TOK_SECTIONIN,
  TOK_SUBSECTION,
  TOK_SUBSECTIONEND,
  TOK_FUNCTION,
  TOK_FUNCTIONEND,
  TOK_ADDSIZE,

  // Page oredering shit
  TOK_PAGE,
  TOK_UNINSTPAGE,

  // flag setters
  TOK_SETDATESAVE,
  TOK_SETOVERWRITE,
  TOK_SETPLUGINUNLOAD,
  TOK_SETCOMPRESS,
  TOK_DBOPTIMIZE,

  // instructions
  TOK_NOP,
  TOK_GOTO,
  TOK_RET,
  TOK_CALL,
  TOK_SETOUTPATH,
  TOK_CREATEDIR,
  TOK_EXEC,
  TOK_EXECWAIT,
  TOK_EXECSHELL,
  TOK_CALLINSTDLL,
  TOK_REGDLL,
  TOK_UNREGDLL,
  TOK_RENAME,
  TOK_MESSAGEBOX,
  TOK_DELETEREGVALUE,
  TOK_DELETEREGKEY,
  TOK_WRITEREGSTR,
  TOK_WRITEREGEXPANDSTR,
  TOK_WRITEREGBIN,
  TOK_WRITEREGDWORD,
  TOK_DELETEINISEC,
  TOK_DELETEINISTR,
  TOK_WRITEINISTR,
  TOK_CREATESHORTCUT,
  TOK_FINDWINDOW,
  TOK_DELETE,
  TOK_RMDIR,
  TOK_FILE,
  TOK_COPYFILES,
  TOK_SETFILEATTRIBUTES,
  TOK_SLEEP,
  TOK_BRINGTOFRONT,
  TOK_HIDEWINDOW,
  TOK_IFFILEEXISTS,
  TOK_ABORT,
  TOK_QUIT,
  TOK_SETDETAILSVIEW,
  TOK_SETDETAILSPRINT,
  TOK_SETAUTOCLOSE,
  TOK_IFERRORS,
  TOK_CLEARERRORS,
  TOK_SETERRORS,
  TOK_STRCPY,
  TOK_STRCMP,
  TOK_GETTEMPFILENAME,
  TOK_GETFUNCTIONADDR,
  TOK_GETLABELADDR,
  TOK_GETCURRENTADDR,
  TOK_READINISTR,
  TOK_READREGSTR,
  TOK_READREGDWORD,
  TOK_READENVSTR,
  TOK_EXPANDENVSTRS,
  TOK_DETAILPRINT,
  TOK_SEARCHPATH,
  TOK_GETDLLVERSION,
  TOK_GETDLLVERSIONLOCAL,
  TOK_GETFILETIME,
  TOK_GETFILETIMELOCAL,
  TOK_STRLEN,
  TOK_INTOP,
  TOK_INTCMP,
  TOK_INTCMPU,
  TOK_INTFMT,
  TOK_ENUMREGKEY,
  TOK_ENUMREGVAL,
  TOK_PUSH,
  TOK_POP,
  TOK_EXCH,
  TOK_SENDMESSAGE,
  TOK_ISWINDOW,
  TOK_GETDLGITEM,
  TOK_SETSTATICBKCOLOR,
  TOK_FINDFIRST,
  TOK_FINDNEXT,
  TOK_FINDCLOSE,
  TOK_FILEOPEN,
  TOK_FILECLOSE,
  TOK_FILEREAD,
  TOK_FILEWRITE,
  TOK_FILEREADBYTE,
  TOK_FILEWRITEBYTE,
  TOK_FILESEEK,
  TOK_GETFULLPATHNAME,
  TOK_REBOOT,
  TOK_IFREBOOTFLAG,
  TOK_SETREBOOTFLAG,
  TOK_WRITEUNINSTALLER,
  TOK_LOGSET,
  TOK_LOGTEXT,
  TOK_SETBRANDINGIMAGE,
  TOK_SECTIONSETTEXT,
  TOK_SECTIONGETTEXT,
  TOK_SECTIONSETFLAGS,
  TOK_SECTIONGETFLAGS,
  TOK_SETSHELLVARCONTEXT,
  TOK_PLUGINDIR,
  TOK_INITPLUGINDIR,
  TOK_CREATEFONT,
  TOK_SHOWWINDOW,

  TOK__LAST,
  TOK__PLUGINCOMMAND
};

#endif//_TOKENS_H_