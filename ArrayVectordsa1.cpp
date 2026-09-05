//1.to print sum/product of all elemnt in array 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/4;
//     int ans=0;
//     for(int i=0;i<n;i++){
//        ans+=arr[i];
//     }
//     cout<<ans;
//     return 0;
// }

//2.to print difference of sum of number at even and odd index
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/4;
//     int soe=0,sod=0;
//     for(int i=0;i<n;i++){
//         if(i%2==0) soe=soe+arr[i];
//         else {sod=sod+arr[i];}
//     }      
//     cout<<soe-sod;
//     return 0;
// }

//3.odd index multiple of 2 and even increase by 10
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         if(i%2==0) arr[i]+=10;
//         else {arr[i]*=2;}
//     }      
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0; 
// }

//4. find missing elements of an array containing elements from 1 to 10
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={1,2,3,4,5,6,7,8,10};
//     int n=sizeof(arr)/4;
//     int sum2=55;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum=sum+arr[i];
//     }
//     int ans=sum2-sum;
//     cout<<ans;
//     return 0;
// }

//5. find duplicate numbers in an array 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={1,2,3,6,5,6,7,8,10};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j+1]){//xor use 
//                 cout<<arr[i];
//                 break;
//             }
//     } } 
//     return 0;
// }

//6. leetcode 287 space optimal
// #include<bits/stdc++.h>
// using namespace std;
// int finduplicate(vector<int>& arr){
//     int slow=arr[0],fast=arr[0];
//     do{
//         slow=arr[slow];
//         fast=arr[arr[fast]];
//     }
//     while(slow!=fast);
//     slow=arr[0];
//     while(slow!=fast){
//         slow=arr[slow];
//         fast=arr[fast];
//     }
//     return slow;
// }
// int main(){
//     vector<int> arr{1,3,4,2,2};
//     cout<<finduplicate(arr);
//     return 0;
// }

//7.find unique numbers 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={2,2,3,6,4,6,8,10,10};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         bool flag=false;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){ //ans=ans^arr[i];only one loop
//                 flag=true;      //also arr[i]=arr[j]=-1; and then print value greater than zero
//                 i++;
//                 j=i+1;
//             }   
//     }
//     if(flag==false){
//         cout<<arr[i]<<" ";
//     }
//     }
//     return 0;
// }

//8.method 2
// #include<iostream>
// #include<vector>
// using namespace std;
// int unique(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];
//     }
//     return xorsum;
// }
// int main(){
//     int arr[]={1,3,2,3,1,4,4};
//     cout<<unique(arr,7);
//     return 0;
// }

//9.unuiqe two number
// #include<iostream>
// #include<vector>
// using namespace std;
// int setbit1(int n,int pos){  
//    return(n&(1<<pos))!=0;
// }
// void uniquetwo(int arr[],int n){
//     int xorsum=0;
//     for(int i=0;i<n;i++){
//         xorsum=xorsum^arr[i];
//     }
//     int tempxor=xorsum;
//     int bit=0;
//     int pos=0;
//     while(bit!=1){
//         bit=xorsum&1;
//         pos++;
//         xorsum=xorsum>>1;
//     }
//     int newxor=0;
//     for(int i=0;i<n;i++){
//         if(setbit1(arr[i],pos-1)){
//             newxor=newxor^arr[i];
//         }
//     }
//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
// }
// int main(){
//     int arr[]={1,3,2,3,4,4};
//     uniquetwo(arr,6);
//     return 0;
// }

//10.unique number in repeting 3time 
// #include<iostream>
// #include<vector>
// using namespace std;
// bool getbit1(int n,int pos){
//     return (n & (1<<pos))!=0;
// }
// int setbit1(int n,int pos){  
//    return(n|(1<<pos));
// }
// int uniquethrice(int arr[],int n){
//     int result=0;
//     for(int i=0;i<32;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             if(getbit1(arr[j],i)){
//                 sum++;
//             }
//         }
//         if(sum%3!=0){
//             result=setbit1(result,i);
//         }
//     }
//     return result;
// }
// int main(){
//     int arr[]={1,3,1,3,2,3,1,4,4,4};
//     cout<<uniquethrice(arr,10);
//     return 0;
// }

//11.to find max and min
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/4;
//     int mx =arr[0];
//     for(int i=0;i<n;i++){
//         if (mx<arr[i]){
//         mx=arr[i];
//     }
//     }
//     cout<<mx;
//     return 0;
// }

//12. max till i
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int a[n]={1,3,3,6,5};
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         mx=max(mx,a[i]);
//         cout<<mx<<" ";
//     }
//     return 0;
// }

//13. count number of elements in arr greater than x
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,};
//     int n=sizeof(arr)/4;
//     int count=0;
//     int x=3;
//     for(int i=0;i<n;i++){
//         if (x<arr[i]){
//        count++;
//     }
//     }
//     cout<<count;
//     return 0;
// }

//14. reverse an array from i to j index 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/4;
//     int a=1,b=3;
//     for(int i=a,j=b;i<=j;i++,j--){
//              swap(arr[i],arr[j]);
//        }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//15.wap to copy content using another arr in reverse
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,};
//     int n=sizeof(arr)/4;
//     int brr[n];
//     for(int i=0;i<n;i++){
//         brr[i]=arr[n-1-i];
//     }
//        for(int i=0;i<n;i++){
//        cout<<brr[i]<<" ";
//        }
//      return 0;
//  }

//16.same array method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,};
//     int n=sizeof(arr)/4;
//     int temp;
//     int i=0,j=n-1;
//     while(i<j){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
//        for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//        }
//      return 0;
//  }

//17. 2nd largest number in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={6,2,5,3,4,4,5,6};
//     int n=sizeof(arr)/4;
//     int mx =INT_MIN;
//     int smx =INT_MIN;
//     for(int i=0;i<n;i++){
//         if (mx<arr[i]){
//            smx=mx;
//            mx=arr[i];
//         }
//         if(smx<arr[i] && mx!=arr[i]){
//             smx=arr[i];
//         }
//     }
//     cout<<smx;
//     return 0;
// }

//18. to print all the zero at the end of an array and remaining element at starting no need of sorting
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10]={5,0,3,2,4,0,0,0,6,0};
//     int ans[10],idx=0,n=10;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             ans[idx]=arr[i];
//             idx++;
//         }
//     }
//     while(idx!=n){
//         ans[idx]=0;
//         idx++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

//19. to move in same place 
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10]={5,0,3,2,4,0,0,0,6,0};
//     int n=10;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]==0){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//20. to sort and then print zero at end 
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10]={5,0,3,2,4,0,0,0,6,0};
//     int n=10;
//      for(int i=0;i<n;i++){
//         int j=i;
//         while(j>=1 && arr[j]<arr[j-1]){
//             int temp=arr[j];
//             arr[j]=arr[j-1];
//             arr[j-1]=temp;
//             j--;
//         }  
// }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]==0){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//      cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//21. find total no pf pair whose sum is equal to target 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={1,2,3,4,1,2};
//     int totalways=0,x=6;
//     for(int i=0;i<=5;i++){
//         for(int j=i+1;j<=5;j++){
//             for(int k=j+1;k<=5;k++) // for two pairs two loop runs
//             if(arr[i]+arr[j]+arr[j]==x){
//                 totalways++;
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[j];
//                 cout<<endl;;
//             }
//        }
//     }
//     return 0;
// }

//22.count pair equal to x variation 1 different index 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={-2,0,1,3,6,8,11,12};
//     int x=12,n=8;
//     int i=0,j=n-1;
//     int ans=0;
//     while(i<j){
//         if(arr[i]+arr[j]==x){
//         ans+=1;
//         i++;
//         j--;}
//         else if(arr[i]+arr[j]<x) i++;
//         else j--;
//     }
//     cout<<ans;
//     return 0;
//}

//23. last occcurence and count  of element x in a array 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v{1,2,4,4,5,6};
//     int x=4,occ=-1,count=0;
//     for(int i=0;i<v.size();i++){//reverse loop and break or reverse loop then 1st occurnce or forward loop break for 1st occurence 
//         if(v[i]==x) {
//             occ=i;
//             count++;
//     }
//     }
//     cout<<occ<<" "<<count;
//     return 0;
// }

//24.first repeating elemnt with smallest idx
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     int a[n]={1,3,6,3,6,5};
//     const int N=1e5+2;
//     int idx[N];
//     for(int i=0;i<N;i++){
//         idx[i]=-1;
//     }
//     int minidx=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(idx[a[i]]!=-1){
//             minidx=min(minidx,idx[a[i]]);
//         }
//         else idx[a[i]]=i;
//     }
//     if(minidx==INT_MAX) cout<<"-1";
//     else cout<< minidx<<endl;
//     return 0;
// }

//25.prefix sum without using another array 
// #include<iostream>
// #include<vector>
// using namespace std;
// void prefixsum(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//         v[i]=v[i-1]+v[i];
//     } 
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     vector<int> v{3,4,5,7,9,2,6,8,12};
//     prefixsum(v);
//     return 0;
// }

//26. divide in two part such that two part have equal sum 
// #include<iostream>
// #include<vector>
// using namespace std;
// bool prefixsuffixsum(vector<int> &v){
//     int totalsum=0;
//     for(int i=0;i<v.size();i++){
//         totalsum+=v[i];
//     }
//     int prefixsum=0;
//     for(int i=0;i<v.size();i++){
//         prefixsum+=v[i];
//         int suffixsum=totalsum-prefixsum;
//         if(suffixsum==prefixsum) return true;
//     }
//     return false;   
// }
// int main(){
//     vector<int> v{6,2,4,3,1};
//     cout<<prefixsuffixsum(v)<<endl;
//     return 0;
// }

//27.optimised way if array is sorted
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={-2,-1,0,3,6,8,11,12};
//     int x=14,n=8;
//     int i=0,j=n-1;
//     bool found=false;
//     while(i<j){
//         if(arr[i]+arr[j]==x){
//         found=true;
//         cout<<arr[i]<<" "<<arr[j];
//         break;}
//         else if(arr[i]+arr[j]<x) i++;//triplet arr[i]+arr[j]+arr[k]=x using three loop 
//         else j--;
//     }
//     if(found==true) cout <<"yes";
//     else cout<<"no";
//     return 0;
// }

//28.print an array of n**2
// #include <iostream>
// using namespace std;
// int main() {
//     int n=5, i;
//     int arr[100];   // array size limit
//     for (i = 1; i <= n; i++) {
//         arr[i-1] = i * i;   // store square
//     }
//     for (i = 0; i < n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//29.return square of element of array in increasing order 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={-4,-3,-1,0,2,10};
//     int n=6;
//     int result[n],i=0,j=n-1,k=n-1;
//     while(i<=j && k>=0){
//         if(abs(arr[i]>arr[j])){
//         result[k]=arr[i]*arr[i];
//         i++;
//         k--;}
//         else{ result[k]=arr[j]*arr[j];
//         j--;
//         k--;
//         }
//     }
//     for(int i=0;i<n;i++) cout<<result[i]<<" ";
//     return 0;
// }

//30.to check array is palindrome
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[6]={1,2,3,4,2,1};
//     int brr[6];
//     int n=6;
//     for(int i=0;i<n;i++){
//         if (brr[i]=arr[n-1-i]){
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]!=brr[i]){
//             cout<<"no";
//             return 0;
//         }
//     }
//     printf("palindrome");
//     return 0;
// }

//31.checking array is sorted of not 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v{1,2,3,4,5,6};
//     bool flag=true;
//     for(int i=0;i<v.size();i++){
//         if(v[i]<=v[i-1]) {
//             flag=false;
//     }
//     }
//     if(flag==true) cout <<"yes";
//     else cout<<"no";
//     return 0;
// }

//32.sort odd even elemnt relative order not matter 
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort(vector<int> &v){
//     int lptr=0,rptr=v.size()-1;
//     while(lptr<rptr){
//         if(v[lptr]%2==1 && v[rptr]%2==0){
//             swap(v[lptr],v[rptr]);
//             lptr++;
//             rptr--;
//         }
//         if(v[lptr]%2==0){
//             lptr++;}
//         if(v[rptr]%2==1){
//             rptr--;}
//     }
// }
// int main(){
//     vector<int> v{3,4,5,7,9,2,6,8,12};
//     sort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

//33.sort an array of 0 nd 1
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,0,0,1,1,0,1,1};
//     int n=sizeof(arr)/4;
//     int count=0;
//     for(int i=0;i<n;i++){
//        if(arr[i]==0) count++;
//     }
//     for(int i=0;i<n;i++){
//        if(i<count) arr[i]=0;
//        else arr[i]=1;
//     }
//     for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//34.sort 0 1 2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,0,0,2,2,1,2,1,2,0,1,1,2};
//     int n=sizeof(arr)/4;
//     int countzero=0;
//     int countone=0;
//     for(int i=0;i<n;i++){
//        if(arr[i]==0) countzero++;
//     }
//      for(int i=0;i<n;i++){
//        if(arr[i]==1) countone++;
//     }
//     for(int i=0;i<n;i++){
//        if(i<countzero) arr[i]=0;
//        else if(i>=countzero && i<countone+countzero) arr[i]=1;
//        else arr[i]=2;
//     }
//     for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//35.intersection of two sorted array 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[]={1,2,2,2,3,4};
//     int arr2[]={2,2,3,3};
//     int n1=sizeof(arr1)/4,n2=sizeof(arr2)/4;
//     int i=0,j=0;
//     while(i<n1 && j<n2){
//         if(arr1[i]<arr2[j]) i++;
//         else if(arr1[i]>arr2[j]) j++;
//         else {
//             cout<<arr1[i]<<" ";
//             i++;
//             j++;
//         }
//     }
//     return 0;
// }

//36. given two vectors arr1 arr2 of size m and n sorted in increasing order merge two array in sorted 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[]={1,2,3,4};
//     int arr2[]={0,1,3,8,11,12,15,18};
//     int m=4,n=8;
//     int result[m+n];
//     int i=0,j=0,k=0;// iterate arr1 arr2 and result
//     while(i<m and j<n){
//     if(arr1[i]<arr2[j]){
//         result[k]=arr1[i];
//         k++;
//         i++;
//     }
//     else {
//         result[k]=arr2[j];
//         k++;
//         j++;
//     }
// }
//     while(i<m){ 
//         result[k]=arr1[i];
//         k++;
//         i++;
// }
//     while(j<n){ 
//         result[k]=arr2[j];
//         k++;
//         j++;
// }
//     for(int i=0;i<m+n;i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }

//37.target difference is x found yes or no 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={5,10,15,20,25};
//     int x=5,n=5;
//     int i=0,j=1;
//     bool found=false;
//     while(i<n && j<n){
//         if(abs(arr[i]-arr[j])==x){
//         found=true;
//         break;}
//         else if(abs(arr[i]-arr[j])<x) j++;
//         else i++;
//     }
//     if(found==true) cout <<"yes";
//     else cout<<"no";
//     return 0;
// }

//38. to form a no using digit 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num=0,digit[10],nod=4;
//     for(int i=0;i<nod;i++){
//         cout<<i;
//         cin>>digit[i];
//     }
//     int i=0;
//     while(i<nod){
//         num=num+digit[i]*pow(10,i);
//         i++;
//     }
//    cout<<num;
//     return 0;
// }

//39.longest arthimetic array
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n=4;
//     int a[n]={9,7,5,3};
//     int ans=2,d=a[1]-a[0];
//     int j=2;
//     int curr=2;
//     while(j<n){
//         if(a[j]-a[j-1]==d) curr++;
//         else {
//             d=a[j]-a[j-1];
//             curr=2;
//         }
//         ans=max(ans,curr);
//         j++;
//     }
//     cout<<ans<<" ";
//     return 0;
// }

//40.fibonacci in array
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[1000];
//     arr[0]=0;
//     arr[1]=1;
//     for(int i=2;i<=n-1;i++){
//         arr[i]=arr[i-1]+arr[i-2];
//     }
//     cout<<arr[n-1];
//     return 0;
// }

//41.rotate array by 1
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,5,1,8};
//     int n=5;
//     int last=arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         arr[i+1]=arr[i];
//        }
//         arr[0]=last;
//     for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//42. smallest positive missing no
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int a[n]={-20,0,1,-2,3,5,-10};
//     const int N=1e6+2;
//     bool check[N];
//     for(int i=0;i<N;i++){
//         check[i]=false;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]>=0){
//             check[a[i]]=1;
//         }
//     }
//     int ans=-1;
//     for(int i=1;i<N;i++){
//         if(check[i]==false){
//             ans=i;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

//43.add two array
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
//     int i = n - 1;
//     int j = m - 1;
//     int carry = 0;
//     vector<int> ans;
//     while (i >= 0 || j >= 0 || carry) {
//         int sum = carry;
//         if (i >= 0)
//             sum += a[i--];
//         if (j >= 0)
//             sum += b[j--];
//         ans.push_back(sum % 10);
//         carry = sum / 10;
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int main(){
//     int n=4,m=1;
//     vector<int> a={1,2,3,4};
//     vector<int> b={9};
//      vector<int> result = findArraySum(a, n, b, m);
//     for (int digit : result)
//         cout << digit;
//     cout << endl;
// }

//44. record breaker 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int a[n+1]={1,2,0,7,2,0,2,2};
//     a[n]=-1;
//     if(n==1){
//         cout<<"1";
//         return 0 ;
//     }
//     int ans=0;
//     int mx=-1;
//     for(int i=0;i<n;i++){
//         if(a[i]>mx && a[i]>a[i+1]){
//             ans++;
//             mx=max(mx,a[i]);
//         }
//     }
//     cout<<ans<<endl;
// }

//45.max word in array
//#include<iostream>
// using namespace std;
// int main(){
//      int n=9;
//      char arr[n+1]={"do or die"};
//      int i=0;
//      int currlen=0,maxlen=0;
//      int st=0,maxst=0;
//      while(1){
//         if(arr[i]==' ' || arr[i]=='\0'){
//             if(currlen>maxlen){
//                 maxlen=currlen;
//                 maxst=st;
//             }
//             st=i+1;
//             currlen=0;
//         }
//         else currlen++;
//         if(arr[i]=='\0') break;
//         i++;
//      }
//      cout<<maxlen<<endl;
//      for(int i=0;i<maxlen;i++){
//         cout<<arr[i+maxst];
//      }
// }

//46.subset of a set
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(int arr[],int n){
//     for(int i=0;i<(1<<n);i++){
//         for(int j=0;j<n;j++){
//             if(i&(1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[]={1,2,3};
//     subset(arr,3);
//     return 0;
// }

//47. distinct permutation of a no
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> ans;
// void permute(vector<int> &a,int idx){
//      if(idx==a.size()){
//         ans.push_back(a);
//         return ;
//      }
//      for(int i=idx;i<a.size();i++){
//         swap(a[i],a[idx]);
//         permute(a,idx+1);
//         swap(a[i],a[idx]);
//      }
//      return ;
// }
// int main(){
//     vector<int> a{1,2,3};
//     permute(a,0);
//     for(auto v:ans){
//         for(auto i:v){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//48. unique permutation
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void helper(vector<int> a,vector<vector<int>> &ans,int idx){
//       if(idx==a.size()){
//         ans.push_back(a);
//         return ;
//      }
//      for(int i=idx;i<a.size();i++){
//         if(i!=idx and a[i]==a[idx]){
//             continue;
//         }
//         swap(a[i],a[idx]);
//         helper(a,ans,idx+1);
//      }
//  }
// vector<vector<int>> permutation(vector<int> nums){
//     sort(nums.begin(),nums.end());
//     vector<vector<int>> ans;
//     helper(nums,ans,0);
//     return ans;
// }
// int main(){
//   vector<int> a{1,2,2};
//     vector<vector<int>> res=permutation(a);
//     for(auto v:res){
//         for(auto i:v){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//49.no form divisible by 3
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void computesubarray(vector<int> arr,int k){
//     pair<int,int> ans;
//     int sum=0;
//     for(int i=0;i<k;i++){
//         sum+=arr[i];
//     }
//     bool found=false;
//     if(sum%3==0){
//         ans=make_pair(0,k-1);
//         found=true;
//     }
//     for(int j=k;j<arr.size();j++){
//         if(found==true) break;
//         sum=sum+arr[j]-arr[j-k];
//         if(sum%3==0){
//             ans=make_pair(j-k+1,j);
//             found=true;
//         }
//     }
//     if(!found){
//         ans=make_pair(-1,0);
//     }
//     if(ans.first==-1){
//         cout<<"nosubarray";
//     }
//     else{
//         for(int i=ans.first;i<=ans.second;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     vector<int> arr{84,23,45,12,56,82};
//     int k=3;
//     computesubarray(arr,k);
//     return 0;
// }

//50.max number of perfect num in len k
// #include<iostream>
// #include<math.h>
// #include<vector>
// using namespace std;
// bool isnumber(int n){
//     int sum=1;
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i==0){
//             if(i==n/i) sum+=i;
//             else sum+=i+n/i;
//         }
//     }
//     if(sum==n && n!=1) return true;
//     return false;
// }
// int maxsum(int arr[],int n,int k){
//     if(n<k) {
//         return -1;
//     }
//     int res=0;
//     for(int i=0;i<k;i++){
//         res+=arr[i];
//     }
//     int sum=res;
//     for(int i=k;i<n;i++){
//         sum+=arr[i]-arr[i-k];
//         res=max(res,sum);
//     }
//     return res;
// }
// int maxnumperfect(int arr[],int n,int k){
//     for(int i=0;i<n;i++){
//         if(isnumber(arr[i])) arr[i]=1;
//         else arr[i]=0;
//     }
//     return maxsum(arr,n,k);
// }
// int main(){
//     int arr[]={28,2,3,6,496,99,8128,24};
//     int k=4;
//     int n=8;
//     cout<<maxnumperfect(arr,n,k);
//     return 0;
// }

//51.sum of all subarray 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     int a[n]={1,2,3};
//     int curr=0;
//     for(int i=0;i<n;i++){
//         curr=0;
//         for(int j=i;j<n;j++){
//             curr+=a[j];
//             cout<<curr<<endl;
//         }
//     }
//     return 0;
// }

//52.subarray with given sum
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6,s=12;
//     int a[n]={1,1,2,3,7,5};
//     int i=0,j=0,st=-1,en=-1,sum=0;
//     while(j<n &&sum+a[j]<=s){
//         sum+=a[j];
//         j++;
//     }
//     if(sum==s){
//         cout<<i+1<<" "<<j;
//         return 0;
//     }
//     while(j<n){
//         sum+=a[j];
//         while(sum>s){
//             sum-=a[i];
//             i++;
//         }
//         if(sum==s){
//             st=i;
//             en=j;
//             break;
//         }
//         j++;
//     }
//     cout<<st<<" "<<en;
// }

//53. maximum sum array
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     int a[n]={1,2,3};
//     int mxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//                 cout<<a[k]<<" ";
//             }
//             cout<<endl;
//             mxsum=max(mxsum,sum);
//         }
//     }
//     cout<<mxsum;
//     return 0;
// }

//54. approach 2 cummulative sum approach
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     int arr[n]={1,2,3};
//     int cumsum[n+1];
//     cumsum[0]=0;
//     for(int i=1;i<=n;i++){
//         cumsum[i]=cumsum[i-1]+arr[i-1];
//     }
//     int mxsum=INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         mxsum=max(mxsum,cumsum[i]);
//         for(int j=1;j<=i;j++){
//             sum=cumsum[i]-cumsum[j-1];
//             mxsum=max(sum,mxsum);
//         }
//     }
//     cout<<mxsum;
//     return 0;
// }

//55. approach 3 kadane algorithm
// #include<iostream>
// using namespace std;
// int main(){
//      int n=3;
//      int arr[n]={1,2,3};
//     int currsum=0;
//     int mxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         if(currsum<0){
//             currsum=0;
//         }
//         mxsum=max(mxsum,currsum);
//     }
//     cout<<mxsum;
//     return 0;
// }

//56.max diff betwwen 2 ele j>i
// #include <iostream>
// #include <climits>
// using namespace std;
// int maxDiff(int arr[], int n) {
//     int minElement = arr[0];
//     int ans = arr[1] - arr[0];
//     for (int i = 1; i < n; i++) {
//         ans = max(ans, arr[i] - minElement);
//         minElement = min(minElement, arr[i]);
//     }
//     return ans;
// }
// int main() {
//     int arr[] = {2, 3, 10, 6, 4, 8, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << maxDiff(arr, n);
//     return 0;
// }

//57. max sum circular subarray
// #include<iostream>
// using namespace std;
// int kadane(int arr[],int n){
//     int currsum=0;
//     int mxsum=INT_MIN;
//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         if(currsum<0){
//             currsum=0;
//         }
//         mxsum=max(mxsum,currsum);
//     }
//     return mxsum;
// }
// int main(){
//      int n=7;
//      int arr[n]={4,-4,6,-6,10,-11,12};
//      int wsum;
//      int nonwsum;
//      nonwsum=kadane(arr,n);
//      int totalsum=0;
//      for(int i=0;i<n;i++){
//         totalsum+=arr[i];
//         arr[i]=-arr[i];
//      }
//      wsum=totalsum+kadane(arr,n);
//      cout<<wsum;
//      return 0;
// }

//58. maximum sum subarray of size k having sum less than x
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void maxsubsum(int arr[],int n,int k,int x){
//     int sum=0;int ans=0;
//     for(int i=0;i<k;i++){
//         sum+=arr[i];
//     }
//     if(sum<x) ans=sum;
//     for(int i=k;i<n;i++){
//         sum=sum-arr[i-k];
//         sum=sum+arr[i];
//          if(sum<x){
//             ans=max(ans,sum);
//         }
//     }
//     cout<<ans;
// }
// int main(){
//     int arr[]={7,5,4,6,8,9};
//     maxsubsum(arr,6,3,20);
//     return 0;
// }

//59.minimum sum subarray have sum greater than x
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int minsubsum(int arr[],int n,int x){
//     int sum=0;int minlen=n+1,st=0,end=0;
//     while(end<n){
//         while(sum<=x && end <n){
//             sum+=arr[end++];
//         }
//         while(sum>x && st<n){
//             if(end-st<minlen){
//                 minlen=end-st;
//             }
//             sum-=arr[st++];
//         }
//     }
//     return minlen;
// }
// int main(){
//     int arr[]={1,4,45,6,10,19};
//     int n=6;
//    int minlen= minsubsum(arr,n,51);
//    if(minlen==n+1) cout<<"no subarray";
//     else cout<<minlen;
//     return 0;
// }

//60.find occ from 1 to n in an array 
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> arr={3,2,5,3,1,2,3,7};
//     int n=8;
//     vector<int> freq(n + 1, 0);
//     for (int i = 0; i < n; i++)
//         freq[arr[i]]++;
//     for (int i = 1; i <= n; i++)
//         cout << i << " -> " << freq[i] << endl;
//     return 0;
// }

//61.find occ in place 
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[8]={1,2,3,3,3,2,5,7};
//    int n=8;
//     for(int i = 0; i < n; i++) {
//         arr[(arr[i] - 1) % n] += n;
//     }
//     for(int i = 0; i < n; i++) {
//         cout << i + 1 << " -> " << arr[i] / n << endl;
//     }
//     return 0;
// }

//62.find missing and repeating 
// #include <iostream>
// using namespace std;
// int main() {
//     int n=8;
//     int arr[8]={1,2,2,4,5,6,7,8};
//     for (int i = 0; i < n; i++) {
//         arr[i]--;        
//     }
//     for (int i = 0; i < n; i++) {
//         arr[arr[i] % n] += n;
//     }
//     int missing = -1, repeating = -1;
//     for (int i = 0; i < n; i++) {
//         int freq = arr[i] / n;
//         if (freq == 0)
//             missing = i + 1;
//         else if (freq == 2)
//             repeating = i + 1;
//     }
//     cout << "Missing Number = " << missing << endl;
//     cout << "Repeating Number = " << repeating << endl;
//     return 0;
// }

//63. leetcode 11 container with most water 
// #include<bits/stdc++.h>
// using namespace std;
// int maxArea(vector<int> &heights){
//     int maxwater=0;
//     for(int i=0;i<heights.size();i++){
//         for(int j=i+1;j<heights.size();j++){
//             int w=j-1;
//             int ht=min(heights[i],heights[j]);
//             int currwater=w*ht;
//             maxwater=max(maxwater,currwater);
//         }
//     }
//     return maxwater;
// }
// int main(){
//     vector<int> heights{1,8,6,2,5,4,8,3,7};
//     cout<<maxArea(heights);
//     return 0;
// }

//64. leetcode 238 product of array except self 
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> productExceptSelf(vector<int> &nums){
//     int n=nums.size();
//     vector<int> ans(nums.size(),1);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                 ans[i]*=nums[j];
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums{1,2,3,4};
//     vector<int> res=productExceptSelf(nums);
//     for(int x:res){
//         cout<<x<<" ";
//     }
//     return 0;
// }

//65. leetcode 238 time optimal
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> productExceptSelf(vector<int> &nums){
//     int n=nums.size();
//     vector<int> ans(n,1);
//     vector<int> prefix(n,1);
//     vector<int> suffix(n,1);
//     for(int i=1;i<n;i++){
//         prefix[i]=prefix[i-1]*nums[i-1];
//     }
//     for(int i=n-2;i>=0;i--){
//         suffix[i]=suffix[i+1]*nums[i+1];
//     }
//     for(int i=0;i<n;i++){
//         ans[i]=prefix[i]*suffix[i];
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums{1,2,3,4};
//     vector<int> res=productExceptSelf(nums);
//     for(int x:res){
//         cout<<x<<" ";
//     }
//     return 0;
// }

//66. trapping rain water space optimal
// #include<bits/stdc++.h>
// using namespace std;
// int trap(vector<int> &height){
//     int n=height.size();
//     int l=0,r=n-1;
//     int lmax=0, rmax=0;
//     int ans=0;
//     while(l<r){
//            lmax=max(lmax,height[l]);
//            rmax=max(rmax,height[r]);
//     if(lmax<rmax){
//           ans+=lmax-height[l];
//           l++;
//     }
//     else{
//          ans+=rmax-height[r];
//           r--;
//     }
// }
//     return ans;
// }
// int main(){
//     vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
//     cout<<trap(height);
//     return 0;
// }

//67. diagnal sum 
// #include<bits/stdc++.h>
// using namespace std;
// int diagnalsum(int mat[][4],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j) sum+=mat[i][j];
//             else if(j==n-i-1) sum+=mat[i][j];
//         }
//     }
//     return sum;
// }
// int main(){
//     int mat[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int n=4;
//     cout<<diagnalsum(mat,n)<<endl;
//     return 0;
// }

//68. diagnal sum method 2
// #include<bits/stdc++.h>
// using namespace std;
// int diagnalsum(int mat[][4],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=mat[i][i];
//             if(i!=n-i-1) sum+=mat[i][n-i-1];
//     }
//     return sum;
// }
// int main(){
//     int mat[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int n=4;
//     cout<<diagnalsum(mat,n)<<endl;
//     return 0;
// }

//69. leetcode 15 3sum
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> threesum(vector<int> & nums){
//     int n=nums.size();
//     vector<vector<int>> ans;
//     set<vector<int>> s;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(nums[i]+nums[j]+nums[k]==0){
//                     vector<int> trip={nums[i],nums[j],nums[k]};
//                     sort(trip.begin(),trip.end());
//                     if(s.find(trip)==s.end()){
//                         s.insert(trip);
//                         ans.push_back(trip);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums{-1,0,1,2,-1,-4};
//     vector<vector<int>> res=threesum(nums);
//     for(vector<int> row:res){
//         for(int ele:row){
//            cout<<ele<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

//70. leetcode 15 time optimal
//  #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> threesum(vector<int> & nums){
//     int n=nums.size();
//     set<vector<int>> uniquetriplets;
//     for(int i=0;i<n;i++){
//         int tar=-nums[i];
//         set<int> s;
//         for(int j=i+1;j<n;j++){
//             int third=tar-nums[j];
//             if(s.find(third)!=s.end()){
//                 vector<int> trip={nums[i],nums[j],third};
//                 sort(trip.begin(),trip.end());
//                 uniquetriplets.insert(trip);
//             }
//             s.insert(nums[j]);
//         }
//     }
//     vector<vector<int>> ans(uniquetriplets.begin(),uniquetriplets.end());
//     return ans;
// }
// int main(){
//     vector<int> nums{-1,0,1,2,-1,-4};
//     vector<vector<int>> res=threesum(nums);
//     for(vector<int> row:res){
//         for(int ele:row){
//            cout<<ele<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }
