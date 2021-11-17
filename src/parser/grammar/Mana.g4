grammar Mana;

prog: stmt+ EOF;    

//eol: (';'|NEWLINE) ;

stmt: expr NEWLINE           # PrintExpr
    | ID '=' expr NEWLINE    # Assign
    | NEWLINE                # Blank
    ;

scope: expr          # GlobalScope
//     | scope         # LocalScope
     | '{' expr '}'  # LocalScope
     ;

expr: arithm
    ;

arithm: left=arithm op=(MUL|DIV) right=arithm # MulDiv
      | left=arithm op=(ADD|SUB) right=arithm # AddSub
      | INT             # Int
      | ID              # Identifier
      | '(' arithm ')'  # ParensExpr
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