/* 
Nama : Ahmad Nabilul As'ad
NIM  : A11.2022.14488
Kelp : 4213
 */
#include <iostream>
using namespace std;

typedef struct mahasiswa{
    string nama;
    string nim;
    int score[5];
    void printData() {
        cout << "Nama :" << nama <<endl;
        cout << "Nim :" << nim <<endl;
        for(int i = 0; i < 5; i++) {
            cout << "Nilai " << i+1 << ":" << score[i] <<endl;
        }
    }
    void swapScore(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    float sumScore(int *arr, int leng) {
        if(leng == 0) {
            return arr[0];
        }
        return score[leng] + sumScore(arr, leng-1);
    }

    void BubbleSortRec(int *arr, int n)
    {
        if (n <= 1)
            return;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                swapScore(&arr[i], &arr[i + 1]);
        }

        BubbleSortRec(arr, n - 1);
    }

}mahasiswa;

int main() {
    mahasiswa n1 = {"Ahmad Nabilul As'ad", "A11.2022.14488", {99, 85, 88, 90, 95}};
    cout << "\nBefore" << endl;
    n1.printData();

    cout << "\nAfter" << endl;
    n1.swapScore(&n1.score[0], &n1.score[4]);
    n1.printData();

    int n = sizeof(n1.score)/sizeof(n1.score[0]);
    cout << "Rata-rata :" << n1.sumScore(n1.score, n)/n << endl;

    cout << "Sorting : " << endl;
    n1.BubbleSortRec(n1.score,n);
    n1.printData();

    return 0;
}