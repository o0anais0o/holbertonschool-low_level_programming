#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Ne modifiez pas ce code */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Votre code ici */
    printf("%d ", n);

    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    return (0);
}
