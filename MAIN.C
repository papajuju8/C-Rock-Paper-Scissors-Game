#include <stdio.h>
#include <stdlib.h>

int main()
{
    int play, yer;
    int pscore = 0;
    int yscore = 0;
    char choice;


    do{
    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("HOW TO PLAY: Enter 1 for ROCK, 2 for PAPER, 3 for SCISSORS.\n");
    printf("NOTE: The game needs two players. Player 1 goes first.\n\n");

    printf("Player 1: ");
    scanf("%d",&play);

    system("cls");

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("HOW TO PLAY: Enter 1 for ROCK, 2 for PAPER, 3 for SCISSORS.\n");
    printf("NOTE: The game needs two players. Player 1 goes first.\n\n");

    printf("Player 2: ");
    scanf("%d", &yer);
        if((play==1)&&(yer==1)){
            printf("       ,--.--._ \n");
            printf("------'' _, \___) \n");
            printf("        / _/____) \n");
            printf("        \//(____) \n");
            printf("------\     (__) \n");
            printf("       `-----' \n");

            printf("VS\n");

            printf("  _.--.--, \n");
            printf(" (___/ ,_ '------ \n");
            printf("(____\_ \ \n");
            printf("(____)\\/ \n");
            printf(" (__)     /------ \n");
            printf("   '-----` \n\n");

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("IT'S A TIE \n\n");}

        else if((play==1)&&(yer==2)){
            printf("       ,--.--._ \n");
            printf("------'' _, \___) \n");
            printf("        / _/____) \n");
            printf("        \//(____) \n");
            printf("------\     (__) \n");
            printf("       `-----' \n");

            printf("VS\n");

            printf("       _______ \n");
            printf("  ____(____   '--- \n");
            printf(" (______ \n");
            printf("(_______ \n");
            printf(" (_______ \n");
            printf("   (__________.--- \n\n");

            yscore = yscore+1;

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("PLAYER 2 WINS \n\n");}

        else if((play==1)&&(yer==3)){
            printf("       ,--.--._ \n");
            printf("------'' _, \___) \n");
            printf("        / _/____) \n");
            printf("        \//(____) \n");
            printf("------\     (__) \n");
            printf("       `-----' \n");

            printf("VS\n");

            printf("   __      __ \n");
            printf("  (  \\    /  ) \n");
            printf("   \\  \\  /  / \n");
            printf(" _ _\\  \\/  / \n");
            printf("|\\ \\_\\_____| \n");
            printf("(-L(__(_)  ) \n");
            printf(" \\   ,.`\\  ) \n");
            printf("  \\   ;  \\/ \n");
            printf("   | === | \n\n");

            pscore = pscore+1;

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("PLAYER 1 WINS \n\n");}

        else if((play==2)&&(yer==1)){
            printf("    _______ \n");
            printf("---'   ____)____ \n");
            printf("          ______) \n");
            printf("          _______) \n");
            printf("         _______) \n");
            printf("---.__________) \n");

            printf("VS\n");

            printf("  _.--.--, \n");
            printf(" (___/ ,_ '------ \n");
            printf("(____\_ \ \n");
            printf("(____)\\/ \n");
            printf(" (__)     /------ \n");
            printf("   '-----` \n");

            pscore = pscore+1;

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("PLAYER 1 WINS \n\n");}

        else if((play==2)&&(yer==2)){
            printf("    _______ \n");
            printf("---'   ____)____ \n");
            printf("          ______) \n");
            printf("          _______) \n");
            printf("         _______) \n");
            printf("---.__________) \n");

            printf("VS\n");

            printf("       _______ \n");
            printf("  ____(____   '--- \n");
            printf(" (______ \n");
            printf("(_______ \n");
            printf(" (_______ \n");
            printf("   (__________.--- \n\n");

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("IT'S A TIE \n\n");}

        else if((play==2)&&(yer=3)){
            printf("    _______ \n");
            printf("---'   ____)____ \n");
            printf("          ______) \n");
            printf("          _______) \n");
            printf("         _______) \n");
            printf("---.__________) \n");

            printf("VS\n");

            printf("   __      __ \n");
            printf("  (  \\    /  ) \n");
            printf("   \\  \\  /  / \n");
            printf(" _ _\\  \\/  / \n");
            printf("|\\ \\_\\_____| \n");
            printf("(-L(__(_)  ) \n");
            printf(" \\   ,.`\\  ) \n");
            printf("  \\   ;  \\/ \n");
            printf("   | === | \n\n");

            yscore = yscore+1;

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("PLAYER 2 WINS! \n\n");}

        else if((play==3)&&(yer==1)){
            printf("  __      __ \n");
            printf(" ( _\\    /_ ) \n");
            printf("  \\ _\\  /_ / \n");
            printf("   \\ _\\/_ /_ _ \n");
            printf("   |_____/_/ /| \n");
            printf("   (  (_)__)J-) \n");
            printf("   (  /`.,   / \n");
            printf("    \\/  ;   / \n");
            printf("     | === | \n");

            printf("VS\n");

            printf("  _.--.--, \n");
            printf(" (___/ ,_ '------ \n");
            printf("(____\_ \ \n");
            printf("(____)\\/ \n");
            printf(" (__)     /------ \n");
            printf("   '-----` \n");

            yscore = yscore+1;

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("PLAYER 2 WINS! \n\n");}

        else if((play==3)&&(yer==2)){
            printf("  __      __ \n");
            printf(" ( _\\    /_ ) \n");
            printf("  \\ _\\  /_ / \n");
            printf("   \\ _\\/_ /_ _ \n");
            printf("   |_____/_/ /| \n");
            printf("   (  (_)__)J-) \n");
            printf("   (  /`.,   / \n");
            printf("    \\/  ;   / \n");
            printf("     | === | \n");

            printf("VS\n");

            printf("       _______ \n");
            printf("  ____(____   '--- \n");
            printf(" (______ \n");
            printf("(_______ \n");
            printf(" (_______ \n");
            printf("   (__________.--- \n\n");

            pscore = pscore+1;

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("PLAYER 1 WINS! \n\n");}

        else if((play==3)&&(yer=3)){
            printf("  __      __ \n");
            printf(" ( _\\    /_ ) \n");
            printf("  \\ _\\  /_ / \n");
            printf("   \\ _\\/_ /_ _ \n");
            printf("   |_____/_/ /| \n");
            printf("   (  (_)__)J-) \n");
            printf("   (  /`.,   / \n");
            printf("    \\/  ;   / \n");
            printf("     | === | \n");

            printf("VS\n");

            printf("   __      __ \n");
            printf("  (  \\    /  ) \n");
            printf("   \\  \\  /  / \n");
            printf(" _ _\\  \\/  / \n");
            printf("|\\ \\_\\_____| \n");
            printf("(-L(__(_)  ) \n");
            printf(" \\   ,.`\\  ) \n");
            printf("  \\   ;  \\/ \n");
            printf("   | === | \n\n");

            printf("PLAYER 1 SCORE: %d\n", pscore);
            printf("PLAYER 2 SCORE: %d\n\n", yscore);

            printf("IT'S A TIE! \n\n");}

        else
            printf("\aERROR \n\n");

    printf("Do you want to play again? (Y/N)\n");
    scanf(" %c", &choice);
    system("cls");
    }

    while (choice=='Y'||choice=='y');

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("\nThe score is %d-%d.\n", pscore, yscore);

        if(pscore>yscore)
            printf("\nPlayer 1 WINS!\n\n");
        else if(pscore<yscore)
            printf("\nPlayer 2 WINS!\n\n");
        else
            printf("\nIT'S A TIE!\n\n");

        printf("THANK YOU FOR PLAYING! \n");
    return 0;
}
