#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array=";
	cin>>n;
	cout<<endl;
	cout<<"enter the elements of array=";
	int arr[n];
	int smallest;// = INT_MAX;//plus infinity
	int largest=INT_MIN; //Minu infinity
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++ ){
	smallest =min(arr[i],smallest);
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"Smallest Element in array="<<smallest<<endl;
	cout<<"Largest Element in array="<<largest<<endl;
}