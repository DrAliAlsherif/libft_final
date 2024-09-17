/* ## Subject

```
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
```
*/
#include <unistd.h>
/*
    mush more simple way to do it : )
*/
// int	ft_atoi_base(const char *str, int str_base)
// {
//     int sign = 1;
//     int i = 0;
//     int result = 0;

//     if (str == NULL || str_base < 2 || str_base > 16)
// 		return 0;

//     while (str[i] == '-')
//     {
//         sign = -1;
//         i++;
//     }
    
//     while (str[i])
//     {
//         result *= str_base;
//         if (str[i] >= '0' && str[i] <= '9')
//             result += str[i] - '0';
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//             result += str[i] - 'A' + 10;
//         else if (str[i] >= 'a' && str[i] <= 'z')
//             result += str[i] - 'a' + 10;
//         i++;
//     }
//     return (result * sign);
// }

// #include <stdio.h>

// int main(void)
// {
//     const char *hex_str = "1A";
//     const char *binary_str = "1101";
//     const char *octal_str = "17";
//     const char *decimal_str = "-42";

//     int hex_value = ft_atoi_base(hex_str, 16);
//     int binary_value = ft_atoi_base(binary_str, 2);
//     int octal_value = ft_atoi_base(octal_str, 8);
//     int decimal_value = ft_atoi_base(decimal_str, 10);

//     printf("Hexadecimal '%s' to integer: %d\n", hex_str, hex_value);
//     printf("Binary '%s' to integer: %d\n", binary_str, binary_value);
//     printf("Octal '%s' to integer: %d\n", octal_str, octal_value);
//     printf("Decimal '%s' to integer: %d\n", decimal_str, decimal_value);

//     return 0;
// }
int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int i = 0;
    int result = 0;

    if (str == NULL || str_base < 2 || str_base > 16)
    return(0);
    while (str[i] == '-')
    {
        sign = - 1;
        i++;
    }
    while (str[i])
    {
        result *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            result += str[i] - 'A' + 10;
        else if (str[i] >= 'a' && str[i] <= 'z')
            result += str[i] - 'a' + 10;
            i++;
    }
    return (sign * result);
}
#include <stdio.h>

int main(void)
{
    const char *hex_str = "1A";
    const char *binary_str = "1101";
    const char *octal_str = "17";
    const char *decimal_str = "-42";

    int hex_value = ft_atoi_base(hex_str, 16);
    int binary_value = ft_atoi_base(binary_str, 2);
    int octal_value = ft_atoi_base(octal_str, 8);
    int decimal_value = ft_atoi_base(decimal_str, 10);

    printf("Hexadecimal '%s' to integer: %d\n", hex_str, hex_value);
    printf("Binary '%s' to integer: %d\n", binary_str, binary_value);
    printf("Octal '%s' to integer: %d\n", octal_str, octal_value);
    printf("Decimal '%s' to integer: %d\n", decimal_str, decimal_value);

    return 0;
}