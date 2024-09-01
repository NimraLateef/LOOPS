#include<iostream>
using namespace std;

bool isPerfect( int num ){
	
	if(num<=0)
	return false;
	
	int sum =0;
	for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {  
            sum =sum + i;  
        }
    }
    return sum==num;
}

int main ()
{
	int number=0;
	cout<<"ENTER A NUMBER";
	cin>>number;
	if( isPerfect(number)){
		
		cout<<"NUMBER IS PERFECT";
	}
	else{
		cout<<"NOT PERFECT";
	}
	
	return 0;
}