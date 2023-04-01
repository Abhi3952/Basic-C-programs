#include <iostream>
using namespace std;

int main(){
	int a[10]={1,2,3,4,5};
	int pos=2;
	int element=6;
	int i;
	for(int i=5;i>pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos]=element;
	cout<<"array is";
	for(int i=0;i<=5;i++){
		cout<<endl<<a[i];
	}
		return 0;
	
}
     
	                             
