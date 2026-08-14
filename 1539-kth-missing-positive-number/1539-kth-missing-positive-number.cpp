class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //brute force
        /*int n= arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<=k){
                k++;
            }
            else break;
        }
        return k;*/

        //Optimal (Binary Search)
        int n=arr.size();
        int low=0, high=n-1;
        int missing=0;
        while(low<=high){
            int mid= (low+high)/2;
            missing= arr[mid]-(mid+1);
            if(missing<k) low=mid+1;
            else high= mid-1;
        }
        return low + k;
    }
};