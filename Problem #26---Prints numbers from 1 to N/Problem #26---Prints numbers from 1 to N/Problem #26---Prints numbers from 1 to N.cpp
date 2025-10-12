// Problem #26---Prints numbers from 1 to N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Number;
    cout<<"Please enter a number? " << endl;
    cin >> Number;

    return Number;

}

void PrintRangeFrom1toN_UsingWhile(int N)
{
    int count = 0;
    cout << "Range printed using While Statement:\n";
    
    while (count < N) {
        count++;
        cout << count << endl;
    }
}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int count = 0;
    cout << "Range printed using Do..While Statement:\n";

    do{
        count++;
        cout << count << endl;

    
    } while (count < N);

}

void PrintRangeFrom1toN_UsingFor(int N)
{

    cout << "Range printed using For Statement:\n";

    for( int count=1;count<=N;count++)
     cout << count<< endl;
     
}
int main()
{
    int N = ReadNumber();
    PrintRangeFrom1toN_UsingWhile(N);
     PrintRangeFrom1toN_UsingDoWhile(N);
     PrintRangeFrom1toN_UsingFor(N);
}

