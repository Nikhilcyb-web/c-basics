#include <iostream>
using namespace std;
int main(){
  int n= 3;
   char ch = 'A';/* for number printing we declare variable num  assign a value 1 */
  
  for(int i=0;i<n;i++){
   
    for(int j=0;j<n;j++){
      cout<<ch<<" ";//print num
      ch = ch+1;//inc num by 1 

    }
    cout<<endl;
  }
  return 0;
}

/*
#output
A B C
D E F
G H I
*/