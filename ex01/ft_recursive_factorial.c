/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 09:05:00 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/14 09:05:22 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recursive_factorial(int nb)
{
        int factorial;
    
        factorial = 1;
        if (nb > 0 && nb < 13)
        {
            factorial = factorial * nb;
            return(factorial * ft_recursive_factorial(nb - 1));
        }
        
        else if (nb == 0)
        {
            return (1);
        }
    
        else
        {
            return(0);
        }
}
