// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n>5)
//         cout<<"Greater than 5\n";
//     else if(n<5)
//         cout<<"Less than 5\n";
//     else
//         cout<<"Equal to 5\n";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%4==0 and n%100!=0)
//         cout<<"leap year\n";
//     else if(n%400==0)
//         cout<<"leap year\n";
//     else
//         cout<<"not leap year\n";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     switch(n){
//         case 1:
//             cout<<"one\n";
//             break;
//         default:
//             cout<<"not one\n";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0)
//         cout<<"friend\n";
//     else
//         cout<<"you\n";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>=b and a>=c){
//         cout<<a<<"\n";
//     }
//     else if(b>=a and b>=c){
//         cout<<b<<"\n";
//     }else{
//         cout<<c<<"\n";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int op;
//     cin>>op;
//     if(op==1)
//         cout<<(a+b)<<"\n";
//     else if(op==2)
//         cout<<(a-b)<<"\n";
//     else if(op==3)
//         cout<<(a*b)<<"\n";
//     else
//         cout<<"invalid operation\n";
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=1,b=1;
//     int c=0;
//   if(n==1 or n==2){
//     cout<<a<<"\n";
//     return 0;
//   }
//     for(int i=2;i<n;i++){
   
//         c=a+b;
        
//         a=b;
//         b=c;
//     }
//     cout<<c<<" "<<"\n";
// }



// #include<iostream>
// using namespace std;
// int cube(int a){
//     return a*a*a;
// }
// int cube(int l, int b,int h){
//     return l*b*h;
// }
// int main(){
   
//     cout<<cube(2)<<"\n";
//     cout<<"vol of rec_cube "<<cube(1,2,3)<<"\n";
// }



// #include<iostream>
// using namespace std;
// int sum(int a,int b,int c=0,int d=0){
//     return (a+b+c+d);
// }

// int main(){
//     cout<<sum(5,2)<<"\n";
//     cout<<sum(4,5,1)<<"\n";
// }



// #include<iostream>
// using namespace std;

//  int first_digit(int n){
//     while(n>10)
//      {
//         n=n/10;
//      }
//      return n;
// }
// int main(){
//     int a;
//     cin>>a;
//     cout<<first_digit(a)<<"\n";
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n>10){
//         n=n/10;
//     }
//     cout<<n<<endl;
// }




// #include<iostream>
// using namespace std;
// int isprime(int n){
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
//  int prime_factor(int n){
//     for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             int x=i;
//             while(n%x==0){
//                 cout<<i<<" ";
//                 x=x*i;
//             }

//         }
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     prime_factor(a);
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<fact<<"\n";
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=10;i++){
//         cout<<(a*i)<<" ";
//     }
//     cout<<endl;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n==1 or n==0){
//         cout<<"no"<<"\n";
//         return 0;
//     }
//     for(int i=2;i<n;i++){
//         if(n%2==0){
//             cout<<"no"<<"\n";
//             return 0;
//         }
          
//     }
//   cout<<"yes"<<"\n";
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=10;
//     while(i>=1){
//         cout<<(n*i)<<" ";
//         i--;
//     }cout<<endl;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count =0;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     cout<<count<<"\n";

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 cout<<"*"<<" ";
//             }else{
//                 cout<<"  ";
//             }
//         }cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*"<<" ";
//         }   cout<<endl;
//     }
 
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     for(int i=1;i<=10;i++){
//         cout<<(m*i)-(n*i)<<" ";
  
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j==1 || i==n || i==j){
//                 cout<<"*"<<" ";
//             }else{
//                 cout<<"  ";
//             }
//         }cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             cout<<"*"<<" ";
//         }cout<<endl;
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1,sum=0;
//     while(i<n){
//         int last_digit=n%10;
//         sum=sum+last_digit;
//         n=n/10;
//     }
//     cout<<sum<<endl;
// }