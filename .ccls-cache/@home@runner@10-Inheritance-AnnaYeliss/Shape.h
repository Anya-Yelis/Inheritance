
#pragma once
#include<string>

using namespace std;

class Shape
{
  protected:      // can be accessed by child classes 
    int points;
    string name;
    char choice; 

  public:
    Shape();    // default constructor 

    string GetShape() const;
    void SetShape(string); 

    char GetChoice(); 
    void SetChoice(char); 

    char MainMenu();

    virtual char Menu();  //function overriding 

    virtual void Draw() =0;
    virtual void Print() =0;   // pure virtual function -- this base class is abstract

    char ValidInput_4_Options();
    char ValidInput_3_Options();
    char ValidInput_2_Options();

    virtual void Quit();

    virtual ~ Shape(); 

};




