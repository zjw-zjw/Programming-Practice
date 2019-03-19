#include <stdio.h>
#include <math.h>
enum games {cloth, hammer, scissors, game, quit};

int won(int win, int lose, int tie)
{
    int vic;
    if(player == cloth){
        vic = machine==hammer;
    }else if(player == hammer){
        vic = machine== scissors;
    }else{
        vic = machine == cloth;
    }
    return vic;
}
