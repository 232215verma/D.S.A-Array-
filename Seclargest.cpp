#include<iostream>
using namespace std;
int main(){
		int n;
	cout<<"enter the size";
	cin>>n;
	cout<<"eneter the elemnt";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int larg=arr[0];
	int slarg=INT_MIN;
	for(int i=1;i<n;i++){
		if(arr[i]>larg){
			slarg=larg;
			larg=arr[i];
		}else if(arr[i]<larg && arr[i]>slarg){
			slarg=arr[i];
		}
	}
	cout<<"second largest"<<slarg;
	
}
