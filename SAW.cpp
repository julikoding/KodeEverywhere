#include <iostream>
#include <cmath>
using namespace std; // pake array 1 dimensi, array 2 dimensi, for do, do while, struct dan fungsi non-void

struct julikoding{
    double ac[3][5]={ {4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2} };
    double mc[5],w[5]={5,3,4,4,2},ha[3],RWac[3][5];
};julikoding x,y,z,a,b; //variabel struknya, pdhl 1 juga cukup. biar enak dilihat jadi variabelny ada 5.

void hasilnya(){ 
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			a.ha[i]+=b.RWac[i][j];
		}
	}cout << endl<< "Nilai A1 : "<<a.ha[0]<<endl << "Nilai A2 : "<<a.ha[1]<<endl<< "Nilai A3 : "<<a.ha[2]<<endl;
}

int main(){
	cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(4);
	// 1# Matrix X - Isi dan Tampilan Data
	cout << "MATRIKS X : "<<endl; 
	for(int i=0;i<3;i++){
		int j=0; do{ 
			cout << x.ac[i][j] << " | "; j++; 
		}while(j<5);cout<<endl;
	}// Akhir dari Matrix X
	
	// Mengambil nilai max tiap krateria
	cout <<endl<< "MATRIKS R : "<<endl;	
	for(int i=0;i<5;i++){
		y.mc[i+1]=max(x.ac[0][i],max(x.ac[1][i],x.ac[2][i]));
	}
	
	// 2# Matrix R - Nilai dan Menampilkan Data
	double Rac[3][5]={ {(x.ac[0][0]/y.mc[1]),(x.ac[0][1]/y.mc[2]),(x.ac[0][2]/y.mc[3]),(x.ac[0][3]/y.mc[4]),(x.ac[0][4]/y.mc[5])}, 
					   {(x.ac[1][0]/y.mc[1]),(x.ac[1][1]/y.mc[2]),(x.ac[1][2]/y.mc[3]),(x.ac[1][3]/y.mc[4]),(x.ac[1][4]/y.mc[5])},
					   {(x.ac[2][0]/y.mc[1]),(x.ac[2][1]/y.mc[2]),(x.ac[2][2]/y.mc[3]),(x.ac[2][3]/y.mc[4]),(x.ac[2][4]/y.mc[5])} 
	};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout << Rac[i][j] << " | ";
		}cout<<endl;
	}// Akhir Matrix R
	
	// 3# Bobot W - Tampilkan Nilai
	cout <<endl<< "BOBOT W : "<<endl;
	for(int i=0;i<5;i++){
		cout << z.w[i]<<" | ";
	}cout <<endl;//Akhir dari Bobot W
	
	// 4# Matrix R * W
	cout <<endl<< "MATRIKS R * W : "<<endl; 
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			b.RWac[i][j]=Rac[i][j]*z.w[j]; cout <<b.RWac[i][j]<<" | ";
		}cout <<endl;
	}//4# Akhir Matrix R * W

	// 5# HASIL AKHIR
	cout <<endl<< "HASIL AKHIR : "; hasilnya();
}
