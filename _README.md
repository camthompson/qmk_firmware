# Ergodox EZ
1. `make ergodox_ez:cam`
2. Quit Karabiner Elements if it's running
3. `teensy_loader_cli -mmcu=atmega32u4 -w .build/ergodox_ez_cam.hex`
4. Push the reset button the keyboard with a paper clip

# Massdrop ALT
1. Download [mdloader](https://github.com/Massdrop/mdloader/releases) and `applet-flash-samd51j18a.bin`
1. `make massdrop/alt:cam`
2. Push reset button on bottom of keyboard with a paper clip
3. `mdloader --first --download .build/massdrop_alt_cam.bin --restart`

# Moonlander
1. `make moonlander:cam`
2. `make moonlander:cam:flash`
3. Push the reset button the keyboard with a paper clip
