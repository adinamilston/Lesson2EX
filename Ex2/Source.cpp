#include "Vector.h"
#include <iostream>
using namespace std;

void main()
{
   int nums[10];
   for (int i=0;i<10;i++)
      nums[i]=i;
   Vector vec1,  vec2(4,8), vec3(nums);
   cout<<"vec1: ";
   vec1.print();
   cout<<"\nvec2: ";
   vec2.print();
   cout<<"\nvec3: ";
   vec3.print();
}
/*
vec1: 14 60 19 62 66 8 61 78 76 10

vec2 : 4 4 4 4 4 4 4 4

vec3 : 0 1 2 3 4 5 6 7 8 9

*/