/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:24:22 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/14 10:25:44 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    if(power > 0)
    {
        int _power;
        
        _power = nb;
        while(power > 1)
        {
            _power = _power * nb;
            power--;
        }
        return(_power);
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
