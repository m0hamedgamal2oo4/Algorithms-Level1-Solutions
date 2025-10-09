// Problem #05---Hire a driver Case 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stInfo
{
    int Age;
    bool HasDrivingLicense;   
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please Enter Your Age?" << endl;
    cin >> Info.Age;


    cout << "Do you have a driver’s license? (1 for Yes, 0 for No)" << endl;
    cin >> Info.HasDrivingLicense;


    cout << "Do you have a recommendation? (1 for Yes, 0 for No)" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}


bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        // Otherwise, the candidate must be older than 21 and have a driving license.
        return (Info.Age > 21 && Info.HasDrivingLicense);
    }
}


void PrintResult(stInfo Info)
{
    // Check eligibility using IsAccepted function and print the corresponding message.
    if (IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}



int main()
{
    PrintResult(ReadInfo());
}

