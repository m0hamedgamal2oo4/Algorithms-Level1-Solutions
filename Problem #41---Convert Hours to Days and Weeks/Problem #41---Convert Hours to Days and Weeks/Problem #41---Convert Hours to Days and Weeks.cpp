// Problem #41---Convert Hours to Days and Weeks.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <string>
using namespace std;

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

float HoursToDays(float NumberOfHours)
{
    return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
    return (float)NumberOfHours / (24 * 7);
}

float DaysToWeeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours?");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = DaysToWeeks(NumberOfDays);

    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;

    return 0;
}


