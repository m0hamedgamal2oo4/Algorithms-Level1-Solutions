// Problem #46---Print letters from A to Z.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>     
using namespace std;

void PrintLettersAtoZ() {
    for (int i = 65;i <= 90;i++) {

        cout << char(i) << endl;
    }
}
int main()
{
    PrintLettersAtoZ();
}


