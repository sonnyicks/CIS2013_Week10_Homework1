#include <iostream>
using namespace std;

int h, w, b;

int main(){
	cout << "height: ";
	cin >> h;
	cout << "width: ";
	cin >> w;
	
	char board[w][h];
	for (int i=0; i<w; i++){
		for (int j=0; j<h; j++){
			board[i][j] = 'X';
			cout << board[i][j];
		}
		cout << endl;
	}
return 0;
}