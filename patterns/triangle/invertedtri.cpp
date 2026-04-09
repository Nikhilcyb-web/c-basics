#include <iostream>
using namespace std;
int main(){
  int  n = 4;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i+1; j++){//for printing i space
      cout<<" ";
     }
    for (int j = 0; j<n-i;j++){//for printing number formula is n-i
      cout<<(i+1);
    }
    cout<<endl;
    }
  return 0;
}   
/*
#output
 1111 
  222 
   33 
    4 
*/ 