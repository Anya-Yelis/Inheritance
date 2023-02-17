# Instructions  

  ** Inheritance **  

Your company wants to branch out into the graphics market with a drawing program. But none of you has ever programmed graphics before. To prove yourselves to the company, you decide to write a proof-of-concept application to show that you can overcome all of the processing headaches.

You create an inheritance hierarchy like this:

                              Shape
                                |
            --------------------------------------------------
            |                   |                            |
           1D                  2D                           3D
            |                   |                            |
        ----------         -------------            -------------------
        |        |         |           |            |        |        |
       Line    Curve     Circle    Rectangle      Sphere    Cube    Cone

Each level adds either new methods -- new ways to achieve a behavior -- new attributes, or a simple abstraction to gather things more logically together. Your team leader suggests that a basic Shape should know it's name and a Point. OneD, TwoD, and ThreeD might simply be for logical abstraction. Each other class would add enough data members to draw itself (a second Point for a Line, two [or more] other Points for a Curve, a radius for a Circle, either a second Point or length and width for a Rectangle, etc.).

As to behaviors (methods), all Shapes should know how to draw themselves. Of course, this being merely a proof-of-concept app -- and you not being able to do graphics with portable C++ -- you'll just have to skip that. You'll also need a Print method so the Shape can print its name and all pertinent data. For ease of use, you should also create any methods/operators you think might prove useful in the full application. But for speed of development, we'll leave them out here. (And, yes, the Print method will be useful even in a final application -- for debug printing ...to a file perhaps?)

You decide on a menu-driven app which allows the user to select a shape from a series of sub-menus (for now these are most easily aligned with the hierarchy). When they've chosen a Shape, create it (perhaps dynamically?), and add it to a container for later processing.

Other options from the main menu will be to print a list of all current Shapes (print their names), print all information about the current Shapes (print all their data), and remove a Shapefrom the list.

