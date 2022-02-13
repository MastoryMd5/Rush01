/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaviles- <gaviles-@student.42roma.i>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:53:49 by gaviles-          #+#    #+#             */
/*   Updated: 2022/02/13 11:28:25 by ohassyao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error(void);
void	printchar(char a);
void	check_if_number(char *input, char *output);

int	main(int argc char **argv)
{
	if (argc != 2)
	{
		error();
	}
	else
	{
		return (0);
	}
	printchar(32);
	return (0);
}
