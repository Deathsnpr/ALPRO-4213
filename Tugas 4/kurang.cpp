#include <iostream>
using namespace std;
// Recursive function to perform subtraction
int kurang(int a, int b) {
  if (b == 0) {
    return a; // Base case: jika pengurang (b) adalah 0, hasil pengurangan adalah pengurangan (a)
  } else {
    return kurang(a - 1, b - 1);
    // Recursive case: hasil pengurangan adalah a - 1 dikurangi b - 1
  }
}

int main() {
  // Example usage of the subtract function
  int x,y;
  cout<<"masukan nilai pertama: ";
  cin>>x;
  cout<<"masukan nilai kedua: ";
  cin>>y;

  int hasil = kurang(x,y);
  cout << "Hasil pengurangan: " << hasil << endl;

  return 0;
}

