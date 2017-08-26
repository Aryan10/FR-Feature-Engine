.if (FAIRY_TYPE_ADD == TRUE)

// type image and pallete
	// image
		.org 0x8107DB0
		.word type_chartTiles
		
	// pallete
		.org 0x8107D64
		.word type_chartPal
		
// type name table	
	// all the 5 locations for the type name call
		.org 0x8456E74
		.word type_names
	
		.org 0x811977C
		.word type_names
	
		.org 0x811972C
		.word type_names
	
		.org 0x80D8510
		.word type_names
	
		.org 0x80309C8
		.word type_names
	
// type icon position table
	// the table
		.org 0x8107DAC
		.word icon_poistions
	
// type effectiveness table
	// the chart
		.org 0x801E944
		.word type_effectiveness_new
		
		.org 0x801EA84
		.word type_effectiveness_new
		
		.org 0x801EA84
		.word type_effectiveness_new
		
		.org 0x801EA84
		.word type_effectiveness_new
		
		.org 0x801EA84
		.word type_effectiveness_new
		
		.org 0x801EA84
		.word type_effectiveness_new
		
		.org 0x801EA84
		.word type_effectiveness_new
.endif