
DIM EQU 10
.MODEL small
.STACK
.DATA
VET DW 15, -12, -21, 0, -3, 7, 10, -11, -1, -5
.CODE
.STARTUP
MOV CX, DIM
;MOV SI, 0
LEA BX, VET
ciclo:
CMP [BX], 0
JNL scan
MOV AX,[BX]
SUB AX,[BX]
SUB AX,[BX]
MOV [BX], AX
scan:
ADD BX, 2
LOOP ciclo                                                           
.EXIT                           
END
                            