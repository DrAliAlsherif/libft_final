/* ## Subject

```
Assignment name  : print_bits
Expected files   : print_bits.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"
```
*/
#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

/*
    bitwise operator:     >>    right shift
    octec = 19
    0000 1011
    firs step   octec >> 7 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 6 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 5 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 4 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 3 & 1
    0000 0001  &
    0000 0001  =
        1
    next octec >> 2 & 1
    0000 0010  &
    0000 0001  =
        0
    next octec >> 1 & 1
    0000 0101  &
    0000 0001  =
        1
    next octec >> 0 & 1
    0000 1011  &
    0000 0001  =
        1
*/