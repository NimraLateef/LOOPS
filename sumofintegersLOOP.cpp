#include<iostream>
using namespace std;
int main (){
int num;
cout<<"ENTER A +ve NUMBER";
cin>>num;

if( num<0 ){
	cout<<endl;
}

    int sum = 0;
    for (int n = num; n > 0; n /= 10) {
        sum += n % 10; 
    }

cout<<"SUM OF DIGITS IS:"<<sum;
	return 0;
}