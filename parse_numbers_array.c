#include "push_swap.h"

static size_t srcslen(char **strs, int start, int end)
{
	size_t i;
	size_t len;
	i = start;
	len = 0;

	while (i < end)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

void parse_numbers(char **argv, int start, int end)
{
	size_t i;
	size_t len;
	char *str;
	i = start;
	len = srcslen(argv, start, end) + end - start;
	str = ft_calloc(len, 1);
	while (i < end)
	{
		// printf("%s\n", argv[i]);
		str = ft_strjoin(str, argv[i]);
		i++;
	}
	// printf("total len : %ld\n nb of sep : %d\n", len, end - start);
	printf("str : %s\n", str);
}