grammar Mana;

src : statement+ EOF;

statement : scope | function | expression | END | NEWLINE;

function : KEY_FN ID '(' ')' scope+;

expression : arithmetic;

scope : '{' statement* '}';

arithmetic:
	left = arithmetic op = (MUL | DIV) right = arithmetic	# MulDiv
	| left = arithmetic op = (ADD | SUB) right = arithmetic	# AddSub
	| INT													# Int
	| ID													# Identifier
	| '(' arithmetic ')'									# ParensExpr
;

KEY_FN	: 'fn';
KEY_LET	: 'let';

TYPE_I32 : 'i32';

END : ';';

ASSIGN	: '=';
MUL		: '*';
DIV		: '/';
ADD		: '+';
SUB		: '-';

ID		: [a-zA-Z]+;
INT		: [0-9]+;
NEWLINE	: '\r'? '\n';
WS		: [ \t]+ -> skip;