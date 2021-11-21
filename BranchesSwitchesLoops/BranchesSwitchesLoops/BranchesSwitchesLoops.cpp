#include <iostream>
#include <string>

//1.
//enum numbers{ZERO, ONE, TWO};
//numbers num;

//2.
//enum Age{YOUNG = 24, MID = 33, OLD = 55};
//Age ages;

int main()
{
	//1. REWRITE SWITCH STATEMENT INTO IF/ELSE, USE ENUMS

	//int num = 1;

	//switch (num)
	//{
	//case 0:

	//	std::cout << "0" << std::endl;
	//	break;

	//case 1:

	//	std::cout << "1" << std::endl;
	//	break;

	//case 2:

	//	std::cout << "2" << std::endl;
	//	break;
	//}
	
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
	//std::cin >> num;

	//if (numbers::ZERO)
	//{
	//	std::cout << "0" << std::endl;
	//}
	//else if (numbers::ONE)
	//{
	//	std::cout << "1" << std::endl;
	//}
	//else (numbers::TWO);
	//{
	//	std::cout << "2" << std::endl;
	//}
	//system("PAUSE");
	//	return 0;

//=========================================================================================

		//2. REWRITE IF/ELSE STATEMENT INTO SWITCH, USE ENUMS

		//int age = 33;

		//if (age == 24)
		//{
		//	std::cout << "You are still very young!" << std::endl;
		//}
		//else if (age == 55)
		//{
		//	std::cout << "You are getting on in life" << std::endl;
		//}
		//else
		//{
		//	std::cout << "You are what you are..." << std::endl;
		//}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//int ages = 24;

		//switch (ages)
		//{

		//case 0:

		//	std::cout << "You are still very young!" << std::endl;
		//	break;

		//case 1:

		//	std::cout << "You are what you are..." << std::endl;
		//	break;

		//case 2:

		//	std::cout << "You are getting on in life" << std::endl;
		//	break;
		//}




//=========================================================================================

	 //3. Rewrite this for - loop as a while - loop:

		//for (int i = 0; i < 10; i++)
		//{
		//	std::cout << i << std::endl;
		//}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

		//int i = 0;

		//do 
		//{
		//	std::cout << i << std::endl;
		//		i++;
		//} while (i < 10);
				

//=========================================================================================

		//4. Rewrite this do - while as a for - loop:

		//int i = 0;

		//do
		//{
		//	std::cout << i << std::endl;
		//	++i;
		//} while (i < 25);

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

		for (int i = 0; i < 25; i++)
		{
			std::cout << i << std::endl;
		}

}