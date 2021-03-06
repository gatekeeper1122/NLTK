# NLTK - New Leaf ToolKit [![Build status](https://ci.appveyor.com/api/projects/status/dvqruc40q9fyes5r/branch/master?svg=true)](https://ci.appveyor.com/project/Slattz/nltk/branch/master)

A WIP ACNL Toolkit without the hassle of taking out your SD card. 

The main developers of this project are [Slattz](https://github.com/Slattz) and [Cuyler](https://github.com/Cuyler36). 

[![Discord](https://discordapp.com/api/guilds/437592048057450508/widget.png?style=banner2)](https://discord.gg/j2VUBBv)


## Features
* WIP Save Editor
* Fix the region of saves in the Save Editor. This allows you to boot out of region saves.
* Hassle Free Auto-Updater


## Installation
##### For CFW Users:
1. Install `NLTK.cia` using FBI.
2. You're done, it's that easy. If you choose to enable the Auto Updater, the app will automatically update on start-up, hassle-free.

##### For Original HBL Users:
1. Copy `SNLT.3dsx` to `SD:/3ds/NLTK/`.
2. Launch the HBL using your entrypoint of choice.
3. Click on NLTK, then select your ACNL game.
4. You're done, it's that easy. If you choose to enable the Auto Updater, the app will automatically update on start-up, hassle-free.

##### For Rosalina HBL Users:
* Sorry, but this isn't and won't be supported. Since you already have CFW, please refer to [For CFW Users](#for-cfw-users).


## Building
### Requirements
- First of all, make sure devkitPro is properly installed and added to your PATH.
- Using [devkitPro's pacman](https://devkitpro.org/viewtopic.php?f=13&t=8702), install the following dkP packages: `3ds-curl`, `3ds-mbedtls`, `3ds-libjpeg-turbo`, `3ds-zlib`, `3ds-freetype`, `3ds-jansson`.
- [makerom](http://3dbrew.org/wiki/Makerom) and [bannertool](https://github.com/Steveice10/bannertool) somewhere in your `PATH` environment


Enter the NLTK directory and run `make` in your command line/terminal. Provided you have all the requirements, `NLTK.cia` and `NLTK.3dsx` should be outputted to `/out`.
