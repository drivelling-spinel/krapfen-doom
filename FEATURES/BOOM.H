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
//#define FRICTION

// PUSHERS     - controls pushers code, states, etc. (not implemented)
//#define PUSHERS

// GENERALIZED - whether generalized linedefs are supported
#define GENERALIZED

// WEAPONBOOM  - whether favourite weapons list can be configured
#define WEAPONBOOM

// V11V12LUMPS - inclusion of lumps missing from
// TODO: remove altogether in the future, as these are commercially 
//       licensed resources likely taken directly from IWAD -- LP 2024
#define V11V12LUMPS

#if (defined(PUSHERS) || defined(FRICTION)) && !defined(GENERALIZED)
#define GENERALIZED
#endif


#endif
