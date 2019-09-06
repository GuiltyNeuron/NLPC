// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Livenstein distance

#include <iostream>
#include <string>
#include <algorithm>
#include<iostream>
#include<fstream>
#include <vector>

using namespace std;

size_t uiLevenshteinDistance(const std::string &s1, const std::string &s2)
{
	const size_t m(s1.size());
	const size_t n(s2.size());

	if (m == 0) return n;
	if (n == 0) return m;

	size_t *costs = new size_t[n + 1];

	for (size_t k = 0; k <= n; k++) costs[k] = k;

	size_t i = 0;
	for (std::string::const_iterator it1 = s1.begin(); it1 != s1.end(); ++it1, ++i)
	{
		costs[0] = i + 1;
		size_t corner = i;

		size_t j = 0;
		for (std::string::const_iterator it2 = s2.begin(); it2 != s2.end(); ++it2, ++j)
		{
			size_t upper = costs[j + 1];
			if (*it1 == *it2)
			{
				costs[j + 1] = corner;
			}
			else
			{
				size_t t(upper < corner ? upper : corner);
				costs[j + 1] = (costs[j] < t ? costs[j] : t) + 1;
			}

			corner = upper;
		}
	}

	size_t result = costs[n];
	delete[] costs;

	return result;
}

string spellCheck(string dictionaryPath, string term)
{
	// Correction of the input word
	string result = "";

	// Levenshtein distance score between the input and each word from the dictionary
	int score;

	// Lowest distance
	int out = 100000;

	// Load the dictionary
	std::ifstream file(dictionaryPath);

	// Read the dictionary
	if (file.is_open()) {
		std::string line;
		while (getline(file, line)) {

			// compute Levenshtein distance
			score = uiLevenshteinDistance(term, line.c_str());

			// In case score is better than the previous one change the output
			if (score < out)
			{
				out = score;
				result = line.c_str();
			}
		}
		file.close();
	}
	else printf("No Dictionary !");

	return result;
}

vector<string> wordTokenization(string str, const char delimiter = ' ')
{
	string word = "";
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

int main()
{
	string term = "teliphone";
	string out = spellCheck("dictionary.txt", term);
	cout << "Term : " << term << " ,Correction : " << out << std::endl;

	vector<string> tokens = wordTokenization("Achraf khazri from africa");

	for (size_t i = 0; i < tokens.size(); i++)
	{
		cout<<tokens.at(i)<<endl;
	}
	return 0;
}