#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class TwoD : public Shape
{
  public:
    TwoD();
    ~TwoD() override; 

    char Menu() override;
    void Print() override; 
    void Draw() override; 
    void Quit() override;

protected:
    int lines; 
    int curves; 

};

class Circle : public TwoD
{
   public:
    Circle();
    ~Circle () override;
    void Draw() override; 
    void Print() override; 
 
};

class Rectangle : public TwoD
{
  public:
    Rectangle();
    ~Rectangle() override;
    void Draw() override; 
    void Print() override; 

};