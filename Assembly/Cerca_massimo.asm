org 100H

MOV AL, A
CMP AL, B
JG ETICHETTA_1
MOV AH, B
MOV MINIMO, AH
JMP ETICHETTA_2

ETICHETTA_1:
MOV MINIMO, AL

ETICHETTA_2:

RET

A DB 4H
B DB 7H
MINIMO DB ?