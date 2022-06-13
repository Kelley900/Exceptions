// ***Exceptions***
//Code By Kelley Kramer
// CSC275

//define libraries
#include <iostream>
#include <string>
#include "NameCheck.h"
#include "AgeCheck.h"
#include "QuestionA.h"
#include "QuestionB.h"

//proto type function


int main()
{

	//Display test to the user
	//Title of the program
	std::cout << "\n\n\t\t*** LETS DRIVE! ***\n\n\t\t" << std::endl;
	//Introduction, and instructions
	std::cout << "Welcome to the Drivers License Evaluator!\n" << std::endl;
	std::cout << "This program will walk you through the process of getting a Drivers License.\n" << std::endl;
	std::cout << "I will walk you through this process step by step until the end.\n" << std::endl;

	//Get drivers's name
	//set variable for drivers name
	std::string driversName;
	//Ask driver for name
	std::cout << "What is your full name? :" << std::endl;
	//set drivers name to the string variable driversName
	std::getline(std::cin, driversName);
	NameCheck(driversName);


	//Get Drivers Age
	//set variable for age
	int age;
	//Ask
	std::cout << "\nNow I need to kow your age." << std::endl;
	//get age from user
	std::cin >> age;
	//Call age check function to check age
	DriversAge(age);

	//dialog and question to ask
	std::cout << "\nThe next step is to answer a few questions." << std::endl;
	//ask question
	std::cout << "\nWhen you approch a stop sign what do you do?\n" << std::endl;
	//set up options
	std::cout << "\t1) Come to a complete stop.\n" << std::endl;
	std::cout << "\t2) Accelerate through the intertsection.\n" << std::endl;
	std::cout << "\t3) Blow the sign up.\n" << std::endl;
	//set up answer variable
	int choiceA;
	//ask for answer
	std::cout << "What is you answer: " << std::endl;
	//assign answer to variable
	std::cin >> choiceA;
	//pass variable to function for evaluation
	QuestionA(choiceA);

	//dialog and question to ask
	std::cout << "\nThe fianl step is to answer one more questions." << std::endl;
	//ask question
	std::cout << "\nWhen you pass a sign that reads 25mph, How fast should you travel?\n" << std::endl;
	//set up answer variable
	int choiceB;
	//ask for answer
	std::cout << "What is you answer: " << std::endl;
	//assign answer to variable
	std::cin >> choiceB;
	//pass variable to function for evaluation
	QuestionB(choiceB);

	//tell the computer to pause at the end of program
	system("pause");
	
	//returns a zero saying everything went well
	return 0;
}

