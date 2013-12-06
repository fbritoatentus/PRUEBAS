//============================================================================
// Name        : templates.cpp
// Author      : Felo
// Version     :
// Copyright   : Para e copiar la custion
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b)
{
	return a < b ? b:a;
}

int main() {
	int i = 39;
	int j = 20;
	
	cout <<"Max(i,j): " << Max(i, j)<< endl;
	
	double f1 = 13.5;
	double f2 = 20.7;
	
	cout <<"Max(f1,f2): "<< Max(f1, f2)<< endl;
	
	string s1 = "Suerte ";
	string s2 = "Suertudo ";
	
	cout <<"Max(s1,s2): "<< Max(s1, s2)<< endl;
	
	return 0;
}	
	