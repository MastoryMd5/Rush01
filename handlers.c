/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaviles- <gaviles-@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:31:58 by gaviles-          #+#    #+#             */
/*   Updated: 2022/02/13 11:28:11 by ohassyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	error(void)
{
	write(1, "Error", 6);
}

void	printchar(char a)
{
	write(1, &a, 1);
}

void	check_if_number(char *input, char *output)
{
	int	counter;

	counter = 0;
	while (input[counter] != '\0')
	{
		if (input[counter] >= '0' && <= '9')
		{
			output[counter] = input[counter];
			counter++;
		}
		else if (input[counter] == ' ')
			counter++;
		else
		{
			error();
			break ;
		}
	}
}
