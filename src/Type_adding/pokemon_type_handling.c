#include <pokeagb/pokeagb.h>
#include "../config.h"

#if (INSERT_FAIRY_TYPE == TRUE)
#include "../../images/type_chart.c"
	
pchar type_names[][7] = {
    _("Normal"),
    _("Fight"),
    _("Flying"),
    _("Poison"),
    _("Ground"),
    _("Rock"),
    _("Bug"),
    _("Ghost"),
    _("Steel"),
    _("???"),
    _("Fire"),
    _("Water"),
    _("Grass"),
    _("Electr"),
    _("Psych"),
    _("Ice"),
    _("Dragon"),
    _("Dark"),
    _(""),
    _(""),
    _(""),
    _(""),
    _(""),
    _("Fairy")
    };

u8 icon_poistions[][4] =
{
    {0x0C, 0xC, 0x00, 0x0},
    {0x20, 0xC, 0x20, 0x0},
    {0x20, 0xC, 0x64, 0x0},
    {0x20, 0xC, 0x60, 0x0},
    {0x20, 0xC, 0x80, 0x0},
    {0x20, 0xC, 0x48, 0x0},
    {0x20, 0xC, 0x44, 0x0},
    {0x20, 0xC, 0x6C, 0x0},
    {0x20, 0xC, 0x68, 0x0},
    {0x20, 0xC, 0x88, 0x0},
    {0x20, 0xC, 0xA4, 0x0},
    {0x20, 0xC, 0x24, 0x0},
    {0x20, 0xC, 0x28, 0x0},
    {0x20, 0xC, 0x2C, 0x0},
    {0x20, 0xC, 0x40, 0x0},
    {0x20, 0xC, 0x84, 0x0},
    {0x20, 0xC, 0x4C, 0x0},
    {0x20, 0xC, 0xA0, 0x0},
    {0x20, 0xC, 0x8C, 0x0},
    {0x28, 0xC, 0xC0, 0x0},
    {0x28, 0xC, 0xC8, 0x0},
    {0x28, 0xC, 0xE0, 0x0},
    {0x28, 0xC, 0xE8, 0x0},
    {0x28, 0xC, 0xF0, 0x0},
    {0x20, 0xC, 0xA8, 0x0}
};


#define SUPER_EFFECTIVE 0x14
#define NOT_EFFECTIVE 0x5
#define NO_EFFECT 0x0
#define BEGIN_FORESIGHT { 0xFE, 0xFE, 0 }
#define END_TYPE_CHART { 0xFF, 0xFF, 0 }


struct TypeEffectiveness type_effectiveness_new[]=
{
    // NORMAL
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_NORMAL,      TYPE_ROCK,          NOT_EFFECTIVE },
    { TYPE_NORMAL,      TYPE_GHOST,         NO_EFFECT },
    { TYPE_NORMAL,      TYPE_STEEL,         NOT_EFFECTIVE },

    // FIGHTING
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_FIGHTING,    TYPE_NORMAL,        SUPER_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_FLYING,        NOT_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_POISON,        NOT_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_ROCK,          SUPER_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_BUG,           NOT_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_GHOST,         NO_EFFECT },
    { TYPE_FIGHTING,    TYPE_STEEL,         SUPER_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_PSYCHIC,       NOT_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_ICE,           SUPER_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_DARK,          SUPER_EFFECTIVE },
    { TYPE_FIGHTING,    TYPE_FAIRY,         NOT_EFFECTIVE },

    // FLYING
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_FLYING,      TYPE_FIGHTING,      SUPER_EFFECTIVE },
    { TYPE_FLYING,      TYPE_ROCK,          NOT_EFFECTIVE },
    { TYPE_FLYING,      TYPE_BUG,           SUPER_EFFECTIVE },
    { TYPE_FLYING,      TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_FLYING,      TYPE_GRASS,         SUPER_EFFECTIVE },
    { TYPE_FLYING,      TYPE_ELECTRIC,      NOT_EFFECTIVE },

    // POISON
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_POISON,      TYPE_POISON,        NOT_EFFECTIVE },
    { TYPE_POISON,      TYPE_GROUND,        NOT_EFFECTIVE },
    { TYPE_POISON,      TYPE_ROCK,          NOT_EFFECTIVE },
    { TYPE_POISON,      TYPE_GHOST,         NOT_EFFECTIVE },
    { TYPE_POISON,      TYPE_STEEL,         NO_EFFECT },
    { TYPE_POISON,      TYPE_GRASS,         SUPER_EFFECTIVE },
    { TYPE_POISON,      TYPE_FAIRY,         SUPER_EFFECTIVE },

    // GROUND
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_GROUND,      TYPE_FLYING,        NO_EFFECT },
    { TYPE_GROUND,      TYPE_POISON,        SUPER_EFFECTIVE },
    { TYPE_GROUND,      TYPE_ROCK,          SUPER_EFFECTIVE },
    { TYPE_GROUND,      TYPE_BUG,           NOT_EFFECTIVE },
    { TYPE_GROUND,      TYPE_STEEL,         SUPER_EFFECTIVE },
    { TYPE_GROUND,      TYPE_FIRE,          SUPER_EFFECTIVE },
    { TYPE_GROUND,      TYPE_GRASS,         NOT_EFFECTIVE },
    { TYPE_GROUND,      TYPE_ELECTRIC,      SUPER_EFFECTIVE },

    // ROCK
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_ROCK,        TYPE_FIGHTING,      NOT_EFFECTIVE },
    { TYPE_ROCK,        TYPE_FLYING,        SUPER_EFFECTIVE },
    { TYPE_ROCK,        TYPE_GROUND,        NOT_EFFECTIVE },
    { TYPE_ROCK,        TYPE_BUG,           SUPER_EFFECTIVE },
    { TYPE_ROCK,        TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_ROCK,        TYPE_FIRE,          SUPER_EFFECTIVE },
    { TYPE_ROCK,        TYPE_ICE,           SUPER_EFFECTIVE },

    // BUG
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_BUG,         TYPE_FIGHTING,      NOT_EFFECTIVE },
    { TYPE_BUG,         TYPE_FLYING,        NOT_EFFECTIVE },
    { TYPE_BUG,         TYPE_POISON,        NOT_EFFECTIVE },
    { TYPE_BUG,         TYPE_GHOST,         NOT_EFFECTIVE },
    { TYPE_BUG,         TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_BUG,         TYPE_FIRE,          NOT_EFFECTIVE },
    { TYPE_BUG,         TYPE_GRASS,         SUPER_EFFECTIVE },
    { TYPE_BUG,         TYPE_PSYCHIC,       SUPER_EFFECTIVE },
    { TYPE_BUG,         TYPE_DARK,          SUPER_EFFECTIVE },
    { TYPE_BUG,         TYPE_FAIRY,         NOT_EFFECTIVE },

    // GHOST
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_GHOST,       TYPE_NORMAL,        NO_EFFECT },
    { TYPE_GHOST,       TYPE_GHOST,         SUPER_EFFECTIVE },
    { TYPE_GHOST,       TYPE_PSYCHIC,       SUPER_EFFECTIVE },
    { TYPE_GHOST,       TYPE_DARK,          NOT_EFFECTIVE },

    // STEEL
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_STEEL,       TYPE_ROCK,          SUPER_EFFECTIVE },
    { TYPE_STEEL,       TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_STEEL,       TYPE_FIRE,          NOT_EFFECTIVE },
    { TYPE_STEEL,       TYPE_WATER,         NOT_EFFECTIVE },
    { TYPE_STEEL,       TYPE_ELECTRIC,      NOT_EFFECTIVE },
    { TYPE_STEEL,       TYPE_ICE,           SUPER_EFFECTIVE },
    { TYPE_STEEL,       TYPE_FAIRY,         SUPER_EFFECTIVE },

    // FIRE
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_FIRE,        TYPE_ROCK,          NOT_EFFECTIVE },
    { TYPE_FIRE,        TYPE_BUG,           SUPER_EFFECTIVE },
    { TYPE_FIRE,        TYPE_STEEL,         SUPER_EFFECTIVE },
    { TYPE_FIRE,        TYPE_FIRE,          NOT_EFFECTIVE },
    { TYPE_FIRE,        TYPE_WATER,         NOT_EFFECTIVE },
    { TYPE_FIRE,        TYPE_GRASS,         SUPER_EFFECTIVE },
    { TYPE_FIRE,        TYPE_ICE,           SUPER_EFFECTIVE },
    { TYPE_FIRE,        TYPE_DRAGON,        NOT_EFFECTIVE },

    // WATER
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_WATER,       TYPE_GROUND,        SUPER_EFFECTIVE },
    { TYPE_WATER,       TYPE_ROCK,          SUPER_EFFECTIVE },
    { TYPE_WATER,       TYPE_FIRE,          SUPER_EFFECTIVE },
    { TYPE_WATER,       TYPE_WATER,         NOT_EFFECTIVE },
    { TYPE_WATER,       TYPE_GRASS,         NOT_EFFECTIVE },
    { TYPE_WATER,       TYPE_DRAGON,        NOT_EFFECTIVE },

    // GRASS
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_GRASS,       TYPE_FLYING,        NOT_EFFECTIVE },
    { TYPE_GRASS,       TYPE_POISON,        NOT_EFFECTIVE },
    { TYPE_GRASS,       TYPE_GROUND,        SUPER_EFFECTIVE },
    { TYPE_GRASS,       TYPE_ROCK,          SUPER_EFFECTIVE },
    { TYPE_GRASS,       TYPE_BUG,           NOT_EFFECTIVE },
    { TYPE_GRASS,       TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_GRASS,       TYPE_FIRE,          NOT_EFFECTIVE },
    { TYPE_GRASS,       TYPE_WATER,         SUPER_EFFECTIVE },
    { TYPE_GRASS,       TYPE_GRASS,         NOT_EFFECTIVE },
    { TYPE_GRASS,       TYPE_DRAGON,        NOT_EFFECTIVE },

    // ELECTRIC
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_ELECTRIC,    TYPE_FLYING,        SUPER_EFFECTIVE },
    { TYPE_ELECTRIC,    TYPE_GROUND,        NO_EFFECT },
    { TYPE_ELECTRIC,    TYPE_WATER,         SUPER_EFFECTIVE },
    { TYPE_ELECTRIC,    TYPE_GRASS,         NOT_EFFECTIVE },
    { TYPE_ELECTRIC,    TYPE_ELECTRIC,      NOT_EFFECTIVE },
    { TYPE_ELECTRIC,    TYPE_DRAGON,        NOT_EFFECTIVE },

    // PSYCHIC
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_PSYCHIC,     TYPE_FIGHTING,      SUPER_EFFECTIVE },
    { TYPE_PSYCHIC,     TYPE_POISON,        SUPER_EFFECTIVE },
    { TYPE_PSYCHIC,     TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_PSYCHIC,     TYPE_PSYCHIC,       NOT_EFFECTIVE },
    { TYPE_PSYCHIC,     TYPE_DARK,          NO_EFFECT },

    // ICE
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_ICE,         TYPE_FLYING,        SUPER_EFFECTIVE },
    { TYPE_ICE,         TYPE_GROUND,        SUPER_EFFECTIVE },
    { TYPE_ICE,         TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_ICE,         TYPE_FIRE,          NOT_EFFECTIVE },
    { TYPE_ICE,         TYPE_WATER,         NOT_EFFECTIVE },
    { TYPE_ICE,         TYPE_GRASS,         SUPER_EFFECTIVE },
    { TYPE_ICE,         TYPE_ICE,           NOT_EFFECTIVE },
    { TYPE_ICE,         TYPE_DRAGON,        SUPER_EFFECTIVE },

    // DRAGON
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_DRAGON,      TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_DRAGON,      TYPE_DRAGON,        SUPER_EFFECTIVE },
    { TYPE_DRAGON,      TYPE_FAIRY,         NO_EFFECT },

    // DARK
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_DARK,        TYPE_FIGHTING,      NOT_EFFECTIVE },
    { TYPE_DARK,        TYPE_GHOST,         SUPER_EFFECTIVE },
    { TYPE_DARK,        TYPE_PSYCHIC,       SUPER_EFFECTIVE },
    { TYPE_DARK,        TYPE_DARK,          NOT_EFFECTIVE },
    { TYPE_DARK,        TYPE_DARK,          NOT_EFFECTIVE },

    // FAIRY
/*  Attacking type      Defending type      Effectiveness*/
    { TYPE_FAIRY,       TYPE_FIGHTING,      SUPER_EFFECTIVE },
    { TYPE_FAIRY,       TYPE_POISON,        NOT_EFFECTIVE },
    { TYPE_FAIRY,       TYPE_STEEL,         NOT_EFFECTIVE },
    { TYPE_FAIRY,       TYPE_FIRE,          NOT_EFFECTIVE },
    { TYPE_FAIRY,       TYPE_DRAGON,        SUPER_EFFECTIVE },
    { TYPE_FAIRY,       TYPE_DARK,          SUPER_EFFECTIVE },

    // MORE CUSTOM TYPES JUST BELOW THIS LINE IF YOU ARE ADDING SOME IN THE SAME FORMAT AS ABOVE

    /*
    DONOT TOUCH THE BELOW LINES IF YOU ARE NOT ADDING CUSTOM TYPES
    EVEN IF YOU ARE ADDING YOU MUST KNOW WHAT IT DOES
    */
    BEGIN_FORESIGHT,
    { TYPE_NORMAL,      TYPE_GHOST,         NO_EFFECT },
    { TYPE_FIGHTING,    TYPE_GHOST,         NO_EFFECT },
    END_TYPE_CHART
};
#endif
