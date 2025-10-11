// Problem #16---Rectangle Rrea By Diagonal Side.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void ReadNumber(float& A, float &D)
{
    cout<< "Please enter rectangle side A ? " << endl;
    cin >> A;

    cout << "Please enter rectangle diagonal D ? " << endl;
    cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));

    return Area;
}

void PrintResult(float Area) 
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, D;
    ReadNumber(A, D);  
    
    PrintResult(RectangleAreaBySideAndDiagonal(A,D));
    return 0;
}
