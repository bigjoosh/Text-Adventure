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
		cout << "\nYour solders train well everyday!\n" << endl;
		cout << "----------------Press any key to continue----------------\n" << endl;
		_getch();
		goto choiceTwo;
	}
	else if (choiceOne == 2) {
		cout << "\n---------------------------------------------------";
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
	cout << "\nEnter '1' to return home from training?" << endl;
	cout << "\nEnter '2' to continue training?\n" << endl;
	_getch();
	cin >> choiceTwo;

	if (choiceTwo == 1) {
		cout << "\n---------------------------------------------------";
		cout << "\nYou return home fearing starvation!" << endl;
		goto choiceFour;
	}
	else if (choiceTwo == 2) {
		cout << "\n---------------------------------------------------";
		cout << "\nYou continue despite hunger!" << endl;
		goto choiceFive;
	}
	else {
		cout << "Please enter '1' or '2'!";
		goto choiceTwo;
	}
choiceThree: //ending 1
	int choiceThree;
	cout << "\n~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "This was a huge mistake because, little did you know, an enemy army was training hard and wipped" << endl;
	cout << "out your kingdom without struggle!" << endl;
	cout << "Ending 1/6";
		_getch();
		return 1;

	choiceFour:
		int choiceFour;
		cout << "Your soldiers are happy and well fed!" << endl;
		cout << "The king has ordered you to attack a neighboring nation!" << endl;
		cout << "How do you wish to proceed?" << endl;
		cout << "\nEnter '1' to attack from the front?" << endl;
		cout << "\nEnter '2' to attack both flanks?\n" << endl;
		cin >> choiceFour;
		
		if (choiceFour == 1) {
			//ending 3
			cout << "\n~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "They defeated you and your army!" << endl;
			cout << "Ending 3/6";
			_getch();
			return 3;
		}
		else if (choiceFour == 2) {
			cout << "\n---------------------------------------------------";
			cout << "\nYou defeated their army and took over their nation!" << endl;
			goto choiceSix;
			_getch();
		}
		else {
			cout << "Please enter '1' or '2'!" << endl;
			goto choiceFour;
		}

	choiceFive: //ending 2
		int choiceFive;
		cout << "\n~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Your army has been wipped out by starvation and famine!" << endl;
		cout << "Ending 2/6";
		_getch();
		return 2;

	choiceSix:
		int choiceSix;
		cout << "What do you want to do?" << endl;
		cout << "\nEnter '1' to betray the king and take the nation for yourselves?" << endl;
		cout << "\nEnter '2' to report your success to the king?\n" << endl;
		cin >> choiceSix;

		if (choiceSix == 1) {
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~CHAPTER 1: BETRAYAL~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
			goto choiceSeven;
		}

		else if (choiceSix == 2) {
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~CHAPTER 1: SAVIOR~~~~~~~~~~~~~~~~~~~~~~\n" << endl;
			goto choiceEight;
		}

		//C1
	choiceSeven:
		int choiceSeven;
		cout << "You choose to betray your king!" << endl;
		cout << "You have, at most, 7 days until the king relizes that you and your army have" << endl;
		cout << "gone awol!" << endl;
		cout << "\nEnter '1' to begin training your new army?" << endl;
		cout << "\nEnter '2' to plunder nearby nations?\n" << endl;
		cin >> choiceSeven;

		if (choiceSeven == 1) {
			cout << "\n---------------------------------------------------";
			cout << "\nYou and your army train vigorusly for the upcoming war!" << endl;
			goto choiceNine;
		}
		else if (choiceSeven == 2) {
			//ending 4
			cout << "\n~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\nYou attempt to plunder nearby nations, however you and your army died trying so." << endl;
			cout << "ENDING 4/6" << endl;
			return 4;
		}

	choiceNine:
		int choiceNine;
		cout << "7 days have passed, you and your army are ready!" << endl;
		cout << "What do you want to do?" << endl;
		cout << "\nEnter '1' to attack first?" << endl;
		cout << "\nEnter '2' wait and defend?\n" << endl;
		cin >> choiceNine;

		if (choiceNine == 1) {
			//ending 6
			cout << "\n~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "\nYou attempt to attack first, but their overwhelming" << endl;
			cout << "defenses killed you!" << endl;
			cout << "ENDING 6/6" << endl;
			return 6;
		}
		else if (choiceNine == 2) {
			cout << "\n---------------------------------------------------";
			cout << "You bunker in and wait for a seige, however it never comes." << endl;
			cout << "A mail carrier on horseback comes and delievers you a message, it reads:\n" << endl;
			cout << "Dear, " << name << endl;
			cout << "I, the king of the greeks, hereby declare war on you and your 'nation'!" << endl;
			cout << "Prepare for battle!  -the king" << endl;
			goto choiceTen;
		}
	choiceTen:
		int choiceTen;
		cout << "\n\n\n**This story line is coming soon**" << endl;
		return 301;

		//C1
	choiceEight:
		int choiceEight;
		cout << "You return to the king and he's pleased" << endl;
		cout << "about your success!" << endl;
		cout << "He asks you to go out on a quest to save the kidnapped princess." << endl;
		cout << "\nEnter '1' to accept his quest?" << endl;
		cout << "\nEnter '2' to reject hes quest?\n" << endl;
		cin >> choiceEight;
		
		if (choiceEight == 1) {
			cout << "\n---------------------------------------------------";
			cout << "\nYou accept his request!" << endl;
			cout << "\n**This storyline is coming soon!**" << endl;
			return 301;
		}
		else if (choiceEight == 2) {
			//ending 5
			cout << "\n~~~~~~~~~~~~~~~~~~~~~GAME OVER~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "This up sets the king and he has ordered your execution!" << endl;
			cout << "ENDING 5/6" << endl;
			return 5;
		}
}