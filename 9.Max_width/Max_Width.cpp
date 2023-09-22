/*O(N^2)-BRUTE FORCE APPROACH*/

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
       int ma = INT_MIN;
       for(int i = 0 ;i<height.size();i++)
       {
           for(int j = i+1;j<height.size();j++)
           {
               int k = min(height[i],height[j]);
               int a = k*(j-i);
               ma = max(a,ma);
           }
       } 
       return ma;
    }
};


/* TWO POINTER APPROACH */

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
       int ma = INT_MIN;
       int left = 0;
       int right = height.size()-1;
       while(left<=right)
       {
          int m = min(height[left],height[right]);
          int a = m*(right-left);
          ma = max(a,ma);
          if(height[left]<=height[right])
            left++;
          else
            right--;
       }
       return ma;
    }
};