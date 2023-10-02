/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:04:51 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/25 20:21:12 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s es la cadena a separar. 

// Se devuelve el array de nuevas strings resultante de la separación o obviamente null si falla la reserva de memoria.

/* descripción: 
    Reserva utilizando malloc un array de string resultante de separar la strins 's' en substrings utuluzando el caracter 'c' como delimtador.
    El array debe terminar con un puntero NULL.
*/

// The ft_split function takes a string s and a delimiter character c as input, 
// and returns an array of strings that are separated by the delimiter character. 
// The function first counts the number of substrings in the input string, then allocates memory for the result array, 
// and finally splits the input string into substrings and stores them in the result array. The result array is terminated 
// with a NULL pointer.

char *str1 = "hola cmigoc que tac todo";
char c = 'c';

char **ft_split (char const *s, char c)
{

    
    int n_pointers;
    int i ;

    while (str[i])

    char **strs = malloc(n_pointers * sizeof(char *));
    
    // Lo que tenemos que hacer tambien es reservar con malloc.
    // tenemos que contar el numero de caracteres delimitadores.
    // por ejemplo con una c tenemos dos subcadenas. Pero con dos c´s tendremos.
    // podemos haer un contador que en cuanto se encuentre el caracter especificado pare. y cree un array.





}
