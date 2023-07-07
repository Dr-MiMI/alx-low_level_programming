#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
    int prod = 0;
    int result;

    if (argc < 3)
    {
        printf("Insufficient arguments.\n");
        return 1;
    }

