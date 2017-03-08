#include <stdio.h>
#include <stdlib.h>
#include "global_settings.h"
int main(int argc, char const *argv[])
{
    // Check argv
    if (argc < 2)
    {
        printf("Ooops, usage: %s filename\n", argv[0] );
        exit(0);
    }

    printf("Hello\n");
    printf("%d\n", 3);
    printf("%d %d\n", WIDTH,HEIGHT);
    return 0;
}