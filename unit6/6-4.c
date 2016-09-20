//debian8.5 6-4
//打印字母金字塔

#include<stdio.h>

int main()
{
	char ch;
	char i,j,k,m;
	while(scanf("%c", &ch)==1 && ch!='\n')
	{

		if(ch>='a' && ch<='z')
		{
			for(i=0; i<=ch-'a'; i++)	
			{
				for(j=ch-'a'; j>=i; j--)
					printf(" ");
				for(k=0; k<=i; k++)
					printf("%c", 'a'+k);
				for(m=i; m>0; m--)
					printf("%c", 'a'+m-1);
				printf("\n");
			}
		}
		if(ch>='A' && ch<='Z')
		{
			for(i=0; i<=ch-'A'; i++)	
			{
				for(j=ch-'A'; j>=i; j--)
					printf(" ");
				for(k=0; k<=i; k++)
					printf("%c", 'A'+k);
				for(m=i; m>0; m--)
					printf("%c", 'A'+m-1);
				printf("\n");
			}
		}
		while((ch=getchar())!='\n')
			continue;

	}
	return 0;
}
