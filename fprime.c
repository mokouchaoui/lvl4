#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_prime(int nb)
{
    int prime = 2;

    while (nb > prime)
    {
        if (nb % prime == 0)
         {
            return(0);
         }
        prime++;
    }
        return(1);
}

void	fprime(unsigned int nb)
{
	unsigned int	prime;

	if (nb == 1)
		printf("1");
	else
	{
		prime = 2;
		while (nb > 1)
		{
			if (nb % prime == 0)
			{
				printf("%d", prime);
				nb /= prime;
				if (nb > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}


int main(int argc ,char **argv)
{
    if (argc == 2)
        fprime(atoi(argv[1]));
    printf("\n");
}
