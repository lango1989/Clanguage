//debian8.5 unit6-3

#include <stdio.h>

int main()
{
	char ch='F';
	int i,j;
	for(i=0; i<='F'-'A'; i++)
	{
		ch='F';
		for(j=0; j<=i; j++)
			printf("%c", ch--);
		printf("\n");
	}
	return 0;
}
