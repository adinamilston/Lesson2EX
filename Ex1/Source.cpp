#include "point.h"
#include <iostream>
using namespace std;

//struct testPoint
//{
//    int x;
//    int y;
//};
//void f(const testPoint& p)
//{
//    int d = p.x;
//   // p.y = 9;
//}
void main()
{
    /*testPoint mypoint;
    f(mypoint);*/


  //  int x = 9, y = x;
   point p1,p2(2,8),p3(p2);
   cout<<"p1: ";	p1.print();
   cout<<"p2: ";	p2.print();
   cout<<"p3: ";    p3.print();
   system("pause");
}
