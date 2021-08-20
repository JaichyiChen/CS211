#include <iostream>
using namespace std;

bool ok (int q[], int c){
	static int mp[3][3]={0,2,1,
				         0,2,1,
				         1,2,0};
	static int wp[3][3]={2,1,0,
                         0,1,2,
                         2,0,1};
	for(int i=0;i<c;++i){
	
	if(q[i]==q[c]) return false; // if the women is already married to a men
	if(mp[i][q[c]]<mp[i][q[i]] // check if any other men like the women(c) that just got married compared to how much they like their wife
	&& wp[q[c]][i]< wp[q[c]][c]) return false; // check how much women(c) like other men compared to how much they like their husband
	if(mp[c][q[i]]<mp[c][q[c]] // check how much the current man(c) married like other women compared to their wife
	&& wp[q[i]][c]< wp[q[i]][i]) return false;// check how much other women like man c compared to how much each women like their husband
	}
	return true;
}
void backtrack (int &c){
	c--;
	if(c<0) exit(0);
}
void print(int q[]){
	int count = 1;
	cout << "Solution #" << count++ << endl << "man" << " " << "woman" <<endl;
	for(int i=0;i<3;++i){
		cout << i << "     " << q[i] << endl;
	}
}
int main(){
	 int q[3] = {};
	 int c = 0;
	while(c>=0){
	if (c==2){ // print when reached bottom of col and backtrack
		print(q);
		backtrack(c);
	}
	else 
		q[++c]=-1; //next row
	while(c>=0){
		++q[c];   //next col
		if(q[c]==3)	//backtrack if reached bottom of row
		backtrack(c);
		else if(ok(q,c)) // break if pairing does not work out;
		break;
	
	}
}
	return 0;
}

