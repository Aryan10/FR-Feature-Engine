        .gba
        .thumb
        .open "roms/BPRE0.gba","build/multi.gba", 0x08000000
		
		.include "features_select.s"
		.include "patches/minor_byte_changes.s"
		.include "patches/type_new_data.s"
		.include "patches/egg_hactching_graphics.s"

		/* this location below 0x08 "800000" is where the codes will be isnerted without checking if its proper free space or not,
	so be careful with choosing the free space. */
        .org 0x08800000
        .importobj "build/linked.o"
        .close
