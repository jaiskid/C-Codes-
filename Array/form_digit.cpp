#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int digit[1000];
	for(int i=0;i<n;i++)
	{
		cin>>digit[i];
	}
	int number=0;
	for(int i=0;i<n;i++){
		number+=digit[i]*pow(10,i);
	}
	cout<<number<<" ";
}