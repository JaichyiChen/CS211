#include <iostream>
#include <cmath>
using namespace std;
bool ok(int q[], int c) {
   for (int i = 0; i < c; ++i)
      if (q[i] == q[c] || abs(q[i] - q[c]) == c - i)
         return false;
   return true;
}
int nqueens(int n){
		int c = 0, count = 0;
		int *q = new int[n];
		q[0] = 0;
		while(c>=0){   
			if (c==n-1){ 
				++count;
				--c;
			}
			else 	
			q[++c]=-1;
		while (c>=0){
			++q[c]; 
			if (q[c]==n) 
			--c;
			else if ((ok(q,c))) 
			break;
			}
		}
		delete[] q;
		return count;
}
int main(){
	int n = 8;
	for(int i=1;i<=n;++i){
		cout << " There are " << nqueens(i) << " solutions to the " << i << " " << "queens problem." << endl;
	}
	return 0;
}
