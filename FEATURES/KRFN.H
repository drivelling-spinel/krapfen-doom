#ifndef __FEATURES_KRFN_
#define __FEATURES_KRFN_

// KRFNDFLT     - use defaults for options which are closer to vanilla
//               except some which are not (e.g. prefer BMP screenshots)
#define KRFNDFLT

// KRFNSLIM     - remove some of the less frequently used bits an pieces
#define KRFNSLIM

// AIRTELEPT    - whether to include compatibility with Final Doom
//               teleport bug, also adds comp_airteleport to toggle
#define AIRTELEPT

// USEVESA      - adds option to enable/disable search for VESA modes
#define USEVESA

// BOOM202      - BOOM 2.02 compatibility tweak for stairbuilding code
//               
#define BOOM202

// STAIRVERSION - add more sophisticated stair building compatibility
//                logic to help with Final Doom demos
#define STAIRVERSION

// ONEOFFREVIEW - option to play with classic Doom messages, but
//                invoke one off message review mode any time with Enter
//#define ONEOFFREVIEW

// DEFAULTCFG   - if Allegro setup.cfg is absent, try using Doom's own
//                default.cfg
//#define DEFAULTCFG

// SLIMEPARM    - make MBF fix for slime trails only apply when command
//                line arguments -fixslime or -fixslime1 are specified
#define SLIMEPARM

// FIRELINEPARM - make BOOM fix for slime trails / firelines only apply
//                when command line argument -fixslime2 is specified
//#define FIRELINEPARM

// RECALCANGLE - do not trust angles found in seg definitions of maps
#define RECALCANGLE

#if defined(STAIRVERSION) && !defined(COMPSTAIR)
#define COMPSTAIR
#endif

#if defined(SLIMEPARM) && !defined(REMOVESLIME)
#define REMOVESLIME
#endif

#if defined(FIRELINEPARM) && !defined(FIRELINEFIX)
#define FIRELINEFIX
#endif

#endif
