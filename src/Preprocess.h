// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Preprocess.h
// Description :

#include <string>
#include <vector>
using namespace std;

class Preprocess
{
public:
	Preprocess();
	~Preprocess();
	string lowercase(string);
	string uppercase(string);
	string removePonctuation(string);
	string removeNumbers(string);
	string removeSpaces(string);

private:

};
