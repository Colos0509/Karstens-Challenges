#include <iostream>
#include <string>
#include "Stars.h"

//void Stars(int numStars);
//void Rectangle(int width, int height);
//void HollowRect(int width, int height);
//void Triangle(int maxRows);
void Diamond(int maxRows);



int main()
{
	//Stars(120);
	//Rectangle(5, 10);
	//HollowRect(10, 20);
	//Triangle(10);
	Diamond(7);

	system("pause");
	return 0;
}

void Stars(int numStars)
{
	for (int i = 0; i < numStars; i++)
	{
		std::cout << "*";
	}
}

void Rectangle(int width, int height)  //I can use "int i" again, most common, then j, k, l etc...
{
		for (int j = 0; j < width; j++)
		{
			for (int k = 0; k < height; k++)
			{
				std::cout << "*";
			}
			std::cout << std::endl;
		}
}
		
void HollowRect(int width, int height)
{
	int i;
	int j;

	for (i = 1; i <= width; i++)
	{
		for (j = 1; j <= height; j++)
		{
			if (i == 1 || i == width || j == 1 || j == height)
				std::cout << "*";
			else
			std::cout << " ";
		}
		std::cout << std:: endl;
	}
}

void Triangle(int maxRows)
{
	int i;
	int j;

	for (i = 1; i <= maxRows; i++)
	{
		for (j = 1; j <= i; j++)
		{
				std::cout << "*";
		}
		std::cout << std::endl;
	}
}

void Diamond(int maxRows)
{
	int i;
	int j;

	for (i = 1; i <= maxRows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}