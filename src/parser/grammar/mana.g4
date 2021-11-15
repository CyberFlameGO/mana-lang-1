grammar mana;

r : 'Mana' ID ;
ID: [a-z]+ ;
WS: [ \t\r\n]+ -> skip ;