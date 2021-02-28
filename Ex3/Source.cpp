
#include "vector.h"
#include <iostream>
using namespace std;

void main()
{
   int nums[10];
   for (int i=0;i<10;i++)
      nums[i]=i;
   Vector vec1,  vec2(4,8), vec3(nums), vec4(vec2),vec5 = vec2;
   cout<<"vec1: ";
   vec1.print();
   cout<<"\nvec2: ";
   vec2.print();
   cout<<"\nvec3: ";
   vec3.print();
   cout << "\nvec4: ";
   vec4.print();
  // delete[] vec1.numbers
}
/*
vec1: 57 58 70 45 85 59 30 1 94 58

vec2: 4 4 4 4 4 4 4 4

vec3: 0 1 2 3 4 5 6 7 8 9

vec4:
*/