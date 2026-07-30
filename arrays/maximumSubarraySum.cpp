// Problem: https://leetcode.com/problems/maximum-subarray/

int inf=1e5 ; // LLONG_MIN

// INT_MIN ~ -2*10^9
// INT_MAX ~ +2*10^9

// [-10^12]

class Solution {
public:

    int maxSubArray(vector<int>& A) {
        int maxSum= -1 * inf;

        int n=A.size();

        // vector<int> bestSum(n);

        int prevBestSum=-1 * inf;

        for(int i=0;i<n;i++)
        {
            // bestSum[i]=max((i-1>=0?bestSum[i-1]:-1*inf) + A[i],A[i]); // for i=0, prev wala sum bohot kharab tha

            // bestSum[i]=max((i-1>=0?bestSum[i-1]:0) + A[i],A[i]); // for i=0, prev wala sum bohot kharab tha


            prevBestSum=max(
                prevBestSum + A[i], // either continue in previous best
                A[i] // start a new sub array
            );

            // bestSum[i]

            maxSum=max(maxSum,prevBestSum);
            
            // if(bestSum[i] > maxSum)
            // {
            //     maxSum=bestSum[i];
            // }
        }

        return maxSum;

        // vector<int> prefixSum(n);

        // for(int i=0;i<n;i++)
        // {
        //     prefixSum[i]=(i-1>=0 ? prefixSum[i-1]:0) + A[i]; 
        // }

        // for(int startIndex=0;startIndex < n;startIndex++) // N 
        // {
        //     for(int endIndex=startIndex;endIndex < n;endIndex++) // N
        //     {
        //         // int currentSubarraySum=0;
        //         // for(int i=startIndex; i<=endIndex;i++)
        //         // {
        //         //     currentSubarraySum+=nums[i];
        //         // }

        //         // Ques: Can I make sum 
        //         // nums[startIndex] + nums[startIndex+1] + ... + nums[endIndex]

        //         // yaha par


        //         int currentSubarraySum=prefixSum[endIndex]-(startIndex-1>=0 ?prefixSum[startIndex-1] : 0);

        //         if(currentSubarraySum > maxSum)
        //         {
        //             maxSum=currentSubarraySum;
        //         }
        //     }
        // }

        // //

        // // [-10^4,-10^4,-10^4]
        // return maxSum;
    }
};


// O(N^3) Time
// O(N^2) Time, O(N) Space
// HW: O(N^2) Time, O(1) Space
// O(N) Time, O(N) Space - 5 min
// O(N) Time