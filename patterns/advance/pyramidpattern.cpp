#include <iostream>
using namespace std;
int main(){
  int n= 4;
  for(int i=0;i<n;i++){

    for(int j=0;j<n-i-1;j++){//print the spaces 
      cout<<" ";
    }
    for(int j=1;j<=i+1;j++){//print left hand side number 
      cout<<j;

    }
    for(int j=i;j>=1;j--){//print right hand side number
      cout<<j;
    }
    cout<<endl;
  }
  return 0;
}
/*
#output
   1
  121
 12321
1234321
*/