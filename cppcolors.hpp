/*
Version 2
Cpp Colors -- by Cactical
A file with ANSI escape colors codes mapped to variables that can be used to color text.

Made with love :)

This file contains variables with colors that you can use to color your strings when printing them.
ex. std::cout << blue << "example";
The text and every other text you print will stay on that color, unless you put it on a different color.
There is also a bold ANSI escape code.
*/

std::string black = "\u001b[30m";
std::string red = "\u001b[31m";
std::string green = "\u001b[32m";
std::string yellow = "\u001b[33m";
std::string blue = "\u001b[34m";
std::string magenta = "\u001b[35m";
std::string cyan = "\u001b[36m";
std::string white = "\u001b[37m";
std::string brightblack = "\u001b[30;1m";
std::string brightred = "\u001b[31;1m";
std::string brightgreen = "\u001b[32;1m";
std::string brightyellow = "\u001b[33;1m";
std::string brightblue = "\u001b[34;1m";
std::string brightmagenta = "\u001b[35;1m";
std::string brightcyan = "\u001b[36;1m";
std::string brightwhite = "\u001b[37;1m";
std::string bold = "\u001b[1m";