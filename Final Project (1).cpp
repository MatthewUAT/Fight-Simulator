// Final Project.cpp By: Matthew Sender


// libaries that are used
#include <iostream>
#include <string>

// using namespace so i don't have to type std in front of my input and output
using namespace std;

// temp global varable that will be used in most functions to take user commands
string User;

// function to display the title does not take or return data
void displayTitle();

//function to get user name and returns data but does not take it
string getUserName();

// this function will take data but not return it
void userWelcome(string* ptr_userName);

// this function is for the intro level
void introLevel(string* ptr_userName);

// this function is for the first level
void firstLevel(string* ptr_userName);

// this function is for the second level
void secondLevel(string* ptr_userName);

// this function is for the thirdlevel
void thirdLevel(string* ptr_userName);

// fourth level function
void fourthLevel(string* ptr_userName);

//score keeper
void finalScore();

// variable for score keeping
int score =0 ;

int main()
{
	// create a string local var to hold user's name
	string userName;

	//call our get user name and returns value to userName var
	userName = getUserName();
	// call the function to display the title
	displayTitle();

	// pass the user's name into the welcome
	userWelcome(&userName); 

	// call the intro level
	introLevel(&userName);

	//call the first level
	firstLevel(&userName);

	// call the second level
	secondLevel(&userName);

	//call the third level
	thirdLevel(&userName);

	//call the fourth level
	fourthLevel(&userName);

	//calls the score function
	finalScore();
}

// Functions to be used in main()

void fourthLevel(string* ptr_userName)
{
	cout << "\t\t ***Welcome to the Fourth Level***\n\n\n";
	cout << "You continue left as wade through the icy water\n";
	cout << "You start to notice the water getting more shallow\n";
	cout << "You get to a staircase, You can go left and go up\n or right and go down\n";
	cout << "Which do you choose?";
	//user direction input
	cin >> User;
	// if user says l for left
	//then displays text and exits the program
	if (User == "l") {
		cout << ("You go up the stairs eventually emerging from the gound\n congrats you beat the Maze of the Doom!!!!\n\n\n");
		score++;

	}
	else {
		cout << "You go down the stairs\n never to be seen again";
		score--;
		cout << "Better luck next time\n";
		fourthLevel(ptr_userName);
	}
	system("pause");

}

void thirdLevel(string* ptr_userName)
{
	// third level
	//text to be displayed
	cout << "\t\t ***Welcome to the Third Level***\n\n\n";
	cout << "Wise choice " <<  * ptr_userName << " you find stairs going deeper at the bottom\n";
	cout << "the water is now over your boots \nyou continue hoping you get out before you drown\n";
	cout << "The water is so cold \nyou must hurry so you start running\n";
	cout << "You trip and far into a wall \nanother intersection forward or right\n";
	//user direction input
	cin >> User;
	// if user says l for left
	//then displays text and exits the program
	if (User == "r") {
		cout << "You run down the hallway and the water keeps getting deeper\n\nYOU DROWNED!!!!\n\n";
		//if wrong choice user restarts previous level
		thirdLevel(ptr_userName);
		// temp var that subs total
		score--;
	}
	else
	{
		//temp var that adds to total
		score++;
	}
	cout << "As you continue to run \nthe light of your torch begins to fade\n";
	cout << "The water is now over your waist\n you are so cold but you push ahead\n";
	cout << "You get to an intersection \nyou try to get warmth off the torch \nbut you must choose forward or left?\n";
	cin >> User;
	if (User == "f") {
		cout << " dead end you froze to death\n";
		//if wrong choice user restarts previous level
		thirdLevel(ptr_userName);
		//temp var that subs to total
		score--;
	}
	else
	{
		//temp var that adds to total
		score++;
	}

}



void secondLevel(string* ptr_userName)
{
	// second level
	// text to be displayed
	cout << "\t\t ***Welcome to the Second Level***\n\n\n";
	cout << "You walk down the narrow stairs \ndecending deeper into the maze.\n";
	cout << "you get to the bottom of the stairs \nand continue walking\n";
	cout << "You come to an intersection \nyou can go left or right \n you notice what looks like blood \ngoing to the right.\n";
	cout << "What is your choice?\n";
	//user direction input
	cin >> User;
	// if user says r for right
	//then displays text and exits the program
	if (User == "r") {
		cout << "You go right and as you walk \nyou hear footsteps coming to you \nthey are getting closer and faster \nit...\n it is...\n it is bigfoot\n\n";
		cout << "Bigfoot killed you\n";
		//if wrong choice user restarts previous level
		secondLevel(ptr_userName);
		////temp var that subs to total
		score--;
	}
	else
	{
		//temp var that adds to total
		score++;
	}
	cout << "You make the turn but \nyou notice the walls begin to get wet.\n";
	cout << "Pretty soon the floor starts splashing \nwith ever step.\n";
	cout << "The water starts to get deeper \n oh no, another intersection \nanother choice left or right?\n";
	//user direction input
	cin >> User;
	// if user says l for left
	//then displays text and exits the program
	if (User == "l") {
		cout << "You walked off a cliff \nYOU DIED!!!\n";
		//if wrong choice user restarts previous level
		secondLevel(ptr_userName);
		//temp var that subs to total
		score--;
	}
	else
	{
		//temp var that adds to total
		score++;
	}

}

void firstLevel(string* ptr_userName)
{
	// first level
// 
	// text to be displayed
	cout << "\t\t ***Welcome to the First Level***\n\n\n";
	cout << " The flame is a warm welcome to the cold darkness around you\n";
	cout << "Now that you can see \nyou walk do a narrow path tell you get to a intersection\n";
	cout << "You can go left or right \nchoose wisely...\n";
	//user direction input
	cin >> User;
	// if user says l for left then displays text and exits the program
	if (User == "l") {
		cout << "You fell down a hole with no way out";
		//if wrong choice user restarts previous level
		firstLevel(ptr_userName);
		//temp var that subs to total
		score--;
	}
		else
	{
		score++;
	}
	// text to be displayed
	cout << "You go right and continue to walk for awhile\n";
	cout << "You come upon a skeleton and \nyou wonder to yourself how many souls \nhas the evil maze claimed.\n";
	cout << "You come to an intersection \nyou can go forward down the stairs or to the right\n";
	cout << "which do you choose?\n";
	//user direction input
	cin >> User;
	// if user says r for right
	//  then displays text and exits the program
	if (User == "r") {
		cout << "You go right and continue walking forever \nto never be seen again!!! \n*evil laugh*\n\n\n";
		//if wrong choice user restarts previous level
		firstLevel(ptr_userName);
		//temp var that adds to total
		score--;

	}
	else
	{
		score++;
	}



}

void introLevel(string* ptr_userName)
{
	// intro level
	 // text to be displayed for controls
	cout << "\n\n\t\tThe Controls:\n\n l for left\n r for right\n f for forward\n y for yes\n n for no\n\n";
	// user name and text gets displayed
	cout << * ptr_userName << " stands in front for a huge hedge\n";
	cout << " The sky seemed to turn stormy in front of your eyes\n";
	cout << " Lightning boomed as you entered \n";
	cout << " You come across a torch and you take it \n";
	cout << " The entrance closed behind you \n";
	cout << "You are in complete darkness\n";
	cout << "do you wish to light the torch? yes or no \n";
	//user's input for direction commands 
	cin >> User;
	// if user says n for no then displays the text then exits the program
	//otherwise the program continues.
	if (User == "n") {
		cout << "You couldn't see and ran into a wall and DIED\n";
		cout << "Try again";
		//if wrong choice user restarts level
		introLevel(ptr_userName);
	}


}

void userWelcome(string* ptr_userName)
{
	cout << "Welcome " << *ptr_userName << "," << endl;
	cout << "May you conquer the maze \n";
	cout << "Before the maze conquers you \n";
	//text that is displayed
	cout << "Good luck ";
}

void displayTitle()
{
	//text output to be displayed 
	cout << "\t\t***Hello and welcome to the ";
	cout << "Maze of the Doom*** \n\n";



}

string getUserName()
{
	string userName;
	cout << "Who dares to enter? \n";

	std::getline(std::cin, userName);

	return userName;
}

void finalScore() {
	// clears screen
	system("cls");
	//displays text
	cout << "\t\t ***Final Score***\n\n";
	//displays score
	cout << "Score: " << score << " out of 7\n";
	system("pause");
}