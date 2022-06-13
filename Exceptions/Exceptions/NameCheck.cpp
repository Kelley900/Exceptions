//name check function
//Code by Kelley Kramer
#include<iostream>
#include<string>

bool NameCheck(std::string driversName)
{
	try
	{
		//determin if the name contain numbers
		if (driversName.find('0') != std::string::npos ||
			driversName.find('1') != std::string::npos ||
			driversName.find('2') != std::string::npos ||
			driversName.find('3') != std::string::npos ||
			driversName.find('4') != std::string::npos ||
			driversName.find('5') != std::string::npos ||
			driversName.find('6') != std::string::npos ||
			driversName.find('7') != std::string::npos ||
			driversName.find('8') != std::string::npos ||
			driversName.find('9') != std::string::npos)
		{
			//end application name contain numbers
			std::cout << "\nSorry, your name cant contain numbers: \n" << driversName << "\n";
			return false;
		}
		else
		{
			throw (driversName);
		}
	}
	catch (std::string exName)
	{
		//display drivers name on screen
		std::cout << "\nWelcome " << driversName << ". Lets begin!" << std::endl;
		//std::cout << "Okay! Lets continue \n" << driversName;
	}
}