// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Main

#include "SpellCheck.h"
#include "Tokenization.h"
#include <iostream>

using namespace std;

void main()
{
	// Spell Cheking example
	SpellCheck sc = SpellCheck();
	string term = "garagee";
	string corrected_term = sc.correct("dictionary.txt", "garagee");
	cout << "Term : " << term << " ,Correction : " << corrected_term << std::endl;

	// Tokenization example
	Tokenization tokenizer = Tokenization();

	vector<string> words = tokenizer.wordTokenization("Achraf khazri from africa");
	for (size_t i = 0; i < words.size(); i++)
	{
		cout << words.at(i) << endl;
	}
	vector<string> n_tokens = tokenizer.multiWordTokenization("Tokyo is the capital of Japan",2);
	for (size_t i = 0; i < n_tokens.size(); i++)
	{
		cout<< n_tokens.at(i)<<endl;
	}

}