/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:00:39 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/13 16:06:12 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int factorial;
    
    factorial = 1;
    if (nb > 0 && nb < 20)
    {
        while(nb > 0)
        {
            factorial = factorial * nb;
            nb = nb -1;
        }
        return(factorial);
    }
    else
    {
        return (0);
    }
}
