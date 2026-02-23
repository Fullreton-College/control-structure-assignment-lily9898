#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string customerFirstName;
    string customerLastName;
    char plan;
    int enteredGigabyte;
    double totalPrice;
    double costB;

    const double PricePlanA = 39.99;
    const double PricePlanB = 59.99;
    const double PricePlanC = 79.99;
    const double ExtraGigabyte = 8.00;

    cout << "Customer Name (First & Last): " << endl;
    cin >> customerFirstName >> customerLastName;

    cout << "Enter A, B, or C for purchased plan: " << endl;
    cin >> plan;

    cout << "How many gigabytes used? " << endl;
    cin >> enteredGigabyte;

    switch (plan)
    {
        case 'A':
            if (enteredGigabyte > 2)
                totalPrice = PricePlanA + (enteredGigabyte - 2) * ExtraGigabyte;
            else
                totalPrice = PricePlanA;
            break;

        case 'B':
            if (enteredGigabyte > 8)
                totalPrice = PricePlanB + (enteredGigabyte - 8) * ExtraGigabyte;
            else
                totalPrice = PricePlanB;
            break;

        case 'C':
            totalPrice = PricePlanC;
            break;

        default:
            cout << "This is an invalid plan." << endl;
            return 0;
    }

    // Outputting customer information
    cout << fixed << setprecision(2);
    cout << "\nCustomer Name: " << customerFirstName << " " << customerLastName << endl;
    cout << "Purchased Plan: " << plan << endl;
    cout << "Gigabytes used: " << enteredGigabyte << endl;
    cout << "Total amount due: $" << totalPrice << endl;

    // Calculating cost for Plan B
    if (enteredGigabyte > 8)
        costB = PricePlanB + (enteredGigabyte - 8) * ExtraGigabyte;
    else
        costB = PricePlanB;

    // Displaying customer savings
    if (plan == 'A')
    {
        if (costB < totalPrice)
            cout << "You would save $" << totalPrice - costB << " with Plan B." << endl;

        if (PricePlanC < totalPrice)
            cout << "You would save $" << totalPrice - PricePlanC << " with Plan C." << endl;
    }
    else if (plan == 'B')
    {
        if (PricePlanC < totalPrice)
            cout << "You would save $" << totalPrice - PricePlanC << " with Plan C." << endl;
    }

    return 0;
}