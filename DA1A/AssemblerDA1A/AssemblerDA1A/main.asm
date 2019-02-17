;
; AssemblerDA1A.asm
;
; Created: 2/16/2019 4:50:25 PM
; Author : Home
;


.org 0x0000

start: 
LDI R25, 0x14 ;HIGH: The value of 20 is register in 16-bit multiplicand
LDI R24, 0x10 ;LOW: The value of 16 is register in 16-bit multiplicand
LDI R22, 0x12 ;18 is loaded in 8-bit multiplier 

LDI R26, 0 ;0 is register in R26
MOV R17, R22 
INC R17
LDI R18, 0 ;0 is register in R18
LDI R19, 0 ;0 is register in R19
LDI R20, 0 ;0 is register in R20
CPI R22, 0 ;check R22 to 0 and if equals to 0 then is registered into R20:R19:R18

BREQ done ;check if R22 made it to 0 then it is done.

multiply:
DEC R17 ;decrement iteration 
BREQ DONE ;jump done if the value is 0
ADD R18, R24 ;add R24 to R18 for the low part of 16-bit
ADC R19, R25 ;add/carry R25 to R19 for the high part of 16-bit
ADC R20, R26 ;add the carry to R20
JMP multiply 

done: