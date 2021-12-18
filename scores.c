#include <stdio.h>

int main()
{
	int i;
    int j=1;
    int k;
	printf ("Enter the number: ");
	scanf ("%d", &k );

	for (i=1; i<=k; i++)
		j=j*i;    
    printf("The factorial of %d is %d\n", k,j);
}