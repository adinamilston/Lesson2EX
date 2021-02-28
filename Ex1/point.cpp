#include "point.h"
#include <iostream>
using namespace std;

point::point(int X, int Y):x(X), y(Y)
{ }
point::point(const point& p)
{
   //x=p.getX();
   x = p.x;
   //y=p.getY();
   y = p.y;
   
}
void point::print() const
{
   cout<<'('<<x<<','<<y<<")\n";
}