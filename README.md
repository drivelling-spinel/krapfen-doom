## Buck
... is a limit removing Doom source port for x86 compatible computers running DOS.


The focus of the port are basic Doom features, offered in a compact and performant package,
that runs smoothly on modern hardware (when it supports DOS), and is rooted in FOSS code base.
It also allows playing later Doom map packs, such as Sigil or SIGIL II,
that were created without considering original Doom executable limitation.

Buck is forked from Marine's Best Friend (in turn forked from BOOM), namely 2.04 "maintenance" version,
and includes contributions to MBF by the community. See Credits section below for the list of authors,
whose code has been included in Buck's.

### What Buck has that MBF doesn't

* Support for direct loading of WADS created with NWT (New WAD Tool),
  such as The Trooper's Playground, Mordeth or Obituary
* Support for loading of high precision map data for "fireline"-free experience  
  (when used in conjunction wtih [this node builder](https://github.com/drivelling-spinel/BSP))
* Aspect correcting renderer output for more coherent resulting image on modern displays
* Support for placing Doom II monster spawner with Doom WAD-s loaded
* Relaxed E1M8 [victory condition check](https://doomwiki.org/wiki/Tag_666#Difference_in_behaviour_between_Doom1_and_Ultimate_Doom) 
  for compatibiltiy with pre-Ultumate Doom WAD-s 
* Smarter handling of Doom stair building method for compatibility with Final Doom demos
* Compatibility with pre-Ultimate Doom demos [lost souls bouncing](https://doomwiki.org/wiki/Demo_desyncing_caused_by_bouncing_lost_souls)
* Compatibility with Final Doom demos [teleporter behavior](https://doomwiki.org/wiki/Final_Doom_teleporters_do_not_set_Z_coordinate)
* Blinking disk icon loading indicator (it "disappeared" in v. 2.04)
* Ability to load mods created with Ultimate Doom using registered Doom IWAD
* Reading soundcard configuration from Doom's own DEFAULT.CFG file,   
  defined using ID's own SETUP.EXE
* Higher fidelity FM music playback and loading of OPL instruments from WAD-s
* Small touches here and there to closer match original Doom, 
  or for more player-friendly experience

### What Buck retains from MBF (and BOOM)

* Support for processing DeHackEd and BEX patches
* Engine performance and stability improvements (e.g. for "medusa", "venetian blinds", "tutti-frutti", "visplane overflows")
* Menu system 
* BOOM style full screen HUD 
* Array of bugfixes, togglable via compatibility system; to cite the menus:
  * Any monster can telefrag on MAP30
  * Objects don't fall under their own weight
  * Monsters randomly walk off of moving lifts
  * Monsters get stuck on doortracks
  * Arch-Vile resurrects invincible ghosts
  * Pain Elemental limited to 20 lost souls
  * Lost souls get stuck behind walls
  * Blazing doors make double closing sounds
  * Tagged doors don't trigger special lighting
  * God mode isn't absolute
  * Powerup cheats are not infinite duration
  * Zombie players can exit levels
  * Sky is unaffected by invulnerability
  * Creatures with no spawnpoint respawn at 0,0 

### Which MBF (and BOOM) features have been removed

Dogs, "press release beta" support, friendly monsters, monsters helping others and more monster intelligence improvements,
sliding, dropoff torque, bouncing and other advanced physics, grenades, mushroom explosion and other MBF-specific code pointers,
additional MBF and BOOM cheat codes, slime trail and texture assignment errors doctoring, specters alternative "fuzzy" effect,
gradual light changes when opening doors, transucency and high resolution (640x400) supoprt,
per sector sky texture customization, weapons preferences list, firing recoil, screen bobbing tweaking,
monsters chasing last enemy, generalized "special events" system, prorietary assets for compatibility with earlier Doom versions,
screenshots in PCX format, silent teleporters and additional BOOM triggers, combined keycard+skullkey status display,
textured messages widget, hall of mirrors indicator, definition of switch and animated textures per WAD,
status bar numbers coloring, advanced scrolling textures support, variable floor friction, pushable map objects,
deep (i.e. "overhead") water effect and possibility for sectors to use light level from other sectors, variable pitch for sound effects.

Also version 2.04 introduced features are out: Doom 1.2 demo compatibility, super shotgun in Doom 1

### Whcih WAD-s is Buck compatible with

Generally, WADs from 1994 - 1997 should work, as well as those from later, which are earnestly described as
"vanilla compatible" or as requiring "limit removing" source port. Maps that have been produced by Master Levels for Doom II authors,
the Innocent Crew, as well Sigil, Sigil II and No Rest for the Living should work.

On the other hand, anything which requires explicitly BOOM, MBF, or more recently invented capabilities will likely not work.

Issues will likely be experienced with WAD-s that:
* creatively employ original Doom visual glitches, such as "medusa" or "tutti-frutti"
* use DeHackEd to modify Doom executable where BOOM/MBF code does not expect them to
* depend on effects like [spechit overflow](https://doomwiki.org/wiki/Spechits_overflow) 
  (e.g. MAP07 from [Strain](https://doomwiki.org/w/index.php?title=STRAIN)) 
* include sound, music or image media in modern formats (``OGG``, ``WAV``, ``RIFF MIDI``, ``PNG`` and so on) 

Some WAD-s are presented as "limit removing" or "vanilla comptible", yet have only beeen tested with modern source ports.
When a WAD includes non power-of-two sized textures, screen fonts which are not 8 pixel high, unexpected MIDI data chunks,
or uses "blank" values for _defautl_ sounds, music or inside texture definitions, Buck will most likely not load it correctly.


## Technical notes

With Buck, nothing that has been removed from MBF code is gone forever. 
The method here is annotating source code with C preprocessor \#ifdef blocks controlled by a set of macrodefs,
allowing for inclusion/exclusion of features during the build time.


The set of "features" is fluid and documentation is not updated every time something changes.
One can themselves examine header files under [FEATURES](FEATURES) to see what's enabled and what's not.


For example aspect correcting code can be switched from 16:10 to 16:9 target display geometry,
by uncommenting ```#define ASPECT16x9``` in [FEATURES/KRFN.H](FEATURES/KRFN.H).


Worth noting is that internally Buck, unlike MBF and Boom, does not categorize WAD lumps into "namespaces".


The port should run on any machine compatible with MBF 2.04 as of 2020-s, e.g. 80486-based and above. 


Notable are `-noasm` and `-noasmx` command line arguments (originating from MBF 2.04)
that instruct the enigine to use compiler optimized C-versions of column rendering and blast functions,
which perform better on modern systems than original assembly language routines.

### Dependencies

Requires liballeg 3.
With ```PERIDOT``` defined requires this [patched version](https://github.com/drivelling-spinel/alleg30b).



## Credits

* John Carmack
* John Romero
* Dave Taylor


   
* Bernd Kreimeier


   
* Chi Hoang


   
* Phill Harvey-Smith


   
* Lee Killough
* Jim Flynn
* Rand Phares
* Ty Halderman
* Stan Gula


   
* Lee Killough
* Joel Murdoch


   
* Simon Howard
* Colin Phipps
* Andrey Budko
* @gerwin


   
* @sakitoshi
* @CRVS
* @dgondos
* @Ludicrous_peridot


## License

Not changing anything from MBF.
See [COPYING](COPYING) included.
