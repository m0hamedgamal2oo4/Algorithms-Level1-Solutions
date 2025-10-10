#include <iostream>  
#include <string>    

using namespace std; 


void ReadNumbers(float& A, float& B)
{
    // Prompt the user to enter the width (A) and store it.
    cout << "Please enter rectangle width A ? " << endl;
    cin >> A;

    // Prompt the user to enter the length (B) and store it.
    cout << "Please enter rectangle length B ? " << endl;
    cin >> B;
}


float CalculateRectangleArea(float A, float B)
{
    return A * B;
}


void PrintResult(float Area)
{
    // Print the rectangle's computed area.
    cout << "\nRectangle Area = " << Area << endl;
}

// Main function: Program entry point.
int main()
{
    float A, B;  // Declare two float variables to store the rectangle's width and length.

    // Read rectangle dimensions from the user.
    ReadNumbers(A, B);

    // Compute the area and display the result.
    PrintResult(CalculateRectangleArea(A, B));

    return 0;  // Return 0 to indicate successful execution.
}