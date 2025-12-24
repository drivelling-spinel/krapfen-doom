#ifndef __FEATURES_MBF_
#define __FEATURES_MBF_

// new features; comment out what you don't want at the moment
// CFLAGS_NEWFEATURES = -DDOGS -DBETA -DV12C -DCALT

// DOGS        - Friendly helper dogs,
//               includes dogs sprites and sounds among other things
//               TODO: remove the assets from source as this likely are
//               based on commercially licensed Wolfenstein assets -- LP 2024
//#define DOGS
 
// BETA        - Doom beta version emulation
//#define BETA

// V12C        - Doom v1.2 Sight Routines (Demo compat)
//#define V12C

// CALT        - Alternate GFX procedures in C, for noasm parameter.
#define CALT

// SSGD1       - enable super shotgun also in Doom 1
//#define SSGD1

// MAXCORPSE   - when enabled allow configurable value for max_players_corpse
//               (number of dead bodies in view supported)
//               othwerwise set to 32 in g_game.c
//#define MAXCORPSE

// DISKICON    - whether to flash disk icon during IO operations
//               (currently defunct)
//#define DISKICON

// FRIENDMOBJ  - flags, features and code pointers related to friendly
//             monster behavior
//#define FRIENDMOBJ

// SMARTMOBJ   - advanced monster behaviour introduced in MBF
//#define SMARTMOBJ

// PRELOAD     - deh and wad preloading via config
//#define PRELOAD

// PHYSMBF     - monsters sliding on ice, bouncy objects, dropoff torque, etc
//#define PHYSMBF

// CPTRMBF     - additional code pointers
//#define CPTRMBF

// MUSHROOM    - MBF mushroom explosion
//#define MUSHROOM

// GRENADE     - grenades, mines, etc
//#define GRENADE

// SKYTRANSFER - special sectors types that transfer sky texture from sidedefs
//#define SKYTRANSFER

// CHEATMBF    - enables "nuke" cheat controlling if nuke does damage
//#define CHEATMBF

// CREDITS     - whether to draw MBF credits in title screen sequence;
//               otherwise draws help screens in "classic" Doom order       
//#define CREDITS

// WEAPONMBF   - inclusion of weapon UX tweaks, such if 1 and 3 toggle
//               respectively fist/chainsaw and shotgun/SSG, and so on
//#define WEAPONMBF

// REMOVESLIME - whether to tweak level geometry in order to remove slime
//               trails; sadly, sometimes introduces artifacts, e.g.
//               Plutonia MAP02
//#define REMOVESLIME

// COMMONERROR - fix common wad errors (missing sidedefs)
//#define COMMONERROR

// COMPSTAIR   - Compatibility option for building stairs
//               "exactly the same way that Doom does";
//               when not defined always attempt the "exatly the same" way
#define COMPSTAIR

// LOWDET      - Support for dynamic switching of low detail
//               with keypress as in original Doom
#define LOWDET

// FUZZMBF     - MBF changes to Specter "fuzz" effect
//               (i.e. @fraggle's fix on top original MBF code);
//               when disable attempt to behave closer to vanilla Doom
//#define FUZZMBF

// GRADLIGHT   - gadual lighting effects for when opening/closing doors
//#define GRADLIGHT

// SNDPITCH    - imitate v1.1 random sound effects pitch 
//#define SNDPITCH

// TRANSLPCT   - technically a feature implemented in MBF
//relies on TRANSLUCENT being set, but both are intentionally never def-ed

// HIRES       - hires support in game engine (but not platform code)
//is intentionally not defined anywhere

// DOGS assumes that FRIENDMOBJ is enabled
#if defined(DOGS) && !defined(FRIENDMOBJ)
#define FRIENDMOBJ
#endif

// BETA assumes that PHYSMBF is enabled
#if defined(BETA) && !defined(PYSMBF)
#define PHYSMBF
#endif

// Support for variable friction from BOOM is a prerequisite
#if defined(PHYSMBF) && !defined(FRICTION)
#define FRICTION
#define GENERALIZED
#endif

// One may need those missing lumps for 1.1 and 1.2 
#if defined(V12C) && !defined(V11V12LUMPS)
#define V11V12LUMPS
#endif

// The way toggle check is made it is only reaonsable to offer
// it to the player as an option when weapon preferencies are available
#if defined(WEAPONMBF) && !defined(WEAPONBOOM)
#define WEAPONBOOM
#endif

#if defined(LOWDET) && !defined(CALT)
#define CALT
#endif

#endif
