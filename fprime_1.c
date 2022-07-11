#include <stdio.h>
#include <stdlib.h>

void    fprime(int nb)
{
    unsigned int i;
    if (nb == 1)
        printf("1");
    else
    {
        i = 2;
    while (nb > 1)
    {

        if (nb % i == 0)
        {
            printf("%d", i);
            nb /= i;
            if (nb > 1)
                printf("*");
            i--;
        }
        i++;
    }
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)  
        fprime(atoi(argv[1]));
    else
    printf("0\n");
}
