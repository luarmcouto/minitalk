/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luarodri <luarodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:57:25 by luarodri          #+#    #+#             */
/*   Updated: 2024/10/07 15:25:57 by luarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*g_message;

char	*strjoinmini(char *s1, char *s2)
{
	char		*cat;
	size_t		i;
	size_t		h;

	i = -1;
	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	cat = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!cat)
		return (NULL);
	while (s1[++i] != '\0')
		cat[i] = s1[i];
	h = 0;
	while (s2[h] != '\0')
		cat[i++] = s2[h++];
	cat[i++] = '\0';
	free(s1);
	return (cat);
}

void	handler(int signum)
{
	static int		bit = 0;
	static int		i = 0;
	char			*letter;

	if (signum == SIGUSR1)
		i |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		letter = (char *)malloc(sizeof(char) * 2);
		if (!letter)
			return ;
		letter[0] = i;
		letter[1] = 0;
		g_message = strjoinmini(g_message, letter);
		if (letter[0] == '\n')
		{
			ft_putstr_fd(g_message, 1);
			free(g_message);
			g_message = NULL;
		}
		bit = 0;
		i = 0;
		free(letter);
	}
}

int	main(void)
{
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_handler = &handler;
	sa.sa_flags = SA_RESTART;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("\t\t\tWelcome to Lua's server\n\t\t\t\tPID = %d\n", getpid());
	while (1)
	{
		pause();
	}
}
