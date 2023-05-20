#include<iostream>
using namespace std;
//kamus


void BubbleSort(int arr[],int n){
    int j;
    for(int i=0;i < n-1; i++){
        for(int x=0; x < n-i-1; x++){
            if(arr[x]<arr[x+1]){
                int temp;
                temp = arr[x];
                arr[x] = arr[x+1];
                arr[x+1] = temp;
            }
        }
    }
}

void insertion(int arr[], int n){
    for(int s = 1;s < n;s++){
        int k = arr[s];
        int j = s - 1;

        while(k<arr[j] && j >=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
}

int main()
{
    int arr[7] = {2,1,2,1,3,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);


    insertion(arr,n);
    cout<<"Hasil"<<endl;
    for(int i=0;i < n;i++){
        cout<< arr[i];
    }


}
