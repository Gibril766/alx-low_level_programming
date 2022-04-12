#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry poimt
*
* Return: Always 0 (success/correct)
*/
int main(void)
]
int n;
srand(time(0));
n = rand() - RAND_max / 2;
if (n==0)
]
printf("%i is zero/n", n);
]

else if (n<0)
[printf("5 is negative/n", n);
]
else
[
printf("%i is positive/n", n);
]
return (o);
]
