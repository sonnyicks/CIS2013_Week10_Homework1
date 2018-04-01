#include <iostream>
using namespace std;

typedef int* IntArrayPtr;

int main(){
	int d1, d2;
	cout << "Enter the row and column: ";
	cin >> d1 >> d2;
	
	IntArrayPtr *m = new IntArrayPtr[d1];
	int i, j;
	for (i=0; i<d1; i++)
		m[i] = new int[d2];
	return 0;
}