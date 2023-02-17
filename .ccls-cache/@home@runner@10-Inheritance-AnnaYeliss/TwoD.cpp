#include <iostream>
#include "TwoD.h"
using namespace std;

TwoD :: TwoD(){}

TwoD :: ~TwoD(){}

void TwoD :: Print(){}
void TwoD :: Draw(){}

char TwoD :: Menu()
{
  cout<< "\n(1) Circle\n(2) Rectangle\n(Q) Quit {Case Sensitive}";
  cout<<"\n\nPlease choose one of the following menu items by typing its correlated number: ";
  
  choice = ValidInput_2_Options();

  return choice;
}

void TwoD :: Quit()
{
  cout<< "\n\nDon't let the door hit ya on the way out...Bye!";
}


Circle :: Circle()
{
  name = "Circle";
  points = 6;
  curves = 2; 
}

Circle :: ~Circle(){}

void Circle :: Draw()
{
  cout<< "\n CIRCLE ATTRIBUTES:\n\tCurves - "<<curves;
  cout<<"\n\tPoints - "<< points; 
}

void Circle :: Print()
{
  cout<< "\n"<< GetShape() <<endl; 
}

Rectangle :: Rectangle()
{
  name = "Rectangle";
  points = 8;
  lines = 4;
}

Rectangle :: ~Rectangle(){}

void Rectangle :: Draw()
{
  cout<< "\n RECTANGLE ATTRIBUTES:\n\t Lines - "<<lines;
  cout<< "\n\tPoints - "<< points; 
}

void Rectangle :: Print()
{
  cout<< "\n"<< GetShape() <<endl; 
}