// Problem #38 - Check if a Number is Prime or Not

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

enPrimNotPrime CheckPrime(int Number)
{
    if (Number < 2)
        return enPrimNotPrime::NotPrime;

    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimNotPrime::Prime:
        cout << "The number is Prime\n";
        break;
    case enPrimNotPrime::NotPrime:
        cout << "The number is Not Prime\n";
        break;
    }
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Please enter a positive number?"));
    return 0;
}
