#include<stdio.h>
#include<stdlib.h>
int main()
	{
		char a;
		scanf("%c",&a);
		a=tolower(a);
				if(a>='a'&&a<='z')
					{
						printf("Alphabet");
					}
					else
						{
							printf("No");
						}
	}
