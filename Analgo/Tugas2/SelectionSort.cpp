#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10,5,3,9,6,1,4};
    int panjangArr = sizeof(arr)/sizeof(arr[0]);

    int i,j,imaks,temp;
    for(i = panjangArr ; i >= 2 ; i--){
        imaks = 1;
        for(j= 2; j <i ; j++){
            if(arr[j] > arr[imaks]){
                imaks = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[imaks];
        arr[imaks] = temp;
    }
    for(int x = 0 ; x<= panjangArr; x++){
            cout<<arr[x]<<endl;
    }
}
