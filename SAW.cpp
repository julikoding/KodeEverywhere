#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	// 1# Matrix X - Isi dan Tampilan Data
	cout << "MATRIKS X : "<<endl;
	double ac[3][5]={ {4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2} };
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout << ac[i][j] << " | ";
		}cout<<endl;
	}// Akhir dari Matrix X
}
