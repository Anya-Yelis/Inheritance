#include <iostream>
#include "OneD.h"
using namespace std;

OneD :: OneD(){}

OneD :: ~OneD() {}

char OneD :: Menu()
{
  cout<< "\n(1) Line\n(2) Curve\n(Q) Quit {Case Sensitive}";
  cout<<"\n\nPlease choose one of the following menu items by typing its correlated number: ";
  
  choice = ValidInput_2_Options();
  
  return choice;
}

void OneD :: Print(){}
void OneD :: Draw(){}

void OneD :: Quit()
{
  cout<< "\n\nDeuces!";
}


Line :: Line()
{
  points = 2; 
  name = "Line";
}

Line :: ~Line(){}

void Line :: Draw()
{
  cout<< "\n LINE ATTRIBUTES:\n\tPoints - "<< points; 
}

void Line :: Print()
{
  cout<< "\n"<< GetShape() <<endl; 
}




Curve :: Curve()
{
 points =3;
 name = "Curve"; 
}

Curve :: ~Curve(){}


void Curve :: Draw()
{
  cout<< "\n CURVE ATTRIBUTES:\n\tPoints - "<< points; 
}

void Curve :: Print()
{
  cout<< "\n"<< GetShape() <<endl; 
}