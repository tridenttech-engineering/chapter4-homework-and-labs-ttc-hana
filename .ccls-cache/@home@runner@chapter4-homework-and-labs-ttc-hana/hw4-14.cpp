// Intermediate14.cpp - displays total sold and percentages of small, medium, large, and family sold
// Created/revised by Hannah Haynes on 7 July 2024

#include <iostream>
using namespace std;

int main() {
  //declare variables
  int smallPizzaSold = 0;
  int mediumPizzaSold = 0;
  int largePizzaSold = 0;
  int familyPizzaSold = 0;
  int totalPizzasSold = 0;
  double percentageSmall = 0.0;
  double percentageMedium = 0.0;
  double percentageLarge = 0.0;
  double percentageFamily = 0.0;

  //enter input items
  cout << "Small pizzas sold: ";
  cin >> smallPizzaSold;
  cout << "Medium pizzas sold: ";
  cin >> mediumPizzaSold;
  cout << "Large pizzas sold: ";
  cin >> largePizzaSold;
  cout << "Family pizzas sold: ";
  cin >> familyPizzaSold;

  //calculate total number of pizzas sold
  totalPizzasSold = smallPizzaSold + mediumPizzaSold + largePizzaSold + familyPizzaSold;
  cout << "Total pizzas sold: " << totalPizzasSold << endl;

  //calculate and display percentages of each size sold
  percentageSmall = smallPizzaSold / static_cast<double> (totalPizzasSold) * 100;
    cout << "Percentage of Small pizzas sold: " << percentageSmall << endl;
  percentageMedium = mediumPizzaSold / static_cast<double> (totalPizzasSold) * 100.0;
  cout << "Percentage of Medium pizzas sold: " << percentageMedium << endl;
  percentageLarge = largePizzaSold / static_cast<double> (totalPizzasSold) * 100.0;
  cout << "Percentage of Large pizzas sold: " << percentageLarge << endl;
  percentageFamily = familyPizzaSold / static_cast<double> (totalPizzasSold) * 100.0;
  cout << "Percentage of Family pizzas sold: " << percentageFamily << endl;

  return 0;
} // end of main function