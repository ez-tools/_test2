/*84:*/
#line 701 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

/* Prototypes for functions, either
 * declared in common.w and used in ctangle.w and cweave.w, or
 * used in common.w and declared in ctangle.w and cweave.w.  */
/*35:*/
#line 273 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern int names_match(name_pointer,const char*,int,char);
#line 652 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/common.w"

/*:35*//*40:*/
#line 331 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern void init_p(name_pointer p,char t);
#line 705 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/common.w"

/*:40*//*48:*/
#line 397 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern void init_node(name_pointer node);
#line 854 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/common.w"

/*:48*//*59:*/
#line 468 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern void err_print(const char*);
#line 1094 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/common.w"

/*:59*//*62:*/
#line 488 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern int wrap_up(void);
extern void print_stats(void);
#line 1143 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/common.w"

/*:62*//*65:*/
#line 507 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern void fatal(const char*,const char*);
extern void overflow(const char*);
#line 1175 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/common.w"

/*:65*//*83:*/
#line 682 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern void common_init(void);
extern int input_ln(FILE*fp);
extern void reset_input(void);
extern int get_line(void);
extern void check_complete(void);
extern name_pointer id_lookup(const char*first,const char*last,char t);
extern void print_section_name(name_pointer p);
extern void sprint_section_name(char*dest,name_pointer p);
extern name_pointer section_lookup(char*first,char*last,int ispref);
#line 1417 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/common.w"

#line 697 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"
/*:83*/
#line 705 "/home/dmonad/git/_test2/src/binary/pdftex-1.40.11/src/texk/web2c/cwebdir/comm-w2c.ch"

extern const char*versionstring;

/*:84*/