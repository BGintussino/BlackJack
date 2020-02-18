#include <iostream>
#include <cstdlib>
#include <time.h>


/*----------------------------------------------------------------------------------------*/
using namespace std;
/*----------------------------------------------------------------------------------------*/

/*
---------------------------------
-    BlackJack 0.3 beta         -
-   programmed from scratch     -
-   by                          -
-                               -
-   PintussinoGamer && BG04PF   -
---------------------------------
*/


/*----------------------------------------------------------------------------------------*/
int multiplayer()
{

    srand(time(NULL));

    int nplayr, decision, pickedcard, maxvalue, maxplayer;

    int showncard1 = rand() % 10 + 1;
    int covercard1 = rand() % 10 + 1;
    int score1 = showncard1 + covercard1;

    int showncard2 = rand() % 10 + 1;
    int covercard2 = rand() % 10 + 1;
    int score2 = showncard2 + covercard2;

    int showncard3 = rand() % 10 + 1;
    int covercard3 = rand() % 10 + 1;
    int score3 = showncard3 + covercard3;

    int showncard4 = rand() % 10 + 1;
    int covercard4 = rand() % 10 + 1;
    int score4 = showncard4 + covercard4;

    int showncard5 = rand() % 10 + 1;
    int covercard5 = rand() % 10 + 1;
    int score5 = showncard5 + covercard5;



    cout << "How many players? ==>";
    cin >> nplayr;

    cout << endl;
    cout << endl;


    for( int i = 0; i<5; i++){


    /*   --------------------------   PLAYER ONE ------------------------------------ */
        pickedcard = 0;
        cout << "Player one, these are your cards: " << covercard1 << " - " << showncard1 << " and this is your score: " << score1 << endl;
        cout << "Player one, card? (YES = 1, NO = 0) ==> ";
        cin >> decision;

        if(decision==1){
            pickedcard = rand() % 10 + 1;
        }
        score1 = score1 + pickedcard;


        cout << endl;
        cout << "Player one, this is your new score: " << score1 << "  and this is your picked card: " << pickedcard << endl;
        pickedcard = 0;

        if (score1 > 21){

        cout << "The other players have won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        } else if (score1 == 21){

        cout << "The first player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        }

        cout << endl << endl << endl << endl;

        /*   --------------------------  END PLAYER ONE --------------------------------- */


    /*   --------------------------   PLAYER TWO ------------------------------------ */
        pickedcard = 0;

        cout << "Player two, these are your cards: " << covercard2 << "-" << showncard2 << " and this is your score: " << score2 << endl;
        cout << "Player two, card? (YES = 1, NO = 0) ==> ";
        cin >> decision;

        if(decision==1){
            pickedcard = rand() % 10 + 1;
        }
        score2 = score2 + pickedcard;


        cout << endl;
        cout << "Player two, this is your new score: " << score2 << "  and this is your picked card: " << pickedcard << endl;


        if (score2 > 21){

        cout << "The other players have won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        } else if (score2 == 21){

        cout << "The second player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        }

        cout << endl << endl << endl << endl;


     /*   --------------------------  END PLAYER TWO --------------------------------- */


    if (nplayr > 2){


        /*   --------------------------   PLAYER THREE ------------------------------------ */
        pickedcard = 0;

        cout << "Player three, these are your cards: " << covercard3 << "-" << showncard3 << " and this is your score: " << score3 << endl;
        cout << "Player three, card? (YES = 1, NO = 0) ==> ";
        cin >> decision;

        if(decision==1){
            pickedcard = rand() % 10 + 1;
        }
        score3 = score3 + pickedcard;


        cout << endl;
        cout << "Player three, this is your new score: " << score3 << "  and this is your picked card: " << pickedcard << endl;

        if (score3 > 21){

        cout << "The other players have won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        } else if (score3 == 21){

        cout << "The third player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        }

        cout << endl << endl << endl << endl;


     /*   --------------------------  END PLAYER THREE --------------------------------- */


            if(nplayr > 3){


        /*   --------------------------   PLAYER FOUR ------------------------------------ */
        pickedcard = 0;

        cout << "Player four, these are your cards: " << covercard4 << "-" << showncard4 << " and this is your score: " << score4 << endl;
        cout << "Player four, card? (YES = 1, NO = 0) ==> ";
        cin >> decision;

        if(decision==1){
            pickedcard = rand() % 10 + 1;
        }
        score4 = score4 + pickedcard;


        cout << endl;
        cout << "Player four, this is your new score: " << score3 << "  and this is your picked card: " << pickedcard << endl;


        if (score4 > 21){

        cout << "The other players have won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        } else if (score4 == 21){

        cout << "The fourth player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

        }

        cout << endl << endl << endl << endl;


     /*   --------------------------  END PLAYER FOUR --------------------------------- */


                    if(nplayr > 4){


                        /*   --------------------------   PLAYER FIVE ------------------------------------ */
                    pickedcard = 0;

                    cout << "Player five, these are your cards: " << covercard5 << "-" << showncard5 << " and this is your score: " << score5 << endl;
                    cout << "Player five, card? (YES = 1, NO = 0) ==> ";
                    cin >> decision;

                    if(decision==1){
                        pickedcard = rand() % 10 + 1;
                    }
                    score5 = score5 + pickedcard;


                    cout << endl;
                    cout << "Player five, this is your new score: " << score5 << "  and this is your picked card: " << pickedcard << endl;


                    if (score5 > 21){

                    cout << "The other players have won the game!" << endl;
                    char a = 0;
                    cin >> a;
                    cin.ignore();
                    cin.get();
                    return 0;

                    } else if (score5 == 21){

                    cout << "The fifth player won the game!" << endl;
                    char a = 0;
                    cin >> a;
                    cin.ignore();
                    cin.get();
                    return 0;

                    }

                    cout << endl << endl << endl << endl;

                /*   --------------------------  END PLAYER FIVE --------------------------------- */

                }
             }
        }
    }


    cout << "Let's show the final scores:" << endl;
    cout << "PLAYER ONE: " << score1 << endl;
    cout << "PLAYER TWO: " << score2 << endl;

    if(nplayr > 2){
        cout << "PLAYER THREE: " << score3 << endl;
        if (nplayr > 3){
            cout << "PLAYER FOUR: " << score4 << endl;
            if(nplayr==5)
                cout << "PLAYER FIVE: " << score5 << endl;
        }
    }



    maxvalue = score1;
    maxplayer = 1;

    if(maxvalue < score2){
        maxvalue = score2;
        maxplayer = 2;
    }


    if(nplayr > 2){
        if(maxvalue < score3){
        maxvalue = score3;
        maxplayer = 3;

        if(nplayr > 3){
            if(maxvalue < score4){
            maxvalue = score4;
            maxplayer = 4;

            if(nplayr==5){
                if(maxvalue < score5){
                    maxvalue = score5;
                    maxplayer = 5;
                    }

                }

            }

        }

    }
}

    cout << endl << endl << endl << endl;
    cout << "And The winner is..." << endl;
    cout << "Player " << maxplayer << ", with a score of " << maxvalue << endl;
    cout << "Greetings!" << endl;
    cout << endl << endl << endl << endl;
    return 0;

}
/*----------------------------------------------------------------------------------------*/







/*----------------------------------------------------------------------------------------*/
int vsAI()
{
    srand(time(NULL));

    int covercard1 = rand() % 10 + 1;
    int showncard1 = rand() % 10 + 1;
    int score1 = covercard1 + showncard1;

    int covercardAI = rand() % 10 + 1;
    int showncardAI = rand() % 10 + 1;
    int scoreAI = covercardAI + showncardAI;

    int decision1, decisionAI = 0;
    int pickedcard = 0;
    int randin;

    cout << endl << endl << endl;

    for(int i=0; i<5; i++){

        cout << "Player one round \nThis is your score: " << score1 << ", and these are your cards: " << showncard1 << " " << covercard1;
        cout << endl << endl;
        cout << "Hit or stay (0 = STAY, 1 = HIT)? ==> ";
        cin >> decision1;

        if(decision1==1){
            pickedcard = rand() % 10 + 1;
        }

        score1 = score1 + pickedcard;
        cout << "Your score is " << score1 << ", and the card you picked is " << pickedcard;
        pickedcard = 0;
        cout << endl << endl << endl << endl;

        cout << "A.I. round" << endl;
        cout << "A.I. score is " << scoreAI << " and its cards are " << showncardAI << " " << covercardAI << endl;

        if(score1>21){
            cout << "Player one has lost the game! \nA.I. player has won the game!";
            return 0;
        }else if(score1==21){
            cout << "PLAYER ONE HAS WON THE GAME!";
            return 0;
        }


        if(scoreAI < 17){

            pickedcard = rand() % 10 + 1;

        }else{

            if((score1 - covercard1 + 7) >= scoreAI){
                randin = rand() % 2 + 1;

                    if(randin < 3){
                        pickedcard = rand() % 10 + 1;
                        decisionAI = 1;
                    }else{
                        decisionAI = 0;
                        }

            }else{
                decisionAI = 0;
            }
        }

        scoreAI = scoreAI + pickedcard;
        cout << "The A.I. score now is " << scoreAI << " and the picked card is " << pickedcard;
        pickedcard = 0;
    cout << endl << endl << endl << endl;

        if(scoreAI>21){
            cout << "Player A.I. has lost the game! \nPlayer one has won the game!";
            cout << endl << endl << endl;
            return 0;
        }else if(scoreAI==21){
            cout << "A.I. PLAYER HAS WON THE GAME!";
            cout << endl << endl << endl;
            return 0;
        }

    }

    cout << endl << endl << endl;
    cout << "SHOWDOWN!" << endl;
    cout << "Player one score: " << score1 << endl;
    cout << "Player A.I. score: " << scoreAI << endl;
    cout << endl << endl << endl;

    if(score1 > scoreAI){
        cout << "PLAYER ONE HAS WON THE GAME!";
    }else if (scoreAI > score1){
        cout << "PLAYER A.I. HAS WON THE GAME!";
    }else{
        cout << "PARS";
    }

    return 0;

}
/*----------------------------------------------------------------------------------------*/





/*----------------------------------------------------------------------------------------*/
int main()
{

    int mainmenu;

    cout << "Welcome to BlackJack 0.3 beta!" << endl;
    cout << "1. Play multiplayer" << endl;
    cout << "2. Play vs A.I." << endl;
    cout << "3. Rules" << endl;
    cout << "4. Quit" << endl;
    cout << endl;
    cout << "Choose a number: ==>";
    cin >> mainmenu;


    switch(mainmenu){

        case 1:
            cout << endl << endl << endl << endl << endl;
            multiplayer();
            break;

        case 2:
            vsAI();
            break;

        case 3:
            cout << "Rules" << endl;
            break;

        case 4:
            cout << "Quitting the game" << endl;
            break;

    }

    return 0;
}
