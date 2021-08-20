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
/**
	I have a general understanding of what the question is asking for, 
	what I think is that the program will ask the user to enter a string of numbers and we need to add
	those numbers up as if they were integers but in terms of string. Also if the user enters a string longer than 100 characters
	the program will ask the user try again, if the user is done using the program all they have to do is enter "done" to stop
	the program. My code obviously is doing what the question is asking for as it's not adding the strings in terms of int, instead it's just adding it as combing 
	the two strings. I know that I have to create 2 new integers, one being the sum of the single string and the other being the carry. While using a loop
	I would adding each individual of the string while having a carry. But I can't seem to figure out how I'm suppose to write the code.
**/
