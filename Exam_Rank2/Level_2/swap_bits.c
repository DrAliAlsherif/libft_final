/* ## Subject

```
Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100
```
*/
unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*
	0100 0001
	octet >> 4 = 
	0000 0100
	octet << 4 =
	0001 0000

	0000 0100 | 0001 0000
	| (OR) bitwise oprator if one or both is one return 1
	so how is that work
	0000 0100
	    |
	0001 0000
	    =
	0001 0100  
*/