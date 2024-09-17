/* ## Subject

```
Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);
```
*/
int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}
/*
& is a bitwise Operator that will return 1 onlu if the two bits is 1 
example :
    n = 16  is n power of two
    16 ----------->  0001 0000
           &
    16-1 = 15 ---->  0000 1111
           =
           0
        so it is true

example 2:
    n = 25  is n power of two
    7 ----------->  0000 0111
           &
    7-1 = 6 ----->  0000 0110
           =
        0000 0110
    so it is false it will return 1
*/