#include <iostream>
using namespace std;

int main()
{
    int x [5];
    cout<<"Input\t: ";
    for(int j=0; j<5; j++){
        cin>>x[j];
    }

    int longg = sizeof(x)/sizeof(x[0]);
    int maxx = x[0];
    int i = 2;

    while(i<longg){
        if(x[i] > maxx){
            maxx = x[i];
        }
        i++;
    }
    cout<<"Output\t: "<<maxx;
}
