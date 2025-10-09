// Problem #06---FullName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo() 
{
    stInfo Info;

    cout << "Please Enter Your First Name?" << endl;
    cin >> Info.FirstName;

    cout << "Please Enter Your Last Name?" << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info) {

    string FullName = "";
    FullName = Info.FirstName + " " + Info.LastName;

    return FullName;

}

void PrintFullName(string FullName) {

    cout << "\n Your full name is: " << FullName << endl;

}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));
}

