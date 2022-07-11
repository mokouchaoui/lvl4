#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int is_prime(unsigned int nb)
{
    unsigned int prime = 2;
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

int add_sum_prime(int nb)
{
    unsigned int prime = 2;
    int sum = 0;

    while (nb >= prime)
    {
        if (is_prime(prime))
            sum += prime;
        prime++;
    }
    return(sum);
}

int main(int argc, char **argv)
{
     int b =    add_sum_prime(atoi(argv[1]));
    printf ("%d", b);   
}
