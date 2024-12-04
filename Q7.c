#include "Q.h"
#include <stdio.h>
#include <string.h>

int redirect(int argc, char **argv, int *index)
{
    if(*index >= argc)
        return 1;

    if(*index + 1 >= argc)
    {
        printf("wrong usage\n");
        return 0;
    }

    if(strcmp(argv[*index], "<") == 0)
    {
        *index++;
        if(!freopen(argv[*index], "r", stdin))
            printf("error, redirect input failed");
    }
    else if(strcmp(argv[*index], ">") == 0)
    {
        *index++;
        if(!freopen(argv[*index], "w", stdout))
            printf("error, redirect output failed");
    }
    else
    {
        printf("wrong usage\n");
        return 0;
    }

    return 1;
}

