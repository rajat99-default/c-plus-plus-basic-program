#include <iostream>
using namespace std;

int main() {
  int a,b=2,c,f=0;
  cout<<"enter your number to find it's prime or not : ";
  cin>>a;
    do
      {
        if(a%b==0)
        {
          f=1;
            break;
        }
        b++;
      }
    while(a<b);
      if(f==1)
      {
        cout<<"not prime";
          
      }
      else{
        cout<<"yes prime";
      }
  
}
