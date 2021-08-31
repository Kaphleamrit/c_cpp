#include <stdio.h>

int main()
{
	char c, s[50], word[500];

	scanf("%c", &c);
	scanf("%s", s);
	scanf("\n");

	scanf("%[^\n]%*c", word);

	printf("%c\n", c );

	printf("%s\n", s);

	printf("%s\n", word);

	return 0;
}