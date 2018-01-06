/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 22:26:52 by passef            #+#    #+#             */
/*   Updated: 2018/01/05 22:26:54 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	push_token(t_filler *env)
{
	if (env->algo == 0)
		env->algo = 3;
	else if (env->algo == 1)
		env->algo = 2;
	else if (env->algo == 2)
		env->algo = 1;
	else if (env->algo == 3)
		env->algo = 0;
	if (env->ko == 1)
	{
		env->gameover = 1;
		ft_putnbr(env->push_y);
		ft_putchar(' ');
		ft_putnbr(env->push_x);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(env->push_y);
		ft_putchar(' ');
		ft_putnbr(env->push_x);
		ft_putchar('\n');
	}
}
