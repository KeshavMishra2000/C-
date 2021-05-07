#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
     int iteration=1;
     while(iteration<n){
     	for(int i=0;i<n-iteration;i++){
     		if(arr[i+1]<arr[i]){
     			int temp = arr[i];
     			arr[i] = arr[i+1];
     			arr[i+1]= temp;
			 }
		 }iteration++;
	 }
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
		cout<<endl;
	}
	return 0;
}
