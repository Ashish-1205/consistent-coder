#include<iostream>
using namespace std;
 int Bsearch(int A[], int S, int L, int x){
//  if(L == 1) return A[S] == x;
  if(L == 1) return S;
  int H = L/2;
  if(x < A[S+H]) 
    return Bsearch(A, S,   H,   x);
  else           
    return Bsearch(A, S+H, L-H, x);
} 

 int main()
 {
 	int A[5];
 	cin>>A[0]>>A[1]>>A[2]>>A[3]>>A[4];
   cout<<A[Bsearch(A,0,5,3)];
 return 0;  
 }
