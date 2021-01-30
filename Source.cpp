#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[100];
	char word;
	char word2;
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
	if (word > 64 && word < 91) {
		word2 = word + 32;
	}
	if (word > 96 && word < 123) {
		word2 = word - 32;
	}
	for (int k = 0; k <= i; k++) {

		if ((str[k] == ' ' || str[k] == ',' || str[k] == '.' || str[k] == '!' || str[k] == '?') && (str[k - 1] == word || str[k - 1] == word2)) {

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


