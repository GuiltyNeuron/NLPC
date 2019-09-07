// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Tokenization.cpp
// Description :

#include "Tokenization.h"

vector<string> Tokenization::wordTokenization(string str, const char delimiter = ' ')
{
	string word = "";
	int ngrams = 0;
	vector<string> tokens;
	for (auto x : str)
	{
		if (x == delimiter)
		{
			//cout << word << endl;
			tokens.push_back(word);
			word = "";
		}
		else
		{
			word = word + x;
		}
	}
	tokens.push_back(word);

	return tokens;
}

vector<string> Tokenization::wordTokenization(string str)
{
	string word = "";
	int ngrams = 0;
	vector<string> tokens;
	for (auto x : str)
	{
		if (x == ' ')
		{
			//cout << word << endl;
			tokens.push_back(word);
			word = "";
		}
		else
		{
			word = word + x;
		}
	}
	tokens.push_back(word);

	return tokens;
}

vector<string> Tokenization::multiWordTokenization(string str, int grams, const char delimiter = ' ')
{
	int ngrams = 0;
	vector<string> out;
	vector<string> tokens = wordTokenization(str, delimiter);
	string word;
	for (size_t i = 0; i < tokens.size() - grams + 1; i++)
	{
		word = tokens.at(i);
		for (size_t j = 1; j < grams; j++)
		{
			word = word + " " + tokens.at(i + j);
		}
		out.push_back(word);

	}

	return out;
}

vector<string> Tokenization::multiWordTokenization(string str, int grams)
{
	int ngrams = 0;
	vector<string> out;
	vector<string> tokens = wordTokenization(str, ' ');
	string word;
	for (size_t i = 0; i < tokens.size() - grams + 1; i++)
	{
		word = tokens.at(i);
		for (size_t j = 1; j < grams; j++)
		{
			word = word + " " + tokens.at(i + j);
		}
		out.push_back(word);

	}

	return out;
}

Tokenization::Tokenization()
{
}

Tokenization::~Tokenization()
{
}