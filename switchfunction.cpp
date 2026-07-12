//switch&function

#include<iostream>
using namespace std;
#include<cmath>

//int main(){

    //SWITCH

    /*int num=2;
    switch(num){
        case 1: cout<< "I love larry"<<endl;
        break;
        case 2: cout<< "i LOVE harry styles <3"<< endl;
        break;
        default : cout<< "I love one direction"<< endl;
    }
*/

   /*  char pw ='1';
    switch(pw){
        case 1: cout<< "I love larry"<<endl;
        break;
        case '1': cout<< "i LOVE harry styles <3"<< endl;
        //break;
        default : cout<< "I love one direction"<< endl;
    }
    */
   /*char pw ='2';
    switch(pw){
        case 1: cout<< "I love larry"<<endl;
        break;
        case '1': cout<< "i LOVE harry styles <3"<< endl;
        //break;
        default : cout<< "I love one direction"<< endl;
    }
        */

       /* char pw ='2';
    switch(pw){
        case 1: cout<< "I love larry"<<endl;
        break;
        case '1': cout<< "i LOVE harry styles <3"<< endl;
        //break; 
    }
        */

    /*while(1){
        int num=2;
    switch(num){
        case 1: cout<< "I love larry"<<endl;
        break;
        case 2: cout<< "i LOVE harry styles <3"<< endl;
        break;
        default : cout<< "I love one direction"<< endl;
       
    }
 exit(0); // or return 0
    }
 */

 /*bool running= true;
 
 while(running){
        int num;
        cout<< "Enter num"<<" "<<endl;
        cin >>num;
    switch(num){
        case 1: cout<< "I love larry"<<endl;
        break;
        case 2: cout<< "i LOVE harry styles <3"<< endl;
        break;
        case 3: cout<< "I love one direction"<< endl;
        break;
        case 4: running = false;
        break;
        default: cout<< "Invalid choice"<< endl;
    }
        exit(0);
     }
        */


// MINI CALCULATOR PROGRAM

//my code(sir used ch rest same)
/*int x,y; 
cout<< "Enter the numbers:"<< " ";
cin >> x >> y;
//cout << "x is" << " " << x << "  "<< "y is" << " "<< y ;
 
cout << "Select operation"<< endl;
cout<< "1.multiply"<< endl << "2.addition"<< endl << "3.subtraction" <<endl<< "4.division"<< endl<< "5.modulus"<< endl;
int operation; cin>> operation;
//cout<<" Selected operation is:"<< operation<< endl;

switch(operation){
    case 1: cout<<"multiplication of x and y is:" << x*y<< endl;
    break;
    case 2:cout<<"sum of x and y is:" << x+y<< endl;
    break;
    case 3:cout<<"difference b/w x and y is:" << x-y<< endl;
    break;
    case 4: cout<<"division of x and y gives:" << x/y<< endl;
    break;
    case 5: cout<<"modulus of x and y is:" << x%y<< endl;
    break;
    default: cout<<" Invalid operation"<< endl;
}
*/

// hw ques

//FUNCTIONS 
// POW(a,b) - can do by loop as well

/*int a; int b;
cout<<"Enter the value of a:"<< endl;
cin>>a;
cout<<"Enter the value of b:"<< endl;
cin>>b;
int ans;
ans= pow(a,b);
cout<<"Answer:"<< ans<< endl;
*/

//make power funcn yourself

/*int power(int num1, int num2){
    int answer= 1;
for(int i=1;i<=num2;i++){
    answer= answer*num1;
}
return answer;
}

int main(){
    int a, b;
    cin>>a>>b;
    int answer= power(a,b);
    cout<<answer;

    int c, d;
    cin>>c>>d;
    answer= power(c,d);
    cout<<answer;

    int e, f;
    cin>>e>>f;
    answer= power(e,f);
    cout<<answer;
}*/

/*bool oddeven(int num){
int ans;
ans=num%2;
if(ans==0){
   return true;
}
    else{
    return false;
}
}

int main(){
    cout<< "Enter no"<<endl;
    int n; cin>>n;
   bool ans= oddeven(n);
   cout<< ans<<endl;

} 
*/
//OR
/*bool isEven(int a){
    //odd
    if(a&1){
        return 0;
    }
        return 1;
}

int main(){
int num; cin>>num;
if(isEven(num)){
    cout<<"Num is even"<< endl;
}
else{
    cout<< "Num is odd"<<endl;
}
}
*/

//nCr program

/*int nfactorial(int a){
int ans=1; 
for(int i=a;i>0;i--){
    ans= ans*i;
}
return ans;
}
// make ncr function instead of this
int main(){
cout<< "Enter the value of n:"<<endl;
int n; cin>>n;
cout<< "Enter the value of r:"<<endl;
int r; cin>>r;
int ans;
ans= nfactorial(n)/ (nfactorial(r)* nfactorial((n-r)));
cout<< "nCr is:" << ans<< endl;
}

int nCr(int n, int r){
    int num= nfactorial(n);
    int denom= nfactorial(r)*nfactorial(n-r);
    return num/denom;
}
int main(){
cout<< "Enter the value of n:"<<endl;
int n; cin>>n;
cout<< "Enter the value of r:"<<endl;
int r; cin>>r;
cout<<nCr(n,r);
}
*/


//counting program
/*
//Function signature 
void Count(int n){
    //Function body
    for(int i=1;i<=n;i++)
    cout<< i<<" ";
}
int main(){
cout<<"Enter the no x:"<< endl;
int x; cin>>x;
//Function call
Count(x);
}
*/

//Prime no program
/*
void isPrime(int n){
    if(n <= 1)
    {
        cout << n << " is not a prime number";
        return;
    }
    for(int i=2; i<n && n!=2;i++){
        if(n%i==0){
            cout<< n <<"is not a prime number"<<endl;
            return;
        }
    }
     cout<< n <<"is a prime number"<< endl;     
}
int main(){
    cout<< "Enter the number: "<<endl;
    int num; cin>> num;
    isPrime(num);
    return 0;
}
*/

//hw questions

//1. AP= 3n+7

/*int AP(int n){
    int nthterm;
    nthterm= 3*n+7;
    return nthterm;
}
int main(){
cout<< "Enter num"<<endl;
int num; cin>>num;
cout<< AP(num)<< endl;
}
*/

//2. Total no of bits

/*int Bitno(int a,int b){
    int countA=0; int countB=0;
    while(a!=0){
        int bitA= a&1;
        if(bitA==1){
            countA=countA+1;
        }
        a=a>>1;
    }
    while(b!=0){
        int bitB= b&1;
        if(bitB==1){
            countB++;
        }
        b=b>>1;
    }
    return (countA+countB);
}
int main(){
cout<< "Enter x and y"<< endl;
int x,y; cin>>x>>y;
cout<< Bitno(x,y);
}
*/

//3. nth fibonacci term
/*int FT(int n){
    int nextTerm;
    int a=0; int b=1;
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=3; i<=n;i++){
        nextTerm= a + b;
        a=b; b= nextTerm;
    }
    return nextTerm;
}
int main(){
    cout <<"Enter the term"<< endl;
    int num; cin>>num;
    cout<< FT(num);
}
    */