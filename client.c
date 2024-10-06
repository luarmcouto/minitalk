/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:55:13 by luarodri          #+#    #+#             */
/*   Updated: 2024/10/05 20:33:13 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	tobinary(int pid, char letter)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((letter & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(150);
		bit++;
	}
}

void	message_handler(int pid, char *message)
{
	int	i;

	i = 0;
	while (message[i])
	{
		tobinary(pid, message[i]);
		i++;
		usleep(150);
	}
	tobinary(pid, '\n');
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	message_handler(ft_atoi(argv[1]), argv[2]);
	return (0);
}
