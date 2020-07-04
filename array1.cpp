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


// the main idea is that first find the size of the array 
// then use two loops 
// in the inner loop run it from index 0 to size of array
// in the output loop run it from i+1 to size and whenever find arr[i]==arr[j] , then print arr[i]
// time comp: O(n)
//space comp: O(1)
