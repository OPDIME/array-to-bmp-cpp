# `arrayToBMP`
A simple library to save color-arrays represented as 24bit-integer-arrays as BMPs in C++, 
easy to use and easy to include since its only one header file!

# HOW TO USE
Copy and paste arrayToBmp.hpp into your project, and include it with #include "arrayToBmp.hpp".
Then use the arrayToBMP function to write your BMP! Easy as that. The Color values are basicly integers, 
just like HTML rgb values. E.g.: 0xFFFFFF for white, or 0xFF0000 for red.
If you have trouble converting integers to RGB24 values, use the getColor function, which returns an rgb24_t value, 
with given R, G and B values.

# `CODE` EXAMPLES
The following code will show how simple it is to save an BMP-file:
```cpp
#include "arrayToBMP.h"

int main()
{
	// The path we will save to. Would also work with "bar" instead of "bar.bmp".
	const char* path = ".\\foo\\bar.bmp";	

	// Define some colors with the getColor function.
	rgb24_t crimson = arrayToBMP::getColor(220, 20, 60);
	rgb24_t magenta = arrayToBMP::getColor(255, 0, 255);

	// Define some colors without getColor
	rgb24_t coral = 0xFF7F50;
	rgb24_t cadetBlue = 0x5F9EA0;

	// Our color-array we want to save. Every value is a pixel in the BMP
	rgb24_t pixels[] = { crimson, coral,	 magenta,
						 crimson, cadetBlue, magenta,
						 crimson, magenta,   magenta };

	size_t pixelsWidth = 3; 	// Width of our pixel-array.
	size_t pixelsHeight = 3;	// Height of our pixel-array.
	
	// Save the array as BMP.
	arrayToBMP::ArrayToBMP(pixels, pixelsWidth, pixelsHeight, path);

	return 0;
}
```

# TYPES
* `byte_t`  - One byte, 0x00 - 0xFF.
* `rgb24_t` - Three bytes, 0x000000 - 0xFFFFFF.

# FUNCTIOS
* `ArrayToBMP` - ArrayToBMP writes a BMP file to the destinated path.
* `getColor`   - getColor returns an rgb24 value given the R, G, and B values.

# CREDITS 
* Author: Marius Zander
* License: Licensed under the no-license-license.







