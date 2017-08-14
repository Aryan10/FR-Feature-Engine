.include "features_select.s"

.if (RUNNING_INDOOR == TRUE)
	.org 0x080BD494
	.byte 0x0
.endif

.if (EV_CAP_TO_252 == TRUE)
	.org 0x080439FC
	.byte 0xFC
	
	.org 0x08043A02
	.byte 0xFC
.endif

.if (EGG_HATCH_LEVEL_1 == TRUE)
	.org 0x081375B0
	.byte 0x1
	
	.org 0x08046CBE
	.byte 0x1
	
	.org 0x0804623E
	.byte 0x1
.endif

.if (POKEDEX_GLITCH_FIX == TRUE)
	.org 0x0810583C
	.byte 0xFF
	
	.org 0x08105856
	.byte 0xFF
.endif

.if (REMOVING_HELP_SYSTEM == TRUE)
	.org 0x0813B8C2
	.byte 0x1D, 0xE0
.endif

.if (ROAMING_POKEMON_IV_GLITCH_FIX == TRUE)
	.org 0x08040A92
	.byte 0x21, 0x68, 0x69, 0x60, 0x20, 0xE0
.endif
