.MODEL small
.STACK
.DATA
.CODE
.STARTUP
MOV AX, 49       
MOV DI, 0
MOV SI, 1
LP: 
SUB AX, SI
INC DI
CMP AX, 0
JL DONE
INC DI
ADD SI, 2
JMP LP
DONE:
.EXIT
END       