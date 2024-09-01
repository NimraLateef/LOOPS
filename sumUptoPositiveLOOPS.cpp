#include <iostream>
using namespace std;
void sumuptoNeg(){
	
	int sum=0;
	int number;
	do
	{
	cout<<"ENTER ANY POSITIVE NUM";
	cin>>number;
if( number>=0){
	sum=sum+number;
}
}
while( number>= 0 );
	cout<<"SUM OF YOU NUMBERS ARE:"<<sum;

}

int main (){
	sumuptoNeg();
	return 0;
}
	
	
	
	
	
