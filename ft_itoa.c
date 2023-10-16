#include "libft.h"
static int find_digit(int n)
{
    int i;

    i = 0;
      if (n < 0)
        n *= -1;
    while (n / 10 > 10)
    {
        i++;
        n /= 10;
    }
    if (n >= 10)
        return (i + 2);
    else
        return (i + 1);
}


char    *ft_itoa(int n)
{
    int     digit;
    char    *string;
    int     num;
    
    if(n == -214748364 - 1)
        return("2147483648");
    num = n;
    digit = find_digit(n);
    if (n < 0)
    {
        n *= -1;
        digit += 1;
    }
    string = (char *)malloc(sizeof(char) * digit + 1);
    if (!string)
        return (NULL);
    string[digit] = '\0';
    while (digit > 0)
    {
        string[--digit] = (n % 10) + 48;
        n /= 10;
    }
    if (num < 0)
    string[0] = '-';
    return (string);
}
