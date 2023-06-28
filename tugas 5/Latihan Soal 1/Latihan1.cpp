#include <iostream>
#include <math.h>

using namespace std;


struct hitung{
    float phi = 3.14;

    //Luas Persegi Panjang
    int LPP(int p, int l){
        return p * l;
    }

    //Luas Lingkaran
    float LL(int r){
        return phi * r * r;
    }

    //Valume Kerucut
    float VK(int r, int t){
        return 0.3 * phi * pow(r,2) * t;
    }

    //Volume Bola
    double VB(int r){
        return 1.3 * phi * pow(r,3);
    }
};
struct hitung kalkulator;

int main(){

    cout << "Luas Persegi Panjang : " << kalkulator.LPP(3,7) << endl;
    cout << "Luas Lingkaran : " << kalkulator.LL(3) << endl;
    cout << "Volume Kerucut : " << kalkulator.VK(4,7) << endl;
    cout << "Volume Bola : " << kalkulator.VB(5) << endl;

    return 0;
}
