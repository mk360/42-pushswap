/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkassar <mkassar@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:27:52 by allevash          #+#    #+#             */
/*   Updated: 2026/11/16 15:03:10 by mkassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

typedef struct program_settings
{
	int		benchmark_enabled;
	char	*complexity;
}	t_settings;

float	calc_disorder(int *a);
int parse(t_settings *settings, int argc, char **argv);
void parse_numbers(char **argv, int start, int end);

#endif