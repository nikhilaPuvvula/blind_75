/* O(N) USING DIVISION OPERATOR */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int mul=1,m=1,count=0;
        for(int i=0;i<nums.size();i++)
        {    
            if(nums[i]==0)
              count++;
            if(nums[i]!=0)
            {
               m*=nums[i];
            }
            mul*=nums[i];
        }
        vector<int> a;
        for(int i=0;i<nums.size();i++)
        {  
            if(nums[i]!=0)
             a.push_back(mul/nums[i]);
            else
             if(count==1)
              a.push_back(m);
             else
              a.push_back(mul);
        }
        return a;
    }
};

/*O(N) WITHOUT UING DIVISION OPERATOR*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left_Product(n);
        vector<int> right_Product(n);
        left_Product[0] = 1;
        for(int i=1; i<n; i++){
            left_Product[i] = left_Product[i-1] * nums[i-1];
        }
        right_Product[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            right_Product[i] = right_Product[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){
            ans[i] = left_Product[i] * right_Product[i];
        }
        return ans;

    }
};




