#include<iostream>
using namespace std;
void ReverseArr(int arr[],int sz){
	int start=0;
	int end=sz-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main(){
	int sz;
	cout<<"Enter the size of array=";
	cin>>sz;
	cout<<"Enter the elements n array=";
	int arr[sz];
	for(int i=0;i<sz;i++){
		cin>>arr[i];
	}
	ReverseArr(arr,sz);
	for(int i=0;i<sz;i++){
		cout<<arr[i];
	}
	cout<<endl;
}