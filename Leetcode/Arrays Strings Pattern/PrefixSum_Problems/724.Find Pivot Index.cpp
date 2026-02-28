class Solution {
public:
//revision check for int and long (test cases length)
    vector<int>prefix;  
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int resultIndex = -1;
        //create prefixsum vector->Step1
        prefix.assign(n+1,0);
        for(int i = 0; i < n; i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
        //calculation of left and right sum through rangesum function using prefixsum
        for(int i =0; i<n; i++){
            int leftSum = rangeSum(0,i-1);
            int rightSum = rangeSum(i+1,n-1);
            if(leftSum == rightSum){
                resultIndex = i;
                break;
            }
        }
        return resultIndex;
    }
    int rangeSum(int left, int right){
        return (int) prefix[right+1] - prefix[left];
    }
};