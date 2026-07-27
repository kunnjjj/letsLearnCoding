class Solution {
    public:
    
        int findMaxLeft(vector<int> &height,int index)
        {
            int maxLeft=0;
            for(int i=index;i >=0; i--)
            {
                if(height[i] > maxLeft)
                {
                    maxLeft=height[i];
                }
            }
    
            // for(int i=0;i<=index;i++)
            // {
            //     if(height[i] > maxLeft)
            //     {
            //         maxLeft=height[i];
            //     }
            // }
            return maxLeft;
        }
    
        int findMaxRight(vector<int> &height,int index)
        {
            int n=height.size();
            int maxRight=0;
    
            for(int i=index;i<n;i++)
            {
                if(height[i] > maxRight)
                {
                    maxRight=height[i];
                }
            }
    
            return maxRight;
        }
    
        vector<int> giveMaxLeftArray(vector<int> &height)
        {
            int n=height.size();
            vector<int> ans(n);
    
            int maxLeftSoFar=0;
    
            for(int i=0;i<n;i++)
            {
                if(height[i] > maxLeftSoFar)
                {
                    maxLeftSoFar=height[i];
                }
    
                ans[i]=maxLeftSoFar;
            }
    
            return ans;
        }
    
        int trap(vector<int>& height) {
            
            int n=height.size();
    
            int i=0, j=n-1;
    
            int maxLeft=0,maxRight=0;
    
            int totalWater=0;
    
            while(i<=j)
            {
                if(height[j] > maxRight)
                {
                    maxRight=height[j];
                }
    
                if(height[i] > maxLeft)
                {
                    maxLeft=height[i];
                }
    
    
                if(maxLeft <= maxRight)
                {
                    int waterForThisHeight=min(maxLeft,maxRight)-height[i];
                    totalWater+=waterForThisHeight;
                    i++;
                }
                else {
                    int waterForThisHeight=min(maxLeft,maxRight)-height[j];
                    totalWater+=waterForThisHeight;
                    j--;
                }
            }
            return totalWater;
        }


        // int trap(vector<int>& height) {
        
        //     int n=height.size();
    
        //     int i=0, j=n-1;
    
        //     int maxLeft=0,maxRight=0;
    
        //     int totalWater=0;
    
        //     while(i<=j)
        //     {
        //         if(height[j] > maxRight)
        //         {
        //             maxRight=height[j];
        //         }
    
        //         if(height[i] > maxLeft)
        //         {
        //             maxLeft=height[i];
        //         }
    
    
        //         if(maxLeft <= maxRight)
        //         {
        //             int waterForThisHeight=maxLeft-height[i];
        //             totalWater+=waterForThisHeight;
        //             i++;
        //         }
        //         else {
        //             int waterForThisHeight=maxRight-height[j];
        //             totalWater+=waterForThisHeight;
        //             j--;
        //         }
        //     }
        //     return totalWater;
        // }
    };



