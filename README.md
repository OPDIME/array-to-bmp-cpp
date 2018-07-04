# arrayToBMP
A simple library to save color-arrays represented as 24bit-integer-arrays as BMPs in C++, 
easy to use and easy to include since its only one header file!

rrayToBmp.hpp
purpose: Save an RGB24 array to an uncompressed BMP file, 
with inbuild file-checking and copy-management!
llicense: Licensed under the no-license-license.
author: Marius Zander
version: 1.1 04/07/18


Copy and paste arrayToBmp.hpp into your project, and include it with #include "arrayToBmp.hpp".
Then use the arrayToBMP function to write your BMP! Easy as that. The Color values are basicly integers, 
just like HTML rgb values. E.g.: 0xFFFFFF for white, or 0xFF0000 for red.
If you have trouble converting integers to RGB24 values, use the getColor function, which returns an rgb24_t value, 
with given R, G and B values.




