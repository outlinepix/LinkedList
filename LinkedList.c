/**
 * Code discription: Python like List generation and manupulattion functions.
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

#include "./Node/Node.h"
#include "LinkedList.h"
/**
 * Description: Initialize the list.
 */

;

void push(LinkedList *list, char *name, int age)
{
    Node *node = createNode(name, age);
    if (list->head == NULL)
    {
        list->head = node;
        list->next = node;
    }
    else
    {
        list->next->next = node;
        list->next = node;
    }
    list->length += 1;
}
LinkedList *constructer()
{
    LinkedList *list = (LinkedList *)malloc(sizeof(LinkedList));
    list->head = NULL;
    list->next = NULL;
    list->length = 0;
    list->push = push;
    list->pop = pop;
    list->get = get;
    list->delete = distructer;
    return list;
}
/**
 * Description: Delete the list.
 */
void distructer(LinkedList *list)
{
    free(list);
    printf("List deleted successfully.\n");
}
void get(LinkedList *list)
{
    
    if (list->head == NULL)
    {
        printf("Empty list\n");
        return;
    }
    else
    {
        Node *temp = list->head;
        for (int i = 0; i < list->length; i++)
        {
            printf("[%d]. %s is %d years old.\n", i + 1, temp->name, temp->age);
            temp = temp->next;
        }
    }
}
void pop(LinkedList *list, char *name)
{
    if (list->head == NULL)
    {
        printf("Empty list\n");
        return;
    }
    else
    {
        Node *current = list->head;
        for (int i = 0; i < list->length; i++)
        {
            if (strcmp(current->name, name) == 0)
            {
                if (i == 0)
                {
                    list->head = current->next;
                    printf(" %s is removed from List.\t\n", current->name);
                    free(current);
                    list->length -= 1;
                    return;
                }
                else if (i == list->length - 1)
                {
                    list->next = current->next;
                    printf(" %s is removed from List.\t\n", current->name);
                    free(current);
                    list->length -= 1;
                    return;
                }
                else
                {
                    Node *temp = list->head;

                    for (int j = 0; j < i - 1; j++)
                    {
                        temp = temp->next;
                    }

                    temp->next = current->next;
                    printf(" %s is removed from List.\t\n", current->name);
                    free(current);
                    list->length -= 1;
                    return;
                }
            }
            current = current->next;
        }
        printf("No such Name found in List.\n");
    }
}
