#define EGG_MOVES_SPECIES_OFFSET 20000
#define EGG_MOVES_TERMINATOR 0xFFFF
#define egg_moves(species, moves...) (SPECIES_##species + EGG_MOVES_SPECIES_OFFSET), moves

const u16 gEggMoves[] = {
    egg_moves(BULBASAUR,
              MOVE_LIGHT_SCREEN,
              MOVE_SKULL_BASH,
              MOVE_SAFEGUARD,
              MOVE_CHARM,
              MOVE_PETAL_DANCE,
              MOVE_MAGICAL_LEAF,
              MOVE_GRASS_WHISTLE,
              MOVE_CURSE,
              MOVE_INGRAIN,
              MOVE_NATURE_POWER,
              MOVE_AMNESIA,
              // LEAF_STORM
              // POWER_WHIP
              MOVE_SLUDGE
    ),

    egg_moves(CHARMANDER,
              MOVE_BELLY_DRUM,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_OUTRAGE,
              MOVE_BEAT_UP,
              MOVE_SWORDS_DANCE,
              MOVE_DRAGON_DANCE,
              MOVE_CRUNCH,
              MOVE_DRAGON_BREATH, // [NEW:TM] DRAGON_RUSH
              MOVE_METAL_CLAW,
              // FLARE_BLITZ
              MOVE_COUNTER
    ),

    egg_moves(SQUIRTLE,
              MOVE_MIRROR_COAT,
              MOVE_HAZE,
              MOVE_MIST,
              MOVE_FORESIGHT,
              MOVE_FLAIL,
              MOVE_REFRESH,
              MOVE_MUD_SPORT,
              MOVE_YAWN,
              MOVE_MUDDY_WATER,
              MOVE_FAKE_OUT,
              // AQUA_RING
              // AQUA_JET
              MOVE_WATER_SPOUT
    ),

    // egg_moves(CATERPIE),

    // egg_moves(WEEDLE),

    egg_moves(PIDGEY,
              MOVE_PURSUIT,
              MOVE_FAINT_ATTACK,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_AIR_CUTTER,
              // AIR_SLASH
              MOVE_SKY_ATTACK, // [NEW] BRAVE_BIRD
              MOVE_UPROAR
    ),

    egg_moves(RATTATA,
              MOVE_SCREECH,
              MOVE_FLAME_WHEEL,
              MOVE_FURY_SWIPES,
              MOVE_BITE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_UPROAR,
              MOVE_SWAGGER
              // LAST_RESORT
              // ME_FIRST
    ),

    egg_moves(SPEAROW,
              MOVE_FAINT_ATTACK,
              MOVE_FALSE_SWIPE,
              MOVE_SCARY_FACE,
              MOVE_QUICK_ATTACK,
              MOVE_TRI_ATTACK,
              MOVE_ASTONISH,
              MOVE_SKY_ATTACK,
              MOVE_WHIRLWIND,
              MOVE_UPROAR,
              MOVE_FEATHER_DANCE
    ),

    egg_moves(EKANS,
              MOVE_PURSUIT,
              MOVE_SLAM,
              MOVE_SPITE,
              MOVE_BEAT_UP,
              MOVE_POISON_FANG,
              MOVE_SCARY_FACE,
              MOVE_POISON_TAIL,
              MOVE_DISABLE
              // SWITCHEROO
    ),

    egg_moves(PICHU,
              MOVE_REVERSAL,
              MOVE_BIDE,
              MOVE_PRESENT,
              MOVE_ENCORE,
              MOVE_DOUBLE_SLAP,
              MOVE_WISH,
              MOVE_CHARGE,
              MOVE_FAKE_OUT,
              MOVE_THUNDER_PUNCH,
              MOVE_TICKLE,
              MOVE_FLAIL
    ),

    egg_moves(SANDSHREW,
              MOVE_FLAIL,
              MOVE_SAFEGUARD,
              MOVE_COUNTER,
              MOVE_RAPID_SPIN,
              MOVE_ROCK_SLIDE,
              MOVE_METAL_CLAW,
              MOVE_SWORDS_DANCE,
              MOVE_CRUSH_CLAW,
              MOVE_KNOCK_OFF, // [NEW:TUTOR] NIGHT_SLASH
              MOVE_MUD_SHOT
    ),

    egg_moves(NIDORAN_F,
              MOVE_SUPERSONIC,
              MOVE_DISABLE,
              MOVE_TAKE_DOWN,
              MOVE_FOCUS_ENERGY,
              MOVE_CHARM,
              MOVE_COUNTER,
              MOVE_BEAT_UP,
              MOVE_PURSUIT,
              MOVE_SKULL_BASH
    ),

    egg_moves(NIDORAN_M,
              MOVE_COUNTER,
              MOVE_DISABLE,
              MOVE_SUPERSONIC,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_CONFUSION,
              MOVE_BEAT_UP,
              // SUCKER_PUNCH
              MOVE_ROCK_SLIDE // [NEW:TUTOR] HEAD_SMASH
    ),

    egg_moves(CLEFFA,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_AMNESIA,
              MOVE_BELLY_DRUM,
              MOVE_SPLASH,
              MOVE_MIMIC,
              MOVE_WISH,
              MOVE_SUBSTITUTE,
              MOVE_FAKE_TEARS,
              MOVE_COVET,
              MOVE_AROMATHERAPY
    ),

    egg_moves(VULPIX,
              MOVE_FAINT_ATTACK,
              MOVE_HYPNOSIS,
              MOVE_FLAIL,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_HOWL,
              MOVE_PSYCH_UP,
              MOVE_HEAT_WAVE,
              // FLARE_BLITZ
              MOVE_EXTRASENSORY,
              MOVE_SOLAR_BEAM // [NEW:TM] ENERGY_BALL
              // POWER_SWAP
    ),

    egg_moves(IGGLYBUFF,
              MOVE_PERISH_SONG,
              MOVE_PRESENT,
              MOVE_FAINT_ATTACK,
              MOVE_WISH,
              MOVE_FAKE_TEARS,
              // LAST_RESORT
              MOVE_COVET
              // GRAVITY
    ),

    egg_moves(ZUBAT,
              MOVE_QUICK_ATTACK,
              MOVE_PURSUIT,
              MOVE_FAINT_ATTACK,
              MOVE_GUST,
              MOVE_WHIRLWIND,
              MOVE_CURSE,
              // NASTY_PLOT
              MOVE_HYPNOSIS,
              // ZEN_HEADBUTT
              MOVE_SKY_ATTACK // [NEW] BRAVE_BIRD
    ),

    egg_moves(ODDISH,
              MOVE_SWORDS_DANCE,
              MOVE_RAZOR_LEAF,
              MOVE_FLAIL,
              MOVE_SYNTHESIS,
              MOVE_CHARM,
              MOVE_INGRAIN,
              MOVE_TICKLE,
              MOVE_TEETER_DANCE
    ),

    egg_moves(PARAS,
              MOVE_FALSE_SWIPE,
              MOVE_SCREECH,
              MOVE_COUNTER,
              MOVE_PSYBEAM,
              MOVE_FLAIL,
              MOVE_SWEET_SCENT,
              MOVE_LIGHT_SCREEN,
              MOVE_PURSUIT,
              MOVE_METAL_CLAW,
              // BUG_BITE
              MOVE_POISON_FANG, // [NEW] CROSS_POISON
              MOVE_AGILITY
    ),

    egg_moves(VENONAT,
              MOVE_BATON_PASS,
              MOVE_SCREECH,
              MOVE_GIGA_DRAIN,
              MOVE_SIGNAL_BEAM,
              MOVE_AGILITY,
              MOVE_MORNING_SUN
              // TOXIC_SPIKES
              // BUG_BITE
    ),

    egg_moves(DIGLETT,
              MOVE_FAINT_ATTACK,
              MOVE_SCREECH,
              MOVE_ANCIENT_POWER,
              MOVE_PURSUIT,
              MOVE_BEAT_UP,
              MOVE_UPROAR,
              MOVE_ROCK_SLIDE,
              MOVE_MUD_SHOT, // [NEW] MUD_BOMB
              MOVE_ASTONISH,
              MOVE_REVERSAL
    ),

    egg_moves(MEOWTH,
              MOVE_SPITE,
              MOVE_CHARM,
              MOVE_HYPNOSIS,
              MOVE_AMNESIA,
              MOVE_PSYCH_UP,
              MOVE_ASSIST,
              MOVE_ODOR_SLEUTH,
              MOVE_FLAIL,
              // LAST_RESORT
              // PUNISHMENT
              MOVE_TAIL_WHIP
    ),

    egg_moves(PSYDUCK,
              MOVE_HYPNOSIS,
              MOVE_PSYBEAM,
              MOVE_FORESIGHT,
              MOVE_LIGHT_SCREEN,
              MOVE_FUTURE_SIGHT,
              MOVE_PSYCHIC,
              MOVE_CROSS_CHOP,
              MOVE_REFRESH,
              MOVE_CONFUSE_RAY,
              MOVE_YAWN,
              MOVE_MUD_SHOT, // [NEW] MUD_BOMB
              MOVE_ENCORE
    ),

    egg_moves(MANKEY,
              MOVE_ROCK_SLIDE,
              MOVE_FORESIGHT,
              MOVE_MEDITATE,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_REVENGE,
              MOVE_SMELLING_SALT,
              // CLOSE_COMBAT
              MOVE_ENCORE
    ),

    egg_moves(GROWLITHE,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_FIRE_SPIN,
              MOVE_HOWL,
              MOVE_HEAT_WAVE,
              MOVE_DOUBLE_EDGE,
              // FLARE_BLITZ
              MOVE_MORNING_SUN
    ),

    egg_moves(POLIWAG,
              MOVE_MIST,
              MOVE_SPLASH,
              MOVE_BUBBLE_BEAM,
              MOVE_HAZE,
              MOVE_MIND_READER,
              MOVE_WATER_SPORT,
              MOVE_ICE_BALL,
              MOVE_MUD_SHOT,
              MOVE_REFRESH,
              MOVE_ENDEAVOR,
              MOVE_ENCORE
    ),

    egg_moves(ABRA,
              MOVE_ENCORE,
              MOVE_BARRIER,
              MOVE_KNOCK_OFF,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_MAGIC_COAT // [NEW]
              // POWER_TRICK
              // GUARD_SWAP
    ),

    egg_moves(MACHOP,
              MOVE_LIGHT_SCREEN,
              MOVE_MEDITATE,
              MOVE_ROLLING_KICK,
              MOVE_ENCORE,
              MOVE_SMELLING_SALT,
              MOVE_COUNTER,
              MOVE_ROCK_SLIDE,
              // CLOSE_COMBAT
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH
              // BULLET_PUNCH
              // POWER_TRICK
    ),

    egg_moves(BELLSPROUT,
              MOVE_SWORDS_DANCE,
              MOVE_ENCORE,
              MOVE_REFLECT,
              MOVE_SYNTHESIS,
              MOVE_LEECH_LIFE,
              MOVE_INGRAIN,
              MOVE_MAGICAL_LEAF,
              // WORRY_SEED
              MOVE_TICKLE,
              MOVE_WEATHER_BALL
    ),

    egg_moves(TENTACOOL,
              MOVE_AURORA_BEAM,
              MOVE_MIRROR_COAT,
              MOVE_RAPID_SPIN,
              MOVE_HAZE,
              MOVE_SAFEGUARD,
              MOVE_CONFUSE_RAY,
              MOVE_KNOCK_OFF,
              // ACUPRESSURE
              MOVE_MUDDY_WATER
    ),

    egg_moves(GEODUDE,
              MOVE_MEGA_PUNCH,
              MOVE_ROCK_SLIDE,
              MOVE_BLOCK,
              // HAMMER_ARM
              MOVE_FLAIL,
              MOVE_CURSE
    ),

    egg_moves(PONYTA,
              MOVE_FLAME_WHEEL,
              MOVE_THRASH,
              MOVE_DOUBLE_KICK,
              MOVE_HYPNOSIS,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE,
              MOVE_HORN_DRILL,
              MOVE_MORNING_SUN
    ),

    egg_moves(SLOWPOKE,
              MOVE_SAFEGUARD,
              MOVE_BELLY_DRUM,
              MOVE_FUTURE_SIGHT,
              MOVE_STOMP,
              MOVE_MUD_SPORT,
              MOVE_SLEEP_TALK,
              MOVE_SNORE,
              // ME_FIRST
              MOVE_BLOCK
              // ZEN_HEADBUTT
    ),

    // egg_moves(MAGNEMITE), // No Egg Moves (gender unknown)

    egg_moves(FARFETCHD,
              MOVE_STEEL_WING,
              MOVE_FORESIGHT,
              MOVE_MIRROR_MOVE,
              MOVE_GUST,
              MOVE_QUICK_ATTACK,
              MOVE_FLAIL,
              MOVE_FEATHER_DANCE,
              MOVE_CURSE,
              MOVE_COVET,
              MOVE_MUD_SLAP,
              MOVE_KNOCK_OFF, // [NEW:TUTOR] NIGHT_SLASH
              MOVE_LEAF_BLADE
    ),

    egg_moves(DODUO,
              MOVE_QUICK_ATTACK,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_FAINT_ATTACK,
              MOVE_FLAIL,
              MOVE_ENDEAVOR,
              MOVE_MIRROR_MOVE,
              MOVE_SKY_ATTACK // [NEW] BRAVE_BIRD
    ),

    egg_moves(SEEL,
              MOVE_LICK,
              MOVE_PERISH_SONG,
              MOVE_DISABLE,
              MOVE_HORN_DRILL,
              MOVE_SLAM,
              MOVE_ENCORE,
              MOVE_FAKE_OUT,
              MOVE_ICICLE_SPEAR,
              MOVE_SIGNAL_BEAM,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP
    ),

    egg_moves(GRIMER,
              MOVE_HAZE,
              MOVE_MEAN_LOOK,
              MOVE_LICK,
              MOVE_IMPRISON,
              MOVE_CURSE,
              MOVE_SHADOW_PUNCH,
              MOVE_EXPLOSION,
              // SHADOW_SNEAK
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP
    ),

    egg_moves(SHELLDER,
              MOVE_BUBBLE_BEAM,
              MOVE_TAKE_DOWN,
              MOVE_BARRIER,
              MOVE_RAPID_SPIN,
              MOVE_SCREECH,
              MOVE_ICICLE_SPEAR,
              MOVE_MUD_SHOT,
              MOVE_ROCK_BLAST
    ),

    egg_moves(GASTLY,
              MOVE_PSYWAVE,
              MOVE_PERISH_SONG,
              MOVE_HAZE,
              MOVE_ASTONISH,
              MOVE_WILL_O_WISP,
              MOVE_GRUDGE,
              MOVE_EXPLOSION,
              MOVE_FIRE_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_DISABLE
    ),

    egg_moves(ONIX,
              MOVE_ROCK_SLIDE,
              MOVE_FLAIL,
              MOVE_EXPLOSION,
              MOVE_BLOCK,
              MOVE_DEFENSE_CURL,
              MOVE_ROLLOUT,
              MOVE_ROCK_BLAST
    ),

    egg_moves(DROWZEE,
              MOVE_BARRIER,
              MOVE_ASSIST,
              MOVE_ROLE_PLAY,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH,
              // NASTY_PLOT
              MOVE_FLATTER
              // PSYCHO_CUT
              // GUARD_SWAP
    ),

    egg_moves(KRABBY,
              MOVE_DIG,
              MOVE_HAZE,
              MOVE_AMNESIA,
              MOVE_FLAIL,
              MOVE_SLAM,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE,
              MOVE_TICKLE,
              MOVE_ANCIENT_POWER,
              MOVE_AGILITY
    ),

    // egg_moves(VOLTORB), // No Egg Moves (gender unknown)

    egg_moves(EXEGGCUTE,
              MOVE_SYNTHESIS,
              MOVE_MOONLIGHT,
              MOVE_REFLECT,
              MOVE_ANCIENT_POWER,
              MOVE_PSYCH_UP,
              MOVE_INGRAIN,
              MOVE_CURSE,
              MOVE_NATURE_POWER
              // LUCKY_CHANT
              // LEAF_STORM
              // POWER_SWAP
    ),

    egg_moves(CUBONE,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_BELLY_DRUM,
              MOVE_SCREECH,
              MOVE_SKULL_BASH,
              MOVE_PERISH_SONG,
              MOVE_SWORDS_DANCE,
              MOVE_DOUBLE_KICK,
              // IRON_HEAD
              MOVE_DETECT,
              MOVE_SHADOW_PUNCH // [NEW]
    ),

    egg_moves(TYROGUE,
              MOVE_RAPID_SPIN,
              MOVE_HI_JUMP_KICK,
              MOVE_MACH_PUNCH,
              MOVE_MIND_READER,
              MOVE_HELPING_HAND,
              MOVE_COUNTER
              // VACUUM_WAVE
              // BULLET_PUNCH
    ),

    egg_moves(LICKITUNG,
              MOVE_BELLY_DRUM,
              MOVE_MAGNITUDE,
              MOVE_BODY_SLAM,
              MOVE_CURSE,
              MOVE_SMELLING_SALT,
              MOVE_SLEEP_TALK,
              MOVE_SNORE,
              MOVE_SUBSTITUTE,
              MOVE_AMNESIA,
              // HAMMER_ARM
              MOVE_MUDDY_WATER
    ),

    egg_moves(KOFFING,
              MOVE_SCREECH,
              MOVE_PSYWAVE,
              MOVE_PSYBEAM,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_WILL_O_WISP,
              MOVE_GRUDGE,
              MOVE_SPITE,
              MOVE_CURSE
    ),

    egg_moves(RHYHORN,
              MOVE_CRUNCH,
              MOVE_REVERSAL,
              MOVE_ROCK_SLIDE,
              MOVE_COUNTER,
              MOVE_MAGNITUDE,
              MOVE_SWORDS_DANCE,
              MOVE_CURSE,
              MOVE_CRUSH_CLAW,
              MOVE_OUTRAGE, // [NEW:TUTOR] DRAGON_RUSH
              // ICE_FANG
              // FIRE_FANG
              // THUNDER_FANG
              MOVE_SKULL_BASH
    ),

    egg_moves(CHANSEY,
              MOVE_PRESENT,
              MOVE_METRONOME,
              MOVE_HEAL_BELL,
              MOVE_AROMATHERAPY,
              MOVE_SUBSTITUTE,
              MOVE_COUNTER,
              MOVE_HELPING_HAND,
              // GRAVITY
              // MUD_BOMB
              MOVE_CHARM,
              // MOVE_COPYCAT
              MOVE_SWEET_KISS,
              MOVE_UPROAR
              // LAST_RESORT
    ),

    egg_moves(TANGELA,
              MOVE_FLAIL,
              MOVE_CONFUSION,
              MOVE_MEGA_DRAIN,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER,
              MOVE_ENDEAVOR
              // LEAF_STORM
              // POWER_SWAP
    ),

    egg_moves(KANGASKHAN,
              MOVE_STOMP,
              MOVE_FORESIGHT,
              MOVE_FOCUS_ENERGY,
              MOVE_SAFEGUARD,
              MOVE_DISABLE,
              MOVE_COUNTER,
              MOVE_CRUSH_CLAW,
              MOVE_SUBSTITUTE,
              MOVE_DOUBLE_EDGE,
              MOVE_ENDEAVOR
              // HAMMER_ARM
    ),

    egg_moves(HORSEA,
              MOVE_FLAIL,
              MOVE_AURORA_BEAM,
              MOVE_OCTAZOOKA,
              MOVE_DISABLE,
              MOVE_SPLASH,
              MOVE_DRAGON_RAGE,
              MOVE_DRAGON_BREATH,
              MOVE_SIGNAL_BEAM,
              MOVE_RAZOR_WIND,
              MOVE_MUDDY_WATER
    ),

    egg_moves(GOLDEEN,
              MOVE_PSYBEAM,
              MOVE_HAZE,
              MOVE_HYDRO_PUMP,
              MOVE_SLEEP_TALK,
              MOVE_MUD_SPORT,
              MOVE_MUD_SLAP,
              // AQUA_TAIL
              MOVE_BODY_SLAM
    ),

    // egg_moves(STARYU), // No Egg Moves (gender unknown)

    egg_moves(MR_MIME,
              MOVE_FUTURE_SIGHT,
              MOVE_HYPNOSIS,
              MOVE_MIMIC,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_TRICK,
              MOVE_CONFUSE_RAY,
              // WAKE_UP_SLAP
              MOVE_TEETER_DANCE,
              // NASTY_PLOT
              MOVE_TICKLE,
              MOVE_UPROAR,
              // HEALING_WISH
              MOVE_CHARM
    ),

    egg_moves(SCYTHER,
              MOVE_COUNTER,
              MOVE_SAFEGUARD,
              MOVE_BATON_PASS,
              MOVE_RAZOR_WIND,
              MOVE_REVERSAL,
              MOVE_LIGHT_SCREEN,
              MOVE_ENDURE,
              MOVE_SILVER_WIND
              // BUG_BUZZ
              // NIGHT_SLASH
    ),

    egg_moves(SMOOCHUM,
              MOVE_MEDITATE,
              MOVE_PSYCH_UP,
              MOVE_FAKE_OUT,
              MOVE_WISH,
              MOVE_ICE_PUNCH
              // MIRACLE_EYE
              // NASTY_PLOT
    ),

    egg_moves(ELEKID,
              MOVE_KARATE_CHOP,
              MOVE_BARRIER,
              MOVE_ROLLING_KICK,
              MOVE_MEDITATE,
              MOVE_CROSS_CHOP,
              MOVE_FIRE_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_DYNAMIC_PUNCH
              // FEINT
    ),

    egg_moves(MAGBY,
              MOVE_KARATE_CHOP,
              MOVE_MEGA_PUNCH,
              MOVE_BARRIER,
              MOVE_SCREECH,
              MOVE_CROSS_CHOP,
              MOVE_THUNDER_PUNCH,
              MOVE_MACH_PUNCH,
              MOVE_DYNAMIC_PUNCH,
              // FLARE_BLITZ
              MOVE_BELLY_DRUM
    ),

    egg_moves(PINSIR,
              MOVE_FURY_ATTACK,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE,
              MOVE_FAINT_ATTACK,
              MOVE_QUICK_ATTACK,
              MOVE_IRON_DEFENSE // [NEW:TUTOR]
              // CLOSE_COMBAT
              // FEINT
    ),

    // egg_moves(TAUROS), // No Egg Moves (100% male)

    egg_moves(MAGIKARP,
              MOVE_BOUNCE // [NEW:TUTOR]
    ),

    egg_moves(LAPRAS,
              MOVE_FORESIGHT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_REFRESH,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE,
              MOVE_SLEEP_TALK,
              MOVE_HORN_DRILL,
              MOVE_ANCIENT_POWER,
              MOVE_WHIRLPOOL,
              MOVE_FISSURE
    ),

    // egg_moves(DITTO), // No Egg Moves (gender unknown)

    egg_moves(EEVEE,
              MOVE_CHARM,
              MOVE_FLAIL,
              MOVE_ENDURE,
              MOVE_CURSE,
              MOVE_TICKLE,
              MOVE_WISH,
              MOVE_YAWN,
              MOVE_FAKE_TEARS,
              MOVE_COVET,
              MOVE_DETECT
    ),

    // egg_moves(PORYGON), // No Egg Moves (gender unknown)

    egg_moves(OMANYTE,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_SLAM,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_ROCK_SLIDE,
              MOVE_SPIKES,
              MOVE_KNOCK_OFF,
              // WRING_OUT
              // TOXIC_SPIKES
              MOVE_MUDDY_WATER
    ),

    egg_moves(KABUTO,
              MOVE_BUBBLE_BEAM,
              MOVE_AURORA_BEAM,
              MOVE_RAPID_SPIN,
              MOVE_DIG,
              MOVE_FLAIL,
              MOVE_KNOCK_OFF,
              MOVE_CONFUSE_RAY,
              MOVE_MUD_SHOT,
              MOVE_ICY_WIND,
              MOVE_SCREECH
    ),

    egg_moves(AERODACTYL,
              MOVE_WHIRLWIND,
              MOVE_PURSUIT,
              MOVE_FORESIGHT,
              MOVE_STEEL_WING,
              MOVE_DRAGON_BREATH,
              MOVE_CURSE
              // ASSURANCE
    ),

    egg_moves(SNORLAX,
              MOVE_LICK,
              MOVE_CHARM,
              MOVE_DOUBLE_EDGE,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_SUBSTITUTE,
              MOVE_WHIRLWIND,
              MOVE_PURSUIT,
              MOVE_COUNTER
    ),

    egg_moves(DRATINI,
              MOVE_LIGHT_SCREEN,
              MOVE_MIST,
              MOVE_HAZE,
              MOVE_SUPERSONIC,
              MOVE_DRAGON_BREATH,
              MOVE_DRAGON_DANCE,
              // DRAGON_RUSH
              MOVE_EXTREME_SPEED
    ),

    egg_moves(CHIKORITA,
              MOVE_VINE_WHIP,
              MOVE_LEECH_SEED,
              MOVE_COUNTER,
              MOVE_ANCIENT_POWER,
              MOVE_FLAIL,
              MOVE_NATURE_POWER,
              MOVE_INGRAIN,
              MOVE_GRASS_WHISTLE,
              MOVE_PETAL_DANCE, // [NEW:EVOLVE] LEAF_STORM
              MOVE_AROMATHERAPY,
              // WRING_OUT
              MOVE_BODY_SLAM
    ),

    egg_moves(CYNDAQUIL,
              MOVE_FURY_SWIPES,
              MOVE_QUICK_ATTACK,
              MOVE_REVERSAL,
              MOVE_THRASH,
              MOVE_FORESIGHT,
              MOVE_COVET,
              MOVE_HOWL,
              MOVE_CRUSH_CLAW,
              MOVE_DOUBLE_EDGE,
              MOVE_DOUBLE_KICK,
              // FLARE_BLITZ
              MOVE_EXTRASENSORY
    ),

    egg_moves(TOTODILE,
              MOVE_CRUNCH,
              MOVE_THRASH,
              MOVE_HYDRO_PUMP,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_MUD_SPORT,
              MOVE_WATER_SPORT,
              MOVE_DRAGON_CLAW,
              MOVE_ICE_PUNCH,
              MOVE_METAL_CLAW,
              MOVE_DRAGON_DANCE
              // AQUA_JET
    ),

    egg_moves(SENTRET,
              MOVE_DOUBLE_EDGE,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_FOCUS_ENERGY,
              MOVE_REVERSAL,
              MOVE_SUBSTITUTE,
              MOVE_TRICK,
              MOVE_ASSIST,
              // LAST_RESORT
              MOVE_CHARM,
              MOVE_COVET
    ),

    egg_moves(HOOTHOOT,
              MOVE_MIRROR_MOVE,
              MOVE_SUPERSONIC,
              MOVE_FAINT_ATTACK,
              MOVE_WING_ATTACK,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_FEATHER_DANCE,
              MOVE_AGILITY,
              MOVE_NIGHT_SHADE
    ),

    egg_moves(LEDYBA,
              MOVE_PSYBEAM,
              MOVE_BIDE,
              MOVE_SILVER_WIND,
              MOVE_SIGNAL_BEAM, // [NEW] BUG_BUZZ
              MOVE_SCREECH,
              MOVE_ENCORE,
              MOVE_KNOCK_OFF
              // BUG_BITE
    ),

    egg_moves(SPINARAK,
              MOVE_PSYBEAM,
              MOVE_DISABLE,
              MOVE_SONIC_BOOM,
              MOVE_BATON_PASS,
              MOVE_PURSUIT,
              MOVE_SIGNAL_BEAM
              // TOXIC_SPIKES
              // POISON_JAB
    ),

    egg_moves(CHINCHOU,
              MOVE_FLAIL,
              MOVE_SCREECH,
              MOVE_AMNESIA,
              MOVE_PSYBEAM,
              MOVE_WHIRLPOOL,
              MOVE_AGILITY,
              MOVE_MIST
    ),

    egg_moves(TOGEPI,
              MOVE_PRESENT,
              MOVE_MIRROR_MOVE,
              MOVE_PECK,
              MOVE_FORESIGHT,
              MOVE_FUTURE_SIGHT,
              MOVE_SUBSTITUTE,
              MOVE_PSYCH_UP,
              MOVE_SOFT_BOILED, // [NEW:TUTOR] NASTY_PLOT
              // PSYCHO_SHIFT
              // LUCKY_CHANT
              MOVE_EXTRASENSORY
    ),

    egg_moves(NATU,
              MOVE_HAZE,
              MOVE_DRILL_PECK,
              MOVE_QUICK_ATTACK,
              MOVE_FAINT_ATTACK,
              MOVE_STEEL_WING,
              MOVE_PSYCH_UP,
              MOVE_FEATHER_DANCE,
              MOVE_REFRESH
              // ZEN_HEADBUTT
              // SUCKER_PUNCH
    ),

    egg_moves(MAREEP,
              MOVE_TAKE_DOWN,
              MOVE_BODY_SLAM,
              MOVE_SAFEGUARD,
              MOVE_SCREECH,
              MOVE_REFLECT,
              MOVE_ODOR_SLEUTH,
              MOVE_CHARGE,
              MOVE_FLATTER,
              MOVE_SAND_ATTACK
    ),

    egg_moves(AZURILL,
              MOVE_ENCORE,
              MOVE_SING,
              MOVE_REFRESH,
              MOVE_SLAM,
              MOVE_TICKLE,
              MOVE_FAKE_TEARS,
              MOVE_BODY_SLAM,
              // Gen 8 Moves:
              MOVE_SUPERSONIC,
              MOVE_BELLY_DRUM,
              MOVE_PERISH_SONG,
              MOVE_PRESENT
    ),

    egg_moves(MARILL,
              MOVE_LIGHT_SCREEN,
              MOVE_PRESENT,
              MOVE_AMNESIA,
              MOVE_FUTURE_SIGHT,
              MOVE_BELLY_DRUM,
              MOVE_PERISH_SONG,
              MOVE_SUPERSONIC,
              MOVE_SUBSTITUTE,
              // Gen 8 Moves:
              MOVE_SING,
              MOVE_SUPERSONIC,
              MOVE_PRESENT,
              MOVE_TICKLE
    ),

    egg_moves(SUDOWOODO,
              MOVE_SELF_DESTRUCT,
              MOVE_HEADBUTT,
              MOVE_HARDEN,
              MOVE_DEFENSE_CURL,
              MOVE_ROLLOUT,
              MOVE_SAND_TOMB
    ),

    egg_moves(HOPPIP,
              MOVE_CONFUSION,
              MOVE_ENCORE,
              MOVE_DOUBLE_EDGE,
              MOVE_REFLECT,
              MOVE_AMNESIA,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP,
              MOVE_AROMATHERAPY
              // WORRY_SEED
    ),

    egg_moves(AIPOM,
              MOVE_COUNTER,
              MOVE_SCREECH,
              MOVE_PURSUIT,
              MOVE_AGILITY,
              MOVE_SPITE,
              MOVE_SLAM,
              MOVE_DOUBLE_SLAP,
              MOVE_BEAT_UP,
              MOVE_FAKE_OUT,
              MOVE_COVET,
              MOVE_BOUNCE
    ),

    egg_moves(SUNKERN,
              MOVE_GRASS_WHISTLE,
              MOVE_ENCORE,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER,
              MOVE_CURSE,
              MOVE_HELPING_HAND,
              MOVE_INGRAIN,
              MOVE_SWEET_SCENT
    ),

    egg_moves(YANMA,
              MOVE_WHIRLWIND,
              MOVE_REVERSAL,
              MOVE_LEECH_LIFE,
              MOVE_SIGNAL_BEAM,
              MOVE_SILVER_WIND,
              // FEINT
              MOVE_FAINT_ATTACK,
              MOVE_PURSUIT
    ),

    egg_moves(WOOPER,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SAFEGUARD,
              MOVE_CURSE,
              MOVE_MUD_SPORT,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_COUNTER,
              MOVE_ENCORE,
              MOVE_DOUBLE_KICK,
              MOVE_RECOVER
    ),

    egg_moves(MURKROW,
              MOVE_WHIRLWIND,
              MOVE_DRILL_PECK,
              MOVE_MIRROR_MOVE,
              MOVE_WING_ATTACK,
              MOVE_SKY_ATTACK,
              MOVE_CONFUSE_RAY,
              MOVE_FEATHER_DANCE,
              MOVE_PERISH_SONG,
              // PSYCHO_SHIFT
              MOVE_SCREECH,
              MOVE_FAINT_ATTACK
              // BRAVE_BIRD
    ),

    egg_moves(MISDREAVUS,
              MOVE_SCREECH,
              MOVE_DESTINY_BOND,
              MOVE_PSYCH_UP,
              MOVE_IMPRISON,
              MOVE_MEMENTO,
              // SUCKER_PUNCH
              // SHADOW_SNEAK
              MOVE_CURSE,
              MOVE_SPITE
              // OMINOUS_WIND
              // NASTY_PLOT
    ),

    // egg_moves(UNOWN), // No Egg Moves (gender unknown)

    // egg_moves(WYNAUT),

    egg_moves(WOBBUFFET,
              // WOBBUFFET learns WYNAUT's moves by Level-up ONLY in Gen9. Instead of adding them to Level-up, let's make them Egg moves
              MOVE_SPLASH,
              MOVE_CHARM,
              MOVE_ENCORE
    ),

    egg_moves(GIRAFARIG,
              MOVE_TAKE_DOWN,
              MOVE_AMNESIA,
              MOVE_FORESIGHT,
              MOVE_FUTURE_SIGHT,
              MOVE_BEAT_UP,
              MOVE_PSYCH_UP,
              MOVE_WISH,
              MOVE_MAGIC_COAT,
              MOVE_DOUBLE_KICK,
              MOVE_MIRROR_COAT,
              MOVE_RAZOR_WIND
    ),

    egg_moves(PINECO,
              MOVE_REFLECT,
              MOVE_PIN_MISSILE,
              MOVE_FLAIL,
              MOVE_SWIFT,
              MOVE_COUNTER,
              MOVE_SAND_TOMB,
              MOVE_REVENGE,
              MOVE_DOUBLE_EDGE
              // TOXIC_SPIKES
              // POWER_TRICK
    ),

    egg_moves(DUNSPARCE,
              MOVE_BIDE,
              MOVE_ANCIENT_POWER,
              MOVE_ROCK_SLIDE,
              MOVE_BITE,
              MOVE_HEADBUTT,
              MOVE_ASTONISH,
              MOVE_CURSE,
              // TRUMP_CARD
              MOVE_MAGIC_COAT,
              MOVE_SNORE,
              MOVE_AGILITY
    ),

    egg_moves(GLIGAR,
              MOVE_METAL_CLAW,
              MOVE_WING_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_COUNTER,
              MOVE_SAND_TOMB,
              MOVE_AGILITY,
              MOVE_BATON_PASS,
              MOVE_DOUBLE_EDGE,
              // FEINT
              // NIGHT_SLASH
              MOVE_POISON_FANG // [NEW] CROSS_POISON
              // POWER_TRICK
    ),

    egg_moves(SNUBBULL,
              MOVE_METRONOME,
              MOVE_FAINT_ATTACK,
              MOVE_REFLECT,
              MOVE_PRESENT,
              MOVE_CRUNCH,
              MOVE_HEAL_BELL,
              MOVE_SNORE,
              MOVE_SMELLING_SALT
              // CLOSE_COMBAT
              // ICE_FANG
              // FIRE_FANG
              // THUNDER_FANG
    ),

    egg_moves(QWILFISH,
              MOVE_FLAIL,
              MOVE_HAZE,
              MOVE_BUBBLE_BEAM,
              MOVE_SUPERSONIC,
              MOVE_ASTONISH,
              MOVE_SIGNAL_BEAM
              // POISON_JAB
              // AQUA_JET
    ),

    egg_moves(SHUCKLE,
              MOVE_SWEET_SCENT,
              MOVE_KNOCK_OFF,
              MOVE_HELPING_HAND,
              // ACUPRESSURE
              MOVE_SAND_TOMB,
              MOVE_MUD_SLAP
    ),

    egg_moves(HERACROSS,
              MOVE_HARDEN,
              MOVE_BIDE,
              MOVE_FLAIL,
              MOVE_FALSE_SWIPE,
              MOVE_REVENGE,
              MOVE_PURSUIT,
              MOVE_DOUBLE_EDGE
    ),

    egg_moves(SNEASEL,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_FORESIGHT,
              MOVE_REFLECT,
              MOVE_BITE,
              MOVE_CRUSH_CLAW,
              MOVE_FAKE_OUT,
              MOVE_DOUBLE_KICK, // [NEW] DOUBLE_HIT
              // PUNISHMENT
              MOVE_PURSUIT,
              MOVE_ICICLE_SPEAR, // [NEW] ICE_SHARD
              MOVE_ICE_PUNCH,
              MOVE_ASSIST
    ),

    egg_moves(TEDDIURSA,
              MOVE_CRUNCH,
              MOVE_TAKE_DOWN,
              MOVE_SEISMIC_TOSS,
              MOVE_COUNTER,
              MOVE_METAL_CLAW,
              MOVE_FAKE_TEARS,
              MOVE_YAWN,
              MOVE_SLEEP_TALK,
              MOVE_CROSS_CHOP,
              MOVE_DOUBLE_EDGE,
              MOVE_SUPERPOWER, // [NEW:TUTOR] CLOSE_COMBAT
              // NIGHT_SLASH
              MOVE_BELLY_DRUM
    ),

    egg_moves(SLUGMA,
              MOVE_ACID_ARMOR,
              MOVE_HEAT_WAVE,
              MOVE_CURSE,
              MOVE_SMOKESCREEN,
              MOVE_MEMENTO,
              MOVE_STOCKPILE,
              MOVE_SPIT_UP,
              MOVE_SWALLOW
    ),

    egg_moves(SWINUB,
              MOVE_TAKE_DOWN,
              MOVE_BITE,
              MOVE_BODY_SLAM,
              MOVE_ROCK_SLIDE,
              MOVE_ANCIENT_POWER,
              MOVE_MUD_SHOT,
              MOVE_ICICLE_SPEAR,
              MOVE_DOUBLE_EDGE,
              MOVE_FISSURE,
              MOVE_CURSE,
              MOVE_MUD_SHOT
    ),

    egg_moves(CORSOLA,
              MOVE_ROCK_SLIDE,
              MOVE_SCREECH,
              MOVE_MIST,
              MOVE_AMNESIA,
              MOVE_BARRIER,
              MOVE_INGRAIN,
              MOVE_CONFUSE_RAY,
              MOVE_ICICLE_SPEAR,
              MOVE_NATURE_POWER,
              // AQUA_RING
              MOVE_CURSE
    ),

    egg_moves(REMORAID,
              MOVE_AURORA_BEAM,
              MOVE_OCTAZOOKA,
              MOVE_SUPERSONIC,
              MOVE_HAZE,
              MOVE_SCREECH,
              MOVE_THUNDER_WAVE,
              MOVE_ROCK_BLAST,
              MOVE_SNORE,
              MOVE_FLAIL,
              MOVE_WATER_SPOUT
    ),

    egg_moves(DELIBIRD,
              MOVE_AURORA_BEAM,
              MOVE_QUICK_ATTACK,
              MOVE_FUTURE_SIGHT,
              MOVE_SPLASH,
              MOVE_RAPID_SPIN,
              MOVE_ICE_BALL,
              // ICE_SHARD
              // ICE_PUNCH
              MOVE_FAKE_OUT,
              // Gen 5-7 Moves:
              MOVE_ICY_WIND,
              MOVE_DESTINY_BOND,
              MOVE_SPIKES,
              MOVE_COUNTER,
              MOVE_MEMENTO
    ),

    egg_moves(MANTINE,
              MOVE_TWISTER,
              MOVE_HYDRO_PUMP,
              MOVE_HAZE,
              MOVE_SLAM,
              MOVE_MUD_SPORT,
              MOVE_ROCK_SLIDE,
              MOVE_MIRROR_COAT,
              MOVE_WATER_SPORT,
              MOVE_SPLASH
    ),

    egg_moves(SKARMORY,
              MOVE_DRILL_PECK,
              MOVE_PURSUIT,
              MOVE_WHIRLWIND,
              MOVE_SKY_ATTACK,
              MOVE_CURSE
              // BRAVE_BIRD
              // ASSURANCE
              // GUARD_SWAP
    ),

    egg_moves(HOUNDOUR,
              MOVE_FIRE_SPIN,
              MOVE_RAGE,
              MOVE_PURSUIT,
              MOVE_COUNTER,
              MOVE_SPITE,
              MOVE_REVERSAL,
              MOVE_BEAT_UP,
              MOVE_WILL_O_WISP,
              MOVE_SKULL_BASH // [NEW]
              // FIRE_FANG
              // THUNDER_FANG
              // NASTY_PLOT
              // PUNISHMENT
              // FEINT
    ),

    egg_moves(PHANPY,
              MOVE_FOCUS_ENERGY,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_SNORE,
              MOVE_COUNTER,
              MOVE_FISSURE,
              MOVE_ENDEAVOR,
              // ICE_SHARD
              // HEAD_SMASH
              MOVE_MUD_SLAP
    ),

    egg_moves(STANTLER,
              MOVE_SPITE,
              MOVE_DISABLE,
              MOVE_BITE,
              MOVE_SWAGGER,
              MOVE_PSYCH_UP,
              MOVE_EXTRASENSORY,
              MOVE_THRASH,
              MOVE_DOUBLE_KICK,
              // ZEN_HEADBUTT
              MOVE_MEGAHORN
    ),

    // egg_moves(SMEARGLE)

    egg_moves(MILTANK,
              MOVE_PRESENT,
              MOVE_REVERSAL,
              MOVE_SEISMIC_TOSS,
              MOVE_ENDURE,
              MOVE_PSYCH_UP,
              MOVE_CURSE,
              MOVE_HELPING_HAND,
              MOVE_SLEEP_TALK,
              MOVE_DIZZY_PUNCH,
              // HAMMER_ARM
              MOVE_DOUBLE_EDGE
              // PUNISHMENT
    ),

    egg_moves(LARVITAR,
              MOVE_PURSUIT,
              MOVE_STOMP,
              MOVE_OUTRAGE,
              MOVE_FOCUS_ENERGY,
              MOVE_ANCIENT_POWER,
              MOVE_DRAGON_DANCE,
              MOVE_CURSE,
              MOVE_IRON_DEFENSE,
              // ASSURANCE
              MOVE_IRON_TAIL // [NEW:TM] IRON_HEAD
    ),

    egg_moves(TREECKO,
              MOVE_CRUNCH,
              MOVE_MUD_SPORT,
              MOVE_ENDEAVOR,
              MOVE_LEECH_SEED,
              MOVE_DRAGON_BREATH,
              MOVE_CRUSH_CLAW,
              // WORRY_SEED
              MOVE_DOUBLE_KICK,
              MOVE_GRASS_WHISTLE,
              MOVE_SYNTHESIS,
              MOVE_MAGICAL_LEAF,
              // LEAF_STORM
              MOVE_RAZOR_WIND
    ),

    egg_moves(TORCHIC,
              MOVE_COUNTER,
              MOVE_REVERSAL,
              MOVE_ENDURE,
              MOVE_SWAGGER,
              MOVE_ROCK_SLIDE,
              MOVE_SMELLING_SALT,
              // MOVE_CRUSH_CLAW, // Moved to L1
              MOVE_BATON_PASS,
              MOVE_AGILITY,
              // NIGHT_SLASH
              // LAST_RESORT
              // FEINT
              MOVE_FEATHER_DANCE
    ),

    egg_moves(MUDKIP,
              MOVE_REFRESH,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_STOMP,
              MOVE_ICE_BALL,
              MOVE_MIRROR_COAT,
              MOVE_COUNTER,
              MOVE_ANCIENT_POWER,
              MOVE_WHIRLPOOL,
              MOVE_BITE,
              MOVE_DOUBLE_EDGE,
              // MUD_BOMB
              MOVE_YAWN,
              MOVE_SLUDGE
    ),

    egg_moves(POOCHYENA,
              MOVE_ASTONISH,
              MOVE_POISON_FANG,
              MOVE_COVET,
              MOVE_LEER,
              MOVE_YAWN,
              // SUCKER_PUNCH
              // ICE_FANG
              // FIRE_FANG
              // THUNDER_FANG
              // ME_FIRST,
              MOVE_HEAL_BELL // XD-EXCLUSIVE
    ),

    egg_moves(ZIGZAGOON,
              MOVE_CHARM,
              MOVE_PURSUIT,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              MOVE_TRICK,
              MOVE_HELPING_HAND,
              MOVE_MUD_SLAP
    ),

    // egg_moves(WURMPLE),

    egg_moves(LOTAD,
              MOVE_SYNTHESIS,
              MOVE_RAZOR_LEAF,
              MOVE_SWEET_SCENT,
              MOVE_LEECH_SEED,
              MOVE_FLAIL,
              MOVE_WATER_GUN,
              MOVE_TICKLE,
              MOVE_COUNTER,
              MOVE_TEETER_DANCE
    ),

    egg_moves(SEEDOT,
              MOVE_LEECH_SEED,
              MOVE_AMNESIA,
              MOVE_QUICK_ATTACK,
              MOVE_RAZOR_WIND,
              MOVE_TAKE_DOWN,
              MOVE_FALSE_SWIPE
              // WORRY_SEED
              // NASTY_PLOT
              // POWER_SWAP
    ),

    egg_moves(TAILLOW,
              MOVE_PURSUIT,
              MOVE_SUPERSONIC,
              MOVE_REFRESH,
              MOVE_MIRROR_MOVE,
              MOVE_RAGE,
              MOVE_SKY_ATTACK,
              MOVE_WHIRLWIND
              // BRAVE_BIRD
    ),

    egg_moves(WINGULL,
              MOVE_MIST,
              MOVE_TWISTER,
              MOVE_AGILITY,
              MOVE_GUST,
              MOVE_WATER_SPORT,
              // AQUA_RING
              MOVE_KNOCK_OFF
    ),

    egg_moves(RALTS,
              MOVE_DISABLE,
              MOVE_WILL_O_WISP,
              MOVE_MEAN_LOOK,
              MOVE_MEMENTO,
              MOVE_DESTINY_BOND,
              MOVE_GRUDGE,
              // SHADOW_SNEAK
              MOVE_CONFUSE_RAY,
              MOVE_ENCORE
    ),

    egg_moves(SURSKIT,
              MOVE_FORESIGHT,
              MOVE_MUD_SHOT,
              MOVE_PSYBEAM,
              MOVE_HYDRO_PUMP,
              MOVE_MIND_READER,
              MOVE_SIGNAL_BEAM
              // BUG_BITE
    ),

    egg_moves(SHROOMISH,
              MOVE_FAKE_TEARS,
              MOVE_SWAGGER,
              MOVE_CHARM,
              MOVE_FALSE_SWIPE,
              MOVE_HELPING_HAND,
              // WORRY_SEED
              MOVE_SMELLING_SALT // [NEW] WAKE_UP_SLAP
              // SEED_BOMB
    ),

    egg_moves(SLAKOTH,
              MOVE_PURSUIT,
              MOVE_SLASH,
              MOVE_BODY_SLAM,
              MOVE_SNORE,
              MOVE_CRUSH_CLAW,
              MOVE_CURSE,
              MOVE_SLEEP_TALK
              // HAMMER_ARM
              // NIGHT_SLASH
    ),

    egg_moves(NINCADA,
              MOVE_ENDURE,
              MOVE_FAINT_ATTACK,
              MOVE_GUST,
              MOVE_SILVER_WIND
              // BUG_BUZZ
              // NIGHT_SLASH
              // BUG_BITE
    ),

    egg_moves(WHISMUR,
              MOVE_TAKE_DOWN,
              MOVE_SNORE,
              MOVE_SWAGGER,
              MOVE_EXTRASENSORY,
              MOVE_SMELLING_SALT,
              MOVE_SMOKESCREEN,
              MOVE_ENDEAVOR
              // HAMMER_ARM
    ),

    egg_moves(MAKUHITA,
              MOVE_FAINT_ATTACK,
              MOVE_DETECT,
              MOVE_FORESIGHT,
              MOVE_HELPING_HAND,
              MOVE_CROSS_CHOP,
              MOVE_REVENGE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER
              // WAKE_UP_SLAP
              // BULLET_PUNCH
              // FEINT
    ),

    egg_moves(NOSEPASS,
              MOVE_MAGNITUDE,
              MOVE_ROLLOUT,
              MOVE_EXPLOSION,
              MOVE_DOUBLE_EDGE,
              MOVE_BLOCK,
              // HEAD_SMASH
              MOVE_IRON_DEFENSE // [NEW:TUTOR]
    ),

    egg_moves(SKITTY,
              MOVE_HELPING_HAND,
              MOVE_PSYCH_UP,
              MOVE_UPROAR,
              MOVE_FAKE_TEARS,
              MOVE_WISH,
              MOVE_BATON_PASS,
              MOVE_SUBSTITUTE,
              MOVE_TICKLE,
              // LAST_RESORT
              MOVE_FAKE_OUT
              // ZEN_HEADBUTT
              // SUCKER_PUNCH
              // MUD_BOMB
    ),

    egg_moves(SABLEYE,
              MOVE_PSYCH_UP,
              MOVE_RECOVER,
              MOVE_MOONLIGHT,
              // NASTY_PLOT
              MOVE_FLATTER
              // MOVE_FEINT
    ),

    egg_moves(MAWILE,
              MOVE_SWORDS_DANCE,
              MOVE_FALSE_SWIPE,
              MOVE_POISON_FANG,
              MOVE_PSYCH_UP,
              MOVE_ANCIENT_POWER,
              MOVE_TICKLE
              // SUCKER_PUNCH
              // ICE_FANG
              // FIRE_FANG
              // THUNDER_FANG
              // PUNISHMENT
              // GUARD_SWAP
    ),

    egg_moves(ARON,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_STOMP,
              MOVE_SMELLING_SALT,
              MOVE_CURSE,
              MOVE_SCREECH
              // IRON_HEAD
              // DRAGON_RUSH
              // HEAD_SMASH
    ),

    egg_moves(MEDITITE,
              MOVE_FIRE_PUNCH,
              MOVE_THUNDER_PUNCH,
              MOVE_ICE_PUNCH,
              MOVE_FORESIGHT,
              MOVE_FAKE_OUT,
              MOVE_BATON_PASS,
              MOVE_DYNAMIC_PUNCH
              // POWER_SWAP
              // GUARD_SWAP
              // PSYCHO_CUT
              // BULLET_PUNCH
    ),

    egg_moves(ELECTRIKE,
              MOVE_CRUNCH,
              MOVE_HEADBUTT,
              MOVE_UPROAR,
              MOVE_CURSE,
              MOVE_SWIFT
              // DISCHARGE
              // ICE_FANG
              // FIRE_FANG
              // THUNDER_FANG
              // SWITCHEROO
    ),

    egg_moves(PLUSLE,
              MOVE_SUBSTITUTE,
              MOVE_WISH,
              MOVE_SING,
              MOVE_SWEET_KISS,
              // DISCHARGE
              MOVE_CHARM,
              MOVE_FAKE_TEARS,
              MOVE_REFLECT // [NEW:TM]
    ),

    egg_moves(MINUN,
              MOVE_SUBSTITUTE,
              MOVE_WISH,
              MOVE_SING,
              MOVE_SWEET_KISS,
              // DISCHARGE
              MOVE_CHARM,
              MOVE_FAKE_TEARS,
              MOVE_LIGHT_SCREEN // [NEW:TM]
    ),

    egg_moves(VOLBEAT,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_TRICK,
              MOVE_ENCORE,
              // BUG_BUZZ
              MOVE_CHARM // [NEW]
    ),

    egg_moves(ILLUMISE,
              MOVE_BATON_PASS,
              MOVE_SILVER_WIND,
              MOVE_GROWTH,
              MOVE_ENCORE,
              // BUG_BUZZ
              MOVE_CONFUSE_RAY // [NEW]
    ),

    egg_moves(ROSELIA,
              MOVE_SPIKES,
              MOVE_SYNTHESIS,
              MOVE_PIN_MISSILE,
              MOVE_COTTON_SPORE,
              MOVE_SLEEP_POWDER,
              MOVE_RAZOR_LEAF,
              MOVE_MIND_READER,
              // LEAF_STORM
              // Budew's Learnset:
              MOVE_WATER_SPORT,
              MOVE_UPROAR,
              MOVE_EXTRASENSORY
    ),

    egg_moves(GULPIN,
              MOVE_DREAM_EATER,
              MOVE_ACID_ARMOR,
              MOVE_SMOG,
              MOVE_PAIN_SPLIT,
              MOVE_CURSE,
              MOVE_DESTINY_BOND
    ),

    egg_moves(CARVANHA,
              MOVE_HYDRO_PUMP,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH,
              MOVE_ANCIENT_POWER
    ),

    egg_moves(WAILMER,
              MOVE_DOUBLE_EDGE,
              MOVE_THRASH,
              MOVE_SWAGGER,
              MOVE_SNORE,
              MOVE_SLEEP_TALK,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_TICKLE,
              MOVE_DEFENSE_CURL,
              MOVE_BODY_SLAM
              // AQUA_RING
    ),

    egg_moves(NUMEL,
              MOVE_HOWL,
              MOVE_SCARY_FACE,
              MOVE_BODY_SLAM,
              MOVE_ROLLOUT,
              MOVE_DEFENSE_CURL,
              MOVE_STOMP,
              MOVE_YAWN,
              MOVE_ANCIENT_POWER,
              // MUD_BOMB
              MOVE_HEAT_WAVE,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP
    ),

    egg_moves(TORKOAL,
              MOVE_ERUPTION,
              MOVE_ENDURE,
              MOVE_SLEEP_TALK,
              MOVE_YAWN,
              MOVE_EARTHQUAKE,
              MOVE_FISSURE,
              MOVE_SKULL_BASH
    ),

    egg_moves(SPOINK,
              MOVE_FUTURE_SIGHT,
              MOVE_EXTRASENSORY,
              MOVE_SUBSTITUTE,
              MOVE_TRICK,
              // ZEN_HEADBUTT
              MOVE_AMNESIA,
              MOVE_MIRROR_COAT
    ),

    egg_moves(SPINDA,
              MOVE_ENCORE,
              MOVE_ROCK_SLIDE,
              MOVE_ASSIST,
              MOVE_DISABLE,
              MOVE_BATON_PASS,
              MOVE_WISH,
              MOVE_TRICK,
              MOVE_SMELLING_SALT,
              MOVE_FAKE_OUT
              // ROLE_PLAY
              // PSYCHO_CUT
    ),

    egg_moves(TRAPINCH,
              MOVE_FOCUS_ENERGY,
              MOVE_QUICK_ATTACK,
              MOVE_GUST,
              MOVE_FLAIL,
              MOVE_FURY_CUTTER,
              MOVE_MUD_SHOT
    ),

    egg_moves(CACNEA,
              MOVE_GRASS_WHISTLE,
              MOVE_ACID,
              MOVE_TEETER_DANCE,
              MOVE_DYNAMIC_PUNCH,
              MOVE_COUNTER,
              MOVE_LOW_KICK,
              MOVE_SMELLING_SALT,
              MOVE_MAGICAL_LEAF
              // SEED_BOMB
              // NASTY_PLOT
    ),

    egg_moves(SWABLU,
              MOVE_AGILITY,
              MOVE_HAZE,
              MOVE_PURSUIT,
              MOVE_RAGE,
              MOVE_FEATHER_DANCE
              // DRAGON_RUSH
              // POWER_SWAP
    ),

    egg_moves(ZANGOOSE,
              MOVE_FLAIL,
              MOVE_DOUBLE_KICK,
              MOVE_RAZOR_WIND,
              MOVE_COUNTER,
              MOVE_ROAR,
              MOVE_CURSE,
              MOVE_FURY_SWIPES,
              // NIGHT_SLASH
              MOVE_METAL_CLAW,
              // DOUBLE_HIT
              MOVE_DISABLE
    ),

    egg_moves(SEVIPER,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_BODY_SLAM,
              MOVE_SCARY_FACE
              // ASURANCE
              // NIGHT_SLASH
              // SWITCHEROO
    ),

    // egg_moves(LUNATONE), // No Egg Moves (gender unknown)

    // egg_moves(SOLROCK), // No Egg Moves (gender unknown)

    egg_moves(BARBOACH,
              MOVE_THRASH,
              MOVE_WHIRLPOOL,
              MOVE_SPARK,
              MOVE_HYDRO_PUMP,
              MOVE_FLAIL,
              MOVE_TAKE_DOWN,
              MOVE_DRAGON_DANCE
    ),

    egg_moves(CORPHISH,
              MOVE_MUD_SPORT,
              MOVE_ENDEAVOR,
              MOVE_BODY_SLAM,
              MOVE_ANCIENT_POWER,
              MOVE_KNOCK_OFF,
              MOVE_SUPERPOWER,
              MOVE_METAL_CLAW,
              MOVE_DRAGON_DANCE
    ),

    // egg_moves(BALTOY), // No Egg Moves (gender unknown)

    egg_moves(LILEEP,
              MOVE_BARRIER,
              MOVE_RECOVER,
              MOVE_MIRROR_COAT,
              MOVE_ROCK_SLIDE,
              // WRING_OUT
              MOVE_TICKLE,
              MOVE_CURSE
    ),

    egg_moves(ANORITH,
              MOVE_RAPID_SPIN,
              MOVE_KNOCK_OFF,
              MOVE_SWORDS_DANCE,
              MOVE_ROCK_SLIDE,
              MOVE_SCREECH,
              MOVE_SAND_ATTACK,
              // CROSS_POISON
              MOVE_CURSE
    ),

    egg_moves(FEEBAS,
              MOVE_MIRROR_COAT,
              MOVE_DRAGON_BREATH,
              MOVE_MUD_SPORT,
              MOVE_HYPNOSIS,
              MOVE_LIGHT_SCREEN,
              MOVE_CONFUSE_RAY,
              MOVE_MIST,
              MOVE_HAZE,
              MOVE_TICKLE
    ),

    egg_moves(CASTFORM,
              MOVE_FUTURE_SIGHT,
              MOVE_PSYCH_UP,
              // LUCKY_CHANT
              MOVE_DISABLE,
              MOVE_AMNESIA
              // OMINOUS_WIND
    ),

    egg_moves(KECLEON,
              MOVE_DISABLE,
              MOVE_MAGIC_COAT,
              MOVE_TRICK,
              MOVE_FAKE_OUT,
              // NASTY_PLOT
              MOVE_DIZZY_PUNCH,
              MOVE_RECOVER
    ),

    egg_moves(SHUPPET,
              MOVE_DISABLE,
              MOVE_DESTINY_BOND,
              MOVE_FORESIGHT,
              MOVE_ASTONISH,
              MOVE_IMPRISON,
              MOVE_PURSUIT,
              // SHADOW_SNEAK
              // PAYBACK
              MOVE_CONFUSE_RAY
    ),

    egg_moves(DUSKULL,
              MOVE_IMPRISON,
              MOVE_DESTINY_BOND,
              MOVE_PAIN_SPLIT,
              MOVE_GRUDGE,
              MOVE_MEMENTO,
              MOVE_FAINT_ATTACK
              // OMINOUS_WIND
    ),

    egg_moves(TROPIUS,
              MOVE_HEADBUTT,
              MOVE_SLAM,
              MOVE_RAZOR_WIND,
              MOVE_LEECH_SEED,
              MOVE_NATURE_POWER,
              // LEAF_STORM
              MOVE_SYNTHESIS,
              MOVE_CURSE,
              MOVE_LEAF_BLADE,
              MOVE_DRAGON_DANCE
    ),

    egg_moves(CHIMECHO,
              MOVE_DISABLE,
              MOVE_CURSE,
              MOVE_HYPNOSIS,
              MOVE_DREAM_EATER,
              MOVE_WISH,
              MOVE_FUTURE_SIGHT,
              // CHINGLING MOVES:
              MOVE_SWIFT,
              MOVE_RECOVER
    ),

    egg_moves(ABSOL,
              MOVE_BATON_PASS,
              MOVE_FAINT_ATTACK,
              MOVE_DOUBLE_EDGE,
              MOVE_MAGIC_COAT,
              MOVE_CURSE,
              MOVE_SUBSTITUTE,
              MOVE_MEAN_LOOK,
              // ZEN_HEADBUTT
              // PUNISHMENT
              // SUCKER_PUNCH
              // ASSURANCE
              // ME_FIRST
              MOVE_MEGAHORN
    ),

    egg_moves(SNORUNT,
              MOVE_BLOCK,
              MOVE_SPIKES,
              MOVE_ROLLOUT,
              MOVE_DISABLE,
              MOVE_BIDE,
              MOVE_WEATHER_BALL
    ),

    egg_moves(SPHEAL,
              MOVE_WATER_SPORT,
              MOVE_STOCKPILE,
              MOVE_SWALLOW,
              MOVE_SPIT_UP,
              MOVE_YAWN,
              MOVE_ROCK_SLIDE,
              MOVE_CURSE,
              MOVE_FISSURE,
              MOVE_SIGNAL_BEAM
              // AQUA_RING
    ),

    egg_moves(CLAMPERL,
              MOVE_REFRESH,
              MOVE_MUD_SPORT,
              MOVE_BODY_SLAM,
              MOVE_SUPERSONIC,
              MOVE_BARRIER,
              MOVE_CONFUSE_RAY,
              // AQUA_RING
              MOVE_MUDDY_WATER
    ),

    egg_moves(RELICANTH,
              MOVE_MAGNITUDE,
              MOVE_SKULL_BASH,
              MOVE_WATER_SPORT,
              MOVE_AMNESIA,
              MOVE_SLEEP_TALK,
              MOVE_ROCK_SLIDE,
              // AQUA_TAIL
              MOVE_SNORE,
              MOVE_MUD_SLAP,
              MOVE_MUDDY_WATER
    ),

    egg_moves(LUVDISC,
              MOVE_SPLASH,
              MOVE_SUPERSONIC,
              MOVE_WATER_SPORT,
              MOVE_MUD_SPORT
              // CAPTIVATE
              // AQUA_RING
              // AQUA_JET
    ),

    egg_moves(BAGON,
              MOVE_HYDRO_PUMP,
              MOVE_THRASH,
              MOVE_DRAGON_RAGE,
              MOVE_TWISTER,
              MOVE_DRAGON_DANCE
              // FIRE_FANG
              // SHADOW_CLAW
              // DRAGON_RUSH
    ),

    // egg_moves(BELDUM), // No Egg Moves (gender unknown)

    EGG_MOVES_TERMINATOR
};
