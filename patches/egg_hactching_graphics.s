.if (EGG_HATCHING_GRAPHICS_UPDATE == TRUE)
	.org 0x0826011C
	.word egg_hatchingTiles
	
	.org 0x0826012C
	.word egg_hatchingPal
.endif