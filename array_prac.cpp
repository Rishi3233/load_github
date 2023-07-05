// #include <iostream>
// using namespace std;
// int largest(int arr[], int n)
// {
// 	int res = arr[0];
// 	for (int i = 1; i < n; i++)
// 	{
// 		if (arr[i] > res)
// 		{
// 			res = arr[i];
// 		}
// 	}
// 	return res;
// }
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	cout << largest(arr, n) << endl;
// }

// #include <iostream>
// using namespace std;
// int largest(int arr[], int n)
// {
// 	int res = 0;
// 	for (int i = 1; i < n; i++)
// 	{
// 		if (arr[i] > arr[res])
// 		{
// 			res = i;
// 		}
// 	}
// 	return res;
// }
// int main()
// {
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> arr[i];
// 	}
// 	// cout << largest(arr, n) << endl;
//     int largest1=largest(arr,n);
//     cout << arr[largest1] << endl;
//     arr[largest1]=-1;
//      int largest2=largest(arr,n);
//     cout << arr[largest2] << endl;
//     arr[largest2]=-1;
//     int largest3=largest(arr,n);
//     cout << arr[largest3] << endl;

// }

// #include<iostream>
// using namespace std;
// int smallest(int arr[], int n){
//     int res=0;
//     for(int i=0;i<n;i++){
//         if(arr[res]>arr[i]){
//             res=i;
//         }
//     }
//     return res;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int smallest1=smallest(arr,n);
//     // cout<<smallest(arr,n)<<endl;
//     cout<<arr[smallest1]<<endl;
//     arr[smallest1]=10000;
//     int smallest2=smallest(arr,n);
//     cout<<arr[smallest2]<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             cout<<arr[i]<<" "<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//            count++;
//         }
//     }
//     cout<<count<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int counte=0,counto=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             counte++;
//         }
//         else{
//             counto++;
//         }
//     }
//     cout<<"even is "<<counte<<" "<<"odd is "<<counto<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int mini=INT_MAX;
//     int maxi=INT_MIN;
//     for(int i=0;i<n;i++){
//         maxi=max(maxi,arr[i]);
//         mini=min(mini,arr[i]);
//     }
//     cout<<maxi<<" "<<mini<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int cap=5;
//     int n,x;
//     cin>>n>>x;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int pos;
//     cin>>pos;
//     if(n==cap){
//         cout<<n<<endl;
//         return 0;

//     }
//     int idx=pos-1;
//     for(int i=n-1;i>=idx;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[idx]=x;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool x=true;
//     for(int i=1;i<n;i++){
        
//         if(arr[i]<arr[i-1]){
//             x=false;
//         }
  
   
//     }
//    if(x==true){
//     cout<<"sorted\n";
//    }else{
//     cout<<"unsorted\n";
//    }
// }


// #include<iostream>
// using namespace std;
// bool arrange(int arr[],int n){
//     for(int i=1;i<n;i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     if(arrange(arr,n)==true){
//         cout<<"sorted\n";
//     }else{
//         cout<<"unsorted\n";
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int n,count=0,res=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isdistinct=true;
    for(int i=0;i<n;i++){
        isdistinct=true;
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                isdistinct=false;
                break;
            }
        }
        
        if(isdistinct==true){
            res=arr[i];
            cout<<res<<" ";
        }
    }cout<<endl;
  
    
}