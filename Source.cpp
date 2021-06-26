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
		cout << "-------------------------------------------" << endl;
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
		cout << "-------------------------------------------" << endl;
		cout << "You return home fearing starvation!" << endl;
		goto choiceFour;
	}
	else if (choiceTwo == 2) {
		cout << "You continue despite hunger!" << endl;
		goto choiceFive;
	}
	else {
		cout << "Please enter '1' or '2'!";
		goto choiceTwo;
	}
choiceThree: //ending 1
	int choiceThree;
	cout << "-------------------------------------------" << endl;
	cout << "This was a huge mistake because, little did you know, an enemy army was training hard and wipped out your kingdom without struggle!" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Ending 1/3";
		_getch();
		return 1;

	choiceFour:
		int choiceFour;
		cout << "Your soldiers are happy and well fed!" << endl;
		cout << "The king has ordered you to attack a neighboring nation!" << endl;
		cout << "How do you wish to proceed?" << endl;
		cout << "Enter '1' to attack from the front?" << endl;
		cout << "Enter '2' to attack both flanks?" << endl;
		cin >> choiceFour;
		
		if (choiceFour == 1) {
			//ending 3
			cout << "They defeated you and your army!" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "Ending 3/3";
			_getch();
			return 3;
		}
		else if (choiceFour == 2) {
			cout << "Congrats, you win!!" << endl;
			return 4;
		}
		else {
			cout << "Please enter '1' or '2'!" << endl;
			goto choiceFour;
		}

	choiceFive: //ending 2
		int choiceFive;
		cout << "Your army has been wipped out by starvation and famine!" << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Ending 2/3";
		_getch();
		return 2;
		
}
