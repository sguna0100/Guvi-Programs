#include<stdio.h>
#include<stdlib.h>
int main()
	{
		char a;
		scanf("%c",&a);
		a=tolower(a);
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
				{
					printf("Vowel");
				}
				else if(a>='a'&&a<='z')
					{
						printf("Consonant");
					}
					else
						{
							printf("Invalid");
						}
	}
