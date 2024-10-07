# Installation
1. Install QMK: `brew install qmk/qmk/qmk`
2. If you're on an M{1,2} Mac, install Rosetta: `softwareupdate --install-rosetta`
3. Install build dependencies: `qmk setup`

# Compiling Moonlander Firmware
1. `qmk compile -kb moonlander -km cam`
2. `make zsa/moonlander:cam:flash`
3. Push the reset button the keyboard with a paper clip

# Deprecated
## Ergodox EZ
1. `make ergodox_ez:cam`
2. Quit Karabiner Elements if it's running
3. `teensy_loader_cli -mmcu=atmega32u4 -w ergodox_ez_cam.hex`
4. Push the reset button the keyboard with a paper clip

## Massdrop ALT
1. Download [mdloader](https://github.com/Massdrop/mdloader/releases) and `applet-flash-samd51j18a.bin`
1. `make massdrop/alt:cam`
2. Push reset button on bottom of keyboard with a paper clip
3. `mdloader --first --download .build/massdrop_alt_cam.bin --restart`
