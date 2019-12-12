class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> g; 
         
        for(int i = 0; i< nums.size() - 1; i++){
            for( int x = i+1; x<nums.size(); x++){
            if( nums[i] + nums[x] == target)
                g.push_back(x); 
                g.push_back(i); 
              return g; 
                }
             
        }
        return g;
        
    }
    
   
};