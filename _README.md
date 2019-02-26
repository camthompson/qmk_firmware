# Ergodox EZ
1. `make ergodox_ez:new_cam`
2. `teensy_loader_cli -mmcu=atmega32u4 -w ergodox_ez_new_cam.hex`
3. Push the reset button the keyboard with a paper clip

# Massdrop ALT
1. `make massdrop/alt:cam`
2. Push reset button on bottom of keyboard with a paper clip
3. `./mdloader_mac --first --download massdrop_alt_cam.bin --restart`
