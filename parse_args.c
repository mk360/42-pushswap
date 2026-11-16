/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkassar <mkassar@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:59:18 by mkassar           #+#    #+#             */
/*   Updated: 2026/11/16 15:04:19 by mkassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*check_complexity(const char *arg)
{
	char	*required;

	required = "--adaptive";
	if (!ft_strncmp(arg, "--simple", ft_strlen("--simple")))
		required = "--simple";
	else if (!ft_strncmp(arg, "--medium", ft_strlen("--medium")))
		required = "--medium";
	else if (!ft_strncmp(arg, "--complex", ft_strlen("--complex")))
		required = "--complex";
	else if (arg[0] == '-' && arg[1] == '-'
		&& ft_strncmp(arg, "--adaptive", ft_strlen("--adaptive")))
		required = 0;
	return (required);
}

// 2 => il y a un argument avec deux tirets
// 1 => il n'y en a pas
// 0 => il y a un argument mais il est invalide et il faut sortir du programme
int	extract_settings(char **argv, t_settings *settings, int index)
{
	if (argv[index][0] == '-' && argv[index][1] == '-')
	{
		if (!ft_strncmp(argv[index], "--bench", ft_strlen("--bench")))
		{
			settings->benchmark_enabled = 1;
			return (1);
		}
		else if (check_complexity(argv[index]))
		{
			settings->complexity = check_complexity(argv[index]);
			return (1);
		}
		else
			return (0);
	}
	else
		return (2);
}

int	parse(t_settings *settings, int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	settings->complexity = 0;
	while (extract_settings(argv, settings, i) == 1)
		i++;
	if (!extract_settings(argv, settings, i))
		return (0);
	while (extract_settings(argv, settings, argc - 1) == 1)
		argc--;
	if (!extract_settings(argv, settings, argc - 1))
		return (0);
	if (!settings->complexity)
		settings->complexity = "--adaptive";
	parse_numbers(argv, i, argc);
	return (1);
}

// int main(int argc, char *argv[])
// {
// 	parse(argc, argv);	
// 	return 0;
// }
