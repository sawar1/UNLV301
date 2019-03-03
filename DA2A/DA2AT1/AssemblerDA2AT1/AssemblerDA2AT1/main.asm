;
; AssemblerDA2AT1.asm
;
; Created: 2/18/2019 8:55:55 PM
; Author : Home
;


.org 0
	LDI R16, 32
	SBI DDRB, 5			;output from Port5
	LDI R17, 0
	OUT PORTB, R17		;innitialize PortB to 0
	LDI R20, 5
	STS TCCR1B, R20		;set 1024 prescaler
begin:
	RCALL delay			;call delay function
	EOR R17, R16		;xor 32 with 0
	OUT PORTB, R17		;output the xored value
	RJMP begin			;jump to begin
delay:
	LDS R29, TCNT1H		;get the high value of the counter
	LDS R28, TCNT1L		;get the low value of the counter
	CPI R28, 0xF3		;compare low value with F3
	BRSH body			;branch if same or higher
	RJMP delay			;jump to delay
body:
	CPI R29, 0x00		;compare high value to 0
	BRSH done			;branch if same or higher
	RJMP delay			;jump to delay
done:
	LDI R20, 0x00
	STS TCNT1H, R20		;reset TCNT1H
	LDI R20, 0x00
	STS TCNT1L, R20		;reset TCNT1L
	RET