#include <iostream>

using namespace std;

struct sepeda{
    string merk, type, harga;
    int tahun;
};
struct sepeda sepedaKu;

int main(){
    sepedaKu.merk = "Polygon";
    sepedaKu.type = "Sepeda Gunung";
    sepedaKu.harga = "2.000.000";
    sepedaKu.tahun = 2013;

    cout << "Merk : " << sepedaKu.merk << endl;
    cout << "Type : " << sepedaKu.type << endl;
    cout << "Tahun : " << sepedaKu.tahun << endl;
    cout << "Harga : " << sepedaKu.harga << endl;

    return 0;
}