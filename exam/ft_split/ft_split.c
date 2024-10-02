#include <stdlib.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int word_count(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i] && is_space(str[i]) == 0)
		{
			count++;
			while (str[i] && is_space(str[i]) == 0)
			{
				i++;
			}
		}
	}
	return (count);
}

char *word_dup(char *str, int start, int finish)
{
	char *word;
	int i = 0;

	word = (char *)malloc(sizeof(char) * (finish - start + 1));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char **ft_split(char *str)
{
	char **result;
	int i = 0;
	int j = 0;
	int start = 0;

	int words = word_count(str);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return NULL;

	while (str[i])
	{
		while (is_space(str[i]))
		{
			i++;
		}
		start = i;
		while (str[i] && !is_space(str[i]))
		{
			i++;
		}
		if (i > start)
		{
			result[j++] = word_dup(str, start, i);
		}
	}
	result[j] = NULL;
	return (result);
}
