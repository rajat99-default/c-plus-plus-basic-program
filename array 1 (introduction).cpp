#include <iostream>
using namespace std;
int main() {
  // std::cout << "Hello World!\n";

  int a[]={2,3,4,5,6,7};
  int n=sizeof(a)/sizeof(a[1]);
  cout<<"length of array is : "<<n<<"\n";
  for(int i=0 ;i<=n-1 ;i++)
    {
      cout<<a[i]<<"\n";
    }
}
