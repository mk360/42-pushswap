/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkassar <mkassar@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:29:22 by mkassar           #+#    #+#             */
/*   Updated: 2026/11/16 13:29:26 by mkassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	calc_disorder(int *a)
{
	size_t	i;
	size_t	j;
	int		mistakes;
	int		total_pairs;

	i = 0;
	j = 0;
	mistakes = 0;
	total_pairs = 0;
	while (i < (5))
	{
		j = i + 1;
		while (j < (5))
		{
			total_pairs += 1;
			if (a[i] > a[j])
				mistakes += 1;
			j++;
		}
		i++;
	}
	return ((float)mistakes / (float)total_pairs);
}

int	main(int argc, char const *argv[])
{
	int		a[] = {4, 67, 3, 87, 23};
	float	disorder;

	disorder = calc_disorder(a);
	printf("Disorder : %f\n%% : %.2f%%\n", disorder, disorder * 100.0f);
	return (0);
}
