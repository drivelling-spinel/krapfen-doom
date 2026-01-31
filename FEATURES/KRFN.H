#ifndef __FEATURES_KRFN_
#define __FEATURES_KRFN_

// KRFNDFLT     - use defaults for options which are closer to vanilla
//                except some which are not (e.g. prefer BMP screenshots)
#define KRFNDFLT

// KRFNSLIM     - remove some of the less frequently used bits an pieces
#define KRFNSLIM

// AIRTELEPT    - whether to include compatibility with Final Doom
//                teleport bug, also adds comp_airteleport to toggle
#define AIRTELEPT

// BRUISEROPT   - whether to include compatibility with pre-Final Doom
//                behavior of E1M8 completion trigger
#define BRUISEROPT

// USEVESA      - adds option to enable/disable search for VESA modes
#define USEVESA

// BOOM202      - BOOM 2.02 compatibility tweak for stairbuilding code
//               
//#define BOOM202

// STAIRVERSION - add more sophisticated stair building compatibility
//                logic to help with Final Doom demos
#define STAIRVERSION

// ONEOFFREVIEW - option to play with classic Doom messages, but
//                invoke one off message review mode any time with Enter
#define ONEOFFREVIEW

// DEFAULTCFG   - if Allegro setup.cfg is absent, try using Doom's own
//                default.cfg
#define DEFAULTCFG

// SLIMEOPT     - make slime trails removal optional
//#define SLIMEOPT

// D1BRAIN      - allow spawning "brain targets" in Doom 1
//                like vanilla did
#define D1BRAIN

// WADMERGE     - look for sprites and flats outside of index markers;
//                allows adding assets from PWAD-s without a need to
//                run `deusf -apend` or `nwt -merge`
#define WADMERGE

// COMPACTMNU   - try to push all menu items under General into one sceen
#define COMPACTMNU

// ASPECTCORRECT - adjust renderer output for widescreen displays
#define ASPECTCORRECT

// ASPECT16x9    - tailor output to a 16x9 screen; when not defined use 16x10
//#define ASPECT16x9

// CONTRASTHUD   - make BOOM-stlye widgets more contrast by default 
#define CONTRASTHUD

// TOLERATESKY4  - when defined don't choke on loading TEXTURES/2 
//                 with SKY4 when running registerd version of Doom
#define TOLERATESKY4

#if defined(STAIRVERSION) && !defined(COMPSTAIR)
#define COMPSTAIR
#endif

#if defined(SLIMEOPT) && !defined(REMOVESLIME)
#define REMOVESLIME
#endif

#if defined(CONTRASTHUD) && !defined(HUDBOOM)
#define HUDBOOM
#endif

#if defined(ASEPCT16x9) && !defined(ASPECTCORRECT)
#define ASPECTCORRECT
#endif

#endif
