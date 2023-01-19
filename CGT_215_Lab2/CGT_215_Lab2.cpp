#include <iostream>
using namespace std;
int main()
{
float A;
float B;
float X;
cout << "I am an equation solver which will help solve Ax+B=0" << endl;
cout << "Please enter a value for A: ";
cin >> A;
cout << "Please enter a value for B: ";
cin >> B;
cout << "Solving " << A << "x+" << B << "=0" << endl;
X = (B * -1) / A;
cout << "The answer is:" << X << endl;
}