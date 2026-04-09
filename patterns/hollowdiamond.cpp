#include <iostream>
using namespace std;
int main(){
  int n= 4;
  //for upper pyramid
  for(int i=0;i<n;i++){ // outer loop print lines
    for(int j=0;j<n-i-1;j++){//print left hand  side space
      cout<<" ";
    }
    cout<<"*";
    if(i != 0){
      for(int j=0;j<2*i-1;j++){
        cout<<" ";//print middle space
      }
      cout<<"*";
    }
    cout<<endl;
  }
  //for lower pyramid
  for(int i=0;i<n-1;i++){//outer loop
    for(int j= 0;j<i+1;j++){
      cout<< " ";//print left hand side space
    }
    cout<<"*";
    if(i != n-2){
      for(int j=0;j<2*(n-i)-5;j++){
        cout<<" ";//print middle space
      }
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
/*
#output
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/