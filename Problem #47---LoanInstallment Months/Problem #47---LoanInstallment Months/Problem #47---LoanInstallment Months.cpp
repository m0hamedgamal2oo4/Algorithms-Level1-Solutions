// Problem #47---LoanInstallment Months.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string> 

float ReadPositiveNumber(string Message)
{
    float Number = 0; 

    do
    {
        cout << Message << endl;  
        cin >> Number; 
    } while (Number <= 0);  

    return Number;  
}

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;  
}
int main()
{
    
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment?");

    cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

}

