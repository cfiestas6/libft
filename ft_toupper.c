/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfiestas <cfiestas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:58:59 by cfiestas          #+#    #+#             */
/*   Updated: 2023/01/12 17:15:38 by cfiestas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	a;

	if (c >= 97 && c <= 122)
		c -= 32;
	a = (unsigned char) c;
	return (c);
}
