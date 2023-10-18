/* TASK 02
SIMPLE CALCULATOR
Develop a calculator program that performs basic arithmetic operations such as addition, subtraction,
multiplication, and division. Allow the user to input two numbers and choose an operation to perform.
*/
#include <iostream>
using namespace std;

int main()
{
   float a, b;
   char oper;
   cout << "Enter the two numbers : ";
   cin >> a >> b;
   cout << "What operation do you want to perform :" << endl;
   cout << "+ = Addition \t - = Subtraction \t * = Multiplication\t / = Division" << endl;
   cin >> oper;
   switch (oper)
   {
   case '+':
       cout << a << " " << oper << " " << b << " = " << a + b << endl;
       break;

   case '-':
       cout << a << " " << oper << " " << b << " = " << a - b << endl;
       break;
   case '*':
       cout << a << " " << oper << " " << b << " = " << a * b << endl;
       break;
   case '/':
       cout << a << " " << oper << " " << b << " = " << a / b << endl;
       break;
   default:
       cout << "Error!! operator not found ";
   }
    return 0;
}
