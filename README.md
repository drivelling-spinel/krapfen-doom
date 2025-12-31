## Buck
... is limit removing Doom source port for DOS and x86 compatible computers
forked from Marine's Best Friend and dropping many _"advanced"_ features, while retaining stability and performance improvements.

The method for achieving this is via annotating source code with C preprocessor \#ifdef blocks controlled by a set of macrodefs, 
allowing for inclusion/exclusion of features during the build time.

Included is a limited set of features from other ports (see [PATCHES.H](FEATURES/PATCHES.H)),
amd patches for better demo playback compatibility with vanilla Doom,
and better hardware/OS compatibility.

The port should run on any machinve compatible with MBF 2.04 as of 2025, e.g. 80486-based and above. 
Notable are `-noasm` and `-noasmx` command line arguments (originating from MBF 2.04) to use compiler optimized C-versions of renderer loop and blast functions.

The set of "features" is fluid and documentation will not be updated every time something changes. 
Please examine header files under [FEATURES](FEATURES).

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
  

## Dependencies

Requires liballeg 3.
With PERIDOT defined requires this [patched version](https://github.com/drivelling-spinel/alleg30b).

## License

Not changing anything from MBF.
See [COPYING](COPYING) included.
