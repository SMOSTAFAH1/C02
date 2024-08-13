/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shashemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:32:34 by shashemi          #+#    #+#             */
/*   Updated: 2024/08/13 12:32:37 by shashemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] > 96 && str[i] < 123)
			return (1);
		else if (str[i] > 64 && str[i] < 91)
		{
			return (str[i] - 32);
		}
		else
			return (0);
	}
	return (0);
}