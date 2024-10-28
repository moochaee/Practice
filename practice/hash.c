#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    char *name;
    char *number;
    struct node *next;
} node;

int
