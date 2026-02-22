#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int unitNumber;
  double finalPrice;

  cout << "Enter the number of units: " << endl;
  cin >> unitNumber;

  if ( unitNumber >= 10 && unitNumber <= 19 )
  {
    finalPrice = ( (unitNumber * 199) - ((unitNumber * 199) * .20) );
  }

  else if ( unitNumber >= 20 && unitNumber <= 40 )
  {
    finalPrice = ( (unitNumber * 199) - ((unitNumber * 199) * .30) );
  }

  else if ( unitNumber >= 50 && unitNumber <= 99 )
  {
    finalPrice = ( (unitNumber * 199) - ((unitNumber * 199) * .40) );
  }

  else if ( unitNumber >= 100 )
  {
    finalPrice = ( (unitNumber * 199) - ((unitNumber * 199) * .50) );
  }

  else
  {
    finalPrice = ( (unitNumber * 199) );
  }

  cout << fixed << setprecision(2);
  cout << "The final price is: $" << finalPrice << endl;

  return 0;

}
