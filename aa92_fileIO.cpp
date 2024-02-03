#include <iostream>
#include <fstream>
#include <string>

int main()
{
	const int SIZE = 10;
	 const char* input[SIZE];
	char* outfile;

	std::cout << "Enter output filename: ";
	std::cin >> outfile;

	//Create an outuput file stream
	std::ofstream myStream(outfile);

	std::cout << "Enter in " << SIZE << " lines of text:" << std::endl;
	for(int i=0; i<SIZE; ++i)
	{
		std::cin >> input[i];
	}

	//Output lines to file
	std::cout << "Output lines to command line";
	for(int i=0; i<SIZE; ++i)
	{
		myStream << input[i] << std::endl; //std::endl will put each entry to a new line.
	}
	std::cout << std::endl << "File writing is complete." << std::endl;

	//Close the file
	myStream.close();

	//Create the input file stream
	std::cout << "Readig in .." << outfile << std::endl;
	std::ifstream inputFile(outfile);

	//Read from the file
	while(!inputFile.eof())
	{
		char* line;
		inputFile >> line;
		std::cout << line << std::endl; 
	}

	//Clse the file
	inputFile.close();

}