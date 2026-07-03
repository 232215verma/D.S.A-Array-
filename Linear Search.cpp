#include<iostream>
using namespace std;
int linearser(int arr[],int target,int n){
	
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			return arr[i];
		}
	}
	return -1;
}
int main(){
	
	int n;
	cout<<"enter the size ";
	cin>>n;
	cout<<"enter the elment";
	
	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
			int target;
	cout<<"enter target";
	cin>>target;
	int res=linearser(arr,target,n);
	cout<<res;
}