#include <iostream>
#include "algoritmos.h"
#include "Computadora.cpp"

using namespace std;
 int main()
 {
 	
 	//int arr[] = {-4, 6, -3, 3, 2, -8};
	//string arr[] = {"irving","rafael","ruvalcaba","hernandez"};
	Computadora arr[] = {
		Computadora("inspiron","dell","intel",12),
		Computadora("All-in-one","Hp","AMD",12),
	};
	
 	seleccion(arr);
 	//burbuja(arr);
 	
 	
	return 0;
 }
