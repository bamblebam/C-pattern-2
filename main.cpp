#include <iostream>
using namespace std;
 
int main() {
int n,i,j;
cin>>n;
int k=n;
for(i=0;i<n;i++){
  for(j=0;j<k;j++)
    cout<<" ";
    k=k-1;
 
  for(j=0;j<=i;j++){
    cout<<"* ";
  }
  cout<<"\n";
}
}
