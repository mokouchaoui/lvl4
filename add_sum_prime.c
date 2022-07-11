#include <unistd.h>

int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    while (str[i] == ' ' && (str[i] <= 13 && str[i] >= 9))
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(sign * res);
}

int  is_prime(int nb)
{
    if (nb == 0 || nb == 1)
        return(0);
    int prime = 2;
    while (nb > prime)
    {
        if (nb % prime == 0)
        {
            return(0);
        }
        prime++;   
    }
    return (1);
}

void    ft_putnbr(int nb)
{
    if(nb > 9)
        ft_putnbr(nb/10);
    char c = (nb %  10) + '0';
    write(1, &c, 1);
}

int add_sum_prime(int nb)
{
    int i = 2;
    int sum = 0;
    while (i <= nb)
    {
        if (is_prime(i))
            sum += i;
        i++;
    }
    return(sum);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int nb = ft_atoi(argv[1]);
        ft_putnbr(add_sum_prime(nb));
    }
    else
    write(1, "0\n", 2);
}
