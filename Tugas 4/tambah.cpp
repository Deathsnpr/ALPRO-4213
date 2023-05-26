#include<iostream>
using namespace std;

int tambah(int a,int b){
    if (b == 0) {
    return a; // Base case: jika pengurang (b) adalah 0, hasil pengurangan adalah pengurangan (a)
  } else {
    return 1+tambah(a, b-1 );
    // Recursive case: hasil pengurangan adalah a - 1 dikurangi b - 1
  }
}
int main(){

int x;
int y;
cout<<"masukan nilai pertama: ";
cin>>x;
cout<<"masukan nilai kedua: ";
cin>>y;
int hasil = tambah(x,y);
cout<<"Hasil pertambahan: "<< hasil<<endl;
return 0;
}
