#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]&&i!=j){
				cout<<"i="<<i<<endl;
				cout<<"j="<<j<<endl;
			}
			
		}
	}
}