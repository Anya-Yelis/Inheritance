#include <iostream>
#include "Shape.h"

using namespace std;

Shape:: Shape()    // default constructor 
{
  points = 0;
  name = " ";
  choice = '1';
}

string Shape :: GetShape() const
{
  return name;
}

void Shape :: SetShape(string name)
{
  this->name=name; 
}

char Shape :: GetChoice() 
{
  return choice;
}

void Shape :: SetChoice(char choice)
{
  this->choice = choice; 
}


char Shape :: MainMenu()
{
  
  cout<< "\n=====================================================\n\t\t\tMENU\n=====================================================";
  
  cout<<"\n(1) Choose a Shape\n(2) Print all current Shapes\n(3) Information about current Shapes\n(4) Remove a Shapeform from the list\n(Q) Quit {Case Sensitive}";
  cout<<"\n\nPlease choose one of the following menu items by typing its correlated number: ";
  
  choice = ValidInput_4_Options();

  return choice; 
}


char Shape :: Menu()
{
  cout<< "\n(1) 1D\n(2) 2D\n(3) 3D\n(Q) Quit {Case Sensitive}";
  cout<<"\n\n Please choose one of the following menu items by typing its correlated number: ";
  
  choice = ValidInput_3_Options();

  return choice; 
}

void Shape :: Print(){}

void Shape :: Draw(){}

char Shape :: ValidInput_4_Options()   // protecting against invalid inputs 
{ 
  cin>> choice; 
  
while (cin.fail() || choice != '1' && choice !='2' && choice !='3'&& choice !='4' && choice !='Q')
    {
      while (cin.fail())            
        {
           cin.clear();                              
           cin.ignore();            // ignores invalid data
        }
      
    cout<< "\nYour input was invalid. Please try again. ";

    cin >> choice;      
    }
 
    return choice; 
}

char Shape :: ValidInput_3_Options()   // protecting against invalid inputs 
{ 
  cin>> choice; 
  
while (cin.fail() || choice != '1' && choice !='2' && choice !='3' && choice !='Q')
    {
      while (cin.fail())            
        {
           cin.clear();                              
           cin.ignore();            // ignores invalid data
        }
      
    cout<< "\nYour input was invalid. Please try again. ";

    cin >> choice;      
    }
 
    return choice; 
}

char Shape :: ValidInput_2_Options()   // protecting against invalid inputs 
{ 
  cin>> choice; 
  
while (cin.fail() || choice != '1' && choice !='2' && choice !='Q')
    {
      while (cin.fail())            
        {
           cin.clear();                              
           cin.ignore();            // ignores invalid data
        }
      
    cout<< "\nYour input was invalid. Please try again. ";

    cin >> choice;      
    }
 
    return choice; 
}


void Shape :: Quit()
{
  cout<<"\n\nSo close, yet so far... Sianara!";
}


Shape :: ~Shape(){}
 