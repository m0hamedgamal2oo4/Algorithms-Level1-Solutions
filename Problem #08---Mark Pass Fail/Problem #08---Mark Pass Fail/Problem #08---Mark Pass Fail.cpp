// Problem #08---Mark Pass Fail.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
using namespace std;

int ReadMark()
{
	int Mark;
	cout << "Please enter your mark? " << endl;

	cin >> Mark;
	return Mark;
}

enum enPassFail { Pass = 1, Fail = 2 };

enPassFail CheckMark(int Mark) {

	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;

}

void PrintResults(int Mark) {
	if(CheckMark(Mark)==enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You Failed" << endl;
}

int main()
{
	PrintResults(ReadMark());
}

