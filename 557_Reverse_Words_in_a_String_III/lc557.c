#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *string = "Let's take Leetcode contest";
	char *temp = string;
	do{
		string++;
		if(*string == ' ' || *string == '\0'){
			char *reverse = string;
			do {
				reverse--;
				printf("%c", *reverse);
			} while (reverse != temp);
			printf(" ");
			temp = string+1;
		}
	} while(*string != '\0');
	printf("\n");
	return 0;
}
