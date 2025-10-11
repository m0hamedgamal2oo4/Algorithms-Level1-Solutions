// Problem #18---Cricle Area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>      
#include <cmath>

using namespace std;

float ReadRadius()
{
    float R;

    cout << "Please enter radius R ? " << endl;
    cin >> R;

    return R;
}

float CircleArea(float R)
{
    const float PI = 3.141592653589793238;  

    // Compute the area using the formula: Area = π * R².
    float Area = pow(R, 2) * PI;

    return Area;  
}

void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}
int main()
{
    PrintResult(CircleArea(ReadRadius()));
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
