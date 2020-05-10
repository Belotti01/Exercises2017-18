LF EQU 10
CR EQU 13
.MODEL SMALL
.STACK
.DATA
DATI DB 2 DUP (?)
.CODE
.STARTUP
MOV SI, 0 ; SI punta alla casella corrente di DATI
next: MOV AH, 1 ; preparo AH per la lettura
INT 21H ; leggo la prima cifra
SUB AL, '0' ; converto da ASCII a numero
MOV BH, 10 ; preparo BH per la moltiplicazione
MUL BH ; in AX ora c'e' BH*AL
MOV DATI[SI], AL ; metto AL in DATI[SI] (decine), AH tutti zeri
MOV AH, 1 ; preparo AH per la lettura
INT 21H ; leggo la seconda cifra
SUB AL, '0' ; converto
ADD DATI[SI], AL ; completo la conversione
MOV AH, 2 ; preparo AH per la scrittura
MOV DL, LF ; vado alla prossima riga
INT 21H
MOV DL, CR ; vado a capo
INT 21H
INC SI ; incremento SI
CMP SI, 2 ; ho caricato tutto il vettore ?
JNE next ; se no, salto a next
MOV AL, DATI ; AL contiene il primo dato
CBW ; converto il primo dato in WORD (in AX)
MOV BL, DATI+1 ; BL contiene il secondo dato
CMP BL, 0 ; se il secondo dato e' zero
JE finito ; ho finito (MCD = 0)
DIV BL ; divido il primo dato per il secondo
ciclo: CMP AH, 0 ; il resto e' in AH
JE finito ; se il resto e' 0 ho finito (MCD = secondo dato)
MOV AL, BL ; aggiorno AL
MOV BL, AH ; aggiorno BL
CBW ; converto in WORD (in AX)
DIV BL ; ricalcolo il resto (in AH)
JMP ciclo ; salto a ciclo
finito: MOV AL, BL ; metto MCD in AL
CBW ; converto in WORD (in AX)
CMP AX, 10 ; il risultato e' su due cifre ?
JB una ; se no salto a una
MOV BH, 10 ; preparo BH per divisione
DIV BH ; divido il nuovo AX per 10
MOV BL, AH ; sposto il resto in BL
MOV AH, 2 ; preparo AH per la stampa
MOV DL, AL ; metto le decine in DL
ADD DL, '0' ; converto in ASCII le decine
INT 21H ; stampo le decine
una: MOV AH, 2 ; preparo AH per la stampa
MOV DL, BL ; metto il resto in DL
ADD DL, '0' ; converto in ASCII le unita'
INT 21h ; stampo le unita'
MOV DL, LF ; vado sulla prossima riga
INT 21H ; stampo
MOV DL, CR ; vado a capo
INT 21H ; stampo
.EXIT
END




