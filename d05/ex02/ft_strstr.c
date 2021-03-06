/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sserakal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 08:57:19 by sserakal          #+#    #+#             */
/*   Updated: 2020/06/25 10:44:16 by sserakal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int position;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
		to_find[i] = str[position + i - 1];
	}
	to_find[i] = '\0';
	return to_find ;
}

