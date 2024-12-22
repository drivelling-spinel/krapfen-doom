## Krapfen Doom
(abbreviated _krfn._) is Doom source port for DOS and x86 compatible computers
originating from Marine's Best Friend and aiming for a more conservative set of features,
while retaining stability and performance improvements.

The method for achieving this is by annotating source code with C preprocessor
\#ifdef blocks controlled by a set of macrodefs, allowing for inclusion/exclusion
of features during the build time.
  

The port will generally _not_ include anything new except for
a limited set of changes from other ports/forks (see [PATCHES.H](FEATURES/PATCHES.H)),
patches for better demo playback compatibility with vanilla Doom,
or better hardware/OS compatibility.

It also retains what has become to be regarded as a "modern sensibility".
The port should run on any machinve compatible with MBF 2.04 as of 2024,
e.g. 80486-based and above.

The set of "features" is fluid and documentation will not be updated every time
something changes. Rather please examine header file contents under [FEATURES](FEATURES).

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
  

==Dependencies==

Requires liballeg 3.
With PERIDOT defined requires this [patched version](https://github.com/drivelling-spinel/alleg30b).

==License==

Not changing anything from MBF.
See [COPYING](COPYING) included.
