/*

BlackJack beta 0.2
Written from scratch by
    PintussinoGamer
    BG04PF

*/

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int score1, score2, picked_card_1, picked_card_2, cover_card_1, cover_card_2, shown_card_1, shown_card_2, decision1, decision2 = 0;
	shown_card_1 = rand() % 10 + 1;
	shown_card_2 = rand() % 10 + 1;
	cover_card_1 = rand() % 10 + 1;
	cover_card_2 = rand() % 10 + 1;

	score1 = shown_card_1 + cover_card_1;
	score2 = shown_card_2 + cover_card_2;

	cout << "WELCOME TO BLACKJACK";
	cout << endl;
	cout << endl;
	cout << endl;

	cout << "PLAYER 1, these are your cards: " << cover_card_1 << " and " << shown_card_1 << endl;
	cout << endl;
	cout << endl;
	cout << "PLAYER 2, these are your cards: " << cover_card_2 << " and " << shown_card_2 << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
       decision1 = 0;
       decision2 = 0;
       picked_card_1 = 0;
       picked_card_2 = 0;

		if (decision1 == 0)
		{
			cout << "Player 1, this is your score: "<< score1 << endl <<"\nDo you want a card? (0 = NO, 1 = YES) ==> ";
			cin >> decision1;
			if (decision1 == 1)
			{
				picked_card_1 = rand() % 10 + 1;
				cout << "The card you picked is: " << picked_card_1 << endl;
			};
			score1 = score1 + picked_card_1;
			cout << "Your score is: " << score1 << endl;
			cout << endl;
			cout << endl;
		};

		// ---------Check player one
		if (score1 > 21)
		{
			cout << "PLAYER 2 HAS WON THE GAME!" << endl;
			return 0;
		}
		else if (score1 == 21)
		{
			cout << "BLACKJACK" << endl;
			return 0;
		};

		// ---------

		if (decision2 == 0)
		{
			cout << "Player 2, this is your score: "<< score2 << endl <<"\nDo you want a card? (0 = NO, 1 = YES) ==> ";
			cin >> decision2;
			if (decision2 == 1)
			{
				picked_card_2 = rand() % 10 + 1;
				cout << "The card you picked is: " << picked_card_2 << endl;
			};
			score2 = score2 + picked_card_2;
			cout << "Your score is: " << score2 << endl;
			cout << endl;
			cout << endl;
		};
		decision2 = 0;

		// ------------Check player two

		if (score2 > 21)
		{
			cout << "PLAYER 1 HAS WON THE GAME!" << endl;
			return 0;
		}
		else if (score2 == 21)
		{
			cout << "BLACKJACK" << endl;
			return 0;
		};

		// --------------
	};


	if (score1 > score2)
	{
		cout << "PLAYER 1 WON THE GAME!" << endl;
		return 0;
	}
	else if (score2 > score1)
	{
		cout << "PLAYER 2 WON THE GAME!" << endl;
		return 0;
	}
	else
	{
		cout << "DRAW" << endl;
		return 0;
	};
	return 0;

};
