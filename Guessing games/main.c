/*
    利用枚举，编写一个人际交互猜拳游戏
*/
#include <stdio.h>
#include <math.h>

enum games {cloth, hammer, scissors, game, quit};
enum games select(void);
enum games mach(void);
int won(enum games player, enum games machine);
void result(int won, int lose, int tie);


int main()
{
    enum games player, machine;
    int win, lose, tie;
    win = lose = tie = 0;

    printf("\n%s\n%s\n%s\n%s\n", "c is for cloth", "h is for hammer", \
           "s is for scissors", "g is for game", "another is for quit");
    while((player=select()) != quit){
        switch(player){
            case cloth:
            case hammer:
            case scissors:
                machine = mach();
                if(player == machine){
                    ++tie;
                }else if(won(player, machine) > 0){
                    win++;
                    printf("\nyou won");
                }else{
                    ++lose;
                    printf("\nI won");
                }
                break;
            case game: result(win, lose, tie); break;
        }
    }
    result(win, lose, tie);
    printf("\nBye~\n");
    return 0;
}

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
enum games mach(void)
{
    static int i=0;
    i = rand() % 3;

    return((i==0)?cloth:((i==1)?hammer:scissors));
}

int won( enum games player,enum games machine)
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
void result(int win, int lose, int tie)
{
    printf("\nGAME STATUS");
    printf("\n%-7d%s\n%-7d%s\n%-7d%s\n%-7d%s", win,"games you won", lose, "games you lose",\
            tie, "games tie", win+lose+tie, "games played");
}
