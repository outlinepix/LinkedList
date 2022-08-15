#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "LinkedList.h"

int main(void)
{
    /*Linked list instance*/

    LinkedList *list = constructer();

    /*Inserting data into the list*/

    list->push(list, "John", 26);
    list->push(list, "Jane", 26);
    list->push(list, "Jack", 25);
    list->push(list, "Tony", 22);
    list->push(list, "Stark", 21);
    
    /*Printing the list*/

    list->get(list);
    printf("--------------------------\n");
    /* Removing data from the list*/

    list->pop(list, "Tony");

    printf("--------------------------\n");

    list->get(list);

    printf("--------------------------\n");
    /*Deleting the list*/
    list->delete (list);
    return 0;
}