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
};

// vamos a intentar crear una funcion para asignar nuevos nodos. 
struct node* createNode (int data)
{
    struct node* newNode = malloc (sizeof(struct node));

    newNode -> data = data;
    newNode -> link = NULL;

    return newNode;
}

int main () 
{
    /*
         Como haciamos en java cuando creemos listas enlazadas. 
         tenemos que crear una cabeza de lista y guardarla. Luego gracias a la funcion creada 
         vamos añadiendo elementos a la lista.
    */
    struct node* head = createNode(50);
    struct node* first = createNode(100);
    head -> link = first;

    return 0;
}