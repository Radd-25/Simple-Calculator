#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    float a,b,hasil;
    char aritmatika;

    cout << "Calc v1.1" << endl;

    cout << "input one : ";
    cin >> a;

    cout << "Oprator (+,-,*,/) : ";
    cin >> aritmatika;

    cout << "input two : ";
    cin >> b;

    cout << "is true? : ";
    cout << a << aritmatika << b << endl;

   switch (aritmatika){
   case '+' : hasil = a + b;
   break;
   case '-' : hasil = a - b;
   break;
   case '*' : hasil = a * b;
   break;
   case '/' : hasil = a / b;
   break;
   default: 
    cout << "sys_error" << endl;
   }

    cout << "result : ";
    cout << hasil << endl;

     Sleep (5000);
     cout << "Program Finish, Closing in 10 second.";
     Sleep (10000);
    return 0;
}