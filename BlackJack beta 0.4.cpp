            #include <iostream>
#include <cstdlib>
#include <time.h>

/*
------------------------------
-     BlackJack 0.4 beta     -
-  programmed from scratch   -
-             by             -
-                            -
- PintussinoGamer && BG04PF  -
------------------------------
*/

using namespace std;

int main()
{
    int nplay, decision, showncard, pickedcard, maxpl, maxscore = 0;
    int decfin = 1;
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    int score4 = 0;
    int score5 = 0;
    int round  = 0;


    cout << "Welcome to BlackJack!" << endl;
    cout << "Please, insert the number of players: ==> ";
    cin >> nplay;


    while(decfin==1){               // ==> All the players must stay to go to the final part of the game.

        round++;
        decfin = 0;

        for(int i=0; i<nplay; i++){     // ==> It repeats for every player (it depends on variable "nplay")

            pickedcard = 0;
            showncard = 0;

            cout << "PLAYER " << (i + 1) << endl;

            if(round == 1){
                showncard = rand() % 10 + 1;
                cout << "This is your actual shown card: " << showncard << endl;
            }else if(round>1){
                showncard = 0;
            }

            if(i+1 == 1){                                           // ==> These lines of code "work" only the first round,
                score1 = showncard + score1;                        // after they really do not need, the showncard is needed
                cout << "This is your score: " << score1 << endl;   // only the first turn.
            }else if(i+1 == 2){
                score2 = showncard + score2;
                cout << "This is your score: " << score2 << endl;
            }else if(i+1 == 3){
                score3 = showncard + score3;
                cout << "This is your score: " << score3 << endl;
            }else if(i+1 == 4){
                score4 = showncard + score4;
                cout << "This is your score: " << score4 << endl;
            }else if(i+1 == 5){
                score5 = showncard + score5;
                cout << "This is your score: " << score5 << endl;
            }else{
                cout << "ERROR" << endl;
                return 0;
            }                                                       // ==> They ends here. If something gets wrong, there's the else statement.

            cout << "HIT (1) or STAY (0)? ==> ";                            // ==> Here is asked the actual player if she/he wants the card.
            cin >> decision;
            if(decision==1){
                decfin = 1;                                                 // ==> Set the final decision to "1", and give a random value to
                pickedcard = rand() % 10 + 1;                               // the picked card.
                cout << "The card you picked is " << pickedcard << endl;
            }else if(decision == 0){
                pickedcard = 0;                                             // ==> Else, give to the picked card value "0", so nothing will be
            }                                                               // ==> added, and also it is resetted.

            if(i+1 == 1){                                                   // ==> Here, just make the sum to the current player's score with his
                score1 = score1 + pickedcard;                               // precedent score and the picked card (if she/he didn't want the card,
                cout << "This is your actual score: " << score1 << endl;    // nothing will be added, because "pickedcard = 0"
            }else if(i+1 == 2){
                score2 = score2 + pickedcard;
                cout << "This is your actual score: " << score2 << endl;
            }else if(i+1 == 3){
                score3 = score3 + pickedcard;
                cout << "This is your actual score: " << score3 << endl;
            }else if(i+1 == 4){
                score4 = score4 + pickedcard;
                cout << "This is your actual score: " << score4 << endl;
            }else if(i+1 == 5){
                score5 = score5 + pickedcard;
                cout << "This is your actual score: " << score5 << endl;
            }else{
                cout << "ERROR" << endl;
                return 0;
            }


            cout << "Press enter to continue: ";
            cin.ignore();


            if(score1>21){                                          // ==> Checks that none of the values is over 21, else it ends the game.
                cout << "PLAYER ONE HAS LOST THE GAME" << endl;
                return 0;
            }else if(score2>21){
                cout << "PLAYER TWO HAS LOST THE GAME" << endl;
                return 0;
            }else if(score3>21){
                cout << "PLAYER THREE HAS LOST THE GAME" << endl;
                return 0;
            }else if(score4>21){
                cout << "PLAYER FOUR HAS LOST THE GAME" << endl;
                return 0;
            }else if(score5>21){
                cout << "PLAYER FIVE HAS LOST THE GAME" << endl;
                return 0;
            }


            if(score1==21){                                         // ==> Also, it checks that, if someone gets exactly 21, it ends the game
                cout << "PLAYER ONE HAS WON THE GAME" << endl;      // with the victory of the current player.
                return 0;
            }else if(score2==21){
                cout << "PLAYER TWO HAS WON THE GAME" << endl;
                return 0;
            }else if(score3==21){
                cout << "PLAYER THREE HAS WON THE GAME" << endl;
                return 0;
            }else if(score4==21){
                cout << "PLAYER FOUR HAS WON THE GAME" << endl;
                return 0;
            }else if(score5==21){
                cout << "PLAYER FIVE HAS WON THE GAME" << endl;
                return 0;
            }

            char temp;
            temp = cin.get();

            cout << endl << endl << endl << endl;

        } // HERE ENDS FOR

    } // HERE ENDS WHILE

    maxpl = 1;                      // In this sequence of code, it checks who is the winner, using two variables to "remember"
    maxscore = score1;              // the winner player and its score.

    if(score2>maxscore){
        maxpl = 2;
        maxscore = score2;}
    if(score3>maxscore){
        maxpl = 3;
        maxscore = score3;}
    if(score4>maxscore){
        maxpl = 4;
        maxscore = score4;}
    if(score5>maxscore){
        maxpl = 5;
        maxscore = score5;}

    cout << endl << endl << endl << endl;
    cout << "And the winner is ..." << endl;
    cout << "Player " << maxpl << ", with a total score of " << maxscore << "!!!" << endl;
    cout << "Greetings!" << endl << endl;

    return 0;
}