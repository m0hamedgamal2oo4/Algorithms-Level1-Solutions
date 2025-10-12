// Problem #28---Sum Odd Numbers From 1 To N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
using namespace std;

enum enOddEven { odd = 1,Even=2 };

int ReadNumber()
{
    int Number; 

    cout << "Please enter a number? " << endl;
    cin >> Number;

    return Number;  
}

enOddEven CheckOddOrEven(int num){
    if (num % 2 != 0)
        return enOddEven::odd;
    else
        return enOddEven::Even;


}

int SumOddNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;
    cout << "Sum odd numbers using For Statement:\n";

    for (int count = 1;count <= N;count++) {
        if (CheckOddOrEven(count) == enOddEven::odd)
        {
            Sum += count;
        }
    }
    return Sum;
}
int main()
{
    int N = ReadNumber();

    cout << SumOddNumbersFrom1toN_UsingFor(N) << endl;
}

  