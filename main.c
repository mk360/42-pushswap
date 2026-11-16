/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkassar <mkassar@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:29:44 by mkassar           #+#    #+#             */
/*   Updated: 2026/11/16 14:54:46 by mkassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	args_valid(int expected, int *i, char **argv)
{
	long	current_n;
	int		current;

	current = *i;
	while (argv[current])
	{
		current_n = (long)ft_atoi(argv[current]);
		if (current_n < (long)(-2147483648) || current_n > (long)(2147483647))
			return (0);
	}
}

int	main(int argc, char **argv)
{
	int			argv_iterator;
	int			*stack_a;
	int			*stack_b;
	t_settings	settings;

	if (!parse(&settings, argc, argv))
	{
		ft_putstr_fd("Erreur\n", 2);
		return (1);
	}
	printf("selected complexity: %s\n", settings.complexity);
	printf("benchmark mode enabled: %s\n", settings.benchmark_enabled == 1 ? "true" : "false");
	return (0);
}
