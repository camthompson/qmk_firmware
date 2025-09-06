# QMK Firmware

## Installation

1. Install QMK: `brew install qmk/qmk/qmk`
2. If you're on an M[\d] Mac, install Rosetta: `softwareupdate --install-rosetta`
3. Install build dependencies: `qmk setup`

## Keeping Up-to-date

1. `git remote add upstream git@github.com:qmk/qmk_firmware.git`
2. `git fetch upstream`
3. `git rebase upstream/master`

## Compiling Moonlander Firmware

1. `make zsa/moonlander:cam:flash`
2. Push the reset button the keyboard with a paper clip

## Deprecated

These haven't been updated in a looooong time :)

### Ergodox EZ

1. `make ergodox_ez:cam`
2. Quit Karabiner Elements if it's running
3. `teensy_loader_cli -mmcu=atmega32u4 -w ergodox_ez_cam.hex`
4. Push the reset button the keyboard with a paper clip

### Massdrop ALT

1. Download [mdloader](https://github.com/Massdrop/mdloader/releases) and `applet-flash-samd51j18a.bin`
1. `make massdrop/alt:cam`
1. Push reset button on bottom of keyboard with a paper clip
1. `mdloader --first --download .build/massdrop_alt_cam.bin --restart`
