#include <stdio.h>
#include <math.h>
enum games {cloth, hammer, scissors, game, quit};
enum games mach(void)
{
    static int i=0;
    i = rand() % 3;

    return((i==0)?cloth:((i==1)?hammer:scissors));
}
