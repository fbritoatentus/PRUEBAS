//============================================================================
// Name        : vectorex.cpp
// Author      : Felo
// Version     :
// Copyright   : Para e copiar la custión
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {
	//crea un vector para guardar int
	vector<int> vec;
	int i;
	
	//muestra el verdadero tamaño del vector
	cout<< "tamaño del vector = "<< vec.size()<<endl;
	
	//empuja 5 valores en el vector
	for(i = 0; i < 455 ;i++)
	{
		vec.push_back(i);
	}
	
	//muestra el tamaño extendido de vec
	cout << "tamaño extendido de vec = "<< vec.size() << endl;
    

    //accesa 5 valores desde el vector
    for(i = 0 ; i < 455 ; i++)
    {
    	cout<< "valor de vec ["<< i << "] = " << vec[i] << endl;
    }
    //utiliza iterador para accesar a los valores 
    vector<int>::iterator v = vec.begin();
    while ( v != vec.end ())
    {
    	cout<< "valor de v = " << *v<< endl;
    	v++;
    }	
	
	
	return 0;
}
