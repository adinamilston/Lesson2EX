//Example 4
//String Class and move ctor
#pragma once
#include <iostream>
using namespace std;

class String 
{
	int _len = 0; 
	char* _data;
public:
	String() : _data(nullptr) {}//default constructor
	String(const char* p);
	~String() { if (_data) delete[] _data; }//destructor (has a ~)

	// copy constructor
	String(const String& s) // :String(s._data) { cout << "cctor\n"; }
	{
		_len = s._len;
		_data = new char(_len + 1);
		strcpy_s(_data, _len + 1, s._data);
	}
		

	// move constructor
	String(String&& s);
	//int getLength() const { return _len; }
	int Length() const { return _len; }
	bool Find(const String& s) const { return strstr(_data, s._data) != nullptr; }
	
	void print() { cout << _data << endl; }
};
