#include "t_libft.h"

int	t_ft_strcmp()
{
	char	*s1;
	char	*s2;
	size_t	l;
	size_t	i;

	i = 0;
	while (i < 1000)
	{
		l = gen_size_t(0, 10);
		s1 = gen_str(l);
		if (ft_strcmp(s1, s1) != strcmp(s1, s1))
			return (1);
		i++;
	}
	free(s1);
	i = 0;
	while (i < 1000)
	{
		l = gen_size_t(0, 10);
		s1 = gen_str(l);
		s2 = gen_str(gen_size_t(0, 10));
		if (ft_strcmp(s1, s2) != strcmp(s1, s2))
		{
			printf("%s - %s\n", s1, s2);
			printf("%d - %d\n", ft_strcmp(s1, s2),strcmp(s1, s2));
			return (1);
		}
		i++;
		free(s1);
		free(s2);
	}
	if (ft_strcmp("0123456", "0129456") != strcmp("0123456", "0129456"))
	{
		printf("%d - %d\n", ft_strcmp("0123456", "0129456"),strcmp("0123456", "0129456"));
		return (10);
	}

	return (0);
}

int	t_ft_strncmp()
{
	char	*s1;
	char	*s2;
	size_t	l;
	size_t	i, j;

	i = 0;
	while (i < 1000)
	{
		j = 0;
		l = gen_size_t(0, 10);
		s1 = gen_str(l);
		while (j < l + 3)
		{
			if (ft_strncmp(s1, s1, j) != strncmp(s1, s1, j))
				return (1);
			j++;
		}
		i++;
		free(s1);
	}

	i = 0;
	while (i < 1000)
	{
		j = 0;
		l = gen_size_t(0, 10);
		s1 = gen_str(l);
		s2 = gen_str(gen_size_t(0, 10));
		while (j < l + 3)
		{
			if (ft_strncmp(s1, s2, j) != strncmp(s1, s2, j))
			{
				printf("%d - %d\n", ft_strncmp(s1, s2, j),strncmp(s1, s2, j));
				return (1);
			}
			j++;
		}
		i++;
		free(s1);
		free(s2);
	}

	if (ft_strncmp("0123456", "0129456", 7) != strncmp("0123456", "0129456", 7))
	{
		printf("%d - %d\n", ft_strncmp("0123456", "0129456", 7),strncmp("0123456", "0129456", 7));
		return (10);
	}

	printf("%d - %d\n", ft_strncmp("0123456", "0129456", 7),strncmp("0123456", "0129456", 7));
	return (0);
}

