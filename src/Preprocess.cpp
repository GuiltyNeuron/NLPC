// Project : NLP ++
// Author : Achraf KHAZRI AI Research Engineer
// Script : Preprocess.cpp
// Description :

#include "Preprocess.h"
#include <iostream>

string Preprocess::lowercase(string text)
{	
	string lowerText = "";
	for (auto caracter : text)
	{
		if (caracter >= 65 && caracter <= 92)
		{
			caracter = caracter + 32;
		}
		lowerText = lowerText + caracter;
	}
	return lowerText;
}

string Preprocess::uppercase(string text)
{	
	string upperText = "";
	for (auto caracter : text)
	{
		if (caracter >= 97 && caracter <= 122)
		{
			caracter = caracter - 32;	
		}
		upperText = upperText + caracter;

	}
	return upperText;
}

string Preprocess::removeNumbers(string text)
{	
	string numbers[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

	// Output text variable
	string outputText = "";

	// Boolean variable that indicate if a number was found or not
	bool found;

	// iterate through all caracters in the text
	for (auto caracter : text)
	{
		// set no special caracter was found
		found = false;

		// iterate through all numbers
		for (auto number : numbers)
		{
			// in case a number was found found boolean flag will be setted to true
			if (caracter == *number.c_str())
			{
				found = true;
				break;
			}
		}

		// in case no number was found we concatenate the caracter to the previous ones
		if (!found)
		{
			outputText = outputText + caracter;
		}
	}
	return outputText;
}

string Preprocess::removePonctuation(string text)
{	
	// List of different ponctuations that can be found
	string poncts[] = {",", ".", "\"", ":", ")", "(", "-", "!", "?", "|", ";", "\'", "$", "&", "/", "[", "]", ">", "%", "=", "#", "*", "+", "\\", "•", "~", "@", "£",
				  "·", "_", "{", "}", "©", "^", "®", "`", "<", "→", "°", "€", "™", "›", "♥", "←", "×", "§", "″", "′",
				  "Â", "█", "½", "…", "“", "★", "”", "–", "●", "►", "−", "¢", "²", "¬", "░", "¶", "↑", "±", "¿", "▾", "═", "¦", "║", "―",
				  "¥", "▓", "—", "‹", "─", "▒", "：", "¼", "⊕", "▼", "▪", "†", "■", "’", "▀", "¨", "▄", "♫", "☆", "¯", "♦", "¤", "▲", "¸", "¾",
				  "Ã", "⋅", "‘", "∞", "∙", "）", "↓", "、", "│", "（", "»", "，", "♪", "╩", "╚", "³", "・", "╦", "╣", "╔", "╗", "▬", "❤", "Ø", "¹", "≤", "‡", "√", "«"};
	
	// Output text variable
	string outputText = "";

	// Boolean variable that indicate if a special caracter was found or not
	bool found;

	// iterate through all caracters in the text
	for (auto caracter : text)
	{
		// set no special caracter was found
		found = false;

		// iterate through all special caracters
		for (auto ponct : poncts)
		{
			// in case a special caracter was found found boolean flag will be setted to true
			if ( caracter == *ponct.c_str())
			{
				found = true;
				break;
			}	
		}

		// in case no special caracter was found we concatenate the caracter to the previous ones
		if (!found)
		{
			outputText = outputText + caracter;
		}
	}
	return outputText;
}

string Preprocess::removeSpaces(string text)
{	
	string outputText = "";
	bool previous = false;
	for (auto caracter : text)
	{
		if (previous == false)
		{
			outputText = outputText + caracter;
		}

		if (caracter == *" ")
		{	
			previous = true;
		}
		else
		{
			previous = false;
		}

	}
	return outputText;
}

string Preprocess::replace(string inputText, string caracterToReplace, string caracterToReplaceWith)
{
	// Output text variable
	string outputText = "";

	// Boolean variable that indicate if a number was found or not
	bool found;

	// iterate through all caracters in the text
	for (auto caracter : inputText)
	{
		// set no special caracter was found
		found = false;

		
		// in case caracter was found found
		if (caracter == *caracterToReplace.c_str())
		{
			found = true;
			outputText = outputText + caracterToReplaceWith;
		}
		
		else
		{
			outputText = outputText + caracter;
		}
	}
	return outputText;
}

Preprocess::Preprocess()
{

}

Preprocess::~Preprocess()
{

}