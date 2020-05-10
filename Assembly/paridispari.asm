
LF EQU 10
CR EQU 10
.MODEL SMALL
.STACK
.DATA
PROMPT DB 'Inserisci un numero: ','$'
PARI DB   "Il numero che hai inserito e' pari.",'$'
DISPARI DB  "Il numero che hai inserito e' dispari.",'$'
.CODE
.STARTUP
LEA DX, PROMPT
MOV AH, 9
INT 21H
MOV AH, 1
INT 21H
MOV BL, AL
MOV AH, 2
MOV DL, LF
INT 21H
MOV DL, CR
INT 21H
SUB BL, '0'
TEST BL, 1
JZ par
LEA DX, DISPARI
MOV AH, 9
INT 21H   
JMP fine
par: LEA DX, PARI
MOV AH, 9
INT 21H
fine: MOV AH, 2
MOV DL, LF
INT 21H
MOV DL, CR
INT 21H
.EXIT
END






