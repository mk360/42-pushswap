/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers_linked.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkassar <mkassar@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:56:58 by mkassar           #+#    #+#             */
/*   Updated: 2026/11/16 15:11:54 by mkassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct ListNode {
	int	value;
	t_node *next_node;
	t_node *previous_node;
} t_node;

static long	ft_atolong(char *s)
{
	int		i;
	long	sign;
	long	total;

	i = 0;
	sign = 1;
	total = 0;
	while (s[i] <= 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		total = total * 10 + (s[i] - '0');
		i++;
	}
	return (total * sign);
}

int	is_valid_int(char *string_number)
{
	return (ft_atolong(string_number) < (long)-2147483648
		|| ft_atolong(string_number) > (long)2147483647);
}

t_node **parse_numbers(char **argv, int start, int end)
{
	t_node** 	head;
	t_node*	cur_node;
	int		i;

	head = ft_lstnew()
	while (argv[i] && i < end)
	{
		if (is_valid_int(argv[i]))
		{
			cur_node = ft_lstnew(&ft_atolong(argv[i]));
			ft_lstadd_back(head, )
		}
		i++;
	}
}

// parse_numbers(argv, i, argc - 1);