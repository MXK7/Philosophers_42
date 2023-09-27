/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:35:09 by mpoussie          #+#    #+#             */
/*   Updated: 2023/09/27 17:15:11 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../philo.h"

int	main(int argc, char **argv)
{
	t_player	*player;
	t_info		*info;

	if (argc != 5 && argc != 6)
		printf(ERROR_ARGS);
	if (ft_atoi(argv[1]) < 1)
		printf(ERROR_ARGS_1);
	init_data(&info, &player, argc, argv);
	return (0);
}
