#include <stdio.h>
#include <stdlib.h>
#include "global_settings.h"
#include "utility.h"

int main(int argc, char const *argv[])
{
    // Check argv
    if (argc < 2)
    {
        printf("Ooops, usage: %s filename\n", argv[0] );
        exit(0);
    }
    // point a={0,0,0};
    // printf("%d,%d,%d,%d\n",a.x,a.y,a.pixel_val,a.flag );
    // printf("Hello\n");
    say_hello();
    return 0;
}