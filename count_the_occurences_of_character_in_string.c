#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("Enter string: ");
	scanf("%s", str);
	
	int i, count = 0;
	int length = strlen(str);
	
	for(i = 0; i < length; i++)
	{
		if (c == str[i])
		{
			count++;
		}
	}
	printf("The occurences of character '%c' in this string is: %d", c , count);
	return 0;
}
