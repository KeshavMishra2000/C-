/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fac(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    
    return ans;
    
}
int main()
{
    int n,r;
    cin>>n>>r;
    
    /*
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    
     int l=1;
    for(int i=1;i<=r;i++){
        l=l*i;
    }
    
    cout<<k<<l;*/
    
    int facto_n=fac(n);
    int facto_r=fac(r);
    int facto_n_r=fac(n-r);
    
    int solution=facto_n/(facto_r*facto_n_r);
    
    cout<<solution<<endl;
  

    return 0;
}
