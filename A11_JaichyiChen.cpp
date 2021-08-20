#include <iostream>
#include <cmath>
using namespace std;

class Rat{
private:
   int n;
   int d;
   
public:
   // constructors
   
   // default constructor
   Rat(){
      n=0;
      d=1;
   }
   
   // 2 parameter constructor
   Rat(int i, int j){
      n=i;
      d=j;
   }
   
   // conversion constructor
   Rat(int i){
      n=i;
      d=1;
   }
   
   //accessor functions 
   int getN(){ return n;}
   int getD(){ return d;}
   
   void setN(int i){ n=i;}
   void setD(int i){ d=i;}
   
   //arithmetic operators
   Rat operator+(Rat r){
      Rat t;
      t.n = n*r.d + d*r.n;
      t.d = d*r.d;
      t.simplify();
      return t;
   }
   
   Rat operator-(Rat r){
      Rat t;
      t.n = n*r.d - d*r.n;
      t.d = d*r.d;
      t.simplify();
      return t;
   }
   
   Rat operator*(Rat r){
      Rat t;
      t.n = n*r.n;
      t.d = d*r.d;
      t.simplify();
      return t;
   }
   
   Rat operator/(Rat r){
      Rat t;
      t.n = n*r.d;
      t.d = d*r.n;
      t.simplify();
      return t;
   }
   
   // simplifying the mixnumber
   void simplify(){
      int gcd_ = gcd(n, d);
      n /= gcd_;
      d /= gcd_;
      if (d < 0) { 
         d = -d;
         n = -n;
      }
   }
   
   // calculate the GCD using Euclid's algorithm
   int gcd(int n, int d) 
{ 	if (n == 0) 
        return d; 
    return gcd(d % n, n); 
} 

   // i/o operators
   friend ostream& operator<<(ostream& os, Rat r);
   friend istream& operator>>(istream& is, Rat& r);
}; 

ostream& operator<<(ostream& os, Rat r){
   r.simplify();
   if (abs(r.n) >= r.d || r.n == 0)
      os << r.n/r.d << " ";
   if (r.d != 1)
      os << (r.n/r.d <= -1 ? abs(r.n%r.d) : r.n%r.d) << "/" << r.d;
   return os;
}

istream& operator>>(istream& is, Rat& r){
   is >> r.n >> r.d;
   r.simplify();
   return is;
}

int main() {
	int n1,n2,d1,d2;
   cout << "Enter the fraction to be calculated in form of Numerator first then Denominator and the Numerator has to be greater than the Denominator" << endl;
   cout << "An Example would be 5/2 and 4/3" << endl;
   a:
   cout << endl;
   cout << "Numberator1:"; cin >> n1;
   cout << endl;
   cout << "Denominator1:"; cin >> d1;
   cout << endl;
   if(n1<d1){
    cout << "please try again, Numerator is not greater than Denominator" << endl;
    goto a; 
}
   b:
   cout << endl;
   cout << "Numerator2:"; cin >> n2;
   cout << endl;
   cout << "Denominator2:"; cin >> d2;
   cout << endl;
   if(n2<d2){
    cout << "please try again, Numerator is not greater than Denominator" << endl;
    goto b; 
}
   Rat r1(n1, d1), r2(n2, d2);
   
   cout << "r1: " << r1 << endl;
   cout << "r2: " << r2 << endl;
   cout << "r1 + r2: " << r1 + r2 << endl;
   cout << "r1 - r2: " << r1 - r2 << endl;
   cout << "r1 * r2: " << r1 * r2 << endl;
   cout << "r1 / r2: " << r1 / r2 << endl;
   cout << endl;
   
   r1 = r2;
   r2 = r1 * r2;
   
   cout << "r1: " << r1 << endl;
   cout << "r2: " << r2 << endl;
   cout << "r1 + r2: " << r1 + r2 << endl;
   cout << "r1 - r2: " << r1 - r2 << endl;
   cout << "r1 * r2: " << r1 * r2 << endl;
   cout << "r1 / r2: " << r1 / r2 << endl;
   cout << endl;
   
   r1 = r2 + r1 * r2 / r1;
   r2 = r2 + r1 * r2 / r1;
   
   cout << "r1: " << r1 << endl;
   cout << "r2: " << r2 << endl;
   cout << "r1 + r2: " << r1 + r2 << endl;
   cout << "r1 - r2: " << r1 - r2 << endl;
   cout << "r1 * r2: " << r1 * r2 << endl;
   cout << "r1 / r2: " << r1 / r2 << endl;
   
   return 0;
}
