#include <iostream>
using namespace std;
int main() {
  int  n = 4;
  char ch = 'A';
  char alpha;
  for (int i = 0; i < n; i++){
    
    for (int j = 0; j < i+1; j++){
      alpha = ch +i;
      cout<<alpha <<" ";  
    }
    cout<<endl; 
  }
  return 0;
  
}
/*
#output
A
B B
C C C
D D D D


*/