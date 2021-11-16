grammar mana;

prog: stmt+ EOF;    

//eol: (';'|NEWLINE) ;

stmt: expr NEWLINE           # PrintExpr
    | ID '=' expr NEWLINE    # Assign
    | NEWLINE                # Blank
    ;

expr: expr op=(MUL|DIV) expr # MulDiv
    | expr op=(ADD|SUB) expr # AddSub
    | INT                    # Int
    | ID                     # Identifier
    | '(' expr ')'           # ParensExpr
    ;


KEY_FN  : 'fn'           ;
KEY_LET : 'let'          ;

TYPE_I32: 'i32'          ;

ASSIGN  : '='            ;
MUL     : '*'            ;
DIV     : '/'            ;
ADD     : '+'            ;
SUB     : '-'            ;

ID      : [a-zA-Z]+      ;
INT     : [0-9]+         ;
NEWLINE : '\r'? '\n'     ;
WS      : [ \t]+ -> skip ;