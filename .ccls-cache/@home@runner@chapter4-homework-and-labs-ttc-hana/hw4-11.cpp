// Introductory11.cpp - displays ending balance
// Created/revised by Hannah Haynes on 7 July 2024

#include <iostream>
using namespace std;

int main() {

  // declare variables
  double beginningBalance = 0.0;
  double deposits = 0.0;
  double withdrawals = 0.0;
  double endingBalance = 0.0;

  // enter input items
  cout << "Beginning balance: $";
  cin >> beginningBalance;
  cout << "Total deposits: $";
  cin >> deposits;
  cout << "Total withdrawals: $";
  cin >> withdrawals;

  // calculate and display the ending balance
  endingBalance = beginningBalance + deposits - withdrawals;
  cout << "Ending balance: $" << endingBalance << endl;
  return 0;
} // end of main function