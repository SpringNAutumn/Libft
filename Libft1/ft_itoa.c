/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/25 20:21:00 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La string que represente el número. 
// Genera una string que represente el valor entero recibido como argumento.
// Los numeros negativos tienen que gestionarse.
// Pasar el atoi a itoa.
    // saltamos todos los espacios.

// Igual que el atoi pero convirtiendo todos los numeros a chars.
// Primero gestionamos los espacios y numeros negativos.

// Se devuelve la string que represente el numero. 
// NULL si falla la reserva de memoria. 

char ft_itoa (int n)
{  
    int cont = 1;
    int i = 0;

    while ( n % 10 != 0)
    {
        n = n / 10;
        cont ++;
    }
    

    if (n < 0)
        char *str = malloc (sizeof (*char) * (cont + 1));
    else 
        char *str = malloc (sizeof (*char) * cont);

    // para sacar el primer digito dividimos entre exponente 

    while (n % 10 != 0)
    {
        str[i] = n / (10 * cont); 


    }

  
    return (str);
}