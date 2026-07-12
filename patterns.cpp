// Patterns
#include<iostream>
using namespace std;

  int main() {

  /* int n;
    cout<< "Enter the value of n:" <<endl;
    cin>>n;

    int i =1;
    while(i<=n) {

        int j =1;
        while(j<=n) {
            cout<< "*";
            j = j + 1;
        
        }
       
        cout<< endl;
        i= i+ 1;
    

    }


int n;
cout<< "Enter n:" ;
cin>>n;

int i =1;
while(i<=n) {
    int j =1;
    while(j<=n){
        cout << i ;
        j = j+1;
    }

    cout << endl;
    i = i+1;
}


int n;
cout<< "Enter n:" ;
cin>> n;

int i = 1;
while(i<=n) {

    int j = 1;
    while(j<=n) {
        cout<<j ;
        j = j+1;
    }
    cout<< endl;
    i=i+1;
}

int n;
cout<< "Enter n:" ;
cin>> n;

int i = 1;
while(i<=n) {

    int j = 1;
    while(j<=n) {
        int k = n-j+1;
        cout<<k ;
        j = j+1;
    }
    cout<< endl;
    i=i+1;

}  
    


int n;
cout<< "Enter the value of n:"<< endl;
cin>>n;

int i = 1, count= 1;
while(i<=n){
    int j = 1;
    while(j<=n) {
        cout<<count;
        j=j+1;
        count= count +1;


    }
    cout<< endl;
    i=i+1;
}
    
   int n;
cout<< "Enter the value of n:"<< endl;
cin>>n;

int i = 1, count= 1;
while(i<=n){
    int j = 1;
    while(j<=n) {
        cout<<count<<" ";
        j=j+1;
        count= count +1;


    }
    cout<< endl;
    i=i+1;
}
    

    int n;
    cout<< "Enter n:" ;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j =1;
        while(j<=i){
            cout<< "*"<< " ";
            j=j+1; 
        }
        i= i +1;
        cout<< endl;
    }

int n;
    cout<< "Enter n:" ;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j =1;
        while(j<=i){
            cout<< i<< " ";
            j=j+1; 
        }
        i= i +1;
        cout<< endl;
    }


int n;
cout<< "Enter n:";
cin>>n;

int i = 1, count=1;
while(i<=n){
    int j =1;
    while (j<=i) {
        cout<< count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<< endl;
    i = i+1;
}


int n;
cout<<"Enter n:" ;
cin>>n;

int i = 1;
int count=i;
while(i<=n) {
    int j=1;
    while(j<=i)  {
        cout<< count<<" ";
        count=count+1;
    j=j+1;
    }
    cout<< endl;
    i=i+1;
    count = i;
    
}


// without count variable
int n;
cout<< "Enter the value of n:";
cin>>n;

int i=1;
while(i<=n){
    int j=0;
    while(j<i){
        cout<< i+j <<" " ;

        j=j+1;
    }
    cout<< endl;
    i=i+1;
}


int n;
cout<< "Enter n:";
cin>>n;

int i = 1;
while(i<=n){
    int j=0;
    while(j<i){
        cout<< i-j<< " ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


int n;
cout<<"Enter n:";
cin>>n;

int i = 1;
char v = 'A';
while(i<=n){
    int j=1;
    while(j<=n){
        cout<< v<< " ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    v=v+1;
}


int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch= 'A' +j - 1;
        cout<<ch;
        j=j+1;
    }
    cout<< endl;
    i=i+1;
}


int n;
cout<< "Enter n:";
cin>>n;

int i=1;
char ch= 'A';
while(i<=n){
    int j=1;
    while(j<=n){
        cout<< ch<< " ";
        ch= ch +1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


int n;
cout<< "Enter n:";
cin>>n;

int i=1;
char ch;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch= 'A' + i +j-2;
    cout<<ch<<" ";
j=j+1;
}
cout<<endl;
i=i+1;

}


int n;
cout<< "Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=i) {
        char ch= 'A'+ i - 1;
        cout<< ch<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


int n;
cout<< "Enter n:";
cin>>n;

int i=1;
char ch= 'A';
while(i<=n) {
    int j=1;
    while(j<=i){
        cout<< ch;
        j=j+1;
        ch=ch+1;
    }
    cout<<endl;
    i=i+1;
}

int n;
cout<< "Enter n:";
cin>>n;

int i=1; 
char ch;
while(i<=n) {
    int j=1;
    while(j<=i){
        char ch= ('A' +i +j-2);
        cout<< ch;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

int n;
cout<< "Enter n:";
cin>>n;

int i=1; char ch;
while(i<=n) {
    int j=1;
    while(j<=i){
        char ch= ('D'-i+ j);
        cout<< ch ;
        j=j+1;
    }
    cout<<endl;
    i=i+1;

}

int n;
cout<< "Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int j=n;
    while(n-i<j){
        cout<< "*";
        j=j-1;
    }
    cout<<endl;
    i=i+1;
}


int n;
cout<< "Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int space= n-i;
    while(space) {
    cout<< " ";
    space=space-1;
    }
    int j=1;
    while(j<=i){
        cout<< "*";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<< "x";
        j=j+1;
    }
    cout<<endl;
    i=i+1;

}

int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int space=1;
    while(space<i){
        cout<< " ";
        space=space+1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<< "x";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int space=1;
    while(space<i){
        cout<<" " ;
        space=space+1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<< i ;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int space=1;
    while(space<n-i+1){
        cout<<" ";
        space=space+1;
    }
    int j=1;
    while(j<=i){
        cout<< i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int space= 1;
    while(space<i){
        cout<< " ";
        space=space+1;
    }
    int j=1;
    while(j<=n-i+1){
        cout<<i+j-1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}

int n;
cout<<"Enter n:";
cin>>n;

int i=1;
int count=1;
while(i<=n){
    int space=1;
    while (space<=n-i){
        cout<< " ";
        space=space+1;
    }
    int j=1;
    while(j<=i){
        cout<< count;
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}


int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int space=1;
    while(space<=n-i){
        cout<<" ";
        space=space+1;
    }
    int j=1;
    while(j<=i){
        cout<<j;
        j=j+1;
    }
    int k=0;
    while(k<i-1){
        cout<< i-k-1;
        k=k+1;
    }
    cout<<endl;
    i=i+1;

}


int n;
cout<<"Enter n:";
cin>>n;

int i=1;
while(i<=n){
    int j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j=j+1;
    }
    int star=1;
    while(star<i){
        cout<< "*"<<" ";
        star=star+1;
    }
    int STAR=1;
    while(STAR<i){
        cout<< "*"<<" ";
        STAR=STAR+1;
    }
    int k=1;
    while(k<=n-i+1){
        cout<< n-i-k+2<<" ";
        k=k+1;
    }
    cout<<endl;
    i=i+1;
}
*/





    int n;
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n) {          // ✅ FIX 1
        int j = 1;
        while (j <= i) {
            cout << count;
            j++;
        }
        cout << endl;
        count++;              // ✅ FIX 2
        i++;
    }

    return 0;
}


