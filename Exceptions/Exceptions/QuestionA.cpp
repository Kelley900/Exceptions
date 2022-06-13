//question 1 answer check
#include<iostream>
#include<string>

void QuestionA(int choiceA)
{
	try
	{
		//make sure driver is old enough to drive
		if (choiceA == 1 or choiceA == 2 or choiceA == 3)
		{
			//Allowed to continue in the apoplication if true
			//display this if age is old enough
			std::cout << "Congragulations, you choce one of the correct options.\n";


		}
		else
		{
			//End application and denie license due to age
			throw (choiceA);
		}

	}
	catch (int exChoiceA)
	{
		std::cout << "\nSorry: " << exChoiceA << " is not one of the options.\n";
	}

}