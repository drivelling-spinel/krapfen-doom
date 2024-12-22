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

// SLIMEOPT     - make slime trails removal optional
//#define SLIMEOPT

// D1BRAN       - allow spawning "brain targets" in Doom 1
//                like vanilla did
//#define D1BRAIN

#if defined(STAIRVERSION) && !defined(COMPSTAIR)
#define COMPSTAIR
#endif

#if defined(SLIMEOPT) && !defined(REMOVESLIME)
#define REMOVESLIME
#endif

#endif
