#include <iostream>

using namespace std;

bool isGanjil (int x){
    return x % 2 != 0;
}
void terkecilGenap (int arr[], int n){
    int minO = arr[0];
    int index = -1;

    for(int i = 0; i < n; i++){
        if(!isGanjil(arr[i])){
            if(arr[i]<minO){
                minO = arr[i];
                index = ;
            }
        }
    }
    cout << "Genap terkecil : " << minO << endl;
    cout << "Index ke : " << index << endl;
}
int main(){
    int arr[5] = {6,7,4,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    terkecilGenap(arr,n);
}
