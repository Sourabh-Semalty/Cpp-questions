// ! Need to be done about this
#include<iostream>
using namespace std;

int main() {
	int m,n;
	cout << "Enter number of rows";
	cin >> n;
	cout << "Enter number of columns";
	cin >> m;

	char ch[n+1][m+1];

	for(int i = 1; i < n +1;i++) {
		for(int j=1;j<m+1;j++) {
				cin >> ch[i][j]; 
		}
	}

	// for(int i = 1; i < n+1;i++) {
	// 	for(int j=1;j<m+1;j++) {
	// 			cout << ch[i][j] << endl; 
	// 	}
	// }


}