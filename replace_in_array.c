#include<stdio.h>
#include<string.h>

int main() {
    char c = '3';
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);  
	int length = strlen(str);
	int i;
	
	for (i = 0; i < length; i++)
	{
		if(str[i] == c)
		{
			str[i] = 'e';
		}
	}
	printf("%s", str);
    return 0;
}


