//Array practice

#include <iostream>
#include <iomanip>
using namespace std;

void getCards(int [], int);
void displayCardsInHand(int [], int);
int main(){
	const int PLAYERS = 4; // Setting players to 4
	int num[PLAYERS];      //Array to hold the number of cards in hand
	
	getCards(num, PLAYERS);//invoker
	displayCardsInHand(num, 4);//invoker
	return 0;
}

void getCards(int cards[], int PLAYERS){
	cout << "Enter the number of cards in \n";
	for (int player = 0; player < PLAYERS; player++){
		cout << "Player #" << (player+1) << " hand: ";
		cin >> cards[player];
	}
}
void displayCardsInHand(int cards[], int PLAYERS){
	cout << "\nNumber of cards In hand: \n";
	for (int player = 0; player < PLAYERS; player++){
		cout << "Player #" << (player + 1) << ": " << cards[player] << endl;
	}
}