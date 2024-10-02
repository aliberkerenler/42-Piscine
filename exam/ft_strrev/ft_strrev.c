char    *ft_strrev(char *str)
{
	int i;
	int first;
	int last;
	char temp;

	while (str[i] != '\0')
		i++;
	last = i;
	last--;
	while (first <= (i/2))
	{
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		first++;
		last--;
	}
	return (str);
}
