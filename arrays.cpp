//array
#include<iostream>
using namespace std;

/*int main(){
//declare
    int kishu[4];

    //accessing 
    cout<< "Value at 1st index is:" << kishu[1]<<endl;

    //initialising an array
    int lovee[10]={1,2,3,5,6,7,9,10};
    cout<<"Everything is fineeeeeeeeeeeeeee";

int praggu[9]={1,2,3,4,5};
int n=9;
for(int i=0; i<n;i++){
    cout<< praggu[i]<< " ";
}
}

//functions in array
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
    int praggu[9]={1,2,3,4,5};
    printArray(praggu,5);

    int kishu[4];
    printArray(kishu,4);
}


//question
#include<climits>
int MaxMinarr(int array[],int size){
    int max= INT_MIN; int min= INT_MAX;
    for(int i=0; i<size;i++){
        if(array[i]> max){
            max= array[i];
        }
    }
    cout<< "Max value in array is:"<< max<<endl;

    for(int i=0; i<size;i++){
        if(array[i]< min){
            min= array[i];
        }
    }
    cout<< "Min value in array is:"<< min <<endl;
}
int main(){
    cout<<"Enter the size of your array:"<<endl;
    int size; cin>>size;
    int num[1000]; 
    cout<<"Enter the elements of array:"<<endl;
    for(int i =0; i<size; i++){
        cin>>num[i];
    }
    MaxMinarr(num,size);
}

//sum of elements in an array question

void SumArray(int array[], int n){
    int sum=0;
    for(int i=0; i<n;i++){
        cin>> array[i];
    }

    for(int i=0; i<n;i++){
        sum= sum+ array[i];
    }

    cout<<"Sum of elements is"<< " " << sum<<endl;
}

int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;
    int num[1000]; SumArray(num,n);
}

//linear search

bool SearchArray(int array[], int size, int key){
    for(int i=0; i<size; i++){
        cin>> array[i];
    } 

    for(int i=0; i<size;i++){
        if(array[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n; 
    cout<< "Enter the element to find"<<endl; int key; cin>> key;
    cout<< "Enter the elements of your array" <<endl;

    int num[1000]; 
    bool found= SearchArray(num,n,key);
    if(found){
        cout<< "Element found"<< endl;
    }
    else{
        cout<< "Element not found"<<endl;
    }
}

//reverse an array

int reverse(int array[],int size){
    int revarr[size];
    for(int i=0; i<size;i++){
        revarr[i]=array[size-1-i];
    }
    for(int i=0; i<size;i++){
        cout<< revarr[i]<< " ";
    }

}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    cout<< "reversal of array is:"<<endl;
    reverse(arr,n);
}

//alt soln
int revArr(int array[], int size){
    for(int i=0;i<(size/2);i++){
        int temp= array[i];
        array[i]= array[size-i-1];
        array[size-i-1]= temp;
    }
    for(int i=0; i<size;i++){
        cout<< array[i]<< " ";
    }
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    cout<< "reversal of array is:"<<endl;
    revArr(arr,n);
}
// can also use swap and do by that method


//swap alt elements (can do w/o start)
void swapAlt(int array[], int size){
    int start=0;
    for(int i=0;i<size/2;i++){
        swap(array[start],array[start+1]);
        start=start+2;
    }
    for(int i=0; i<size;i++){
        cout<< array[i]<< " ";
    }
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    cout<< "swapping of alt elements array is:"<<endl;
    swapAlt(arr,n); }

    //w/o start
    void swapAlt(int array[], int size){
    for(int i=0;i<size-1;i+=2){
        swap(array[i],array[i+1]);
    }
    for(int i=0; i<size;i++){
        cout<< array[i]<< " ";
    }
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    cout<< "swapping of alt elements array is:"<<endl;
    swapAlt(arr,n); }
    


    //leetcode array session
    //unique number ******* IMP

    int unique(int array[],int size){ 
        int ans=0;
        for(int i=0; i<size;i++){
            ans= ans^array[i];
        }
        cout<< "Unique element is :" << ans <<endl; 
    }
    int main(){
        cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    unique(arr,n);
    }

    //unique no of occurences *i dont understand properly*- do w hashmap later on
    bool UniqueOcc(int array[],int size){
        int frequency[1000]={0};
        for(int i=0; i<size; i++){
            frequency[array[i]] ++;
        }

        for(int i=0; i<1000;i++){
           // if(frequency[i]==0){
            //    continue;
           // }

            for(int j=i+1;j<1000; j++){
                if(frequency[i]==frequency [j] && frequency[i]!=0){
                    return false;
                }
            }
        }
        return true;
    }

    int main(){
        cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    bool ans= UniqueOcc(arr,n);
    cout<< boolalpha<< ans;
}
//find duplicates brutforce

int duplicate(int array[],int size){
    int freq[1000]={0};
    for(int i=0;i<size;i++){
        freq[array[i]]++;
    }
    for(int i=0; i<size; i++){
        if (freq[i]>1 && freq[i]!=0){
            return array[i];
        }
    }
}
int main(){
        cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 

    cout<< "duplicate element is" << " "<< duplicate(arr,n);
}

//xor soln

int findDuplicate(int array[], int size){
    int ans=0;
    for(int i=0; i<size;i++){
        ans= ans^array[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  int arr[10000];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 

    cout<< "duplicate element is" << " "<< findDuplicate(arr,n);

}

//duplicate elements************

#include<vector>
void duplicates(vector<int>& arr){
    vector<int>ans; vector<int>freq(1000,0); 
    for(int i=0; i<arr.size();i++){
        freq[arr[i]]++;
    }

    for(int i=0; i<arr.size();i++){
        if(freq[i]>1){
            ans.push_back(i);

        }
    }
    cout<< "duplicate elements are"<<endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 

     duplicates(arr);

}


//array intersection
#include<vector>
vector<int> intersection(vector<int> & arrA, vector<int> & arrB ){
    vector<int> ans; 
    for(int i=0; i< arrA.size();i++){
        for(int j=0; j< arrB.size();j++){
            if(arrA[i]==arrB[j]){
                ans.push_back(arrA[i]);
                arrB[j]= -1;
                break;
            }
        }
    }
    return ans;
}
int main(){
    cout<< "Enter the number of elements in array 1"<< endl;
    int n; cin>>n; vector<int> arr1(n);
    cout<< "Enter elements of array 1"<<endl;
    for(int i=0; i<n;i++){
        cin>> arr1[i];
    }
    cout<< "Enter the number of elements in array 2"<< endl;
    int m; cin>>m; vector<int> arr2(m);
    cout<< "Enter elements of array 2"<<endl;
    for(int i=0; i<m;i++){
        cin>> arr2[i];
    }
    vector <int> ans=intersection(arr1, arr2);
    cout<< "Intersection of array 1 and 2 :"<<endl;
    if(ans.size()==0){
        cout<< "-1";
    }
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i]<< " ";
    }


}

//optimised solution- time complexity less
#include<vector>
vector<int> intersection(vector<int> & arrA, int n, vector<int> & arrB , int m){
    vector<int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if( arrA[i]== arrB[j]){
            ans.push_back(arrA[i]);
            i++;j++;
        }
        else if(arrA[i]<arrB[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main(){
    cout<< "Enter the number of elements in array 1"<< endl;
    int n; cin>>n; vector<int> arr1(n);
    cout<< "Enter elements of array 1"<<endl;
    for(int i=0; i<n;i++){
        cin>> arr1[i];
    }
    cout<< "Enter the number of elements in array 2"<< endl;
    int m; cin>>m; vector<int> arr2(m);
    cout<< "Enter elements of array 2"<<endl;
    for(int i=0; i<m;i++){
        cin>> arr2[i];
    }
    vector <int> ans=intersection(arr1,n, arr2,m);
    cout<< "Intersection of array 1 and 2 :"<<endl;
    if(ans.size()==0){
        cout<< "-1";
    }
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i]<< " ";
    }
}


//PAIR SUM(last step confusing)
#include<vector>
#include<algorithm>
vector<vector<int>> pairsum(vector<int>&arr, int s){
    vector<vector<int>> ans;
    for(int i=0;i< arr.size();i++){
        for(int j=i+1; j<arr.size();j++){
            if(arr[i]+ arr[j]== s){
                vector<int>temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
                sort(ans.begin(),ans.end());
            }
        }
    }
    return ans;
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    cout<< "Enter the element S"<< endl;
    int s; cin>>s;
    cout<< "Pair Sum are:"<< endl;
    vector<vector<int>> ans =pairsum(arr,s);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size();j++){
            cout<< ans[i][j]<<" ";
        }
       cout<< endl; 
    }
}
 

 //TRIPLE SUM
 #include<vector>
#include<algorithm>
vector<vector<int>> triplesum(vector<int>&arr, int s){
    vector<vector<int>> ans;
    for(int i=0;i< arr.size();i++){
        for(int j=i+1; j<arr.size();j++){
            for(int k=j+1; k<arr.size();k++){
            if((arr[i]+ arr[j]+ arr[k])==s){
                vector<int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                sort(temp.begin(), temp.end());
                if(find(ans.begin(), ans.end(), temp) == ans.end()){
    ans.push_back(temp);
}
               
            }
            }
        }
    }
     sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    cout<< "Enter the number of elements in your array"<<endl;
    int n; cin>>n;
    cout<< "Enter the elements of your array" <<endl;  vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    } 
    cout<< "Enter the element S"<< endl;
    int s; cin>>s;
    cout<< "Triple Sum:"<< endl;
    vector<vector<int>> ans =triplesum(arr,s);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size();j++){
            cout<< ans[i][j]<<" ";
        }
       cout<< endl; 
    }
}


//sort 0s 1s(can do w nested while loops as well)
#include <algorithm>
void sort01(int arr[], int n){
    int i=0; int j=n-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        } 
    else if( arr[j]==1){
        j--;
    }  
    else {
        swap(arr[i],arr[j]);
        i++; j--;
    }
}

cout<< "Sorted array is:"<<endl;
for(int i=0; i<n; i++){
    cout<< arr[i]<< " ";
}
}
int main(){
    cout<< "Enter the size of array"<< endl;
    int n; cin>>n;
    cout<< "Enter the elements of array"<<endl;
    int array[n];
for(int i=0; i<n; i++){
    cin>> array[i];
}

sort01(array,n);
}


//sort 0s 1s 2s (my soln, processes the data in two phases)
void sort(int *arr, int n){
    int freq[3]={0}; int ans[n];
    for(int i=0; i<n;i++)
    if(arr[i]==0){
        freq[0]++;    
    }
    else if (arr[i]==1){
        freq[1]++;
        }
        else {
            freq[2]++;
        }
        int j=0;
        for(int i=0; i< 3; i++){
            while (freq[i]!=0){
                ans[j]= i;
                freq[i]--;
                j++;
            }
            
        }
        cout<< "Sorted array is:"<<endl;
for(int i=0; i<n; i++){
    cout<< ans[i]<< " ";
}
}
int main(){
    cout<< "Enter the size of array"<< endl;
    int n; cin>>n;
    cout<< "Enter the elements of array"<<endl;
    int array[n];
for(int i=0; i<n; i++){
    cin>> array[i];
}

sort(array,n);
}


// single traversal soln
void sort(int arr[], int n){
    int low=0; int mid=0; int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++; mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else //arr[mid]==2 
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    cout<< "Enter the size of array"<< endl;
    int n; cin>>n;
    cout<< "Enter the elements of array"<<endl;
    int array[n];
for(int i=0; i<n; i++){
    cin>> array[i];
}

sort(array,n);
cout<< "Sorted array:"<<endl;
for(int i=0; i<n;i++){
    cout<< array[i]<<" ";
}
}
*/
