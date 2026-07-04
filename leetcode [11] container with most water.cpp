class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0; //ans
        int leftptr=0;
        int rightptr=height.size()-1;
        while(leftptr<rightptr){
            int w=rightptr-leftptr;
            int ht=min(height[leftptr],height[rightptr]);
            int currwater=w*ht;
            maxwater=max(maxwater,currwater);
            height[leftptr]<height[rightptr]? leftptr++ : rightptr--;
        }
          return maxwater;
        
    }
    
};
