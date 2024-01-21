/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marihovh <marihovh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:27:26 by marihovh          #+#    #+#             */
/*   Updated: 2024/01/18 16:02:49 by marihovh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

int	errorik(int flag)
{
	if (flag == M_ERROR)
		ft_putstr_fd("Error: map\n", 2);
	else if (flag == F_ERROR)
		ft_putstr_fd("Error: wrong format of map\n", 2);
	else if (flag == T_ERROR)
		ft_putstr_fd("Error: some trouble with textures\n", 2);
	else if (flag == C_ERROR)
		ft_putstr_fd("Error: some trouble with colors\n", 2);
	else if (flag == E_ERROR)
		ft_putstr_fd("Error: something is missing\n", 2);
	else
		ft_putstr_fd("Error\n", 2);
	return (1);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	data->textures = malloc(sizeof(char *) * 5);
	data->textures[0] = NULL;
	data->textures[1] = NULL;
	data->textures[2] = NULL;
	data->textures[3] = NULL;
	data->count = 0;
	data->nb = 0;
	if (argc == 2)
	{
		if (parcing(data, argv))
			return (1);
	}
	else
		return (errorik(42));
	return (0);
}
