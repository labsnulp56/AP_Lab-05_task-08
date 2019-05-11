#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* TheLongestWord(char sentence[]);
void VariabicFunction(int num, char first[], ...);

int main() {
	char arr[80];
	char arr2[40];
	scanf_s("%s \n", arr, (unsigned)_countof(arr));

	gets(arr2);
	VariabicFunction(2, arr, arr2);

	system("pause");
	return 0;
}

void VariabicFunction(int num, char first[], ...)
{
	char **p1 = &first;
	for (int i = 0; i < num; i++, p1++)
	{
		printf("in the sentence # %d the longest word is: %s \n", i, TheLongestWord(*p1));
	}
}

char* TheLongestWord(char sentence[])
{
	const char *limits = " ,.;()-";
	char *pw;
	char *longest_word = "\0";
	char *next_token1 = NULL;

	pw = strtok_s(sentence, limits, &next_token1);
	while (pw != NULL)
	{
		if (strlen(pw) > strlen(longest_word))
		{
			longest_word = pw;
		}
		pw = strtok_s(NULL, limits, &next_token1);
	}
	return longest_word;
}

