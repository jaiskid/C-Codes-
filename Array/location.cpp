#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int num;
	cin>>num;
	int pos;
	cin>>pos;
	for(int i=n-1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=num;
	n=n+1;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}