#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[]={12,3,4,12,5,3,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=0;i<size;i++){
	    for(j=i+1;j<size;j++) {
	        if(arr[i]==arr[j]) {
	            cout<<arr[i]<<" ";
	        }
	    }
	}
	return 0;
}

