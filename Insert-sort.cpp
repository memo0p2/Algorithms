#include<iostream>
using namespace std;
#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros)))
int main(){
	int a[]={5,2,4,6,1,3,5,3,2,6,7,8};
	int key;
	int i;
	for(int j=1;j<GetSize(a);j++){
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]>key){
			a[i+1]=a[i];
			i=i-1;
			cout<<i<<endl;
		}
		a[i+1]=key;
	}
	for(int j=0;j<GetSize(a);j++)
		cout<<a[j];
}
	
