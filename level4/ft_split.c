#include <stdlib.h>
#include <stdio.h>

int	ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char	*word_dupe(char *str)
{
	int	i;
	int	len;
	char *word;

	i = 0;
	len = ft_wordlen(str);
	word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int	word_index;
	int	i;

	word_index = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] != '\n')
		i++;
	while (str[i] != '\0')
	{
		array[word_index] = word_dupe(str);
		word_index++;
		while (str[i] != '\0' && str[i] != ' '
			&& str[i] != '\t' && str[i] != '\n')
			i++;
		while (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			i++;
	}	
}

int	count_words(char *str)
{
	int	num_words;
	int	i;

	num_words = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		num_words++;
		while (str[i] != '\0' && str[i] != ' '
			&& str[i] != '\t' && str[i] != '\n')
			i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return (num_words);
}


char	**ft_split(char *str)
{
	int		num_words;
	char	**array;

	num_words = count_words(str);
	array = malloc(sizeof(char *) * (num_words + 1));
	array[num_words] = 0;
	fill_words(array, str);
	return (array);
}

int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 2)
	{
		split = ft_split(argv[1]);
			printf("%s ", split[0]);
		i = 1;
		while (split[i] != 0)
		{
			printf("%s ", split[i]);
			i++;
		}
		printf("%s", split[i]);
	}
	printf("\n");
    return (0);
}

