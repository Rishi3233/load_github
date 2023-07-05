// #include <iostream>
// using namespace std;
// int find_max(int arr[],int n){
//     int ans=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>ans)
//             ans=arr[i];
//     }
//     return ans;
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int ans=find_max(arr,n);
//         cout<<ans;
        
//     }
  
    
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n=4,count=0;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         if(arr[i]>=10){
//             count++;
//         }
//     }
//     cout<<count<<endl;
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
//         int n=3;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]+arr[i+2]<=arr[i+1]){
//                 cout<<"Yes\n";
//                 break;
//             }
//             else{
//                 cout<<"No\n";
//                 break;
//             }
//         }
                       
// 	}
// 	return 0;
// }


// #include<iostream>
// // #include<algorithm>
// using namespace std;
// int main(){
//     int m,n,ans=1;
//     cin>>m>>n;
//     int d=min(m,n);
//    for(int i=1;i<=d;i++){
//     if(m%i==0 and n%i==0){
//         ans=i;
//     }
//    }
//    cout<<ans<<endl;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int m,n,ans=1;
//     cin>>m>>n;
//     int d=min(m,n);
//    for(int i=1;i<=d;i++){
//     if(m%i==0 and n%i==0 ){
//         ans=i;
//     }
//    }
//    cout<<ans<<endl;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int m,n,ans=1;
//     cin>>m>>n;
   

//    cout<<(__gcd(m,n))<<endl;
// }



// #include <iostream>
// using namespace std;

// int main() {
// int t;
// cin>>t;
// while(t--){
//     int n,b,res=0,count=0;
//     cin>>n>>b;
//     for(int i=0;i<n;i++){
//         int h,w,p;
//         cin>>h>>w>>p;
//         if(p<=b){
//             if(res>h*w){
//                 res=h*w;

//             }

//         }
//     }
//     if(count==0){
//         cout<<"no tablet\n";
//     }else{
//         cout<<res<<endl;
//     }
// }
// 	return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int T , N ; cin >> T;
// 	while(T--){
// 	    cin >> N;
// 	    int arr[N] , max_card = 0;
// 	    for(int i = 0 ; i < N ; i++)
// 	        cin >> arr[i];
// 	    for(int i = 0 ; i < N ; i++){
// 	        int count = 1;
// 	        for(int j = i+1 ; j < N ; j++){
// 	            if(arr[i]==arr[j])
// 	                count++;
// 	        }
// 	        max_card=max(count,max_card);
// 	    }
// 	    cout << N-max_card << endl;
// 	}
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,max_card=0;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//            cin>>arr[i];
//         }
//         for(int i=0;i<n;i++){
//             int count=1;
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]==arr[j])
//                  count++;
//             }
//             cout<<count<<endl;
//               max_card=max(count,max_card); 
            
//         }
//         cout<<n-max_card<<endl;
//     }
// 	return 0;
// }