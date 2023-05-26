#include <iostream>
using namespace std;
// Recursive function to perform exponentiation
int pangkat(int a, int b) {
  if (b == 0) {
    return 1; // Base case: jika eksponen adalah 0, hasil pangkat adalah 1
  } else {
    return a * pangkat(a,b - 1);
    // Recursive case: hasil pangkat adalah base dikalikan dengan hasil pangkat dari base dan eksponen - 1
  }
}

int main() {
  // Example usage of the power function
  int x,y;
  cout<<"masukan bilangan asli: ";
  cin>>x;
  cout<<"masukan bilangan pangkat: ";
  cin>>y;

  int hasil = pangkat(x,y);
  cout << "Hasil pangkat: " << hasil << endl;

  return 0;
}

