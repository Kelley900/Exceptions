//speed question check function
#include<iostream>
#include<string>

void QuestionB(int choiceB)
{
	try
	{
		//make sure driver is old enough to drive
		if (choiceB ==25)
		{
			//Allowed to continue in the apoplication if true
			//display this if age is old enough
			std::cout << "\nThat is correct!  Congradulations!  You Passed!.\n";


		}
		else
		{
			//End application and denie license due to age
			throw (choiceB);
		}
	}
	catch (int exchoiceB)
	{
		std::cout << "\nSorry: " << exchoiceB << " is not the correct answer\n";
	}


}