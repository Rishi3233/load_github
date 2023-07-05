// #include<iostream>
// using namespace std;
// void swap(int &x, int &y){
//     int temp=x;
//     x=y;
//     y=temp;
//     // cout<<x<<" "<<y;
// }
// int main(){
//     int x=10,y=5;
//     swap(x,y);
//     cout<<x<<" "<<y;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int sum =0;
//     for(int i=1;i<=5;i++){
//         sum=sum+i;
//     }
//     cout<<sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         int arr[a];
//         for(int i=0;i<a;i++){
//             cin>>arr[i];

//             if(b-arr[i]>=0){
//                 cout<<"1";
//                 b=b-arr[i];
//             }else{
//                 cout<<"0";
//             }
//         }

//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// void find_max(int arr[],int n){
//     int ans=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>ans)
//             ans=arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];

//     }
//         if(ans>(sum-ans))
//             cout<<"YES\n";
//         else
//             cout<<"NO\n";
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         find_max(arr,n);

//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// void find_max(int arr[],int n){
//     int ans=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>ans){
//             ans=arr[i];
//         }
//      }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     if(ans>(sum-ans)){
//         cout<<"YES\n";
//     }
//     else{
//         cout<<"NO\n";
//     }

// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int arr[4];
//         for(int i=0;i<4;i++){
//             cin>>arr[i];
//         }
//         find_max(arr,4);
//     }
// 	return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s="12/11/2012";
//    int n=s.length();

// string a=s.substr(0,2);
// int x=stoi(a);
// if(x%2==0){
//     cout<<"u";
// }

// }

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         string a=s.substr(0,2);
//         string b=s.substr(3,4);
//         int x=stoi(a);
//         int y=stoi(b);
//         if(x<=12 and y<=12){
//             cout<<"BOTH\n";
//         }
//         else if(x<=12 and y>12){
//             cout<<"MM/DD/YYYY\n";
//         }
//         else{
//             cout<<"DD/MM/YYYY\n";
//         }
//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t,count=0;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         if(s!="a" and s!="e" and s!="i" and s!="o" and s!="u"){
//             count++;
//             if(count>=4){
//                 cout<<"NO\n";
//             }
//         }
//         else{
//             cout<<"YES\n";

//         }
//     }
//     // cout<<count<<"\n";
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b;
//         cin>>a>>b;
//         int arr[a];
//         for(int i=0;i<a;i++){
//             cin>>arr[i];
//             if(b-arr[i]>=0){
//                 cout<<"1";
//                 b=b-arr[i];}
//             else
//                 cout<<"0";
//         }
//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//     int a,b,c;
//     cin>>a>>b>>c;
//     if(a>b and a>c){
//         cout<<"A\n";
//     }
//     else if(b>a and b>c){
//         cout<<"B\n";
//     }
//     else if(c>a and c>b){
//         cout<<"C\n";
//     }
//     else{
//         cout<<"NOTA\n";
//     }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a>b and a>c)
//             cout<<"A\n";
//         else if(b>c and b>a)
//             cout<<"B\n";
//         else if(c>a and c>b)
//             cout<<"C\n";
//         else
//             cout<<"NOTA\n";
//     }
// 	return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int x=stoi(s);
//     cout<<(x<<1);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     string string="";
//     int n=s.length();
//     int l=n-1;
//     while(l>=0){
//         string=string+s[l];
//         l--;

//     }
//     if(string==s){
//         cout<<"YES\n";
//     }
//     else{
//         cout<<"NO\n";
//     }
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         int arr2[n];
//         for(int i=0;i<n;i++){
//             cin>>arr2[i];
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum=sum+arr2[i];
//         }
//         cout<<sum;
//         // if(sum%2==0){
//         //     cout<<"YES\n";
//         // }else{
//         //     cout<<"NO\n";
//         // }
//     }
// 	return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s;
// 	    int count=1;
// 	    for(int i=0;i<n-2;i++){
// 	        if(s[i]='1' && s[i+1]=='0'){
// 	            count++;
// 	        }

// 	    }
// 	      cout<<count<<endl;

// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int count=0;
//         for(int i=0;i<n-1;i++){
//             if(arr[i]!=arr[i+1]){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,count=0,maxi=INT_MIN,mini=INT_MAX;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];

// 	       //   else if(arr[i]<=2)
// 	    }
//         for(int i=0;i<n;i++){

//               if((arr[i+1]-arr[i])<=2)
// 	            count++;
//             else{

//                 maxi=max(maxi,count);
//                 mini=min(mini,count);
//                 count=0;
//             }
//         }
// 	  cout<<(mini+1)<<" "<<(maxi+1);
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,d,countrisk=0,norisk=0;
//         cin>>n>>d;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<n;i++){

//            if(arr[i]>=80 || arr[i]<=9){
//                countrisk++;
//            }else{
//                norisk++;
//            }

//         }
//         cout<<norisk;
//         cout<<countrisk;
//         float a=ceil(countrisk/d);
//         float b=ceil(norisk/d);
//         cout<<(a+b)<<endl;
//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t,a,b,c,d,e;
// 	cin>>t;
// 	while(t--){

// 	    cin>>a>>b>>c>>d>>e;
// 	    if(b-a>=c*d && b-a<=d*e)
// 	        cout<<"1"<<endl;

// 	    else
// 	        cout<<"0"<<endl;

// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int deleEle(int arr[],int n,int x){

// 	int i;
// 	for( i=0;i<n;i++)
// 		if(arr[i]==x)
// 			break;
// 	cout<<i<<endl;
// 	if(i==n)
// 		return n;
// 	int j;
// 	for( j=i;j<=n-1;j++)
// 		arr[j]=arr[j+1];

// 	return (n-1);
// }
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int p=deleEle(arr,n,x);
// 	for(int i=0;i<p;i++){
// 		cout<<arr[i]<<" ";
// 	}

// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int n,x;
// 	cin>>n>>x;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int i;
// 	for(i=0;i<n;i++)
// 		if(arr[i]==x){
// 			break;
// 		}
// 	cout<<i<<endl;
// 	int j;
// 	for( j=i;j<=n-1;j++)
// 		arr[j]=arr[j+1];
// 	cout<<arr[j]<<" ";

// }

// #include<iostream>
// using namespace std;
// int largest(int arr[],int n){
// 	int res=0;
// 	for(int i=1;i<n;i++){
// 		if(arr[i]>arr[res]){
// 			res=i;
// 		}
// 	}
// 	return res;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int largestele=largest(arr,n);
// 	// cout<<arr[largestele]<<endl;
// 	arr[largestele]=-1;
// 	int seclargestele=largest(arr,n);
// 	cout<<arr[seclargestele]<<endl;
// }

// #include<iostream>
// using namespace std;
// int largest(int arr[],int n){
// 	int res=arr[0];
// 	for(int i=1;i<n;i++){
// 		if(arr[i]>res){
// 			res=arr[i];
// 		}
// 	}
// 	return res;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int largestele=largest(arr,n);
// 	// cout<<largestele<<endl;
// 	largestele=-1;
// 	// cout<<largestele<<endl;
// 	int seclargestele=largest(arr,n);
// 	cout<<seclargestele<<endl;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	  string s;
// 	  cin>>s;
// 	  string newstr="";

// 	 int l =s.length()-1;
// 	while(l>=0){
// 		newstr=newstr+s[l];
// 		l--;
// 	  }
// 	// cout<<newstr<<endl;
// 	if(newstr==s){
// 		cout<<1<<endl;
// 	}else{
// 		cout<<0<<endl;
// 	}
// 	}

// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	char ch[n];
// 	int i;
// 	for( i=0;i<n;i++){
// 		cin>>ch[i];
// 	}
// 	int l=n-1;
// 	// cout<<l<<endl;
// 	// for(int i=0;i<n;i++){
// 	// 	cout<<ch[i];
// 	// }
// 	string newstr="";
// 		while(l>=0){
// 		newstr=newstr+ch[l];
// 		l--;
// 	  }
// 	// cout<<newstr<<endl;
// 	if(newstr==ch){
// 		cout<<1<<endl;
// 	}else{
// 		cout<<0<<endl;
// 	}
// 	}

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while (t--)
// 	{
// 		int n;
// 		cin >> n;
// 		char ch[n];
// 		int i;
// 		for (i = 0; i < n; i++)
// 		{
// 			cin >> ch[i];
// 		}
// 		int l = n - 1;

// 		string newstr = "";
// 		while (l >= 0)
// 		{
// 			newstr = newstr + ch[l];
// 			l--;
// 		}

// 		if (newstr == ch)
// 		{
// 			cout << 1 << endl;
// 		}
// 		else
// 		{
// 			cout << 0 << endl;
// 		}
// 	}
// 	return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 		int i;
// 	    for( i=0;i<n;i++){
// 	        cin>>arr[i];

// 	    }

// 		int low=0,high=n-1;
// 	    while(low<high){
// 	        int temp=arr[low];
// 	        arr[low]=arr[high];
// 	        arr[high]=temp;
// 	        low++;
// 	        high--;
// 	    }
// 		for( i=0;i<n;i++){
// 	        cout<<arr[i]<<" ";

// 	    }

// 		for(int i=0;i<n;i++){
// 			cout<<(arr[i]^arr[i])<<" ";
// 		}
// 			if(n==1)
// 	            cout<<1<<endl;
// 	        else {
// 	            for(int i=n-1;i>=0;i--){
// 	                cout<<arr[i]<<" ";
// 	            }
// 	        }

// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         int i;
//         for( i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<n;i++){
//         if(arr[i+1]-arr[i]==arr[i+2]-arr[i+1] || ){
//             cout<<"No"<<endl;
// 			break;
//         }
//         else {
//             cout<<"Yes"<<endl;
// 			break;
//         }
// }
//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,b;
// 	    cin>>n>>b;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    for(int i=0;i<n;i++){

// 	        if(b-arr[i]>=0){
// 	            cout<<1;
// 	            b=b-arr[i];
// 	        }
// 	        else{
// 	            cout<<0;
//                 // b=b-arr[i];

// 	        }
// 	    }
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,count=0,b=0;
// 	    cin>>n;
// 	    int arr[n];

// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        if(arr[i]==0){
// 	            count++;
// 	        }
// 	        else if(arr[i]==1){
// 	            b++;
// 	        }
// 	    }
// 	    int x=120-n;
// 	    if(((b+x)/double(120))*100>=75){
// 	        cout<<"Yes\n";
// 	    }else{
// 	        cout<<"No\n";
// 	    }
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,b=0,a=0,c=0,d=0;
// 	    cin>>n;
// 	    int arr1[n];
// 	    int arr2[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr1[i];
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr2[i];
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        if(arr1[i]==0){
// 	            a++;
// 	        }
// 	        else if(arr1[i]==1){
// 	            b++;
// 	        }
// 	    }

// 	    for(int i=0;i<n;i++){
// 	        if(arr2[i]==0){
// 	            c++;
// 	        }
// 	        else if(arr2[i]==1){
// 	            d++;
// 	        }
// 	    }

// 	    if(a==c || b==d){
// 	        cout<<"YES\n";
// 	    }
// 	    else{
// 	        cout<<"NO\n";
// 	    }
// 	}
// 	return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int a=0,b=0,c=0,d=0;
//     int n;
//     cin>>n;
//     string str1,str2;
//     cin>>str1>>str2;
//     for(int i=0;i<n;i++){
//             for(int i=0;i<str1.length();i++){
//         if(str1[i]=='0'){
//             a++;
//         }
//         else if(str1[i]=='1'){
//             b++;
//         }
//     }
//     for(int i=0;i<str2.length();i++){
//         if(str2[i]=='0'){
//             c++;
//         }
//         else if(str1[i]=='1'){
//             d++;
//         }
//     }
//     }

//     if(a==c and b==d){
//         cout<<"YES\n";
//     }else{
//         cout<<"NO\n";
//     }
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//     int n,count=0,bob=0;
//     cin>>n;
//     string str;
//     cin>>str;
//     if(str[0]=='A'){
//         count++;
//     }
//         for(int i=0;i<str.length();i++){
//             if(str[i]=='A' and str[i+1]=='A'){
//                 count++;
                
//             }
//             else if(str[i]=='B' and str[i+1]=='B'){
//                 bob++;
//             }
//         }

//     cout<<count<<" "<<bob<<endl;
    
//     }
   
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n%2==1){
//             cout<<-1<<endl;
//         }
//         else{
//             int i=n;
//             while(i>0){
//                 cout<<i<<" ";
//                 i--;
//             }
//         }
//     }
// 	return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int a=0,b=0;
//         string n;
//         cin>>n;
//         for(int i=0;i<n.size();i++){
//             if(n[i]=='0'){
//                 a++;
//             }
//             else if(n[i]=='1'){
//                 b++;
//             }
//         }
      
//     if(a==1 || b==1){
//         cout<<"YES\n";
        
//     }
//     else{
//         cout<<"NO\n";
//     }
//     }
// 	return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,l;
        cin>>n>>k>>l;
        int arr[n];
        for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[j];
        }
         for(int j=0;i<2;j++){
            if(arr[j+1]==l and k==1){
                
            }
        }
        }

        cout<<1;
    }
	return 0;
}