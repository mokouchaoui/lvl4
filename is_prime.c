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

int main()
{
    printf("%d", is_prime(4));
    printf("%d", is_prime(6));
    printf("%d", is_prime(42));
    printf("%d", is_prime(22));
    printf("%d", is_prime(100));
    printf("%d", is_prime(15));
    

    return 0;
}
