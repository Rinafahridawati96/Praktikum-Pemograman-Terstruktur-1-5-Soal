#include <iostream>
using namespace std;


int main(){
	int jamker;
	int gajihph;
	int lembur;
	int jamlembur;
	int jamkertotal;
	int gatot;
	int gaber;
	
	cout<<"masukan jam kerja anda:"; cin >> jamker;
	cout<<"masukan gajih anda perjam:"; cin >> gajihph;
	lembur=jamker-40;
	jamlembur=lembur*1.5;
	jamkertotal=40+jamlembur;
	gatot=jamkertotal*gajihph;
	gaber=gatot-(0.15*gatot);
	
	cout <<"jam lembur anda:"<<lembur;
	cout <<"bonus dari lembur anda:"<<jamlembur;
	cout <<"jam kerja total anda:"<<jamkertotal;
	cout <<"gajih total anda:"<<gatot;
	cout <<"gajih bersih anda di potong pajak:"<<gaber;
	
	
}
