#include <stdio.h>
#include <math.h>
enum games {cloth, hammer, scissors, game, quit};
void result(int win, int lose, int tie)
{
    printf("\nGAME STATUS");
    printf("\n%-7d%s\n%-7d%s\n%-7d%s\n%-7d%s", win,"games you won", lose, "games you lose",\
            tie, "games tie", win+lose+tie, "games played");
}
