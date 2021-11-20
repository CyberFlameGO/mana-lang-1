grammar mana;

INT: [0-9]*;
FLOAT: INT '.' INT 'f'?;

expression: term (('+' | '-')term)*;

term: number(('*' | '/') number)*;

number: INT | FLOAT;