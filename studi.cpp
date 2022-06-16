#include<iostream>
using namespace std;

class Dua{
	public :
		void input();
		void rubah();
	private :
		int baris,kolom,b,k,i,z,j,a,data,data1,data2,data3;
			string pertama[10][10];
			string pertama2[10][10];
			string pertama3[10][10];
			string satudi[20];
			string satudi2[20];
			string satudi3[20];
};

void Dua::input(){
	cout<<"Masukkan banyak data departemen kesehatan : ";
	cin>>data1;
	cout<<"Masukkan banyak data departemen teknologi : ";
	cin>>data2;
	cout<<"Masukkan banyak data departemen pangan : ";
	cin>>data3;
	cout<<"\nDepartemen kesehatan :\n";
	data=data1*2;
	for(b=0;b<data;b++){
			if(b%2==0){
			cout<<"id karyawan = ";
			cin>>satudi[b];
			}
			else{
			cout<<"nama karyawan = ";
			cin>>satudi[b];
			}
		}
	cout<<"\nDepartemen teknologi :\n";
	data=data2*2;
	for(b=0;b<data;b++){
			if(b%2==0){
			cout<<"id karyawan = ";
			cin>>satudi2[b];
			}
			else{
			cout<<"nama karyawan = ";
			cin>>satudi2[b];
			}
		}
	cout<<"\nDepartemen pangan :\n";
	data=data3*2;
	for(b=0;b<data;b++){
			if(b%2==0){
			cout<<"id karyawan = ";
			cin>>satudi3[b];
			}
			else{
			cout<<"nama karyawan = ";
			cin>>satudi3[b];
			}
		}
}


	
void Dua::rubah(){
	
  	cout << "\nDepartemen\tId Karyawan\t\t\tNama" << endl;
	int z =0;
	cout<<"\nKesehatan \n";
	
	for(b=0;b<data1;b++){
		for(k=0;k<2;k++){
			pertama[b][k]=satudi[z];	
			cout<<"\t\t\t|\t"<<pertama[b][k]<<"\t|";
			z++;
		}
		cout<<endl;
	}
	
	int x=0;
	cout<<"\nteknologi \n";
	for(b=0;b<data2;b++){
		for(k=0;k<2;k++){
			pertama2[b][k]=satudi2[x];
			cout<<"\t\t\t|\t"<<pertama2[b][k]<<"\t|";
			x++;
		}
		cout<<endl;
	} 
	int c=0;
	cout<<"\nPangan \n";
	for(b=0;b<data3;b++){
		for(k=0;k<2;k++){
			pertama3[b][k]=satudi3[c];
			cout<<"\t\t\t|\t"<<pertama3[b][k]<<"\t|";
			c++;
		}
		cout<<endl;
	}

}

int main(){
	Dua x;
	x.input();
	x.rubah();
}
