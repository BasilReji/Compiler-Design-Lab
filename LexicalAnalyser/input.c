#include <stdio.h>

int main (void)
{
	int size, i, biggie = 0;

	printf("Enter the number of elements : ");
	scanf ("%d", &size);
	int	list[size];
	printf("Enter the elements : ");

	for (i = 0; i < size; ++i)
		scanf("%d", &list[i]);

	for (i = 0; list[i+1] >= list[i]; ++i);
	
	printf("Biggie : %d\n", list[i]);
	return 0;
}