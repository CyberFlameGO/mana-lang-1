grammar ManaOld;

prog : decl+ EOF;

decl : function | stmt;

function : KEY_FN ID '(' ')' scope # FunctionDefinition;

scope : '{' stmt* '}' # LocalScope;

stmt:
	expr END		# Expression
	| assign END	# DefaultAssignment
	| END			# EmptyStatement
	| NEWLINE		# EmptyLine
;

expr : arithm;

assign : ID '=' expr;

arithm:
	left = arithm op = (MUL | DIV) right = arithm	# MulDiv
	| left = arithm op = (ADD | SUB) right = arithm	# AddSub
	| INT											# Int
	| ID											# Identifier
	| '(' arithm ')'								# ParensExpr
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