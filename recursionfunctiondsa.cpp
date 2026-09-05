//1.number to print 1 to n using recursion nd n to 1 or together 
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     print(n-1);
//     cout<<n<<" ";// for n to 1 print after  
// }
// int main(){
//     print(6);
//     return 0;
// }

//2.to print sum off n numbers 
// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans=n + print(n-1);
//     return ans; 
// }
// int main(){
//     cout<<print(6);
//     return 0;
// }

//3.to print sum of n*2
// #include <iostream>
// using namespace std;
// int sumOfSquares(int n) {
//     if (n == 1)
//         return 1;
//     return n * n + sumOfSquares(n - 1);
// }
// int main() {
//     cout << sumOfSquares(3);
//     return 0;
// }

//4.num n and value k print n*k
// #include<iostream>
// using namespace std;
// void f(int num ,int k){
//     if(k==0) return ;
//     f(num,k-1);
//     cout<<(num*k)<<" ";
// }
// int main(){
//     f(8,5);
//     return 0;
// }

//5. sum till n but alternate sign 
// #include<iostream>
// using namespace std;
// int f(int n){
//     if(n==0) return 0;
//     return f(n-1)+((n%2==0)?(-n):(n));
// }
// int main(){
//     cout<<f(5);
//     return 0;
// }

//6.sum array
// #include <iostream>
// using namespace std;
// int sumArray(int arr[], int n) {
//     if (n == 0)
//         return 0;
//     return arr[n - 1] + sumArray(arr, n - 1);
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Sum = " << sumArray(arr, n);
//     return 0;
// }

//7.factorial
// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans=n*print(n-1);
//     return ans; 
// }
// int main(){
//     cout<<print(5);
//     return 0;
// }

//8.a raised to b power 
// #include<iostream>
// using namespace std;
// int power(int n,int b){
//     if(b==0){
//         return 1;
//     }
//     int ans=n * power(n,b-1);
//     return ans; 
// }
// int main(){
//     cout<<power(2,6);
//     return 0;
// }

//9.using log
// #include<iostream>
// using namespace std;
// int powerlog(int n,int b){
//     if(b==0){
//           return 1;
//     }
//     int ans=powerlog(n,b/2);
//     if(b%2==0){
//         return ans*ans;
//     }
//     else {
//         return ans*ans*n;
//     }
// }
// int main(){
//     cout<<powerlog(6,3);
//     return 0;
// }

//10.power of 2
// #include <iostream>
// using namespace std;
// int powerOfTwo(int n) {
//     if (n == 0)
//         return 1;
//     return 2 * powerOfTwo(n - 1);
// }
// int main() {
//     cout << powerOfTwo(10);
//     return 0;
// }

//11.fibonacci 
// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n==1 or n==0){
//         return n;
//     }
//     else return print(n-1)+print(n-2); 
// }
// int main(){
//     for(int i=0;i<5;i++){
//         cout<<print(i)<<" ";
//     }
//     return 0;
// }

//12.no is palindrome or not 
// #include<iostream>
// using namespace std;
// int f(int n,int rev){
//    if(n==0) return rev;
//    return f(n/10,rev*10+n%10);
// }
// bool ispalin(int n){
//     return n==f(n,0);
// }
// int main(){
//     int num=12621;
//     if(ispalin(num)) cout<<1;
//     else cout<<0;
//     return 0;
// }

//13.armstrong number 
// #include<iostream>
// using namespace std;
// int powerlog(int n,int b){
//     if(b==0){
//           return 1;
//     }
//     int ans=powerlog(n,b/2);
//     if(b%2==0){
//         return ans*ans;
//     }
//     else {
//         return ans*ans*n;
//     }
// }
// int f(int n,int d){
//     if(n==0) return 0;
//     return powerlog(n%10,d)+f(n/10,d);
// }
// int main(){
//     int n=153,noofdigit=0,temp=n;
//     while(temp>0){
//         temp=temp/10;
//         noofdigit++;
//     }
//     int result=f(n,noofdigit);
//     cout<<result;
//     if(result==n) cout<<"yes";
//     else cout<<"no";
//     return 0;
// }

//14.2 steps stair problem
// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n==1 or n==2){
//         return n;
//     }
//     else return print(n-1)+print(n-2); 
// }
// int main(){
//         cout<<print(5)<<" ";
//     return 0;
// }

//15.3 steps stair problem
// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n==0){
//         return 1;
//     }
//     else if(n<0) return 0;
//     else return print(n-1)+print(n-2)+print(n-3); 
// }
// int main(){
//     cout<<print(5);
//     return 0;
// }

//16.frog jump(n stones height is hi minium cost hi-hj)
// #include<iostream>
// using namespace std;
// int f(int *h, int n,int i){
//     if(i==n-1) return 0;
//     if(i==n-2) return f(h,n,i+1)+abs(h[i]-h[i+1]);
//     return min(f(h,n,i+1)+abs(h[i]-h[i+1]),f(h,n,i+2)+abs(h[i]-h[i+2]));
// }
// int main(){
//     int arr[]={10,30,40,20},n=4;
//     cout<<f(arr,n,0);
//     return 0;
// }

//17. to print pascal trainlge of numbers and alphabets 
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     int ans= n*fact(n-1);
//     return ans ;
//     }
// int ncr(int n,int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }
// int main(){
//     int n=3,r=3;
//     for(int i=0;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//            cout<<" ";
//         }
//         for(int j=0;j<=i;j++){
//             int x=ncr(i,j);
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//18..to caluclate hcf of three numbers 
// #include<iostream>
// using namespace std;
// int gcd(int a ,int b, int c){
//     int hcf=1;
//     for(int i=min(a,min(b,c));i>=1;i--){
//         if(a%i==0 && b%i==0 && c%i==0){
//             hcf=i;
//             break;
//         }
//     }
//     return hcf;
// }
// int main(){
//     int a=26,b=2,c=13;
//     int hcf=gcd(a,b,c);
//     cout<<hcf<<" ";
//     return 0;
// }

//19.hcf of two number
// #include<iostream>
// using namespace std;
// int gcd(int a ,int b){
//     int hcf=1;
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i==0 && b%i==0){
//             hcf=i;
//             break;
//         }
//     }
//     return hcf;
// }
// int main(){
//     int a=26,b=2;
//     int hcf=gcd(a,b);
//     cout<<hcf<<" ";
//     return 0;
// }

//20.method 2
// #include <iostream>
// using namespace std;
// int hcf(int a, int b) {
//     if (b == 0)
//         return a;
//     return hcf(b, a % b);
// }
// int main() {
//     int a=25,b=20;
//     cout << "HCF = " << hcf(a, b);
//     return 0;
// }

// 21.lcm 
// #include<bits/stdc++.h>
// using namespace std;
// int gcdrec(int a,int b){
//     if(b==0) return a;
//     return gcdrec(b,a%b);
// }
// int lcm(int a,int b){
//     int gcd=gcdrec(a,b);
//     return (a*b)/gcd;
// }
// int main(){
//     cout<<lcm(20,24);
//     return 0;
// }

//22.zig zag pattern 
// #include <iostream>
// using namespace std;
// void tower(int n) {
//     if (n == 0) {
//         return ;
//     }
//     cout<<n;
//     tower(n-1);
//     cout<<n;
//     tower(n-1);
//     cout<<n;
//     return;
// }
// int main() {
//     int n=3;
//     tower(n);
//     return 0;
// }

//23.own pow function
// #include <iostream>
// using namespace std;
// int power(int base, int exp) {
//     int result = 1;
//     for (int i = 1; i <= exp; i++) {
//         result = result * base;
//     }
//     return result;
// }
// int main() {
//     cout<<power(2,3);
//     return 0;
// }

//24.sqr root of a number 
// #include <iostream>
// using namespace std;
// float findSquareRoot(float num) {
//     float sqrt = num / 2;
//     float temp;
//     do {
//         temp = sqrt;
//         sqrt = (temp + num / temp) / 2;
//     } while (temp != sqrt);
//     return sqrt;
// }
// int main() {
//     float num=8;
//     if (num < 0)
//         cout<<"Square root not possible.";
//     else
//         cout<<findSquareRoot(num);
//     return 0;
// }

// 25. prime no upto n
// #include<iostream>
// #include<vector>
// using namespace std;
// bool checkprime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// void getprimes(int n){
//     for(int i=2;i<=n;i++){
//         if(checkprime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
// getprimes(20);
// cout<<checkprime(20);
//     return 0;
// }

// 26. sieve of erathoneses
// #include<iostream>
// #include<vector>
// using namespace std;
// void primesieve(int n){
//     int prime[n+1]={0};
//     for(int i=2;i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(checkprime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//primesieve(20);
//     return 0;
// }

// 27. primefactor
// #include<iostream>
// #include<vector>
// using namespace std;
// void primefactor(int n){
//     int spf[n+1]={0};
//     for(int i=2;i<=n;i++){
//         spf[i]=i;
//     }
//     for(int i=2;i<=n;i++){
//         if(spf[i]==i){
//             for(int j=i*i;j<=n;j+=i){
//                 if(spf[j]==j){
//                     spf[j]=i;
//                 }
//             }
//         }
//     }
//     while(n!=1){
//         cout<<spf[n]<<" ";
//         n=n/spf[n];
//     }
// }
// int main(){
//primefactor(20);
//     return 0;
// }

//28. tower of hanoi
// #include <iostream>
// using namespace std;
// void tower(int n, char s, char h, char d) {
//     if (n == 0) {
//         return ;
//     }
//     tower(n - 1, s, d, h);
//     cout<<"Move disk from"<<" "<<s<<" "<<"to"<<" "<<s<<" "<<d<<endl;
//     tower(n - 1, h, s, d);
//     return;
// }
// int main() {
//     int n=3;
//     tower(n, 'A', 'B', 'C');
//     return 0;
// }

// 29. possible path in chain 
// #include<iostream>
// #include<vector>
// using namespace std;
// int countpath(int s,int e){
//     if(s==e) return 1;
//     if(s>e)  return 0;
//     int count=0;
//     for(int i=1;i<=10;i++){
//         count+=countpath(s+i,e);
//     }
//     return count;
// }
// int main(){
// cout<<countpath(1,6);
//     return 0;
// }

//30. tilling ways
// #include<iostream>
// #include<vector>
// using namespace std;
// int tillingways(int n){
//     if(n==0) return 0;
//     if(n==1)  return 1;
//     return tillingways(n-1)+tillingways(n-2);
// }
// int main(){
//cout<<tillingways(4);
//     return 0;
// }

// 31.0 nd 1 knapsack
// #include<iostream>
// #include<vector>
// using namespace std;
// int knapsack(int val[],int wt[],int n,int w){
//     if(n==0||w==0) return 0;
//     if(wt[n-1]>w) return knapsack(val,wt,n-1,w);
//     return max(knapsack(val,wt,n-1,w-wt[n-1])+val[n-1],knapsack(val,wt,n-1,w));
// }
// int main(){
//  int wt[] = {1, 3, 4, 5};
//     int val[] = {10, 40, 50, 70};
//     int W = 8;
//     int n = 4;
//     cout << "Maximum Profit = " << knapsack(wt, val, n, W);
//     return 0;
// }

// 32. freinds pairing problem
// #include<iostream>
// #include<vector>
// using namespace std;
// int freindpairing(int n){
//     if(n==0) return 0;
//     if(n==1)  return 1;
//     if(n==2)  return 2;
//     return freindpairing(n-1)+freindpairing(n-2)*(n-1);
// }
// int main(){
//cout<<freindpairing(4);
//     return 0;
// }

//33.maze path 4 parameter 
// #include<iostream>
// using namespace std;
// int maze( int cr,int cc,int er,int ec){
//     int rw=0,dw=0;
//     if(cr==er && cc==ec) return 1;
//     if(cr==er) rw += maze(cr,cc+1,er,ec);
//     if(cc==ec) dw += maze(cr+1,cc,er,ec);
//     if(cr<er && cc<ec) {
//         rw += maze(cr,cc+1,er,ec);
//         dw += maze(cr+1,cc,er,ec);}
//     int tw=rw+dw;
//     return tw;
// }
// int main(){
//     int n=3,m=3;
//     int now=maze(1,1,n,m);
//     cout<<now;
//     return 0;
// }

//34.method 2
// #include<iostream>
// using namespace std;
// int maze( int n,int m){
//     int rw=0,dw=0;
//     if(n==1 && m==1) return 1;
//     if(n==1) rw += maze(n,m-1);
//     if(m==1) dw += maze(n-1,m);
//     if(n>1 && m>1) {
//         rw += maze(n,m-1);
//         dw += maze(n-1,m);}
//     int tw=rw+dw;
//     return tw;
// }
// int main(){
//     int n=3,m=3;
//     int now=maze(n,m);
//     cout<<now;
//     return 0;
// }

//35.count possible path in n*m grid
// #include<iostream>
// #include<vector>
// using namespace std;
// int maze( int i,int j,int m,int n){
//     if(i==m-1 && j==n-1) return 1;
//     if(i>=m||j>=n) return 0;
//     return maze(i,j+1,m,n)+maze(i+1,j,m,n);
// }
// int main(){
//     int now=maze(0,0,3,3);
//     cout<<now;
//     return 0;
// }

//36.bishop attack
// #include <bits/stdc++.h>
// using namespace std;
// int solve(int r, int c) {
//     int ans=0;
//       ans+= min(r - 1, c - 1);
//       ans+= min(r - 1, 8 - c);
//       ans+= min(8 - r, c - 1);
//       ans+= min(8 - r, 8 - c);
//     return ans;
// }
// int main(){
//     cout<<solve(3,4);
//     return 0;
// }

//37. rotate an array by k steps 
// #include<iostream>
// using namespace std;
// void reverse(int arr[],int a,int b){
//      for(int i=a,j=b;i<=j;i++,j--){
//                int temp=arr[i];
//                arr[i]=arr[j];
//                arr[j]=temp;
//        }
// }
// int main(){
//     int arr[]={1,2,3,4,5,7,3};
//     int n=sizeof(arr)/4;
//     int k=4;
//     k=k%n;
//     reverse(arr,0,n-1);
//     reverse(arr,0,k-1);
//     reverse(arr,k,n-1);
//     for(int i=0;i<=6;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//38.subsequence of array 
// #include <iostream>
// #include <vector>
// using namespace std;
// void subsequence(vector<int> &arr, vector<int> output, int i) {
//     // Base case
//     if (i == arr.size()) {
//         for (int x : output)
//             cout << x << " ";
//         cout << endl;
//         return;
//     }
//     output.push_back(arr[i]);
//     subsequence(arr, output, i + 1);
//     output.pop_back();
//     subsequence(arr, output, i + 1);
// }
// int main() {
//     vector<int> arr = {1, 2, 3};
//     subsequence(arr, {}, 0);
//     return 0;
// }

//39.print element of array 
// #include<iostream>
// using namespace std;
// void f(int *arr,int idx,int n){
//      if(idx==n) return ;
//      cout<<arr[idx]<<endl;
//      f(arr,idx+1,n);
// }
// int main(){
//     int n=5;
//     int arr[]={6,1,3,4,5};
//     f(arr,0,n);
//     return 0;
// }

//40.maximum /mini elements
// #include<iostream>
// using namespace std;
// int f(int *arr,int idx,int n){
//     if(idx==n-1) return arr[idx];
//     return max(arr[idx],f(arr,idx+1,n));
// }
// int main(){
//     int n=5;
//     int arr[]={6,1,3,4,5};
//     cout<<f(arr,0,n);
//     return 0;
// }

//41.sum of array 
// #include<iostream>
// using namespace std;
// int f(int *arr,int idx,int n){
//     if(idx==n-1) return arr[idx];
//     return (arr[idx]+f(arr,idx+1,n));
// }
// int main(){
//     int n=5;
//     int arr[]={6,1,3,4,5};
//     cout<<f(arr,0,n);
//     return 0;
// }

//42.target sum
// #include<iostream>
// using namespace std;
// bool f(int *arr, int n,int i,int x){
//     if(i==n) return false;
//     return (arr[i]==x)|| f(arr,n,i+1,x);
// }
// int main(){
//     int arr[]={5,4,3,6,8,7,2},n=4;
//     cout<<f(arr,7,0,7);
//     return 0;
// }

//43.target sum reption
// #include <iostream>
// using namespace std;
// bool targetSum(int arr[], int n, int sum) {
//     if (sum == 0)
//         return true;
//     if (n == 0 || sum < 0)
//         return false;
//     bool include = targetSum(arr, n, sum - arr[n - 1]);
//     bool exclude = targetSum(arr, n - 1, sum);
//     return include || exclude;
// }
// int main() {
//     int arr[] = {2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 6;
//     if (targetSum(arr, n, target))
//         cout << "Possible";
//     else
//         cout << "Not Possible";
//     return 0;
// }

//44.perfect sum problem
// #include <iostream>
// using namespace std;
// int perfectSum(int arr[], int n, int sum) {
//     // Base cases
//     if (sum == 0)
//         return 1;         
//     if (n == 0)
//         return 0;         
//     if (arr[n - 1] > sum)
//         return perfectSum(arr, n - 1, sum);
//     return perfectSum(arr, n - 1, sum - arr[n - 1]) +
//            perfectSum(arr, n - 1, sum);
// }
// int main() {
//     int arr[] = {2, 3, 5, 6, 8, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 10;
//     cout << perfectSum(arr, n, sum);
//     return 0;
// }

//45.sum of all subset 
// #include<iostream>
// #include<vector>
// using namespace std;
// void f(int *arr, int n,int i,int sum,vector<int>&result){
//     if(i==n) {
//         result.push_back(sum);
//         return;}
//     f(arr,n,i+1,sum+arr[i],result);
//     f(arr,n,i+1,sum,result);
// }
// int main(){
//     int arr[]={2,4,5},n=3;
//     vector<int> result;
//     f(arr,n,0,0,result);
//     for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
//     return 0;
// }

//46.permutation on array 
// #include <iostream>
// using namespace std;
// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }
// void permute(int arr[], int index, int n) {
//     if (index == n) {
//         printArray(arr, n);
//         return;
//     }
//     for (int i = index; i < n; i++) {
//         swap(arr[index], arr[i]);          // Choose
//         permute(arr, index + 1, n);        // Explore
//         swap(arr[index], arr[i]);          // Backtrack
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     permute(arr, 0, n);
//     return 0;
// }

//47.permutation 2
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <unordered_set>
// using namespace std;
// void solve(vector<int>& nums, int idx, vector<vector<int>>& ans) {
//     if (idx == nums.size()) {
//         ans.push_back(nums);
//         return;
//     }
//     unordered_set<int> used;
//     for (int i = idx; i < nums.size(); i++) {
//         if (used.count(nums[i]))
//             continue;
//         used.insert(nums[i]);
//         swap(nums[idx], nums[i]);
//         solve(nums, idx + 1, ans);
//         swap(nums[idx], nums[i]); // Backtrack
//     }
// }
// vector<vector<int>> permuteUnique(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> ans;
//     solve(nums, 0, ans);
//     return ans;
// }
// int main() {
//     vector<int> nums = {1, 1, 2};
//     vector<vector<int>> ans = permuteUnique(nums);
//     for (auto v : ans) {
//         for (int x : v)
//             cout << x << " ";
//         cout << endl;
//     }
// }

//48.WAYS TO SUM N
// #include <iostream>
// #include <vector>
// using namespace std;
// int countWays(vector<int>& arr, int target) {
//     if (target == 0)
//         return 1;
//     if (target < 0)
//         return 0;
//     int ans = 0;
//     for (int x : arr)
//         ans += countWays(arr, target - x);
//     return ans;
// }
// int main() {
//     vector<int> arr = {2,3,5};
//     cout << countWays(arr, 7);
// }

//49.array sorted recursion 
// #include<iostream>
// using namespace std;
// bool sorted(int arr[],int n){
//     if(n==1) return true;
//     bool restarray=sorted(arr+1,n-1);
//     return (arr[0]<arr[1] && restarray);
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     cout<<sorted(arr,5);
//     return 0;
// }

//50. first and last occurence 
// #include<iostream>
// using namespace std;
// int focc(int arr[],int n, int i,int  key){
//     if(i==n) {
//         return -1;
//     }
//     if(arr[i]==key) return i;
//     return focc(arr,n,i+1,key);
// }
// int locc(int arr[],int n,int i,int key){
//     if(i==n) {
//         return -1;
//     }
//     int restarray=locc(arr,n,i+1,key);
//     if(restarray!=-1){
//         return restarray;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }
// int main(){
//     int arr[]={4,2,2,1,3,4,5};
//     cout<<focc(arr,7,0,2)<<endl;
//     cout<<locc(arr,7,0,2);
//     return 0;
// }

//51.bit manipulation
// #include<iostream>
// #include<string>
// using namespace std; 
// int getbit(int n,int pos){
//     return(n>>pos)&1;
// }
// int setbit(int n,int pos){
//     return(n|(1<<pos));
//  }
// int clearbit(int n,int pos){
//     int mask=~(1<<pos);
//     return (n&mask);
// }
// int togglebit(int n,int pos){
//     return (n xor(1<<pos));
// }
// int updatebit(int n,int pos,int val){
//     int mask=~(1<<pos);
//     n=n&mask;
//     return (n|(val<<pos));
// }
// int main(){
//     cout<<getbit(5,2)<<endl;
//     cout<<setbit(5,1)<<endl;
//     cout<<clearbit(5,2)<<endl;
//     cout<<updatebit(5,1,1)<<endl;
//     return 0;
// }

//52. compute xor from 1 to n
// #include<iostream>
// #include<vector>
// using namespace std;
// int compute(int n){
//     if(n%4==0) return n;
//     if(n%4==1) return 1;
//     if(n%4==2) return n+1;
//     else return 0;
// }
// int main(){
//     cout<<compute(6);
//     return 0;
// }

//53.ispower of 2 
// #include<iostream>
// #include<vector>
// using namespace std;
// bool powerof2(int n){
//     return (n&&!(n & n-1));
// }
// int main(){
//     cout<<powerof2(32);
//     return 0;
// }

// 54. count no of ones in a binary
// #include<iostream>
// #include<vector>
// using namespace std;
// int countbinaryones(int n){
//     int count =0;
//     while(n){
//         n=n& n-1;
//         count ++;
//     }
//     return count ;
// }
// int main(){
//     cout<<countbinaryones(19);
//     return 0;
// }

//55.n bit binary number 
// #include <iostream>
// #include <vector>
// using namespace std;
// void solve(int one, int zero, int n, string op, vector<string>& ans) {
//     if (n == 0) {
//         ans.push_back(op);
//         return;
//     }
//     solve(one + 1, zero, n - 1, op + '1', ans);
//     if (one > zero)
//         solve(one, zero + 1, n - 1, op + '0', ans);
// }
// vector<string> NBitBinary(int n) {
//     vector<string> ans;
//     solve(0, 0, n, "", ans);
//     return ans;
// }
// int main() {
//     int n = 3;
//     vector<string> ans = NBitBinary(n);
//     for (string s : ans)
//         cout << s << endl;
// }

//56.predict the winner josephus problem
// #include <iostream>
// #include <vector>
// using namespace std;
// void solve(vector<int>& people, int index, int k) {
//     if (people.size() == 1) {
//         cout << people[0];
//         return;
//     }
//     index = (index + k - 1) % people.size();
//     people.erase(people.begin() + index);
//     solve(people, index, k);
// }
// int main() {
//     int n = 5, k = 2;
//     vector<int> people;
//     for (int i = 1; i <= n; i++)
//         people.push_back(i);
//     solve(people, 0, k);
// }

//57. suduko solver
// #include<iostream>
// #include<vector>
// using namespace std;
//     bool isSafe(vector<vector<char>>& board, int row, int col, char ch) {
//         for (int i = 0; i < 9; i++) {
//             if (board[row][i] == ch)
//                 return false;
//             if (board[i][col] == ch)
//                 return false;
//             if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == ch)
//                 return false;
//         }
//         return true;
//     }
//     bool solve(vector<vector<char>>& board) {
//         for (int row = 0; row < 9; row++) {
//             for (int col = 0; col < 9; col++) {
//                 if (board[row][col] == '.') {
//                     for (char ch = '1'; ch <= '9'; ch++) {
//                         if (isSafe(board, row, col, ch)) {
//                             board[row][col] = ch;
//                             if (solve(board))
//                                 return true;
//                             board[row][col] = '.'; // backtrack
//                         }
//                     }
//                     return false; // no valid number found
//                 }
//             }
//         }
//         return true; // solved
//     }
//     void solveSudoku(vector<vector<char>>& board) {
//         solve(board);
//     }
// int main() {
//     vector<vector<char>> board = {
//         {'5','3','.','.','7','.','.','.','.'},
//         {'6','.','.','1','9','5','.','.','.'},
//         {'.','9','8','.','.','.','.','6','.'},
//         {'8','.','.','.','6','.','.','.','3'},
//         {'4','.','.','8','.','3','.','.','1'},
//         {'7','.','.','.','2','.','.','.','6'},
//         {'.','6','.','.','.','.','2','8','.'},
//         {'.','.','.','4','1','9','.','.','5'},
//         {'.','.','.','.','8','.','.','7','9'}
//     };
//     solveSudoku(board);
//     cout << "Solved Sudoku:\n\n";
//     for (auto &row : board) {
//         for (char c : row)
//             cout << c << " ";
//         cout << endl;
//     }
//     return 0;
// }

//58.rat in a maze
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isSafe(int x, int y, vector<vector<int>> &maze, vector<vector<int>> &vis, int n) {
//     return (x >= 0 && y >= 0 && x < n && y < n &&
//             maze[x][y] == 1 && vis[x][y] == 0);
// }
// void solve(int x, int y, vector<vector<int>> &maze, int n,
//            vector<vector<int>> &vis, string path,
//            vector<string> &ans) {
//     if (x == n - 1 && y == n - 1) {
//         ans.push_back(path);
//         return;
//     }
//     vis[x][y] = 1;
//     if (isSafe(x + 1, y, maze, vis, n))
//         solve(x + 1, y, maze, n, vis, path + "D", ans);
//     if (isSafe(x, y - 1, maze, vis, n))
//         solve(x, y - 1, maze, n, vis, path + "L", ans);
//     if (isSafe(x, y + 1, maze, vis, n))
//         solve(x, y + 1, maze, n, vis, path + "R", ans);
//     if (isSafe(x - 1, y, maze, vis, n))
//         solve(x - 1, y, maze, n, vis, path + "U", ans);
//     vis[x][y] = 0; 
// }
// vector<string> findPath(vector<vector<int>> &maze, int n) {
//     vector<string> ans;
//     if (maze[0][0] == 0)
//         return ans;
//     vector<vector<int>> vis(n, vector<int>(n, 0));
//     solve(0, 0, maze, n, vis,"", ans);
//     return ans;
// }
// int main() {
//     vector<vector<int>> maze = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 1},
//         {1, 1, 0, 0},
//         {0, 1, 1, 1}
//     };
//     int n = maze.size();
//     vector<string> ans = findPath(maze, n);
//     for (string s : ans)
//         cout << s << endl;
// }

//59.n queen 
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isSafe(int row, int col, vector<string> &board, int n) {
//     for (int i = 0; i < row; i++) {
//         if (board[i][col] == 'Q')
//             return false;
//     }
//     for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
//         if (board[i][j] == 'Q')
//             return false;
//     }
//     for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
//         if (board[i][j] == 'Q')
//             return false;
//     }
//     return true;
// }
// void solve(int row, int n, vector<string> &board, vector<vector<string>> &ans) {
//     // Base case: all queens placed
//     if (row == n) {
//         ans.push_back(board);
//         return;
//     }
//     for (int col = 0; col < n; col++) {
//         if (isSafe(row, col, board, n)) {
//             board[row][col] = 'Q';
//             solve(row + 1, n, board, ans);
//             board[row][col] = '.';
//         }
//     }
// }
// vector<vector<string>> solveNQueens(int n) {
//     vector<vector<string>> ans;
//     vector<string> board(n, string(n, '.'));
//     solve(0, n, board, ans);
//     return ans;
// }
// int main() {
//     int n = 4;
//     vector<vector<string>> ans = solveNQueens(n);
//     for (auto &board : ans) {
//         for (auto &row : board)
//             cout << row << endl;
//         cout << endl;
//     }
//     return 0;
// }

//60.m coloring problem
// #include <iostream>
// #include <vector>
// using namespace std;
// bool isSafe(int node, vector<int> &color, vector<vector<int>> &graph, int c) {
//     for (int i = 0; i < graph.size(); i++) {
//         if (graph[node][i] == 1 && color[i] == c)
//             return false;
//     }
//     return true;
// }
// bool solve(int node, vector<vector<int>> &graph, int m, vector<int> &color) {
//     if (node == graph.size())
//         return true;
//     for (int c = 1; c <= m; c++) {
//         if (isSafe(node, color, graph, c)) {
//             color[node] = c;
//             if (solve(node + 1, graph, m, color))
//                 return true;
//             color[node] = 0;
//         }
//     }
//     return false;
// }
// bool graphColoring(vector<vector<int>> &graph, int m) {
//     int n = graph.size();
//     vector<int> color(n, 0);
//     return solve(0, graph, m, color);
// }
// int main() {
//     vector<vector<int>> graph = {
//         {0, 1, 1, 1},
//         {1, 0, 1, 0},
//         {1, 1, 0, 1},
//         {1, 0, 1, 0}
//     };
//     int m = 3;
//     if (graphColoring(graph, m))
//         cout << "Possible";
//     else
//         cout << "Not Possible";
//     return 0;
// }

//61.reverse string
// #include <iostream>
// using namespace std;
// void reverseString(string str, int index) {
//     if (index == str.length())
//         return;
//     reverseString(str, index + 1);
//     cout << str[index];
// }
// int main() {
//     string str = "hello";
//     reverseString(str, 0);
//     return 0;
// }

//62.palindrome string
// #include <iostream>
// #include<string>
// using namespace std;
// bool isPalindrome(string &str, int left, int right) {
//     if (left >= right)
//         return true;
//     if (str[left] != str[right])
//         return false;
//     return isPalindrome(str, left + 1, right - 1);
// }
// int main() {
//     string str;
//     cin >> str;
//     if (isPalindrome(str, 0, str.length() - 1))
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";
//     return 0;
// }

//63.count vowels recursion
// #include <iostream>
// using namespace std;
// bool isVowel(char c) {
//     return (c == 'a' || c == 'e' || c == 'i' ||
//             c == 'o' || c == 'u' ||
//             c == 'A' || c == 'E' || c == 'I' ||
//             c == 'O' || c == 'U');
// }
// int countVowels(string &s, int i) {
//     if (i == s.size())
//         return 0;
//     int count = isVowel(s[i]) ? 1 : 0;
//     return count + countVowels(s, i + 1);
// }
// int main() {
//     string s = "hello world";
//     cout << countVowels(s, 0);
//     return 0;
// }

//64.lower case to upper case 
// #include <iostream>
// using namespace std;
// void toUpper(string &s, int i){
//     if (i == s.size())
//         return;
//     if (s[i] >= 'a' && s[i] <= 'z') {
//         s[i] = s[i] - 'a' + 'A';
//     }
//     toUpper(s, i + 1);
// }
// int main() {
//     string s = "hello world";
//     toUpper(s, 0);
//     cout << s;
//     return 0;
// }

//65.subsequence using recursion
// #include <iostream>
// using namespace std;
// void subsequence(string &s, string output, int i) {
//     if (i == s.size()) {
//         cout << output << endl;
//         return;
//     }
//     subsequence(s, output + s[i], i + 1);
//     subsequence(s, output, i + 1);
// }
// int main() {
//     string s = "abc";
//     subsequence(s, "", 0);
//     return 0;
// }