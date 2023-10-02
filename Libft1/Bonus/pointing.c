/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 13:51:41 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/09/30 13:51:41 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} head;



// vamos a intentar crear una funcion para asignar nuevos nodos. 




int main () 
{
    head = NULL;
                    // asignamos la ,emoria al struct.  
    head = malloc (sizeof (struct node));
    
    head -> data = 45;
    // esto deberiamos hacerlo despues de allocar memoria al nodo next. 
    head -> link = next;

            // asignamos mas memoria. 
    next = malloc (sizeof(struct node));
        // asignamos un valor a data. 
    next -> data = 98;
    next -> link = NULL;

    return 0;

}