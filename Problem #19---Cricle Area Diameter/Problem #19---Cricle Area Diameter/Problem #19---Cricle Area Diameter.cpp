// Problem #19---Cricle Area Diameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadDiameter()
{
    float D;  

    cout << "Please enter diameter D ? " << endl;
    cin >> D;

    return D;  
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;

    // Compute the area using the formula: Area = (? * D²) / 4.
    float Area = (pow(D, 2) * PI) / 4;
    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaByDiameter(ReadDiameter()));

    return 0;
}

