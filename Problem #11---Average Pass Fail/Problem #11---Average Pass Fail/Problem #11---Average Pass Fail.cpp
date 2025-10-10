// Problem #11---Average Pass Fail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
void ReadNumper(int& Mark1, int& Mark2, int& Mark3) {
    cout << "Please enter Mark 1 ? " << endl;
    cin >> Mark1;

    cout << "Please enter Mark 2 ? " << endl;
    cin >> Mark2;

    cout << "Please enter Mark 3 ? " << endl;
    cin >> Mark3;
}

enum enPassFail{Pass=1,Fail=2};

int Sum3Marks(int Mark1, int Mark2, int Mark3)
{
    return  Mark1 + Mark2 + Mark3;
 }

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{

    return (float)Sum3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResults(float Avrage)
{
    if (CheckAverage(Avrage)== enPassFail::Pass)
        cout << "\n You Passed" << endl;
    else
        cout << "\n You Failed" << endl;
}
int main()
{
    int Mark1, Mark2, Mark3;
    ReadNumper(Mark1, Mark2, Mark3);
    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

}

