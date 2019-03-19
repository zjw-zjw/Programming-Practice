#include <stdio.h>
#include <math.h>
enum games {cloth, hammer, scissors, game, quit};
enum games select(void)
{
    char c;
    enum games player;
    printf("\nInput a character:");
    while((c=getchar()) == ' ' || c == '\n' || c == '\t') ;

    switch(c){
        case 'c': player = cloth; break;
        case 'h': player = hammer; break;
        case 's': player = scissors; break;
        case 'g': player = game; break;
        default: player = quit; break;
    }
    return player;
}
