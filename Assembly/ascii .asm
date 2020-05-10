
LF EQU 10
CR EQU 13
STAR EQU '*'

.MODEL small
.STACK
.DATA 

SEND DB ?

.CODE
.STARTUP

next:
    MOV AH,1
    INT 21H
    MOV BL,AL
    MOV AH,2
    MOV DL,LF
    INT 21H
    MOV DL,CR
    INT 21H
    TEST BL,80H
    JZ minore
    MOV BL,STAR
      
minore:
    MOV CX,8
    MOV DH,0
    MOV BH,BL
    
prox:
    SHR BH,1
    JNC zero
    INC DH
    
zero:
    LOOP prox
    TEST DH,1H
    JZ pari
    OR BL,80H  
    
pari:
    MOV BH,0
    MOV CX,7  
    
invert: SHL BL,1
    JNC inzero
    OR BH,80H 
    
inzero:
    SHR BH,1
    LOOP invert
    OR BH,BL
    MOV SEND,BH
    
.EXIT
END




