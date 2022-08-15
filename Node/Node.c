/**
* Code discription: 
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

#include "Node.h"
#include <stdio.h>
Node *createNode(char *name, int age)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->name = name;
    node->age = age;
    node->next = NULL;
    return node;
}