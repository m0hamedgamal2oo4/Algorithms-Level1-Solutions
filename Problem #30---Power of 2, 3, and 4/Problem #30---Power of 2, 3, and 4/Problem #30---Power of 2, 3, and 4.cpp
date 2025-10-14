#include <iostream>
#include <string>
using namespace std;


int ReadNumber()
{
    int Number;
    cout << "Please enter a number? " << endl;
    cin >> Number;
    return Number;
}

void PowerOf2_3_4(int Number)
{
    int a, s, d;
a = Number * Number;
    s = Number * Number * Number;
    d = Number * Number * Number * Number;
    cout << a << " " << s << " " << d << endl;
}

int main()
{
    PowerOf2_3_4(ReadNumber());
    return 0;
}