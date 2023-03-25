/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:33:10 by abdeel-o          #+#    #+#             */
/*   Updated: 2022/12/23 17:39:22 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	counter(char *args)
{
	int	count;

	count = 0;
	while (*args && *args == ' ')
		args++;
	while (*args)
	{
		count++;
		while (*args && *args != ' ')
			args++;
		while (*args && *args == ' ')
			args++;
	}
	return (count);
}
