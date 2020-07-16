/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:20:32 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/15 15:20:52 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int fib;

    if(index == 0)
    {
        fib = 0;
    }
    else if (index == 1)
    {
        fib = 1 ;
    }
    else if (index > 1)
    {
        fib = ft_fibonacci(index-2) + ft_fibonacci(index-1);
    }
    else
    {
        fib = -1;
    }
    return (fib);
}
