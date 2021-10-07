# binary_to_text
A very simple binary to text translator. 

This program will help you if you encounter someone who only communicates by sending you files containing 8-bit binary numbers. It interpretes the binary numbers to 
base 10 numbers and then prints out the corresponding ASCII character.

Makefile has just the following rules:
- Make, this compiles the program
- Make clean, this cleans the directory from all of the o-files, .a-files and the executable.
- Make re, does clean adn then make

How to:
1. Make
2. ./converter <source_file>
3. Voila!

Source file should just be a file containing 8-bit binary numbers separated by spaces.
- eg. 01001111 01101110 01101100 01111001 00100000 01100111 01100101

