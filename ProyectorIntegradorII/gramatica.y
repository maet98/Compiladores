%{
%}
%token  _ID 1 
%token  _ICONST 2 
%token  _RCONST 3 
%token  _COMMENT 4 
%token  _ECONST 5 
%token  _LITERAL 6 
%token  _LBRACK 10 
%token  _RBRACK 11 
%token  _LPAREN 12 
%token  _RPAREN 13 
%token  _SEMI  14 
%token  _COLON  15 
%token  _COMMA  16 
%token  _ASSIGN  17 
%token  _PLUS  18 
%token  _MINUS 19 
%token  _MULT 20 
%token  _DIVIDE  21 
%token  _EQL 40 
%token  _LESS 41 
%token  _GTR 42 
%token  _LEQ 43 
%token  _GEQ 44 
%token  _NEQ 45 
%token  _HOLA 46 
%token  _PROGRAM 51 
%token  _ENDVARS 52 
%token  _ENDPROCS 53 
%token  _VARS 54 
%token  _NOVARS 55 
%token  _INTEGER 56 
%token  _REAL 57 
%token  _STRING 58 
%token  _PROCS 59 
%token  _NOPROCS 60 
%token  _PROC 61 
%token  _BEGIN 62 
%token  _END 63 
%token  _FOR 64 
%token  _TO 65 
%token  _DO 66 
%token  _IF 67 
%token  _THEN 68 
%token  _ELSE 69 
%token    _READ 70 
%token    _WRITE 71
%%                   /* beginning of rules section */

program: title _SEMI block;

title: _PROGRAM _ID;

block: vars _ENDVARS procs _ENDPROCS code;

vars: _VARS varlist _SEMI
    |
        _NOVARS
    ;

varlist: varlist _SEMI vardef 
    | 
        vardef
    ;


vardef: _ID _COLON _INTEGER
    |
        _ID _COLON _REAL
    |
        _ID _COLON _INTEGER bn1
    |
        _ID _COLON _STRING
    ;    
        
bn1: _LBRACK nlist _RBRACK ;

nlist: nlist _COMMA _ICONST 
    | 
        _ICONST
    ;

procs: _PROCS proclist 
    |
        _NOPROCS
    ;

proclist: proclist _SEMI procdef 
    |
        procdef
    ;

procdef: ptitle _SEMI block ;

ptitle: _PROC _ID _LPAREN varlist _RPAREN 
    |   
        _PROC _ID _LPAREN _RPAREN
        ;

code: _BEGIN para _END 
    |
        _SEMI
    ;

para:   para _SEMI stmt
    |
        stmt
    ;

stmt:   assign | cond | loop | input | output | code ;

assign: ids _COLON _EQL expr
    ;

expr: expr _PLUS term
    |
        expr _PLUS term
    |
        term
    ;

term: term _MULT fac 
    |
        term _DIVIDE fac
    |
        fac
    ;

fac: val
    |
        _LPAREN expr _RPAREN
    ;

val: ids
    |
        _ID _LPAREN varlist _RPAREN
    |
        _ICONST
    |
        _RCONST
    ;

ids: _ID
    |
        _ID _LBRACK varlist _RBRACK
    ;

it: _ID
    |
        _ICONST
    ;

cond: _IF expr bop expr _THEN stmt _ELSE stmt ;

bop: _EQL | _LESS | _GTR | _LEQ | _GEQ | _NEQ ;

loop: _FOR assign _TO expr _DO stmt ;

input: _READ _LPAREN _ID _RPAREN;

output: _WRITE _LPAREN _ID _RPAREN
    |
        _WRITE _LPAREN _LITERAL _RPAREN
    ;

%%
main()
{
 return(yyparse());
}