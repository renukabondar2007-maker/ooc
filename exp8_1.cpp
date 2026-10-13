#include <iostream>
using namespace std;
class Distance {
public:
int feet, inch;
// Constructor to initialize the object's value
Distance(int f, int i)
{
this->feet = f;
this->inch = i;
}
// Overloading(-) operator to perform decrement operation of Distance object
void operator-()
{
feet--;
inch--;          

cout << "\nFeet & Inches(Decrement): " <<
feet << "'" << inch;
}
void operator+()
{
feet=feet+3;
inch++;          

cout << "\nFeet & Inches(Decrement): " <<
feet << "'" << inch;
}
};
// Driver Code
int main()
{
    int a=10,b=20;
   int c=a+b;
    cout<<c;
Distance d1(8, 9);
// Use (-) unary operator by single operand
-d1;
+d1;
//cout<<"the feet and inch values of given data:-"<<d1.inch<<d1.feet;
return 0;
}
