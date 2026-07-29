//leetcode lec 20,21
#include<iostream>
#include<vector>
using namespace std;

/*
//reverse array after m position
void ReverseArray(vector<int>&arr, int m){
    int s=m+1; int e= arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

//merge sorted arrays
//3 pointer approach
void merge(vector<int>nums1, int m, vector<int>nums2, int n){
    int i= m-1; int j= n-1; int k= m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]= nums1[i];
            i--; k--;
        }
        else{
            nums1[k]= nums2[j];
            j--; k--;
        }

    }
    while(j>=0){
        nums1[k]=nums2[j];
        j--;
        k--;
    }
}

// sir's solution ie paste in a 3rd array then nums1= ans array
void merge(vector<int>nums1, int m, vector<int>nums2, int n){
    vector<int>ans;
    int i=0; int j=0;
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else{
            ans.push_back(nums2[j]);
            j++;
        }
    }
    while(i < m){
        ans.push_back(nums1[i]);
        i++;
    }

    while(j < n){
        ans.push_back(nums2[j]);
        j++;
    }
    for(int k = 0; k < m+n; k++){
    nums1[k] = ans[k];
}
}


//move zeroes to the end
void moveZeroes(vector<int>&nums){
    int i=0;
    for(int j=0; j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
        }
    }
}

//second soln
void moveZeroes(vector<int>&nums){
    int i=0; int j=0; 
    while(i<nums.size()){
        if(nums[i]==0){
            i++;
        }
        else{
            nums[j]=nums[i];
            i++;j++;
        }
    }
    while(j<nums.size()){
        nums[j]=0;
        j++;
    }
}


//rotate array by k
void rotate(vector<int>& nums, int k){
    int n= nums.size();
    vector<int>temp(n);
    for(int i=0; i<n; i++){
        temp[(i+k)%n]= nums[i];
    }
    nums= temp;
}


//check whether array sorted & rotated
bool check(vector<int>&nums){
    int count=0; int n= nums.size();
    for(int i=1; i<n;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[n-1]>nums[0]){
        count++;
    }

    return count<=1;
}

//or 
bool check(vector<int>&nums){
    int count=0; int n= nums.size();
    for(int i=1; i<n;i++){
        if(nums[i]>nums[(i+1)%n]){
            count++;
        }
    }
    return count<=1;
}

// sum of 2 arrays
//my soln, ok hai but bt h bahot, ok only for small values nhi toh range exceeds easily

#include<math.h>
#include<algorithm>

vector<int>ArraySum(vector<int>&a, int n, vector<int>&b, int m){
    vector<int>ans;
     int sumA=0; int sumB=0;
    for(int i=0; i<n; i++){
        int temp= a[i]* pow(10,(n-i-1));
        sumA+=temp;
    }
    for(int i=0; i<m; i++){
        int temp= b[i]* pow(10,(m-i-1));
        sumB+=temp;
    }
    int SumAB= sumA + sumB;
    int q= SumAB;
    while(q!=0){
        ans.push_back(q%10);
        q=q/10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

//carry solution
vector<int>ArraySum(vector<int>a, int n, vector<int>b, int m){
    int i=n-1; int j= m-1; int carry=0;
    while(i>=0 && j>=0){
        int val1= a[i];
        int val2= b[j];
        int sum= val1 + val2 + carry;
        carry= sum/10;
        sum= sum%10;
        ans.push_back(sum);
        i--; j--;
    }
    while(i>=0){
        int sum= a[i] + carry ;
        carry= sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum= b[j] + carry ;
        carry= sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum= carry;
        carry= sum/10;
        sum= sum%10;
        ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
 */