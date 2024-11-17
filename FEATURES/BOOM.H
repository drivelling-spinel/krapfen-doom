#ifndef __FEATURES_BOOM_
#define __FEATURES_BOOM_

// REMEMEBR    - whether monsters remember last enemy
#define REMEMBER

// CHEATBOM    - controls if cheat codes introduced by BOOM are available
#define CHEATBOOM

// RECOIL      - controls if weapon recoil is available
#define RECOIL

// BOBBING     - whether player bobbing is configurable 
#define BOBBING

// FRICTION    - whether variable friction physics is supported (not implemented)
#define FRICTION

// PUSHER      - controls pushers code, states, etc. (not implemented)
#define PUSHER

// GENERALIZED - whether generalized linedefs are supported
#define GENERALIZED

// WEAPONBOOM  - whether favourite weapons list can be configured
#define WEAPONBOOM

// V11V12LUMPS - inclusion of lumps missing from
// TODO: remove altogether in the future, as these are commercially 
//       licensed resources likely taken directly from IWAD -- LP 2024
#define V11V12LUMPS

// PCXSSHOT    - ability to take screenshots in PCX format
#define PCXSSHOT

// TRADKEY     - whether to support alternative graphics in HUD
//               for when carrying both keycard and skull key
#define TRADKEY

// TRIGGERBOOM - whether to check for additional triggers
//               and include silent teleportes support
#define TIRGGERBOOM

// SCROLLBOOM  - whether to inclue extended scrollers support
//               incl. for handling voodoo scripting belts
#define SCROLLBOOM

// DEEPWATER   - deep water and custom colormaps supported
#define DEEPWATER

// LIGHTTRANSFER - whether to support referencing floor and ceiling
//                 light level from another sector
#define LIGHTTRANSFER

// MESSAGEBG   - support for showing multiline messages wiget
//               with non-transparent background
#define MESSAGEBG

#if (defined(PUSHERS) || defined(FRICTION) || defined(SCROLLBOOM)) && !defined(GENERALIZED)
#define GENERALIZED
#endif

#endif
