#include <stdio.h>
 void print(int n)
{
  cout<<n<<"\n";
print(n-1);
}
int main() {
 
cout<<print(5)<<endl;
}