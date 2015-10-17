//Fix display of hanged man. 0 is fixed. Constructor, add what happens if word is only one letter
//I'm terrible at commenting
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Hangman{
public:
	Hangman(const string& word) :answer(word), attempts(0){
		h_guess = h_guess.empty();
		if (word.size() == 1){
			h_guess = "_";
		}
		for (size_t i = 1; i < word.size(); i++){
			h_guess.push_back('_');
		}
	}
	Hangman(const string& word, const int& m) :answer(word), attempts(0), wrong(0), gameMode(m){
		if (m == 0){
			setVictory(10);
		}
		else if (m == 1){
			setVictory(7);
		}
		else if (m == 2){
			setVictory(4);
		}
		else if (m == 3){
			setVictory(1);
		}
		h_guess = h_guess.empty();
		for (size_t i = 1; i < word.size(); i++){
			h_guess.push_back('_');
		}
	}

	void hangedMan(int attempts, int mode){
		//attempts = wrong attempts 
		/*
		___________
		|         |
		|        \O/
		|		  |
		|		  |
		|		 / \
		|______________________
		*/
		if (mode == 0){
			/*Easy mode - 10 */

			if (attempts == 0){
				return;
			}
			else if (attempts == 1){
				//Bottom stand
				cout << " ______________________" << endl;
			}
			else if (attempts == 2){
				//Left part of hang
				cout << "|" << endl << "|" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 3){
				//Entire hang
				cout << "___________" << endl << "|         |" << endl << "|" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;

			}
			else if (attempts == 4){
				//Head
				cout << "___________" << endl << "|         |" << endl << "|         O" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 5){
				//Left arm, head
				cout << "___________" << endl << "|         |" << endl << "|        \\O" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 6){
				//Left arm, head, right arm
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 7){
				//Left arm, head, right arm, half of body
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|         |" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 8){
				//Left arm, head, right arm, full body
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|         |" << endl << "|         |" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 9){
				//Left arm, head, right arm, full body, left leg
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|         |" << endl << "|         |" << endl << "|	 / " << endl << "|______________________" << endl;
			}
			else{
				//Entire body, the end
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|	  |" << endl << "|	  |" << endl << "|	 / \\ " << endl << "| ______________________" << endl;
				cout << "MUCH DEATH, MUCH LOSS" << endl;
			}		
		}
		else if (mode == 1){
			/*Medium mode - 7*/

			/*
			___________
			|         |
			|        \O/
			|		  |
			|		  |
			|		 / \
			|______________________
			*/
			if (attempts == 0){
				return;
			}
			 else if (attempts == 1){
				//Just the hang stand
				cout << "___________" << endl << "|         |" << endl << "|" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;

			}
			 else if (attempts == 2){
				 //Head
				 cout << "___________" << endl << "|         |" << endl << "|         O" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			 }
			 else if (attempts == 3){
				 //Left arm, head
				 cout << "___________" << endl << "|         |" << endl << "|        \\O" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			 }
			 else if (attempts == 4){
				 //Left arm, head, right arm
				 cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			 }
			 else if (attempts == 5){
				//Left arm, head, right arm, full body
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|         |" << endl << "|         |" << endl << "|" << endl << "|______________________" << endl;
			}
			 else if (attempts == 6){
				 //Left arm, head, right arm, full body, left leg
				 cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|         |" << endl << "|         |" << endl << "|	 / " << endl << "|______________________" << endl;
			 }
			 else{
				 //Entire body, the end
				 cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|	  |" << endl << "|	  |" << endl << "|	 / \\ " << endl << "| ______________________" << endl;
				 cout << "MUCH DEATH, MUCH LOSS" << endl;
			 }
		}
		else if (mode == 2){
			/*Hard mode - 4 */
			if (attempts == 0){
				//Just the hang stand
				cout << "___________" << endl << "|         |" << endl << "|" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 1){
				//Head
				cout << "___________" << endl << "|         |" << endl << "|         O" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 2){
				//Left arm, head, right arm
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else if (attempts == 3){
				//Left arm, head, right arm, full body
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|         |" << endl << "|         |" << endl << "|" << endl << "|______________________" << endl;
			}
			else{
				//Entire body, the end
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|	  |" << endl << "|	  |" << endl << "|	 / \\ " << endl << "| ______________________" << endl;
				cout << "MUCH DEATH, MUCH LOSS" << endl;
			}
		}
		else if (mode == 3){
			/*One mistake = death */
			if (attempts == 0){
				//Just the hang stand
				cout << "___________" << endl << "|         |" << endl << "|" << endl << "|" << endl << "|" << endl << "|" << endl << "|______________________" << endl;
			}
			else{
				//Entire body, the end
				cout << "___________" << endl << "|         |" << endl << "|        \\O/" << endl << "|	  |" << endl << "|	  |" << endl << "|	 / \\ " << endl << "| ______________________" << endl;
				cout << "MUCH DEATH, MUCH LOSS" << endl;
			}
		}

	}
	int getAttempts()const{ return attempts; }
	int getWong()const{ 
		//In honor of Cindy Wong
		return wrong; 
	}
	string getGuess()const{ return h_guess; }
	string getAnswer()const{ return answer; }
	int getVictory()const{ return victory;	}
	void setWong(int a){ wrong = a; }
	void setAttempts(int a){ attempts = a; }
	void setGuess(string a){ h_guess = a; }
	void setVictory(int a){ victory = a; }
	void displayTried(){
		setAttempts(getAttempts() + 1);
		cout << "Letters tried: ";
		if (tried.size() == 0){ cout << "None"; }
		for (char a : tried){
			cout << a << " ";
		}
		cout << endl;
		if (getWong() == getVictory()){
			cout << "You lost already. GG. But continue on. " << endl;
 		}
	}
	void guess(char l){
		for (char a : tried){
			if ((toupper(a) == l) || (tolower(a) == l)){
				cout << "You already tried this" << endl;
				return;
			}
		}
		tried.push_back(l);
		fillAnswer(l);
	}
	void fillAnswer(char a){
		bool inVec = false;
		for (size_t i = 0; i < answer.length(); i++){
			if ((toupper(answer[i]) == a) || (tolower(answer[i])) == a){
				h_guess[i] = a;
				inVec = true;
			}
		}
		if (inVec == false){
			wrong++;
		}
	}
	bool isCompleted(){
		for (size_t i = 0; i < answer.size(); i++){
			if (toupper(answer[i]) != toupper(h_guess[i])){
				return false;
			}
		}
		return true;
	}

private:
	int attempts;
	int wrong;
	vector<char>tried;
	string answer;
	string h_guess;
	int gameMode;
	int victory;
};

void clearScreen()
{
	cout << string(100, '\n');
}

int main(){
	string word;
	int mode;
	int again = 1;
	while (again){

		cout << "Hangman: " << endl;
		cout << "Pick a game mode." << endl << "0: Easy " << endl << "1: Medium" << endl << "2: Hard" << endl;
		cin >> mode;
		if (mode == 0){
			cout << "Entering noob mode. I mean easy. " << endl;
		}
		else if (mode == 1){
			cout << "Medium. Cause you're boring. " << endl;
		}
		else if (mode == 2){
			cout << "Go big or go home. Hard mode." << endl;
		}
		else{
			mode = 3;
			cout << "Entering extremely hard mode cause you can't follow directions." << endl;
		}
		cin.clear();
		cin.ignore(numeric_limits<int>::max(), '\n');
		cout << "Player One: Enter a word." << endl;
		cin >> word;
		clearScreen();

		Hangman h(word, mode);
		bool fill = false;
		char letter;
		while (fill == false){
			h.displayTried();
			cout << "Player Two: Enter a letter." << endl;
			cin >> letter;
			h.guess(letter);
			cout << h.getGuess() << endl << "Attempts: " << h.getAttempts() << endl;
			fill = h.isCompleted();
			h.hangedMan(h.getWong(), mode);
		}
		if (h.getWong() >= h.getVictory()){
			cout << "You found the word. But did you win? No. That'll be $5,000 for losing." << endl;
		}
		else{
			cout << "You win!" << endl << "While you were playing, all of your savings were discretly wired to my bank account" << endl;
		}
		cout << "Attempts: " << h.getAttempts() << endl;
		cout << "Cindy Wong answers: " << h.getWong() << endl;
		cout << "Again?" << endl << "(1) YES          (0) GET ME OUT " << endl;
		cin.clear();
		cin >> again;
		if (again != 1){
			again = 0;
		}
	}
	cout << "You're missing out.. " << endl;
	
	system("pause");
	return 1;
}
