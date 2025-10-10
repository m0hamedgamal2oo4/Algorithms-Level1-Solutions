#include <iostream>  
#include <string>    

using namespace std; 


void ReadNumbers(int& Num1, int& Num2)
{
    // Prompt the user to enter the first number and store it in Num1.
    cout << "Please enter Number A ? " << endl;
    cin >> Num1;

    // Prompt the user to enter the second number and store it in Num2.
    cout << "Please enter Number B ? " << endl;
    cin >> Num2;
}

void Swap(int& A, int& B)
{
    int Temp;  

    Temp = A;  
    A = B;     
    B = Temp;  
}







void PrintNumbers(int Num1, int Num2)
{
    // Print the values of Num1 and Num2.
    cout << "\nNumber1 = " << Num1 << endl;
    cout << "Number2 = " << Num2 << endl;
}

// Main function: Program entry point.
int main()
{
    int Num1, Num2;  // Declare two integer variables to store user input.

    // Read two numbers from the user.
    ReadNumbers(Num1, Num2);

    // Print the numbers before swapping.
    PrintNumbers(Num1, Num2);

    // Swap the values of Num1 and Num2.
    Swap(Num1, Num2);

    // Print the numbers after swapping.
    PrintNumbers(Num1, Num2);

    return 0;  // Return 0 to indicate successful execution.
}