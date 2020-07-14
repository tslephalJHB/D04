/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:32:43 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/14 10:41:00 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int _power;

    	if(power > 0)
    	{
        	_power = nb;
        	return(_power * ft_recursive_power(nb, power - 1));
    	}

    	else if(power == 0)
    	{
        	return(1);
    	}

    	else
    	{
        	return(0);
    	}
}
