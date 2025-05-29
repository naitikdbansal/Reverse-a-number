#include <iostream>
#include <cmath>
using namespace std;

int main(){
int a;
int b;
int i;
int inverseRESULT=0;

cout<<"Enter your number : ";
cin>>i;



for( i ; (a=i%10)!=0 ; (i=b)){

b = i/10;
//THE 
inverseRESULT = inverseRESULT*10 + a;

}


cout<<"Number is : "<<inverseRESULT<<endl;

return 0;

}