# arrayToBMP
A simple library to save color-arrays represented as 24bit-integer-arrays as BMPs in C++, 
easy to use and easy to include since its only one header file!

# HOW TO USE
Copy and paste arrayToBmp.hpp into your project, and include it with #include "arrayToBmp.hpp".
Then use the arrayToBMP function to write your BMP! Easy as that. The Color values are basicly integers, 
just like HTML rgb values. E.g.: 0xFFFFFF for white, or 0xFF0000 for red.
If you have trouble converting integers to RGB24 values, use the getColor function, which returns an rgb24_t value, 
with given R, G and B values.

# TYPES
* byte_t  - One byte, 0x00 - 0xFF basicly an unsigned char.
* rgb24_t - Three bytes, 0x000000 - 0xFFFFFF.

# FUNCTIOS
* ArrayToBMP - ArrayToBMP writes a BMP file to the destinated path.
* getColor   - getColor returns an rgb24 value given the R, G, and B values.
	

# CREDITS 
* Author: Marius Zander
* License: Licensed under the no-license-license.







