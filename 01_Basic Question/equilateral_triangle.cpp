#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "\t\t C++ program to find the area of the equilateral triangle" << endl;
    float area, a;
    cout << " Please enter the side of the triangle" << endl;
    cin >> a;
    if (a > 0)
    {
        area = sqrt(2) * a * a * 0.25;
        cout << "The area of the equilateral triangle : " << area << endl;
    }
    else
    {
        cout << " The sides of the equilateral triangle cannot be negative numbers : " << endl;
    }
    system("pause");
    return 0;
}