#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	char name[25];
	cout << "What is your name?" << endl;
	cin.getline(name, 25);
	cout << name << ", you're a commander of the Greek army!" << endl;
	cout << "----------------Press any key to continue----------------" << endl;
	_getch();

	system("cls");
choiceOne:
	retryOne:
	int choiceOne;
	cout << "What would you like to do?" << endl;
	cout << "Enter '1' to train your solders?" << endl;
	cout << "Enter '2' to do nothing?\n" << endl;
	_getch();
	cin >> choiceOne;

	if (choiceOne == 1) {
		cout << "Your solders train well everyday!\n" << endl;
		cout << "----------------Press any key to continue----------------" << endl;
		_getch();
		goto choiceTwo;
	}
	else if (choiceOne == 2) {
		cout << "\nYou sit on your butt the entire year!" << endl;
		goto choiceThree;
	}
	else {
		"Please enter '1' or '2'!";
		goto retryOne;
	}
choiceTwo:
	int choiceTwo;
	cout << "Your solders are hungry however you have no food, what do you do?" << endl;
	cout << "Enter '1' to return home from training?" << endl;
	cout << "Enter '2' to continue training?" << endl;
	_getch();
	cin >> choiceTwo;

	if (choiceTwo == 1) {
		cout << "You return home fearing starvation!" << endl;

	}
	else if (choiceTwo == 2) {
		cout << "You continue despite hunger!" << endl;
	}
	else {
		cout << "Please enter '1' or '2'!";
		goto choiceTwo;
	}
choiceThree: //ending 1
	int choiceThree;
	cout << "This was a huge mistake because, little did you know, an enemy army was training hard and wipped out your kingdom without struggle!" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Ending 1/1";
		_getch();
}