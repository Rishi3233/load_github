// #include <iostream>
// using namespace std;

// int main() {
//     int  x,n, m;
//     cin>>x>>n>>m;
//     if(x+m>=n){
//         cout<<"YES\n";
//     }else{
//         cout<<"NO\n";
//     }
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int ans=x/2;
//         cout<<ans+1<<endl;
//     }
// 	return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,count=0,count1=0,a=0,b=0;
//         cin>>n;
//         int arr[n];
//     for(int j=0;j<2;j++){
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }}
        
            
//         for(int i=0;i<n;i++){
//               if(arr[i]>0){
//                  count++;
                 
//             }
//             else{
//                 count1=max(count1,count);
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]>=0){
//                 a++;}
//                 else{
//                     b=max(a,b);
//                 }
            
//         }
//         if(count1>b){
//             cout<<"ADDY\n";
//         }
//         else if(count1=b){
//             cout<<"OM\n";
//         }
//         else{
//             cout<<"DRAW\n";
//         }
        
        
//     }
// 	return 0;
// }


// #include<iostream>
// #include<vector>
// // #include<algorithm>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> om(n), addy(n);
//         for(int i=0;i<n;i++){
//             cin>>om[i];
//         }
//         for(int i=0;i<n;i++){
//             cin>>addy[i];
//         }
//         int om_streak=0,addy_streak=0;
//         int om_max_streak=0, addy_max_streak=0;
//         for(int i=0;i<n;i++){
//             if(om[i]>0){
//                 om_streak++;
//             }
//             else{
//                 om_streak=0;
//             }
//             if(addy[i]>0){
//                 addy_streak++;
//             }
//             else{
//                 addy_streak=0;
//             }
//             om_max_streak=max(om_max_streak,om_streak);
//             addy_max_streak=max(addy_max_streak,addy_streak);
//         }
//         if(om_max_streak>addy_max_streak){
//             cout<<"OM\n";
//         }
//         else if(om_max_streak<addy_max_streak){
//             cout<<"ADDY\n";
//         }
//         else{
//             cout<<"DRAW\n";
//         }
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,b;
//         cin>>n>>b;
//         vector<int>a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         bool found=false;
//         for(int mask=0;mask<(1<<n);mask++){
//             int and_val=-1;
//             for(int i=0;i<n;i++){
//                 if(mask&(1<<i)){
//                     if(and_val==-1){
//                         and_val=a[i];
//                     }else{
//                         and_val &=a[i];
//                     }
//                 }
//             }
//             if(and_val==b){
//                 found=true;
//                 break;
//             }
//         }
//         if(found){
//             cout<<"YES\n";
//         }else{
//             cout<<"NO\n";
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n=4,count=0;
    int arr[n];
    int i;
    for( i=0; i<n;i++){
        cin>>arr[i];
    }
    for( i=0; i<n;i++){
        if(arr[i]>=10){
            count++;
        }
    }

    cout<<(count);
	return 0;
}
