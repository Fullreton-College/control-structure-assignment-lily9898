#include <iostream>

using namespace std;

int main()
{

    double firstLength;
    double firstWidth;
    double secondLength;
    double secondWidth;

    cout << "Length of first rectangle: " << endl;
    cin >> firstLength;
    cout << "Width of the first rectangle: " << endl;
    cin >> firstWidth;
    cout << "Length of the second rectangle: " << endl;
    cin >> secondLength;
    cout << "Width of the second rectangle: " << endl;
    cin >> secondWidth;

    if ( (firstLength * firstWidth) > (secondLength * secondWidth) )
    {
        cout << "The 1st rectangle has the greater area" << endl;
    }

    else if ( (firstLength * firstWidth) < (secondLength * secondWidth) )
    {
        cout << "The 2nd rectangle has the greater area" << endl;
    }

    else
    {
        cout << "The areas are the same" << endl;
    }

    return 0;
}