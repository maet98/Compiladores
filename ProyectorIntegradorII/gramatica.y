%{

%}

%start list

%union { int a; }


%token DIGIT LETTER


%%                   /* beginning of rules section */

program: title ';' block;

title: _PROGRAM _ID;

block: vars _ENDVARS procs _ENDPROCS code;

vars: _VARIABLES varlist ';'
    |
        _NOVARIABLES
    ;

varlist: varlist ; vardef 
    | 
        vardef
    ;


vardef: _ID : _INTERGER
    |
        _ID: _REAL
    |
        _ID: _INTERGER bn1
    |
        _ID: STRING
    ;    
        
bn1: '[' nlist ']' ;

nlist: nlist , _ICONST 
    | 
        _ICONST
    ;

procs: _PROCEDURES proclist 
    |
        _NOPROCEDURES
    ;

proclist: proclist ';' procdef 
    |
        procdef
    ;

ptitle: ptitle ';' block ;

code: _BEGIN para _END 
    |
        ';'
    ;

para:   para ';' stmt
    |
        stmt
    ;

stmt;   assign | cond | loop | input | output | code ;

assign: ids ':=' expr

expr: expr '+' term
    |
        epxr '+' term
    |
        term
    ;

term: term '*' fac 
    |
        term '/' fac
    |
        fac
    ;

fac: val
    |
        '(' expr ')'
    ;

val: ids
    |
        _ID '(' vallist ')'
    |
        _ICONST
    |
        _RCONST
    ;

ids: _ID
    |
        _ID '[' vallist ']'
    ;

it: _ID
    |
        _ICONST
    ;

cond: _IF expr bop expr _THEN stmt _ELSE stmt ;

bop: '=' | '<' | '>' | '<=' | '>=' | '<>' ;

loop: _FOR assign _TO expr _DO stmt ;

input: _READ '(' _ID ')';

output: _WRITE '(' _ID ')'
    |
        _WRITE '(' LITERAL ')'
    ;

%%
main()
{
 return(yyparse());
}

yyerror(s)
char *s;
{
  fprintf(stderr, "%s\n",s);
}

yywrap()
{
  return(1);
}