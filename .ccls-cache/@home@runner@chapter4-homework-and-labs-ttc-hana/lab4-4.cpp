//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by Hannah Haynes on 7 July 2024

#include <iostream>
using namespace std;

int main ()
{
  //declare named constants and variables
  const double PI = 3.14;
  double radius   = 0.0;
  double height   = 0.0;
  double volume   = 0.0;

  //enter input items
  cout << "Height: ";
  cin >> height;
  cout << "Radius: ";
  cin >> radius;

  //calculate and display the volume
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;

return 0;
  } //end of main function