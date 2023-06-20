#include <iostream>
using namespace std;
int main()
{
    cout << "\t\tC++ program to calculate the area of the rectangle" << endl;
    cout << "Enter the lenght and breadth of the rectangle" << endl;
    float a, b, area;
    cin >> a >> b;
    if (a > 0 && b > 0)
    {
        area = a * b;
        cout << "The area of the rectangle : " << area << endl;
    }
    else
    {
        cout << " The sides of the rectangle cannot be negative : " << endl;
    }
    system("pause");
    return 0;
}