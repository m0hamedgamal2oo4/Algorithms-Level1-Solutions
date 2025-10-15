// Problem #40 - Calculate Total Bill After Service and Tax

#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << " ";
        if (!(cin >> Number))   // تحقق من فشل الإدخال
        {
            cout << "Invalid input. Please enter a numeric value.\n";
            cin.clear();                // مسح حالة الخطأ
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // تجاهل باقي السطر
            Number = 0;                 // إعادة التهيئة للمتابعة في اللوب
            continue;
        }
    } while (Number <= 0);
    return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1f;   // 10% service
    TotalBill = TotalBill * 1.16f;  // 16% tax
    return TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service and Tax = "
        << TotalBillAfterServiceAndTax(TotalBill) << endl;

    return 0;
}
