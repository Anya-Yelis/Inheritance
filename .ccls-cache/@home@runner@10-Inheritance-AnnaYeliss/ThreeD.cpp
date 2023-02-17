#include <iostream>
#include "ThreeD.h"
using namespace std;

ThreeD :: ThreeD(){}

ThreeD :: ~ThreeD(){}

void ThreeD :: Print(){}

void ThreeD :: Draw(){}


char ThreeD :: Menu()
{
  cout<< "\n(1) Sphere \n(2) Cube\n(3) Cone \n(Q) Quit {Case Sensitive}";
  cout<<"\n\nPlease choose one of the following menu items by typing its correlated number: ";
  
  choice = ValidInput_3_Options();

  return choice;
}

void ThreeD :: Quit()
{
  cout<< "\n\nCatch you on the flip... program out! *mic drop*"; 
}

Sphere :: Sphere()
{
  name = "Sphere"; 
  vertices = 0; 
  faces = 1; 
  baseShape = "N/A"; 
  curvedSurface=1;
  edges=0;

};

Sphere :: ~Sphere(){};

void Sphere :: Draw()
{
  cout<<"\n SPHERE ATTRIBUTES:\n\tVertices - "<<vertices;
  cout<<"\n\tFaces - "<<faces;
  cout<<"\n\tBase Shape - "<< baseShape;
  cout<<"\n\tCurved Surface - "<<curvedSurface;
  cout<<"\n\tEdges - "<<edges;
  cout<<"\n\tPoints - Unknown"; 
}

void Sphere :: Print()
{
  cout<< "\n"<< GetShape() <<endl; 
}

Cube :: Cube() 
{
  name = "Cube"; 
  vertices = 8; 
  faces = 6; 
  baseShape = "Square"; 
  curvedSurface= 0;
  edges= 12;
  points= 24;
};

Cube :: ~Cube() {};

void Cube :: Draw()
{
  cout << "\n CUBE ATTRIBUTES:\n\tVertices - "<<vertices;
  cout<<"\n\tFaces - "<<faces;
  cout<<" \n\tBase Shape - "<< baseShape; 
  cout<< "\n\tCurved Surface - "<<curvedSurface;
  cout<<"\n\tEdges - "<<edges;
  cout<<"\n\tPoints - "<<points; 
}

void Cube :: Print()
{
  cout<< "\n"<< GetShape() <<endl; 
}

Cone:: Cone()
{
  name = "Cone"; 
  vertices = 1; 
  faces = 2; 
  baseShape = "Circle"; 
  curvedSurface= 1;
  edges= 1;
  points= 6;
  curves = 2; 
};

Cone:: ~Cone(){};

void Cone :: Draw()
{
  cout<< "\n CONE ATTRIBUTES: \n\tVertices - "<<vertices;
  cout<<"\n\tFaces - "<<faces;
  cout<<" \n\tBase Shape - "<< baseShape; 
  cout<< "\n\tCurved Surface - "<<curvedSurface;
  cout<< "\n\tCurves - "<< curves; 
  cout<<"\n\tEdges - "<<edges;
  cout<<"\n\tPoints - "<<points; 
}

void Cone :: Print()
{
  cout<< "\n"<< GetShape() <<endl; 
}
