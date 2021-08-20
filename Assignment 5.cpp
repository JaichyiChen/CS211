#include <iostream>
using namespace std;
	int count = 0;
	int c = 0; // Where you begin in the first column 
	int q[8] = {}; // Initialize the array to 0
	bool check(int q[],int c){
		 for(int i=0;i<c;i++){
		 	if((q[i] == q[c]) || ((c-i)== q[c]-q[i]) || ((c-i)== q[i]-q[c])) return false;
					}
				return true;
	}
	void print (int q[]){
		cout << "Solution #" << ++count << ":";
		for(int i=0;i<8;i++){
			cout << q[i] << " ";
		}
		cout <<endl;
	}
	int main(){
		while(c>=0){    // End the back if you're backtracking from first column
			if (c==7){ //If in last column, print and backtrack
				print(q);
				--c;
			}
			else 	//
			q[++c]=-1;
		while (c>=0){
			++q[c]; //goto nextrow
			if (q[c]==8) // If reached the end of column, backtrack
			--c;
			else if ((check(q,c))) // row and column test, if ok break
			break;
			}
		}
		return 0;
	}

