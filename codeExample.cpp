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
						 crimson, magenta,	 magenta };

	size_t pixelsWidth = 3; 	// Width of our pixel-array.
	size_t pixelsHeight = 3;	// Height of our pixel-array.
	
	// Save the array as BMP.
	arrayToBMP::ArrayToBMP(pixels, pixelsWidth, pixelsHeight, path);

	return 0;
}
