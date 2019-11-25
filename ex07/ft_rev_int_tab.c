/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 19:37:51 by ecerquei          #+#    #+#             */
/*   Updated: 2019/11/22 20:43:40 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int aux[size];
	int index;

	index = 0;
	while (index < size)
	{
		aux[index] = tab[index];
		index++;
	}
	index = 0;
	while (index < size)
	{
		tab[index] = aux[size - index - 1];
		index++;
	}
}
