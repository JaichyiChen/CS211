#include <iostream>
using namespace std;
string add(string a, string b){
	string total;
	total = a+b;
	return total;
}
int main(){
	string x;
	string y;
	while(true){
	
	cout << "Please enter two large integer or done to terminate program" << " " << "first:";
	cin >> x;
	if (x=="done"){
		break;
	}
	while (x.size()>100){
		cout << "you entered more than 100 characters, please try again" << endl;
		cin >> x;
	}
	cout << "second:";
	cin >> y;
		while (y.size()>100){
		cout << "you entered more than 100 characters, please try again" << endl;
		cin >> y;
	}
	
	cout << add(x,y) << endl;
}
  return 0;
}
