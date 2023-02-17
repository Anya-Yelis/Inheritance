#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class ThreeD : public Shape
{
public:
    ThreeD();
    ~ThreeD() override;

    char Menu() override;
    void Print() override; 
    void Draw() override; 
    void Quit() override;

protected:
  int vertices; 
  int faces; 
  string baseShape; 
  int curvedSurface;
  int curves; 
  int edges;
};



class Sphere : public ThreeD
{
public:
    Sphere();
    ~Sphere() override;
    void Draw() override; 
    void Print() override; 


};

class Cube : public ThreeD
{
public:
    Cube();
    ~Cube() override;
    void Draw() override; 
    void Print() override; 

};

class Cone : public ThreeD
{
public:
    Cone();
    ~Cone() override; 
    void Draw() override; 
    void Print() override; 

};