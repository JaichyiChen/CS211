#include <iostream>
using namespace std;

int main() {
	int q[8] = {0}, r, c = 0, count = 1;
		q[0] = 0;
	next_Col: 
		c++;
		if (c == 8) goto print;
		q[c] = -1;
	next_Row: 
		q[c]++;
		if (q[c]== 8) goto back_Track;
		for (int i = 0; i < c; i++) // row and col test
		if ((q[i] == q[c]) || ((c-i)== q[c]-q[i]) || ((c-i)== q[i]-q[c])) goto next_Row;
		goto next_Col;
	back_Track:
		/** goes back to the previous column
		*/
		c--;
		if (c == -1) return 0;
		goto next_Row;
	print:
		cout << "Solution #"<< count << endl;
		for(int c = 0; c < 8; c++){
			for(int r =0; r < 8; r++ ){
				if (q[c]==r)
					cout << "1";
				else {
					cout << "0";
			}
		}
		cout << endl;
	}
	count++;
	goto back_Track;
}
