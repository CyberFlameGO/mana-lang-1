grammar Mana;

src : statement+ EOF;

statement:
	scope
	| function
	| declaration
	| expression
	| atom
	| END
	| NEWLINE
	;

scope : '{' statement* '}';

function : KEY_FN ID '(' ')' scope+;

declaration : KEY_LET ID ASSIGN expression;

expression : arithmetic;

atom : literal | ID;

literal : INT | FLOAT ;

arithmetic:
	left=arithmetic op=(MUL | DIV) right=arithmetic	  # MulDiv
	| left=arithmetic op=(ADD | SUB) right=arithmetic # AddSub
	| literal										  # SingleValue
	| '(' arithmetic ')'							  # ParensExpr
	;

// Lexical rules
KEY_FN		: 'fn';
KEY_LET		: 'let';
KEY_TRUE	: 'true';
KEY_FALSE	: 'false';

TYPE_I32 : 'i32';
TYPE_F32 : 'f32';

END		: ';';
ASSIGN	: '=';

MUL	: '*';
DIV	: '/';
ADD	: '+';
SUB	: '-';

ID		: [a-zA-Z]+ INT*;
INT		: [0-9]+;
FLOAT   : INT+'.'INT+'f'?;

NEWLINE	: '\r'? '\n';
WS		: [ \t]+ -> skip;