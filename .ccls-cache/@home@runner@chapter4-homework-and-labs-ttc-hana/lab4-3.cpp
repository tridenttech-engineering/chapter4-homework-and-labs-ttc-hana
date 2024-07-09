//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by Hannah Haynes on 7 July 2024

#include <iostream>
using namespace std;

int main()
{
  //declare variables
  double commRate = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: $";
  cin >> sales;
  cout << "Commission Rate: ";
  cin >> commRate;

  //calculate and display the commision
  commission = sales * commRate;
  cout << "Commission: $" << commission << endl;

  return 0;
} //end of main function
