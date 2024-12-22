#ifndef __FEATURES_PATCHES_
#define __FEATURES_PATCHES_

// SAKITOSHI    - Sigil, NRfTL level progression, names and ending texts
//#define SAKITOSHI

// MAPCOORD     - Ability to switch off coordinates displayed on the automap
//                also introduced into MBF by sakitoshi.
#define MAPCOORD

// CRVS         - Vodoo hires, memory allocation and some other fixes
#define CRVS

// DGONDOS      - SIGIL II support
//#define DGONDOS

// PERIDOT      - GENMIDI lump and double voiced instrument support with OPL
//                as well as random fixes here and there, e.g. for ENDOOM
//#define PERIDOT

// SOULBOUNCE   - compatibility settings for Lost Souls bouncing off the
//                off the floors backported from Eternity Engine
#define SOULBOUNCE

// FIRELINEFIX  - BOOM way of dealing with slime trails, as implemented
//                by Rand Phares for BOOM 2.02
#define FIRELINEFIX


#if defined(DGONDOS) && !defined(SAKITOSHI)
#define SAKITOSHI
#endif

#endif
