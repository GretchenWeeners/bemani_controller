
**Simple Beatmania controller using an Arduino Leonardo**

Parts required:
- Arduino Leonardo (or equivalent)
- 7x Momentary switches / Arcade buttons
- Wire


Directions:

 - Wire up a few switches / buttons (I used arcade buttons) per the schematic:
	![schematic](https://raw.githubusercontent.com/GretchenWeeners/bemani_controller/master/Schematic.png)
 
 - Edit [Beatmania_controller.ino](https://github.com/GretchenWeeners/bemani_controller/blob/master/Beatmania_controller.ino) to your preferred key-mapping:
	- Include a single quote around ASCII characters
	- Refer to [Arduino documentation](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/) for for special keys / modifiers
	
		>char KeyBlue1 = `KEY_LEFT_CTRL`;
	
		>char KeyBlue2 = `' '`;
	
		>char KeyBlue3 = `'z'`;
	
		>char KeyRed1 = `KEY_LEFT_ALT`;
	
		>char KeyRed2 = `KEY_LEFT_SHIFT`;
	
		>char KeyYellow1 = `KEY_LEFT_ARROW`;
	
		>char KeyYellow2 = `KEY_RIGHT_ARROW`;
	
- Upload `Beatmania_controller.ino` to your Arduino 
- ???
- Profit





