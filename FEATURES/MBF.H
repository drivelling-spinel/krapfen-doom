#ifndef __FEATURES_MBF_
#define __FEATURES_MBF_

// new features; comment out what you don't want at the moment
// CFLAGS_NEWFEATURES = -DDOGS -DBETA -DV12C -DCALT

// DOGS        - Friendly helper dogs,
#define DOGS

// BETA        - Doom beta version emulation
#define BETA

// V12C        - Doom v1.2 Sight Routines (Demo compat)
#define V12C

// CALT        - Alternate GFX procedures in C, for noasm parameter.
#define CALT


// SSGD1       - enable super shotgun also in Doom 1
#define SSGD1


// MAXCORPSE   - when enabled allow configurable value for max_players_corpse
//               (number of dead bodies in view supported)
//               othwerwise set to 32 in g_game.c
//#define MAXCORPSE

// DISKICON    - whether to flash disk icon during IO operations
//               (currently defunct)
//#define DISKICON

// FRIENDMOBJ  - flags, features and code pointers related to friendly
//             monster behavior
#define FRIENDMOBJ

// SMARTMOBJ   - advanced monster behaviour introduced in MBF
#define SMARTMOBJ

// PRELOAD     - deh and wad preloading via config
#define PRELOAD

// PHYSMBF     - sticky, bouncy objects, drop-offs, torque
#define MBFPHYS

// CPTRMBF     - additional code pointers
#define CPTRMBF

// MUSHROOM    - MBF mushroom explosion
#define MUSHROOM

// GRENADE     - grenades, mines, etc
#define GRENADE

// SKYTRANSFER - special sectors types that transfer sky texture from sidedefs
#define SKYTRANSFER

// CHEATMBF    - enables "nuke" cheat controlling if nuke does damage
#define CHEATMBF

// CREDITS     - whether to draw MBF credits in title screen sequence;
//               otherwise draws help screens in "classic" Doom order       
#define CREDITS

// DOGS assumes that FRIENDMOBJ is enabled
#if defined(DOGS) && !defined(FRIENDMOBJ)
#define FRIENDMOBJ
// FIXME: FRIENDMOBJ may assume that REMEMBER is enabled
#endif

// BETA assumes that PHYSMBF is enabled
#if defined(BETA) && !defined(PYSMBF)
#define PHYSMBF
#endif


#endif
