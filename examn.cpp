#include <iostream>
using namespace std;

int const num=5;
int arreglo[num];
int *ptr;

int main(int argc, char** argv) {
	 *ptr=arreglo[num-1] ;
	for (int i=0; i<num; i++){
		cout<<"Dame el puntero ["<<i<<"]"<<endl;
		cin>>ptr[i];
	}
   	return 0;
}
