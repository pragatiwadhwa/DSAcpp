//Binary Search
#include<iostream>
using namespace std;

/*int BinarySearch(int array[], int size, int key){
    int start=0; int end= size-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(array[mid]==key){
            return mid ;
        }
        else if(key>array[mid]){
            start = mid +1;
        }
        //key<array[mid]
        else{
            end= mid-1 ;
        }
        mid= start + (end-start)/2;
    }
    return -1;
}

int main(){
    cout<<"Enter the size of your array"<<endl;
    int n; cin>>n;
    cout<<"Enter the elements of your array"<<endl;
    int arr[n]; 
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<< "Enter the key you want to find"<<endl;
    int key; cin>>key;

    cout<< "Index of the found key is"<< " "<< BinarySearch(arr,n,key);
}


//Questions
//find first and last occurence
#include<vector>
int firstOcc(vector<int>&arr, int n, int k){
     int first=-1; 
    int start=0; int end= n-1; 
    int mid = start+(end-start)/2;
    while(start<=end){
    if(k==arr[mid]){
        first= mid;
        end = mid-1;
        }
 
    else if(k>arr[mid]){
        start=mid+1;
    }
    else if(k<arr[mid]){
        end= mid-1;
    }
    mid = start + (end-start)/2;
}
return first;
}
int LastOcc(vector<int>&arr, int n, int k){
  int last= -1;
    int start=0; int end= n-1; 
    int mid = start+ (end-start)/2;
while(start<=end){
    if(k==arr[mid]){
        last= mid;
        start=mid+1;
        }
 
    else if(k>arr[mid]){
        start=mid+1;
    }
    else if(k<arr[mid]){
        end= mid-1;
    }
    mid = start + (end-start)/2;
}
return last;
}
pair<int,int>firstLastOcc(vector<int>&arr, int n, int k){
    pair<int,int>p;
    p.first= firstOcc(arr,n,k);
    p.second= LastOcc(arr,n,k);
    return p;
}
int main(){
    cout<<"Enter the size of your array"<<endl;
    int n; cin>>n;
    cout<<"Enter the elements of your array"<<endl;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<< "Enter the key you want to find"<<endl;
    int key; cin>>key;
    pair<int,int> ans = firstLastOcc(arr,n,key);
    cout<< ans.first<< " "<< ans.second;
}


//Peak index in moutain array
#include<vector>
int Peak(vector<int>&arr){
    int s=0; int e= arr.size()-1;
    int mid= s + (e-s)/2;
    while(s<e){
        if( arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid= s + (e-s)/2;
    }
    return e;
}
int main(){
    cout<<"Enter the size of your array"<<endl;
    int n; cin>>n;
    cout<<"Enter the elements of your array"<<endl;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"Peak element's index in array is" << Peak(arr);
}


//pivot element in rotated array
int pivot(int arr[], int n){
    int s=0; int e= n-1; int m= s +(e-s)/2;
    while(s<e){
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e = m;
        }  
        m= s+ (e-s)/2;
  }
  return s;
}
int main(){
   int arr[9]={17,19,7,8,8,9,9,10,10};
       cout<< pivot(arr,9);
}


//look for element in rotated sorted array
#include<vector>
int pivotI(vector<int>&arr,int n){
    int s=0; int e= n-1;
    int m= s+ (e-s)/2;
    while(s<e){
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+ (e-s)/2;
    }
    return s;
}
int RotArray(vector<int>&arr, int n, int k){
    int pivot = pivotI(arr,n);
    
    if(arr[pivot]<= k && k<= arr[n-1]){
        int s=pivot ; int e= n-1; int m= s + (e-s)/2;
        while(s<=e){
            if(arr[m]==k){
                return m;
            }
            else if(arr[m]<k){
                s=m+1;
            }
            else{
                e=m-1;
            }
            m= s + (e-s)/2;
        }
        

    }

    else{
        int s=0 ; int e= pivot-1; int m= s + (e-s)/2;
        while(s<=e){
            if(arr[m]==k){
                return m;
            }
            else if(arr[m]< k){
                s=m+1;
            }
            else{
                e=m-1;
            }
            m= s + (e-s)/2;
        }
        
    }
    return -1;
}
int main(){
    cout<<"Enter the size of your array"<<endl;
    int n; cin>>n;
    cout<<"Enter the elements of your array"<<endl;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    cout<<"Enter the element you want to find"<<endl;
    int k; cin>>k;
    cout<<"Index of K is" << RotArray(arr,n,k);
}


//SQRT of x
// for only integer value 
#include<iomanip>
long long int binarySearch(int n){
    int s=0; int e=n;
   long long int m= s + (e-s)/2;
   long long int ans=-1;
    while(s<=e){
        long long int square= m*m;
        if( square == n){
            return m;
        }
        else if(square>n){
            e=m-1;
        }
        else{
            ans=m;
            s=m+1;
        }
        m= s+ (e-s)/2;
}
return ans;
}
int Isqrt(int x){
    return binarySearch(x);

}

//for float value
double sqrt(int n, int count, int m){
    m= binarySearch(n);
    double factor=1; double ans= m;
    for(int i=0; i<count;i++){
        factor= factor/10;
        for(double j= ans;j*j<n; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    cout<< "Enter the value of x"<<endl;
    int x; cin>>x;
    cout<< "Square root of x is:"<< " "<< Isqrt(x);
    cout<<endl;
    int Ians= Isqrt(x);
    cout<< "Square root of x upto how many decimal places:"<<endl;
    int count; cin>> count;
    cout<< "Square root of x upto"<< " "<< count<<" "<< "decimal places:"<< " ";
    cout<<fixed<< setprecision(count)<< sqrt(x,count, Ians);
}

//hard questions 
//Book Allocation Problem*******
//not writing an int main function for this, not necessary
bool isPossible(vector<int>arr, int n, int m, int mid){
    int studentCount=1; int pageSum=0;
    for(int i-0; i<n;i++){
        if(pageSum + arr[i]<=mid){
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            } 
            pageSum= arr[i];
        }
    }
    return true;
}

int BookAllocation(vector<int>arr, int n, int m){
    int s= 0; int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int e= sum; int mid= s+ (e-s)/2;
    int ans= -1;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e= mid-1;
        }
        else{
            s= mid+1;
        }
        mid= s+ (e-s)/2;

    }
    return ans;
}


//Painter's Partition Problem
#include<vector>
bool isPossible(vector<int>&boards, int k, int mid){
    int painterCount=1;
    int boardPainted=0;
    for(int i=0; i< boards.size();i++){
        if(boardPainted+ boards[i]<=mid){
            boardPainted += boards[i];
        }
        else{
            painterCount++;
            if(painterCount>k || boards[i]>mid){
                return false;
            }      
            boardPainted=boards[i];
          }
    }
    return true;
}
int MinTime(vector<int> &boards,int k){
    int s=0; int sum=0; 
    for(int i=0; i<boards.size();i++){
        sum+=boards[i];
    }
    int e= sum; 
    int ans=-1;
    while(s<=e){
        int mid= s+ (e-s)/2;  //i have a hard time wrapping this around my head, gemini doubt
        if(isPossible(boards,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return ans;
}


//Aggressive cows
#include<vectors>
#include<algorithm>
bool isPossible(vector<int>&stalls, int k, int mid){
    int cowCount=1; 
    int lastPosition= stalls[0];
    for(int i=0; i<stalls.size();i++){
        if(stalls[i]- lastPosition >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPosition= stalls[i];
        }
    }
    return false;

}

int ladakiCows(vector<int>& stalls, int k){
    sort(stalls.begin(), stalls.end());
    int s=0; int maxi=-1;
    for(int i=0; i<stalls.size();i++){
        maxi= max(stalls[i],maxi);
    }
    int e = maxi; int ans=-1;
    while(s<=e){
        int mid= s+ (e-s)/2;
        if(isPossible(stalls,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
*/