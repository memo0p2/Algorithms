#include <iostream>
using namespace std;
void Insertion_sort(int t[],int n){
    int i,j;
    int actual; 
    cout<<endl; 
    for(i=1;i<n;i++){
        actual=t[i];
        for(j=i;j>0&&t[j-1]>actual;j--){
            t[j]=t[j-1];
        }
        t[j]=actual;
    }
}
int main(){
	int t[]={5,2,4,6,1,3,15,5,3,2,6,7,8};
	int n=sizeof(t) / sizeof(t[0]);
	Insertion_sort(t,n);
	for(int i=0;i<n;i++){
		cout<<t[i]<<" ";
	}
	return 0;
}
