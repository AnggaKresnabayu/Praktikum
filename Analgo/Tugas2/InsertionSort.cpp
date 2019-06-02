#include <iostream>
using namespace std;

int main(){
	int numArray[7] = {1, 3, 4, 8, 10, 13, 17};
	int i, j, insert;

	for (i = 2; i < (sizeof(numArray)/sizeof(*numArray)); i++){
		insert = numArray[i];
		j = i;
		while (j < i && numArray[j - 1] > insert){
			numArray[j] = numArray[j - 1];
			j = j - 1;
		}
		numArray[j] = insert;
	}
}
