#include <iostream>
using namespace std;
int main()
{
    cout << "\t\t c++ program to calculate the area and circumference of the circle." << endl;
    float r, area, circumference;
    cout << "Plese enter the radius of the circle" << endl;
    cin >> r;
    if (r > 0)
    {
        area = 3.14 * r * r;
        circumference = 2 * 3.14 * r;
        cout << "Area of circle is : " << area << endl;
        cout << "Circumference of circle is : " << circumference << endl;
    }
    else
    {
        cout << "Negative numbers cannot be applied !!!" << endl;
    }
    system("pause"); // it pauses the screen until some key is pressed,it is basically used in command terminal to pause the screen.
    return 0;
}