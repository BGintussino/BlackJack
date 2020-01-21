/*

BlackJack 1.0
Written from scratch by
    PintussinoGamer
    BG04PF

*/



#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    srand(time(NULL));



    int score1p = 0;
    int score2p = 0;
    int decision = 0;
    int firstcardp1 = 0;
    int firstcardp2 = 0;
    int secondcardp1 = 0;
    int secondcardp2 = 0;
    int thirdcardp1 = 0;
    int thirdcardp2 = 0;
    int fourthcardp1 = 0;
    int fourthcardp2 = 0;
    int fifthcardp1 = 0;
    int fifthcardp2 = 0;
    int sixthcardp1 = 0;
    int sixthcardp2 = 0;
    int remainingp1 = 0;
    int remainingp2 = 0;



    cout << "Welcome to BlackJack!" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



//-------------------------------------------------------------------------------------------------------------------------------------------------------

    cout << "PLAYER ONE -- ROUND ONE" << endl;
    firstcardp1 = rand()%10 + 1;
    cout << "This is your first card: " << firstcardp1 << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;



    if (decision == 1){

        secondcardp1 = rand()%10 + 1;
        score1p = firstcardp1 + secondcardp1;

        cout << "The second card is: " << secondcardp1 << endl;
        cout << "Your score is: " << score1p << endl;

    } else if (decision == 0){

        score1p = firstcardp1;

        cout << "Your score is: " << score1p << endl;
    }




    if (score1p > 21){

        cout << "The second player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The first player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }



    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


//-------------------------------------------------------------------------------------------------------------------------------------------------------




    cout << "SECOND PLAYER -- FIRST ROUND" << endl;
    firstcardp2 = rand()%10 + 1;
    cout << "This is your first card: " << firstcardp2 << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;



     if (decision == 1){

        secondcardp2 = rand()%10 + 1;
        score2p = firstcardp2 + secondcardp2;

        cout << "The second card is: " << secondcardp2 << endl;
        cout << "Your score is: " << score2p << endl;

    } else if (decision == 0){

        score2p = firstcardp2;

        cout << "Your score is: " << score2p << endl;
    }



    if (score2p > 21){

        cout << "The first player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The second player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


//-------------------------------------------------------------------------------------------------------------------------------------------------------


    cout << "FIRST PLAYER -- SECOND ROUND" << endl;
    cout << "This is your actual score: " << score1p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;



    if (decision == 1){

        thirdcardp1 = rand()%10 + 1;
        score1p = score1p + thirdcardp1;

        cout << "The third card is: " << thirdcardp1 << endl;
        cout << "Your score is: " << score1p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score1p << endl;
    }



    if (score1p > 21){

        cout << "The second player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The first player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


//-------------------------------------------------------------------------------------------------------------------------------------------------------

    cout << "SECOND PLAYER -- SECOND ROUND" << endl;
    cout << "This is your actual score: " << score2p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;


   if (decision == 1){

        thirdcardp2 = rand()%10 + 1;
        score2p = score2p + thirdcardp2;

        cout << "The third card is: " << thirdcardp2 << endl;
        cout << "Your score is: " << score2p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score2p << endl;
    }



   if (score2p > 21){

        cout << "The first player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score2p == 21){

        cout << "The second player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



//-------------------------------------------------------------------------------------------------------------------------------------------------------

    cout << "FIRST PLAYER -- THIRD ROUND" << endl;
    cout << "This is your actual score: " << score1p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;


   if (decision == 1){

        fourthcardp1 = rand()%10 + 1;
        score1p = score1p + fourthcardp1;

        cout << "The fourth card is: " << fourthcardp1 << endl;
        cout << "Your score is: " << score1p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score1p << endl;
    }



   if (score1p > 21){

        cout << "The second player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The first player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



//-------------------------------------------------------------------------------------------------------------------------------------------------------


    cout << "SECOND PLAYER -- THIRD ROUND" << endl;
    cout << "This is your actual score: " << score2p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;


   if (decision == 1){

        fourthcardp2 = rand()%10 + 1;
        score2p = score2p + fourthcardp2;

        cout << "The fourth card is: " << fourthcardp2 << endl;
        cout << "Your score is: " << score2p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score2p << endl;
    }



   if (score2p > 21){

        cout << "The first player has won the game!" << endl;
            char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score2p == 21){

        cout << "The second player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



//-------------------------------------------------------------------------------------------------------------------------------------------------------



    cout << "FIRST PLAYER -- FOURTH ROUND" << endl;
    cout << "This is your actual score: " << score1p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;


   if (decision == 1){

        fifthcardp1 = rand()%10 + 1;
        score1p = score1p + fifthcardp1;

        cout << "The fifth card is: " << fifthcardp1 << endl;
        cout << "Your score is: " << score1p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score1p << endl;
    }



   if (score1p > 21){

        cout << "The second player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The first player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



//-------------------------------------------------------------------------------------------------------------------------------------------------------


    cout << "SECOND PLAYER -- FOURTH ROUND" << endl;
    cout << "This is your actual score: " << score2p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;


   if (decision == 1){

        fifthcardp2 = rand()%10 + 1;
        score2p = score2p + fifthcardp2;

        cout << "The fifth card is: " << fifthcardp2 << endl;
        cout << "Your score is: " << score2p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score2p << endl;
    }



   if (score2p > 21){

        cout << "The first player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The second player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



//-------------------------------------------------------------------------------------------------------------------------------------------------------


    cout << "WARNING! THIS IS THE LAST ROUND!";
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


//-------------------------------------------------------------------------------------------------------------------------------------------------------


    cout << "FIRST PLAYER -- LAST ROUND" << endl;
    cout << "This is your actual score: " << score1p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;


   if (decision == 1){

        sixthcardp1 = rand()%10 + 1;
        score1p = score1p + sixthcardp1;

        cout << "The sixth card is: " << sixthcardp1 << endl;
        cout << "Your score is: " << score1p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score1p << endl;
    }



   if (score1p > 21){

        cout << "The second player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The first player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


//-------------------------------------------------------------------------------------------------------------------------------------------------------


    cout << "SECOND PLAYER -- LAST ROUND" << endl;
    cout << "This is your actual score: " << score2p << endl;
    cout << "0 to STAY, 1 to HIT ==> ";
    cin >> decision;


   if (decision == 1){

        sixthcardp2 = rand()%10 + 1;
        score2p = score2p + sixthcardp2;

        cout << "The sixth card is: " << sixthcardp2 << endl;
        cout << "Your score is: " << score2p << endl;

    } else if (decision == 0){

        cout << "Your score is: " << score2p << endl;
    }



   if (score2p > 21){

        cout << "The first player has won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (score1p == 21){

        cout << "The second player won the game!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


//-------------------------------------------------------------------------------------------------------------------------------------------------------



    cout << "Ok, let's check the points...";
    cout << endl;
    cout << endl;
    cout << "First player score is: " << score1p << endl;
    cout << "Second player score is: " << score2p << endl;
    cout << endl;
    cout << endl;
    remainingp1 = 21 - score1p;
    remainingp2 = 21 - score2p;



    if ( remainingp1 > remainingp2){

        cout << "THE SECOND PLAYER HAS WON THE GAME!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    } else if (remainingp2 > remainingp1){

        cout << "THE FIRST PLAYER HAS WON THE GAME!" << endl;
        char a = 0;
        cin >> a;
        cin.ignore();
        cin.get();
        return 0;

    }


//-------------------------------------------------------------------------------------------------------------------------------------------------------

}
