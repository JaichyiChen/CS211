#include <iostream>
#include <cstdlib>
using namespace std;
bool check(int q[],int c){
		 for(int i=0;i<c;i++){
		 	if((q[i] == q[c]) || ((c-i)== q[c]-q[i]) || ((c-i)== q[i]-q[c])) return false;
					}
				return true;
	}
void print(int q[]){
	int i,j,k,l;
	static int count = 0;
	typedef char box[5][7];
	 box bb,wb,*board[8][8];
	 box bq,wq;
	//create the black and white boxes
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			wb[i][j]=' ';
			wq[i][j] = ' ';
			bb[i][j]=char(219);
			bq[i][j] = char(219);
		}
}
	//create the boxes for white and black queens
		wq[1][1] = char(219);
			   wq[2][1] = char(219);
			   wq[3][1] = char(219);
			   wq[3][2] = char(219);
			   wq[3][3] = char(219);
			   wq[3][4] = char(219);
			   wq[3][5] = char(219);
			   wq[2][3] = char(219);
			   wq[1][3] = char(219);
			   wq[1][5] = char(219);
			   wq[2][5] = char(219);
			   
			   bq[1][1] = ' ';
			   bq[2][1] = ' ';
			   bq[3][1] = ' ';
			   bq[3][2] = ' ';
			   bq[3][3] = ' ';
			   bq[3][4] = ' ';
			   bq[3][5] = ' ';
			   bq[2][3] = ' ';
			   bq[1][3] = ' ';
			   bq[1][5] = ' ';
			   bq[2][5] = ' ';
	//fill board with pointers to bb and wb in alternate positions
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
             if((i+j)%2==0)
				board[i][j] = &wb;
             else 
                board[i][j] = &bb;  
            }
        }
	//replacing the addresses with the appropriate queens		
		for(i = 0; i < 8; i++)  
			{
				if((q[i] + i) % 2 == 0)
					board[i][q[i]] = &wq;
				else
					board[i][q[i]] = &bq;
			} 
	cout << "solution#:" << ++count << endl;
	//upper boarder
	for(i=0;i<7*8;i++){
		cout <<'_';
	}
		cout << endl;
	//print the board
	for(i=0;i<8;i++){
		for(k=0;k<5;k++){
			cout <<" "<< char(179);
			for(j=0;j<8;j++){
				for(l=0;l<7;l++){
					cout<<(*board[i][j])[k][l];
					}
			}
			cout << char(179) << endl;
		}
}
		cout << " ";
		for(i=0;i<7*8;i++){
			cout << char(196);
		}
			cout << endl;
}
int main (){
		int c = 0; // Where you begin in the first column 
		int q[8] = {}; // Initialize the array to 0
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

