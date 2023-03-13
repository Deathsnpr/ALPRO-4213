#include <iostream>

using namespace std;


int jmlArray(int p);
 int main(){
     int p;
    cout << "input panjang array : ";
    cin >> p;
    cout << jmlArray(p);

    return 0;
 }
 int jmlArray(int p) {
    int Arr[p];
    int jml=0;

    cout << "Input " << p << " isi array" << endl;
    for(int i=0; i < p; i++){
        cout << "nilai ke-" << i+1 << ":";
        cin >> Arr[i];

        jml=jml+Arr[i];
    }
    cout << "jumlah : ";
    return jml;
 }
