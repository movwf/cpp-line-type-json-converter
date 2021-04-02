#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <codecvt>
#include <locale.h>

void convertLineTypeJson( std::string inFileName, std::string outFileName, bool isLocale )
{
  // std::string doesn't cover Turkish characters
	if(!isLocale)
	{
		setlocale(LC_ALL, "Turkish");
	} 

	std::ifstream infile(inFileName);
	std::ofstream outfile(outFileName);
	
	outfile << "{" << "\n" << "\"data\" : [" << "\n";

	for( std::string line; getline( infile, line ); )
	{
		outfile << line << "," << "\n";
	}

	outfile << "]" << "\n" << "}";

	std::cout << "All Done" << "\n";
  
}

int main()
{
  
	convertLineTypeJson(<<Your Line Style Json goes Here>>,<<Output File Name>>,true);

	return 0;
  
}
