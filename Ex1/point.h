/*Example 1 - Point class
*getters and setters
*initialize data members
*copy ctor and dtor
*/
#pragma once
//Example Channi Nadler
#include <iostream>
using namespace std;
class point
{
private:
    //data members
   int x = 0;
   int y;
public:
   //constructors
   point() {y=0;}//dctor
   point(int, int);
   //X( X x)
   point(const point& p);//copy constructor
   int getX() const{return x;}
   int getY() const{return y;}
   void print() const;
};