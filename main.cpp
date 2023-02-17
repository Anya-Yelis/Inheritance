// Grade:10/10
//***************************************************************************
//
// Anna Yelisseyeva
// H00847215
// CSC 122 30147
//
// I certify that this is my own work and where appropriate an extension
// of the starter code provided for the assignment.
//
//***************************************************************************
#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

//including definitions of classes in shape hierarchy
#include "Shape.h"
#include "OneD.h"
#include "TwoD.h"
#include "ThreeD.h"


int main() 
{

  vector <Shape *> container;  // to store shapes 
  
  vector <Shape *> shapes_ptr(4); // vector of base object pointers to call derived functions
  
  shapes_ptr[0] = new OneD(); //ptr to call methods 
  
  char ch = '1'; // to check 1 through 3 , which choice has been made
  int i=1;   // iterators
  int j=0;
  
  shapes_ptr[1] = new OneD();   // pointers to call menus 
  shapes_ptr[2] = new TwoD();
  shapes_ptr[3] = new ThreeD();

  
  while(shapes_ptr[0]->GetChoice() != 'Q')   // WHILE LOOP until quit button
{
   shapes_ptr[0]->SetChoice(shapes_ptr[0]->MainMenu()); // call MAIN MENU
  
    if(shapes_ptr[0]->GetChoice() == 'Q')   // to QUIT FROM MAIN MENU
    { 
      cout<<"\n\nQuitters gonna quit... see ya!";
      break;
    }
  
    if(shapes_ptr[0]->GetChoice() == '2')  // to PRINT ALL CURRENT SHAPES
    {
     for(int i=0; i<container.size(); i++)
       {
          container[i]->Print(); 
       }
    }

    
    if(shapes_ptr[0]->GetChoice() == '3') // to get INFO ABOUT CURRENT SHAPES 
    {
     for(int i=0; i<container.size(); i++)
       {
          container[i]->Draw(); 
       }
    }

    
    if(shapes_ptr[0]->GetChoice() == '4') // to REMOVE A SHAPEFORM FROM THE LIST
    {
     int shape; 
      
     cout<<"\nWhich shape would you like to remove {Number in the list}: ";
     cin >> shape; 
     shape= shape-1;
     container.erase(container.begin()+shape);

     cout<< "\nSHAPE REMOVED: ";
     container[shape]->Print();
    }

  
    if(shapes_ptr[0]->GetChoice() == '1') // to CHOOSE SHAPE
  {
      shapes_ptr[0]->SetChoice(shapes_ptr[1]->::Shape::Menu());  //setting a choice to later use in the for loop 
    
      if(shapes_ptr[0]->GetChoice() == 'Q')  // to quit from DIMENSIONS MENU
     {
       shapes_ptr[0]->::Shape::Quit(); 
       break; 
     }
    
    
      for(i=1; i<=3; i++)   // looping through 1-3rd pointers (OneD to ThreeD)
    {   
      
         if(shapes_ptr[1]->GetChoice() == ch)   //CHOOSING DIMENSION if choice is '1', call first oned menu and so on
         {
         
         shapes_ptr[0]->SetChoice(shapes_ptr[i]->Menu());  //calling shosen dimension menu and setting choice
         
         if(shapes_ptr[0]->GetChoice() == 'Q')  //quitting from dimensions menu
         {
          shapes_ptr[i]->Quit(); 
          break; 
         }

        ch = '1'; //resetting choice
          
        if(shapes_ptr[0]->GetChoice() == '1')  // CHOICE 1 
        {
           if(i==1)  // if in 1d
           {
            container.push_back(new Line());
           }
           if(i==2)   // if in 2d
           {
            container.push_back(new Circle());
           }
           if(i==3)   // if in 3d
           {
            container.push_back(new Sphere());
           }

           container[j] -> Draw(); 
           j++;
           break;
        }

        if(shapes_ptr[0]->GetChoice() == '2')  // CURVE is chosen 
        {
           if(i==1)
           {
            container.push_back(new Curve());
           }
           if(i==2)
           {
            container.push_back(new Rectangle());
           }
           if(i==3)
           {
            container.push_back(new Cube());
           }

           container[j] -> Draw(); 
           j++;
           break;
        }
    

    
        if(shapes_ptr[0]->GetChoice() == '3')  
        {
          if(i == 3)   // if in THREED menu 
          {
           container.push_back(new Cone());

           container[j] -> Draw(); 
           j++;
           break;
           }
          else
          {
            cout<< "\nInvalid choice, please try again. ";
          }
        }

         
    } //if we're in a chosen dimension (shapes_ptr[1]->GetChoice() == ch) 
      
      ch++; // going through 1-3D in the for loop
      
  }  //for loop ENDS

    
}  //if(shapes_ptr[0]->GetChoice() == '1') statement ends
    
} // while loop ends



for(size_t i=0; i < shapes_ptr.size(); i++)  // free dynamic memory 
  {
     delete shapes_ptr[i];
  }

for(size_t i=0; i < container.size(); i++)  // free dynamic memory 
  {
     delete container[i];
  }

  
  return 0;
}