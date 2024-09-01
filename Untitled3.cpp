#include <iostream>
using namespace std;

void reverseArr(int f[],int len)
{
	int strt=0;
	int end =len - 1;
	while(strt<end){
		int copy=f[strt];
		f[strt]=f[end];
		f[end]=copy;
		
		strt++;
		end--;
	}
}
int main(){
int arr[]={1,2,3,4};
int size=sizeof(arr)/sizeof(int);

reverseArr(arr,size);
cout<<"REVERSED ARRAY IS:"<<reverseArr;	
for (  int i=0;i<size;i++)
{
	cout<<arr[i];
	}	
	return 0;
}