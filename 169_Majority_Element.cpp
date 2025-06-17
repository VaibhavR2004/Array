class Solution {
public:
    // int majorityElement(vector<int>& nums) {
    //     int n = nums.size();
    //     int max_count = (n/2)+1;
    //     unordered_map<int,int> num_map;
    //     for (int i =0; i<n;i++ ){
    //         num_map[nums[i]]++;
    //         if(num_map[nums[i]]>n/2){
    //             return(nums[i]);
    //         }
           
    //     }
    //     return{};
    // }
    // this Approach have the space complexity of O(n) which is not an optimal approach 
    //Better approach can be given by Boyer Moore Voting Algorithm 

    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        for(int i : nums){
            if(count==0){
                candidate = i;
            }
            count += (i == candidate)? 1:-1;
        }
        return candidate;
    }
};
