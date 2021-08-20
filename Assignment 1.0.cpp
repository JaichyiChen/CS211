

#include <iostream>
using namespace std;
int main() {
	int i=0, a, b, c;
	while(true){
		a = i*i;
		b = a%10;
		c = a/10%10;
		i++;
	if(b%2!=0&&c%2!=0){
		cout << "the perfect square is" <<  " " << a << "\n";
		cout << "the last digit is" << " " << b << "\n";
		cout << "the second to last digit is" << " " << c;
		break;
		}
	}
	/**
	My understanding of this problem is that I will need to write a program,
	which will keep on looping and incrementing the value i until there is a value i
	where when it is squared it will return a value with both its last two digits being odd.
	But I don't think such number exist after running my code, I ran into the problem of int overflow.
	**/
	
}
