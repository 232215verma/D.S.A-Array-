#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int  targetsum){
	vector<int> ans;
	int n=nums.size();
	int ps;
	int i=0;
	int j=n-1;
	
	while(i<j){
		ps=nums[i]+nums[j];
		if(ps>targetsum){
			j--;
		}else if(ps<targetsum){
			i++;
		}else if(ps==targetsum){
			ans.push_back(i);
			ans.push_back(j);
			return ans;
		}
	}
}
int main(){
	vector<int> nums={2,7,11,15};
	int targetsum=22;
	vector<int> res=pairsum(nums,targetsum);
	cout<<res[0]<<" "<<res[1]<<endl;
}
