#include <iostream>

using namespace std;


void sumofnumber(int num){ // take this function as void and cout the even and odd sum; nothing to return
    
    int even=0;// even = 0
    int odd=0;
    while(num>0){
      int a =num%10;
         
        if(a%2==0){ // a%2 == 0
            even=even+a;
        }
        else{
            odd=odd+a;
        }
        num = num/10;
    }
    cout<< even<< " "<<odd;// instead do cout << even<<" "<<odd;
}

int main()
{
  int n;//dont declare anything
  cin>>n;
    sumofnumber(n);//sumofnumber(n) ;
}
