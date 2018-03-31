#include <iostream>
using namespace std;

typedef char* CharPtr;

int main(){

int w;
int h;
int bombs;
CharPtr x;
CharPtr y;

// void print_board(int, int, int);

	cout << "Enter width: ";
	cin >> w;
	cout << "Enter height: ";
	cin >> h;
	cout << "Enter number of bombs: ";
	cin >> bombs;
	
	x = new char[w];
	y = new char[h];
	for (int n=0; n<=h; n++){
	for (int i=0; i<=w; i++){
		x[i] = 'X';
		cout << " " << x[i] << " ";
	}
	cout << endl;
}
	return 0;
}

// void print_board (int w, int h, int b){
	// for (int i=0; i<=w; i++){
		
	// }
// }