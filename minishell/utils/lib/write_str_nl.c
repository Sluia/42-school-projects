/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_str_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:41:39 by bmayer            #+#    #+#             */
/*   Updated: 2021/10/01 10:42:07 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	write_str_nl(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}
