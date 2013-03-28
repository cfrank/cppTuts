// Simple c++ program I'm using to teach myself the language.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <math.h>

std::string input;
int i, ilen;
double count1, count2;

double percent(double start, double end);

int main()
{
	double perc1;

	std::cout<<"Welcome to the disemvoweling utility!"<<std::endl;
	std::cout<<"Enter your phrase: ";
	std::getline(std::cin, input);

	count1 = input.length();
	std::cout<<"The disemvoweled phrase is: ";

	for(std::size_t i = 0, ilen = input.length(); i < ilen; ++i)
	{
		switch(input[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'y':
			input[i] = '\n';
		}
		if(input[i] != '\n')
		{
			// Print each letter.
			std::cout<<input[i];
		}
		else
		{
			std::cout<<"";
			// Subtract from end count.
			--count2;
		}
		++count2;
	}
	perc1 = percent(count1, count2);

	std::cout<<"\nStart "<< count1 <<" End "<< count2 <<std::endl;
	std::printf("Reduction Rate of: %4.1f%% \n", perc1 * 100);

	// Keep cmdP active until close.
	std::cin.get();
	return 0;
}

double percent(double start, double end)
{
	double perc, change;

	change = start - end;
	perc = (int)change / start;
	return perc;
}

