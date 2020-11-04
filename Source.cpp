#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[100];
	char word;
	char c;
	int i = 0;
	int start = 0;
	int finish = 0;
	printf("Input a string : \n");
	while ((c = getchar()) != '\n' && i < 100) {
		str[i] = c;
		i++;
	}
	str[i] = ' ';
	printf("Input word ");
	scanf("%c", &word);
	for (int k = 0; k <= i; k++) {

		if ((str[k] == ' ' || str[k] == ',' || str[k] == '.' || str[k] == '!' || str[k] == '?' ) && str[k - 1] == word) {

			finish = k;
			for (int j = start; j < finish; j++) {
				printf("%c", str[j]);
			}
		
			printf("\n");
		}
		for (; str[k] == ' ' || str[k] == ',' || str[k] == '.' || str[k] == '!' || str[k] == '?'; k++) {
			start = k + 1;
		}

	}
	
	return 0;
}

