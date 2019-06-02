#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,5,7,11,13,17,19,23};
    int i , j , mid;
    bool found;
    int idx;
    int y = 19;

    i = 1;
    j = sizeof(arr)/sizeof(arr[0]);
    found = false;
    while(!found && i <= j){
        mid  = (i + j)/2;
        if(arr[mid] == y){
            found = true;
        }
        else if(arr[mid]< y){
                i = mid + 1;
        }
        else{
            j = mid - 1;
        }
    }
    if(found == true){
        idx = mid;
    }
    else{
        idx = 0;
    }
    cout<<idx;
    return 0;
}
