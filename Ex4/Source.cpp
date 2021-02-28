#include <iostream>
#include "String.h"
using namespace std;

String f()
{
	String temp("good day");
	return temp;
}

int main()
{
	//String s11("have a good day");//ctor with string
	//String s1 = "hello";//ctor with string
	//s1.print();

	//String s2(s1);//cctor
	//s2.print();

	//String s3 = "how are you?";//ctor with string
	//String s4 = s3;//cctor
	//s4.print();
	////cout << s4.Find("are") <<  endl;
	//String s8 = "are";
	//cout << s4.Find(s8) << "  first\n";
	////cout << s4.Find("are") << "  second\n";
	////cout << s4.Find('a') << "   third\n";

	String s5 = f();
	s5.print();
	system("pause");
	return 0;
}