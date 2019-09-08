// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Data.cpp
// Description :


#include "Data.h"

string Data::readTxt(string inputFilePath)
{	
	// Load the dictionary
	ifstream file(inputFilePath);

	string outputText = "";
	// Read the dictionary
	if (file.is_open())
	{
		std::string line;
		while (getline(file, line))
		{
			outputText = outputText + line.c_str() + " ";
		}
	}
	file.close();
	return outputText;
}

string Data::readPdf(string inputFilePath)
{
	return "";
}

string Data::readCsv(string inputFilePath)
{
	return "";
}

Data::Data()
{
}

Data::~Data()
{
}