/* paths.h: Generated from texmf.cnf. */
#ifndef DEFAULT_TEXMFROOT
#define DEFAULT_TEXMFROOT "$SELFAUTOPARENT"
#endif
#ifndef DEFAULT_TEXMFDIST
#define DEFAULT_TEXMFDIST "/nonesuch/texmfROOT/texmf-dist"
#endif
#ifndef DEFAULT_TEXMFMAIN
#define DEFAULT_TEXMFMAIN "/nonesuch/texmfdist"
#endif
#ifndef DEFAULT_TEXMFLOCAL
#define DEFAULT_TEXMFLOCAL "$SELFAUTOGRANDPARENT/texmf-local"
#endif
#ifndef DEFAULT_TEXMFSYSVAR
#define DEFAULT_TEXMFSYSVAR "/nonesuch/texmfROOT/texmf-var"
#endif
#ifndef DEFAULT_TEXMFSYSCONFIG
#define DEFAULT_TEXMFSYSCONFIG "/nonesuch/texmfROOT/texmf-config"
#endif
#ifndef DEFAULT_TEXMFHOME
#define DEFAULT_TEXMFHOME "~/texmf"
#endif
#ifndef DEFAULT_TEXMFVAR
#define DEFAULT_TEXMFVAR "~/.texlive2016/texmf-var"
#endif
#ifndef DEFAULT_TEXMFCONFIG
#define DEFAULT_TEXMFCONFIG "~/.texlive2016/texmf-config"
#endif
#ifndef DEFAULT_TEXMF
#define DEFAULT_TEXMF "{/nonesuch/texmfconfig,/nonesuch/texmfvar,/nonesuch/texmfHOME,!!/nonesuch/texmfsysconfig,!!/nonesuch/texmfsysvar,!!/nonesuch/texmflocal,!!/nonesuch/texmfdist}"
#endif
#ifndef DEFAULT_TEXMFDBS
#define DEFAULT_TEXMFDBS "{!!/nonesuch/texmfsysconfig,!!/nonesuch/texmfsysvar,!!/nonesuch/texmflocal,!!/nonesuch/texmfdist}"
#endif
#ifndef DEFAULT_SYSTEXMF
#define DEFAULT_SYSTEXMF "/nonesuch/texmfsysvar:/nonesuch/texmflocal:/nonesuch/texmfdist"
#endif
#ifndef DEFAULT_TEXMFCACHE
#define DEFAULT_TEXMFCACHE "/nonesuch/texmfsysvar:/nonesuch/texmfvar"
#endif
#ifndef DEFAULT_VARTEXFONTS
#define DEFAULT_VARTEXFONTS "/nonesuch/texmfvar/fonts"
#endif
#ifndef DEFAULT_WEB2C
#define DEFAULT_WEB2C "/nonesuch/texmf/web2c"
#endif
#ifndef DEFAULT_TEXINPUTS
#define DEFAULT_TEXINPUTS ".:/nonesuch/texmf/tex/{$progname,generic,}//"
#endif
#ifndef DEFAULT_TTF2TFMINPUTS
#define DEFAULT_TTF2TFMINPUTS ".:/nonesuch/texmf/ttf2pk//"
#endif
#ifndef DEFAULT_MFINPUTS
#define DEFAULT_MFINPUTS ".:/nonesuch/texmf/metafont//:{/nonesuch/texmf/fonts,/nonesuch/vartexfonts}/source//"
#endif
#ifndef DEFAULT_MPINPUTS
#define DEFAULT_MPINPUTS ".:/nonesuch/texmf/metapost//"
#endif
#ifndef DEFAULT_TEXFORMATS
#define DEFAULT_TEXFORMATS ".:/nonesuch/texmf/web2c{/$engine,}"
#endif
#ifndef DEFAULT_MFBASES
#define DEFAULT_MFBASES ".:/nonesuch/texmf/web2c{/$engine,}"
#endif
#ifndef DEFAULT_MPMEMS
#define DEFAULT_MPMEMS ".:/nonesuch/texmf/web2c{/$engine,}"
#endif
#ifndef DEFAULT_TEXPOOL
#define DEFAULT_TEXPOOL ".:/nonesuch/texmf/web2c"
#endif
#ifndef DEFAULT_MFPOOL
#define DEFAULT_MFPOOL "${TEXPOOL}"
#endif
#ifndef DEFAULT_MPPOOL
#define DEFAULT_MPPOOL "${TEXPOOL}"
#endif
#ifndef DEFAULT_VFFONTS
#define DEFAULT_VFFONTS ".:/nonesuch/texmf/fonts/vf//"
#endif
#ifndef DEFAULT_TFMFONTS
#define DEFAULT_TFMFONTS ".:{/nonesuch/texmf/fonts,/nonesuch/vartexfonts}/tfm//"
#endif
#ifndef DEFAULT_PKFONTS
#define DEFAULT_PKFONTS ".:{/nonesuch/texmf/fonts,/nonesuch/vartexfonts}/pk/{$MAKETEX_MODE,modeless}//"
#endif
#ifndef DEFAULT_GFFONTS
#define DEFAULT_GFFONTS ".:/nonesuch/texmf/fonts/gf/$MAKETEX_MODE//"
#endif
#ifndef DEFAULT_GLYPHFONTS
#define DEFAULT_GLYPHFONTS ".:/nonesuch/texmf/fonts"
#endif
#ifndef DEFAULT_MISCFONTS
#define DEFAULT_MISCFONTS ".:/nonesuch/texmf/fonts/misc//"
#endif
#ifndef DEFAULT_TEXFONTMAPS
#define DEFAULT_TEXFONTMAPS ".:/nonesuch/texmf/fonts/map/{$progname,pdftex,dvips,}//"
#endif
#ifndef DEFAULT_BIBINPUTS
#define DEFAULT_BIBINPUTS ".:/nonesuch/texmf/bibtex/bib//"
#endif
#ifndef DEFAULT_BSTINPUTS
#define DEFAULT_BSTINPUTS ".:/nonesuch/texmf/bibtex/{bst,csf}//"
#endif
#ifndef DEFAULT_MLBIBINPUTS
#define DEFAULT_MLBIBINPUTS ".:/nonesuch/texmf/bibtex/bib/{mlbib,}//"
#endif
#ifndef DEFAULT_MLBSTINPUTS
#define DEFAULT_MLBSTINPUTS ".:/nonesuch/texmf/bibtex/{mlbst,bst}//"
#endif
#ifndef DEFAULT_RISINPUTS
#define DEFAULT_RISINPUTS ".:/nonesuch/texmf/biber/ris//"
#endif
#ifndef DEFAULT_BLTXMLINPUTS
#define DEFAULT_BLTXMLINPUTS ".:/nonesuch/texmf/biber/bltxml//"
#endif
#ifndef DEFAULT_MFTINPUTS
#define DEFAULT_MFTINPUTS ".:/nonesuch/texmf/mft//"
#endif
#ifndef DEFAULT_TEXPSHEADERS
#define DEFAULT_TEXPSHEADERS ".:/nonesuch/texmf/{dvips,fonts/{enc,type1,type42,type3}}//"
#endif
#ifndef DEFAULT_OSFONTDIR
#define DEFAULT_OSFONTDIR "/please/set/osfontdir/in/the/environment"
#endif
#ifndef DEFAULT_T1FONTS
#define DEFAULT_T1FONTS ".:/nonesuch/texmf/fonts/type1//:$OSFONTDIR//"
#endif
#ifndef DEFAULT_AFMFONTS
#define DEFAULT_AFMFONTS ".:/nonesuch/texmf/fonts/afm//:$OSFONTDIR//"
#endif
#ifndef DEFAULT_TTFONTS
#define DEFAULT_TTFONTS ".:/nonesuch/texmf/fonts/{truetype,opentype}//:$OSFONTDIR//"
#endif
#ifndef DEFAULT_OPENTYPEFONTS
#define DEFAULT_OPENTYPEFONTS ".:/nonesuch/texmf/fonts/{opentype,truetype}//:$OSFONTDIR//"
#endif
#ifndef DEFAULT_T42FONTS
#define DEFAULT_T42FONTS ".:/nonesuch/texmf/fonts/type42//"
#endif
#ifndef DEFAULT_LIGFONTS
#define DEFAULT_LIGFONTS ".:/nonesuch/texmf/fonts/lig//"
#endif
#ifndef DEFAULT_TEXCONFIG
#define DEFAULT_TEXCONFIG "/nonesuch/texmf/dvips//"
#endif
#ifndef DEFAULT_INDEXSTYLE
#define DEFAULT_INDEXSTYLE ".:/nonesuch/texmf/makeindex//"
#endif
#ifndef DEFAULT_ENCFONTS
#define DEFAULT_ENCFONTS ".:/nonesuch/texmf/fonts/enc//"
#endif
#ifndef DEFAULT_CMAPFONTS
#define DEFAULT_CMAPFONTS ".:/nonesuch/texmf/fonts/cmap//"
#endif
#ifndef DEFAULT_SFDFONTS
#define DEFAULT_SFDFONTS ".:/nonesuch/texmf/fonts/sfd//"
#endif
#ifndef DEFAULT_FONTFEATURES
#define DEFAULT_FONTFEATURES ".:/nonesuch/texmf/fonts/fea//"
#endif
#ifndef DEFAULT_FONTCIDMAPS
#define DEFAULT_FONTCIDMAPS ".:/nonesuch/texmf/fonts/cid//"
#endif
#ifndef DEFAULT_PDFTEXCONFIG
#define DEFAULT_PDFTEXCONFIG ".:/nonesuch/texmf/pdftex/{$progname,}//"
#endif
#ifndef DEFAULT_TRFONTS
#define DEFAULT_TRFONTS "/usr{/local,}/share/groff/{current/font,site-font}/devps"
#endif
#ifndef DEFAULT_MPSUPPORT
#define DEFAULT_MPSUPPORT ".:/nonesuch/texmf/metapost/support"
#endif
#ifndef DEFAULT_MIMELIBDIR
#define DEFAULT_MIMELIBDIR "/nonesuch/texmfROOT/etc"
#endif
#ifndef DEFAULT_MAILCAPLIBDIR
#define DEFAULT_MAILCAPLIBDIR "/nonesuch/texmfROOT/etc"
#endif
#ifndef DEFAULT_FONTCONFIG_FILE
#define DEFAULT_FONTCONFIG_FILE "fonts.conf"
#endif
#ifndef DEFAULT_FONTCONFIG_PATH
#define DEFAULT_FONTCONFIG_PATH "/nonesuch/texmfsysvar/fonts/conf"
#endif
#ifndef DEFAULT_FC_CACHEDIR
#define DEFAULT_FC_CACHEDIR "/nonesuch/texmfsysvar/fonts/cache"
#endif
#ifndef DEFAULT_TEXDOCS
#define DEFAULT_TEXDOCS "/nonesuch/texmf/doc//"
#endif
#ifndef DEFAULT_TEXSOURCES
#define DEFAULT_TEXSOURCES ".:/nonesuch/texmf/source//"
#endif
#ifndef DEFAULT_WEBINPUTS
#define DEFAULT_WEBINPUTS ".:/nonesuch/texmf/web//"
#endif
#ifndef DEFAULT_CWEBINPUTS
#define DEFAULT_CWEBINPUTS ".:/nonesuch/texmf/cweb//"
#endif
#ifndef DEFAULT_OFMFONTS
#define DEFAULT_OFMFONTS ".:{/nonesuch/texmf/fonts,/nonesuch/vartexfonts}/{ofm,tfm}//"
#endif
#ifndef DEFAULT_OPLFONTS
#define DEFAULT_OPLFONTS ".:{/nonesuch/texmf/fonts,/nonesuch/vartexfonts}/opl//"
#endif
#ifndef DEFAULT_OVFFONTS
#define DEFAULT_OVFFONTS ".:{/nonesuch/texmf/fonts,/nonesuch/vartexfonts}/{ovf,vf}//"
#endif
#ifndef DEFAULT_OVPFONTS
#define DEFAULT_OVPFONTS ".:{/nonesuch/texmf/fonts,/nonesuch/vartexfonts}/ovp//"
#endif
#ifndef DEFAULT_OTPINPUTS
#define DEFAULT_OTPINPUTS ".:/nonesuch/texmf/omega/otp//"
#endif
#ifndef DEFAULT_OCPINPUTS
#define DEFAULT_OCPINPUTS ".:/nonesuch/texmf/omega/ocp//"
#endif
#ifndef DEFAULT_T4HTINPUTS
#define DEFAULT_T4HTINPUTS ".:/nonesuch/texmf/tex4ht//"
#endif
#ifndef DEFAULT_TEX4HTFONTSET
#define DEFAULT_TEX4HTFONTSET "alias,iso8859,unicode"
#endif
#ifndef DEFAULT_TEX4HTINPUTS
#define DEFAULT_TEX4HTINPUTS ".:/nonesuch/texmf/tex4ht/base//:/nonesuch/texmf/tex4ht/ht-fonts/{$TEX4HTFONTSET}//"
#endif
#ifndef DEFAULT_TW_LIBPATH
#define DEFAULT_TW_LIBPATH "/nonesuch/texmfconfig/texworks"
#endif
#ifndef DEFAULT_TW_INIPATH
#define DEFAULT_TW_INIPATH "$TW_LIBPATH"
#endif
#ifndef DEFAULT_DVIPDFMXINPUTS
#define DEFAULT_DVIPDFMXINPUTS "/nonesuch/texmf/dvipdfmx"
#endif
#ifndef DEFAULT_LUAINPUTS
#define DEFAULT_LUAINPUTS ".:/nonesuch/texmf/scripts/{$progname,$engine,}/{lua,}//:/nonesuch/texmf/tex/{luatex,plain,generic,}//"
#endif
#ifndef DEFAULT_CLUAINPUTS
#define DEFAULT_CLUAINPUTS ".:$SELFAUTOLOC/lib/{$progname,$engine,}/lua//"
#endif
#ifndef DEFAULT_TEXMFSCRIPTS
#define DEFAULT_TEXMFSCRIPTS "/nonesuch/texmf/scripts/{$progname,$engine,}//"
#endif
#ifndef DEFAULT_JAVAINPUTS
#define DEFAULT_JAVAINPUTS ".:/nonesuch/texmf/scripts/{$progname,$engine,}/java//"
#endif
#ifndef DEFAULT_PERLINPUTS
#define DEFAULT_PERLINPUTS ".:/nonesuch/texmf/scripts/{$progname,$engine,}/perl//"
#endif
#ifndef DEFAULT_PYTHONINPUTS
#define DEFAULT_PYTHONINPUTS ".:/nonesuch/texmf/scripts/{$progname,$engine,}/python//"
#endif
#ifndef DEFAULT_RUBYINPUTS
#define DEFAULT_RUBYINPUTS ".:/nonesuch/texmf/scripts/{$progname,$engine,}/ruby//"
#endif
#ifndef DEFAULT_TEXMFCNF
#define DEFAULT_TEXMFCNF "{$SELFAUTOLOC,$SELFAUTOLOC/share/texmf-local/web2c,$SELFAUTOLOC/share/texmf-dist/web2c,$SELFAUTOLOC/share/texmf/web2c,$SELFAUTOLOC/texmf-local/web2c,$SELFAUTOLOC/texmf-dist/web2c,$SELFAUTOLOC/texmf/web2c,$SELFAUTODIR,$SELFAUTODIR/share/texmf-local/web2c,$SELFAUTODIR/share/texmf-dist/web2c,$SELFAUTODIR/share/texmf/web2c,$SELFAUTODIR/texmf-local/web2c,$SELFAUTODIR/texmf-dist/web2c,$SELFAUTODIR/texmf/web2c,$SELFAUTOGRANDPARENT/texmf-local/web2c,$SELFAUTOPARENT,$SELFAUTOPARENT/share/texmf-local/web2c,$SELFAUTOPARENT/share/texmf-dist/web2c,$SELFAUTOPARENT/share/texmf/web2c,$SELFAUTOPARENT/texmf-local/web2c,$SELFAUTOPARENT/texmf-dist/web2c,$SELFAUTOPARENT/texmf/web2c}"
#endif
#ifndef DEFAULT_TEXMF_RESTRICTED_SCRIPTS
#define DEFAULT_TEXMF_RESTRICTED_SCRIPTS "{!!/nonesuch/texmflocal,!!/nonesuch/texmfdist}/scripts/{$progname,$engine,}//"
#endif
#ifndef DEFAULT_MISSFONT_LOG
#define DEFAULT_MISSFONT_LOG "missfont.log"
#endif
#ifndef DEFAULT_TEX_HUSH
#define DEFAULT_TEX_HUSH "none"
#endif
#ifndef DEFAULT_TEX
#define DEFAULT_TEX "etex"
#endif
#ifndef DEFAULT_BIBTEX_CSFILE
#define DEFAULT_BIBTEX_CSFILE "88591lat.csf"
#endif
