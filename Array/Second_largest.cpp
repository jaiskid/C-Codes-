#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	int largest=arr[0];
	int second_largest=arr[1];
	for(int i=0;i<n;i++){
		if(largest<arr[i]){
			largest=arr[i];
		}
	}
	for(int i=0;i<n;i++){
	if(arr[i]!=largest){
		if(second_largest<arr[i]){
			second_largest=arr[i];
		}
	}

	}
	cout<<largest<<endl;
	cout<<second_largest<<" ";
	
}