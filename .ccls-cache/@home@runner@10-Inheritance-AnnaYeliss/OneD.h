#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class OneD : public Shape
{
  public:
    OneD();
    ~OneD() override;

    char Menu() override;
    void Print() override; 
    void Draw() override;
    void Quit() override;

};

class Line : public OneD
{
  public:
    Line();
    ~Line() override;

    void Print() override; 
    void Draw() override; 

};

class Curve : public OneD
{
  public:
    Curve();
    ~Curve() override;

    void Draw() override; 
    void Print() override; 

};