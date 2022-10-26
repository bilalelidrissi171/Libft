#include "libft.h"
#include <stdio.h>

int	word_count(char const *s, char c){
	int index;
	int	word_count;

	word_count = 0;
	index = 0;
	while (s[index] == c)
		index++;
	while (s[index])
	{
		if (s[index] == c)
		{
			word_count++;
			while (s[index] == c)
				index++;
		}
		else
			index++;
	}
	if (s[index-1] != c)
		word_count++;
	return word_count;
}

void	free_others(char **tab, int index){
	while (index >= 0)
		free(tab[index--]);
	free(tab);
}

char	**ft_new_split(char const *s, char c){
	char	**tab;
	int		index;
	int		start;
	int		end;

	tab = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!tab)
		return 0;
	index = 0;
	end = 0;
	start = 0;
	while (s[start] && index < word_count(s, c))
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		tab[index++] = ft_substr(s, start, end-start+1);
		if (!tab[index-1])
			free_others(tab, index);
	}
	tab[index] = NULL;
	return (tab);
}

// int main()
// {
// 	char s1[] = "       ";
// 	char **s = ft_new_split(s1, ' ');
// 	while (*s){
// 		printf("%s\n", *s++);
// 	}
// }
