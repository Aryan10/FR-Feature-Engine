        .gba
        .thumb
        .open "roms/BPRE0.gba","build/multi.gba", 0x08000000
		
		.include "patches/minor_byte_changes.s"
		.include "patches/type_new_data.s"

        .org 0x08800000
        .importobj "build/linked.o"
        .close
