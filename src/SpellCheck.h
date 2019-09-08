// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : SpellCheck.h
// Description :

#include <string>
#include <fstream>

using namespace std;
class SpellCheck
{
public:
	SpellCheck();
	~SpellCheck();
	size_t levenshteinDistance(const string &, const string &);
	string correct(string, string);

private:

};