#include "t_libft.h"

void 	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	t_ft_str_cpycat(size_t (*t_f)(char *, const char *, size_t), size_t (*f)(char *, const char *, size_t))
{
	char	*dst_t, *dst;
	char	*src;
	size_t	len, n;
	int	i;
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest * 15))))
		return (0);
	i = 0;
	while (i < 1000)
	{
		len = gen_size_t(1, 10);
		dst = gen_str(len);
		dst_t = strdup(dst);
		src = gen_str(gen_size_t(1, 10));
		n = gen_size_t(0, 10);
		if ((*t_f)(dst_t, src, n) != (*f)(dst, src, n))
			return (1);
		if(memcmp(dst, dst_t, len+1) != 0)
			return (2);
		free(src);
		free(dst);
		i++;
	}

	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[11] = 'a';
	ft_print_result(strlcat(dest, "lorem", 15));
	write(1, "\n", 1);
	write(1, dest, 15);


	return (0);
}
