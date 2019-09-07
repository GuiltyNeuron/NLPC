// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Tokenization.h
// Description : This class contains methods able to tokenize sentences into n-grams vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tokenization
{
public:
	Tokenization();
	~Tokenization();
	size_t uiLevenshteinDistance(const string &, const string &);

	vector<string> wordTokenization(string, const char);
	vector<string> wordTokenization(string);

	vector<string> multiWordTokenization(string, int, const char);
	vector<string> multiWordTokenization(string, int);
private:

};
