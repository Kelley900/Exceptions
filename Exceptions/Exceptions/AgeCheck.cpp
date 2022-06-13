//age check function
#include<iostream>
#include<string>

void DriversAge(int age)
{
	try
	{
		//make sure driver is old enough to drive
		if (age >= 16)
		{
			//Allowed to continue in the apoplication if true
			//display this if age is old enough
			std::cout << "\nCongragulations, your age meets the minimum requierments.\n";


		}
		else
		{
			//End application and denie license due to age
			throw (age);
		}
	}
	catch (int exAge)
	{
		std::cout << "\nSorry, you are not old enough to posses a drivers license because yopu are only: \n" << exAge << "\n";
	}


}