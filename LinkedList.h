/**
 * Code discription: Header file for the list.
 * Description:
 *
 * Author: outlinepix
 * Version: 1.0.0
 * Author URI: https://github.com/outlinepix
 *
 * These codes are free and open source, you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * These codes are distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "./Node/Node.h"
/* Linked list instantiation with head and tail pointers and fuction pointer defination.*/
typedef struct LinkedList
{
    Node *head;
    Node *next;
    int length;
    void (*push)(struct LinkedList *list, char *name, int age);
    void (*pop)(struct LinkedList *list, char *name);
    void (*get)(struct LinkedList *list);
    void (*delete)(struct LinkedList *list);
} LinkedList;

void push(LinkedList *list, char *name, int age);
void pop(LinkedList *list, char *name);
void get(LinkedList *list);
LinkedList *constructer();
void distructer(LinkedList *list);


#endif /* list_h */
