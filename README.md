# About the Project

>Insert those minor and awesoeme features into your Firered rom easily. And it is supposed to be an alternative of the tool TL's Quick Enhancer as that tool now doesnt have those features in it.

This project came into the mind when people came with reporting bugs of the tool **TL's Quick Enhancer**
so this project will be like a engine that implements features (_from minor byte changes to major asm or C_).


# Requirements

- DevkitPro
  - DevkitARM (v4.4 or v4.5)
- GNUMake
- ARMIPS
> All these are supposed to be steup in the Path of the PC as well


# Using the project

After you confirm you have the REQUIREMENTS fulfilled then,
1. firstly you make a folder named `roms` in the root directory
2. Inside it put a FR rom named `BPRE0.gba`
3. Goto root directory and open command windows
4. type `make` and wait for the installion to complete

> after errorless and warning less installion you will get a working `multi.gba` in the `build` folder which is the modified rom with the features added from the project.


# Selecting features

There are few features which are done only via asm or byte changes while some are done in C as well as asm.
But you can choose which features to insert and which not to.

You can see two files:
1. `root_directory/Features_select.s`
2. `root_directory/src/Config.h`

There are two sections in the `Feature_select.s` file,
You must be careful with the second section as both the `Feature_select.s` and `Config.h` must have same value i.e. TRUE or FALSE,
else the hack wont work correctly.


# Selecting Space to insert the hacks

in `main.s` file you will see the line
> this location below 0x08 "800000" is where the codes will be isnerted without checking if its proper free space or not,
> so be careful with choosing the free space.
> .org 0x08800000

so all you have to do is change the `.org 0x08(offset where you want to insert the codes)`
and make sure it has enough free space i.e. let it be the unedited section of your rom.


# DISCORD
All the suggestions you have, the problems you are facing, any error you are geting and for support you can either choose the issue tab here on github or alternatively the discord server:
[Click here](https://discord.gg/y8ru3A3)

# CREDITS
Special thanks to all the respective researchers for doing the research and development

*The credit list will be updated soon with proper credits to the person who did the research and development*
