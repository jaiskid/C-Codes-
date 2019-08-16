#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min=arr[0];
	int pos=0;
	for(int i=0;i<n;i++){
		if(min>=arr[i]){
			min=arr[i];
			pos=i;
		}
	}
	cout<<min<<endl;
	cout<<pos<<" ";
}