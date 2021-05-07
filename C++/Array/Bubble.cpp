/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[100];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
  int s=0;
  int e=n-1;
  
  while(s<e){
  	swap(arr[s],arr[e]);
  	s++;
  	e--;
  }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
        
    }
    cout<<endl;

    return 0;
}
