#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void NumberOfVowels(string str1, int& res) {
	
}

void ChangeCaseOfLetters(string& str2) {
	
}

void RemovePunctuationMarks(string str3, string& res) {
	
}

void PalindromeTest(string str4, string& res) {
	
}

int main() {
	int task;

	while (1) {
		cout << "Select a task:" << endl;
		cout << "1) Number of vowel letters in a string;" << endl;
		cout << "2) Change the case of string letters;" << endl;
		cout << "3) Removing punctuation marks;" << endl;
		cout << "4) Palindrome test." << endl;
		cout << "Enter the task number: ";

		cin >> task;

		switch (task)
		{
		case 1:
		{
			int result = 0;
			string string1;

			cout << "Enter your string: ";

			cin.get();
			getline(cin, string1);

			NumberOfVowels(string1, result);

			cout << "Vowels: " << result << endl;

			break;
		}
		case 2:
		{
			string string2;

			cout << "Enter your string: ";

			cin.get();
			getline(cin, string2);

			ChangeCaseOfLetters(string2);

			cout << string2 << endl;

			break;
		}
		case 3:
		{
			string result, string3;

			cout << "Enter your string: ";

			cin.get();
			getline(cin, string3);

			RemovePunctuationMarks(string3, result);

			cout << result << endl;

			break;
		}
		case 4:
		{
			string result, string4;

			cout << "Enter your string: ";

			cin.get();
			getline(cin, string4);

			PalindromeTest(string4, result);

			cout << "String " << "'" << string4 << "'" << " is " << result << endl;

			break;
		}
		default:
		{
			cout << "Error! Please enter the correct value!" << endl;

			break;
		}
		}
		cout << "---------------------------------------" << endl;
	}
	return 0;
}