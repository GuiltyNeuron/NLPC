// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Main

#include "SpellCheck.h"
#include "Tokenization.h"
#include "Preprocess.h"
#include "Data.h"
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
		cout << words[i] << endl;
	}
	vector<string> n_tokens = tokenizer.multiWordTokenization("Tokyo is the capital of Japan",2);
	for (size_t i = 0; i < n_tokens.size(); i++)
	{
		cout<< n_tokens[i]<<endl;
	}
	
	// Preprocessing

	Preprocess p = Preprocess();
	string u = p.uppercase("Hello world");
	string l = p.lowercase("Hello world");
	string pon = p.removePonctuation("hi** khazri !");
	string n = p.removeNumbers("Achraf 1944 new york yankees1859748");
	string s = p.removeSpaces("achraf    khazri");
	string r = p.replace("Hi ! Achraf !!!", "!", "9");
	cout << r << endl;
	cout << l << endl;
	cout << s << endl;
	cout << n << endl;
	cout << pon << endl;

	// Data class
	Data d = Data();
	string txtfile = d.readTxt("test.txt");
	cout << txtfile << endl;

}