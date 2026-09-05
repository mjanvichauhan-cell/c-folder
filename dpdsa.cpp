//1.fibonacci sequence 
// #include <iostream>
// #include <vector>
// using namespace std;
// long long fib(int n, vector<long long>& dp) {
//     if (n <= 1)
//         return n;
//     if (dp[n] != -1)
//         return dp[n];
//     dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
//     return dp[n];
// }
// int main() {
//     int n=8;
//     vector<long long> dp(n + 1, -1);
//     cout << fib(n, dp);
//     return 0;
// }

//2.method 2
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n=8;
//     if (n <= 1) {
//         cout << n;
//         return 0;
//     }
//     vector<long long> dp(n + 1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for (int i = 2; i <= n; i++) {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     cout << dp[n];
//     return 0;
// }

//3.climbing stairs 
// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(int n, vector<int>& dp){
//     if(n<=1) return 1;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=solve(n-1,dp)+solve(n-2,dp);
// }
// int climbStairs(int n){
//     vector<int> dp(n+1,-1);
//     return solve(n,dp);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<climbStairs(n);
//     return 0;
// }

//4.method 2
// #include<iostream>
// #include<vector>
// using namespace std;
// int climbStairs(int n){
//     if(n<=1) return 1;
//     vector<int> dp(n+1);
//     dp[0]=1;
//     dp[1]=1;
//     for(int i=2;i<=n;i++)
//         dp[i]=dp[i-1]+dp[i-2];
//     return dp[n];
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<climbStairs(n);
//     return 0;
// }

//5.method 3
// #include<iostream>
// using namespace std;
// int climbStairs(int n){
//     if(n<=1) return 1;
//     int prev2=1;
//     int prev1=1;
//     for(int i=2;i<=n;i++){
//         int curr=prev1+prev2;
//         prev2=prev1;
//         prev1=curr;
//     }
//     return prev1;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<climbStairs(n);
//     return 0;
// }

//6. minimum numbers of squares 
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int main() {
//     int n=11;
//     vector<int> dp(n + 1, INT_MAX);
//     dp[0] = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j * j <= i; j++) {
//             dp[i] = min(dp[i], 1 + dp[i - j * j]);
//         }
//     }
//     cout << "Minimum number of perfect squares: " << dp[n];
//     return 0;
// }

//7.method 2 table memosiation
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int solve(int n, vector<int>& dp) {
//     if (n == 0)
//         return 0;
//     if (dp[n] != -1)
//         return dp[n];
//     int ans = INT_MAX;
//     for (int i = 1; i * i <= n; i++) {
//         ans = min(ans, 1 + solve(n - i * i, dp));
//     }
//     dp[n] = ans;
//     return dp[n];
// }
// int main() {
//    int n=11;
//     vector<int> dp(n + 1, -1);
//     cout << "Minimum number of perfect squares: " << solve(n, dp);
//     return 0;
// }

//8.count hops
// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(int n, vector<int>& dp){
//     if(n==0) return 1;
//     if(n<0) return 0;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);
// }
// int countWays(int n){
//     vector<int> dp(n+1,-1);
//     return solve(n,dp);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countWays(n);
//     return 0;
// }

//9.method 2
// #include<iostream>
// #include<vector>
// using namespace std;
// int countWays(int n){
//     vector<int> dp(n+1,0);
//     dp[0]=1;
//     for(int i=1;i<=n;i++){
//         if(i-1>=0) dp[i]+=dp[i-1];
//         if(i-2>=0) dp[i]+=dp[i-2];
//         if(i-3>=0) dp[i]+=dp[i-3];
//     }
//     return dp[n];
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countWays(n);
//     return 0;
// }

//10.method 3
// #include<iostream>
// using namespace std;
// int countWays(int n){
//     if(n==0) return 1;
//     if(n==1) return 1;
//     if(n==2) return 2;
//     int a=1,b=1,c=2;
//     for(int i=3;i<=n;i++){
//         int d=a+b+c;
//         a=b;
//         b=c;
//         c=d;
//     }
//     return c;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countWays(n);
//     return 0;
// }

//11.coin change problem
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int main() {
//     int n=3, amount=5;
//     vector<int> coins{1,2,5};
//     vector<int> dp(amount + 1, INT_MAX);
//     dp[0] = 0;
//     for (int i = 1; i <= amount; i++) {
//         for (int j = 0; j < n; j++) {
//             if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
//                 dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
//             }
//         }
//     }
//     vector<int> dp1(amount + 1, 0);
//     dp1[0] = 1;
//     for (int i = 0; i < n; i++) {
//         for (int j = coins[i]; j <= amount; j++) {
//             dp1[j] += dp1[j - coins[i]];
//         }
//     }
//     cout << "Number of ways: " << dp1[amount];
//     if (dp[amount] == INT_MAX)
//         cout << "Not possible";
//     else
//         cout << "Minimum coins required: " << dp[amount];
//     return 0;
// }

//12.method 2
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int solve(int i, int amount, vector<int>& coins, vector<vector<int>>& dp) {
//     if (amount == 0)
//         return 0;
//     if (i == coins.size())
//         return INT_MAX - 1;
//     if (dp[i][amount] != -1)
//         return dp[i][amount];
//     int notTake = solve(i + 1, amount, coins, dp);
//     int take = INT_MAX - 1;
//     if (coins[i] <= amount)
//         take = 1 + solve(i, amount - coins[i], coins, dp);
//     return dp[i][amount] = min(take, notTake);
// }
// long long solve(int i, int amount, vector<int>& coins, vector<vector<long long>>& dp1) {
//     if (amount == 0)
//         return 1;
//     if (i == coins.size())
//         return 0;
//     if (dp1[i][amount] != -1)
//         return dp1[i][amount];
//     long long notTake = solve(i + 1, amount, coins, dp1);
//     long long take = 0;
//     if (coins[i] <= amount)
//         take = solve(i, amount - coins[i], coins, dp1);
//     return dp1[i][amount] = take + notTake;
// }
// int main() {
//     int n=3, amount=5;
//     vector<int> coins{1,2,5};
//     vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
//     int result = solve(0, amount, coins, dp);
//     if (result >= INT_MAX - 1)
//         cout << "Not possible";
//     else
//         cout << "Minimum coins required: " << result;
//     vector<vector<long long>> dp1(n, vector<long long>(amount + 1, -1));
//      cout << "Number of ways: " << solve(0, amount, coins, dp1);
//     return 0;
// }

//13. 0 1 kanpsack
// #include <iostream>
// #include <vector>
// using namespace std;
// int solve(int i, int W, vector<int>& wt, vector<int>& val, vector<vector<int>>& dp) {
//     if (i == 0 || W == 0)
//         return 0;
//     if (dp[i][W] != -1)
//         return dp[i][W];
//     if (wt[i - 1] <= W) {
//         return dp[i][W] = max(
//             val[i - 1] + solve(i - 1, W - wt[i - 1], wt, val, dp),
//             solve(i - 1, W, wt, val, dp)
//         );
//     } else {
//         return dp[i][W] = solve(i - 1, W, wt, val, dp);
//     }
// }
// int main() {
//     int n=3,W=50;
//     vector<int> wt{15,30,45}, val{60,100,150};
//     vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
//     cout << "Maximum value: " << solve(n, W, wt, val, dp);
//     return 0;
// }

//14.method 2
// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n=3,W=50;
//     vector<int> weight{15,30,45}, value{60,100,150};
//     vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
//     for (int i = 1; i <= n; i++) {
//         for (int w = 1; w <= W; w++) {
//             if (weight[i - 1] <= w) {
//                 dp[i][w] = max(
//                     value[i - 1] + dp[i - 1][w - weight[i - 1]],  
//                     dp[i - 1][w]                                   
//                 );
//             }
//             else {
//                 dp[i][w] = dp[i - 1][w];
//             }
//         }
//     }
//     cout << "Maximum value: " << dp[n][W];
//     return 0;
// }

//15.ugly numbers
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// int main(){
//     int n=10;
//     int c2(0),c3(0),c5(0);
//     vector<int> dp(n+1);
//     dp[0]=1;
//     for(int i=1;i<=n;i++){
//         dp[i]=min({2*dp[c2],3*dp[c3],5*dp[c5]});
//         if(2*dp[c2]==dp[i]) c2++;
//         if(3*dp[c3]==dp[i]) c3++;
//         if(5*dp[c5]==dp[i]) c5++;
//     }
//     cout<<dp[n-1];
// }

//16.freinds pairing problem
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// int main(){
//     int n=3;
//     vector<int> dp(n+1,0);
//     dp[0]=1;
//     dp[1]=1;
//     for(int i=2;i<=n;i++){
//         dp[i]=dp[i-1]+(i-1)*dp[i-2];
//     }
//     cout<<dp[n];
// }

//17.max len of bitonic subse
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// int main(){
//     int n=8;
//     vector<int> a={1,11,2,10,4,5,2,1};
//     vector<int> forward(n,1),backward(n,1);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             if(a[i]>a[j]) forward[i]=max(forward[i],1+forward[j]);
//         }
//     }
//     for(int i=n-1;i>=0;i--){
//         for(int j=n-1;j>i;j--){
//             if(a[i]>a[j]) backward[i]=max(backward[i],1+backward[j]);
//         }
//     }
//     int ans =0;
//     for(int i=0;i<n;i++){
//        ans=max(ans,forward[i]+backward[i]-1);
//     }
//     cout<<ans;
//     return 0;
// }

//18.0-n knapsack
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//    int n=5,W=11;
//   vector<int> wt={3,2,4,5,1}; 
//    vector<int> val={4,3,5,6,1}; 
//    vector<int> dp(W+1,0);
//    for(int j=0;j<=W;j++){
//     for(int i=0;i<n;i++){
//         if(j-wt[i]>=0) dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
//        }
//    }
//    cout<<dp[W];
//    return 0;
// }

//19.no of binary strings 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//    int n=3;
//    vector<int> fib(n+2,0);
//    fib[0]=1;
//    fib[1]=1;
//    for(int j=2;j<=n+1;j++){
//         fib[j]=fib[j-1]+fib[j-2];
//     }
//    cout<<fib[n+1];
//    return 0;
// }

//20.min jumps
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// int main(){
//     int n=11;
//     vector<int> a={1,3,5,8,9,2,6,7,6,8,9};
//     vector<int> jump(n,1e9);
//     if(a[0]==0){
//         cout<<"1e9";
//         return 0;
//     }
//     jump[0]=0;
//     for(int i=1;i<n;i++){
//         for(int j=0;j<i;j++){
//             if(i<=j+a[j]){
//                jump[i]=min(jump[i],jump[j]+1);
//             }
//         }
//     }
//     cout<<jump[n-1];
// }

//21.matruic chain multi
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int solve(vector<int>& arr, int i, int j, vector<vector<int>>& dp) { 
//     if(i == j)
//         return 0;
//     if(dp[i][j] != -1)
//         return dp[i][j];
//     int mini = INT_MAX;
//     for(int k = i; k < j; k++) {
//         int cost = solve(arr, i, k, dp) +
//                    solve(arr, k+1, j, dp) +
//                    arr[i-1] * arr[k] * arr[j];
//         mini = min(mini, cost);
//     }
//     return dp[i][j] = mini;
// }
// int matrixChainMultiplication(vector<int>& arr) {
//     int n = arr.size();
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     return solve(arr, 1, n-1, dp);
// }
// int main() {
//     vector<int> arr = {10, 20, 30,20,30};
//     cout<< matrixChainMultiplication(arr);
//     return 0;
// }

//22. method 2
// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int matrixChainMultiplication(vector<int>& arr) {
//     int n = arr.size();  
//     vector<vector<int>> dp(n, vector<int>(n, 0));
//     for(int len = 2; len < n; len++) {
//         for(int i = 1; i < n - len + 1; i++) {
//             int j = i + len - 1;
//             dp[i][j] = INT_MAX;
//             for(int k = i; k < j; k++) {
//                 int cost = dp[i][k] + dp[k+1][j] 
//                          + arr[i-1] * arr[k] * arr[j];
//                 dp[i][j] = min(dp[i][j], cost);
//             }
//         }
//     }
//     return dp[1][n-1];
// }
// int main() {
//     vector<int> arr = {10, 20, 30, 20,30};
//     cout << "Minimum multiplications: "
//          << matrixChainMultiplication(arr);
//     return 0;
// }

//23. pair reduce
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool campare(pair<int,int> p1,pair<int,int>p2){
//     return p1.first<p2.first;
// }
// int main(){
// int arr[]={10,16,7,14,5,3,12,9};
//     vector<pair<int,int>> v;
//     for(int i=0;i<8;i++){
//         v.push_back(make_pair(arr[i],i));
//     }
//     sort(v.begin(),v.end(),campare);
//     for(int i=0;i<v.size();i++){
//         arr[v[i].second]=i;
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//24.longest comm subseq
// #include <iostream>
// #include <vector>
// using namespace std;
// int longestCommonSubsequence(string s1, string s2) {
//     int n = s1.length();
//     int m = s2.length();
//     vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= m; j++) {
//             if(s1[i-1] == s2[j-1]) {
//                 dp[i][j] = 1 + dp[i-1][j-1];
//             } else {
//                 dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }
//     return dp[n][m];
// }
// int main() {
//     string s1 = "abcde";
//     string s2 = "ace";
//     cout << "LCS length: "
//          << longestCommonSubsequence(s1, s2);
//     return 0;
// }

//25.method 2
// #include <iostream>
// #include <vector>
// using namespace std;
// int solve(string &s1, string &s2, int i, int j, vector<vector<int>>& dp) {
//     if(i < 0 || j < 0)
//         return 0;
//     if(dp[i][j] != -1)
//         return dp[i][j];
//     if(s1[i] == s2[j])
//         return dp[i][j] = 1 + solve(s1, s2, i-1, j-1, dp);
//     return dp[i][j] = max(
//         solve(s1, s2, i-1, j, dp),
//         solve(s1, s2, i, j-1, dp)
//     );
// }
// int longestCommonSubsequence(string s1, string s2) {
//     int n = s1.length();
//     int m = s2.length();
//     vector<vector<int>> dp(n, vector<int>(m, -1));
//     return solve(s1, s2, n-1, m-1, dp);
// }
// int main(){
//     string s1 = "abcde";
//     string s2 = "ace";
//     cout << "LCS length: "
//          << longestCommonSubsequence(s1, s2);
//     return 0;
// }

//26.no of suvbsequence 
// #include <iostream>
// using namespace std;
// int main() {
//     string s="ac?b?c";
//     long long countA = 0;
//     long long countAB = 0;
//     long long countABC = 0;
//     long long totalWays = 1;
//     for (char ch : s) {
//         if (ch == 'a') {
//             countA += totalWays;
//         }
//         else if (ch == 'b') {
//             countAB += countA;
//         }
//         else if (ch == 'c') {
//             countABC += countAB;
//         }
//         else if (ch == '?') {
//             long long newABC = 3 * countABC + countAB;
//             long long newAB  = 3 * countAB  + countA;
//             long long newA   = 3 * countA   + totalWays;
//             countABC = newABC;
//             countAB  = newAB;
//             countA   = newA;
//             totalWays *= 3;
//         }
//     }
//     cout << "Number of subsequence 'abc': " << countABC;
//     return 0;
// }

//27.lcs with 3 strings 
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// int lcs(string &s1,string &s2,string &s3,int i,int j,int k){
//     if(i==0 or j==0 or k==0) return 0;
//     if(s1[i-1]==s2[j-1] and s2[j-1]==s3[k-1]) {
//         return 1+lcs(s1,s2,s3,i-1,j-1,k-1);
//     }
//     int l=lcs(s1,s2,s3,i-1,j,k);
//     int r=lcs(s1,s2,s3,i,j-1,k);
//     int p=lcs(s1,s2,s3,i,j,k-1);
//     return max({l,r,p});
// }
// int main(){
//     string s1="apna";
//     string s2="collegeap";
//     string s3="ap";
//     cout<<lcs(s1,s2,s3,4,9,2);
//     return 0;
// }

//28. method 2
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// int dp[205][205][205];
// int lcs(string &s1,string &s2,string &s3,int i,int j,int k){
//     if(i==0 or j==0 or k==0) return 0;
//     if(dp[i][j][k]!= -1) return dp[i][j][k];
//     if(s1[i-1]==s2[j-1] and s2[j-1]==s3[k-1]) {
//         return dp[i][j][k] =1+lcs(s1,s2,s3,i-1,j-1,k-1);
//     }
//     int l=lcs(s1,s2,s3,i-1,j,k);
//     int r=lcs(s1,s2,s3,i,j-1,k);
//     int p=lcs(s1,s2,s3,i,j,k-1);
//     return dp[i][j][k] =max({l,r,p});
// }
// int main(){
//     memset(dp,-1,sizeof(dp));
//     string s1="apna";
//     string s2="collegeap";
//     string s3="ap";
//     cout<<lcs(s1,s2,s3,4,9,2);
//     return 0;
// }

//29. k ordered lcs 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int n,m,k;
// vector<int> a,b;
// int solve(int i,int j,int k){
//     if(i==n or j==m){
//         return 0;
//     }
//     int c1(0),c2(0),c3(0);
//     if(a[i]==b[j]) c1=1+solve(i+1,j+1,k);
//     if(k>0) c2=1+solve(i+1,j+1,k-1);
//     c3=max(solve(i+1,j,k),solve(i,j+1,k));
//     return max({c1,c2,c3});
// }
// int main(){
//     n=5,m=5,k=1;
//     a={1,2,3,4,5};
//     b={5,3,1,4,2};
//     cout<<solve(0,0,k);
// }

//30 method 2
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// int n,m,k;
// vector<int> a,b;
// int dp[2005][2005][7];
// int solve(int i,int j,int k){
//     if(i==n or j==m){
//         return 0;
//     }
//     if(dp[i][j][k]!=-1) return dp[i][j][k];
//     int c1(0),c2(0),c3(0);
//     if(a[i]==b[j]) c1=1+solve(i+1,j+1,k);
//     if(k>0) c2=1+solve(i+1,j+1,k-1);
//     c3=max(solve(i+1,j,k),solve(i,j+1,k));
//     return dp[i][j][k]=max({c1,c2,c3});
// }
// int main(){
//     memset(dp,-1,sizeof(dp));
//     n=5,m=5,k=1;
//     a={1,2,3,4,5};
//     b={5,3,1,4,2};
//     cout<<solve(0,0,k);
// }

//31.longest increasoing subsequence 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int n=5;
//     vector<int> arr(1,2,3,4,5);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     vector<int> dp(n, 1);  
//     int ans = 1;
//     for (int i = 1; i < n; i++) {
//         for (int j = 0; j < i; j++) {
//             if (arr[i] > arr[j]) {
//                 dp[i] = max(dp[i], dp[j] + 1);
//             }
//         }
//         ans = max(ans, dp[i]);
//     }
//     cout << "Length of LIS: " << ans;
//     return 0;
// }

//32.method 2
// #include <iostream>
// #include <vector>
// using namespace std;
// int solve(int i, int prev, vector<int>& arr, vector<vector<int>>& dp) {
//     if (i == arr.size())
//         return 0;
//     if (dp[i][prev + 1] != -1)
//         return dp[i][prev + 1];
//     int notTake = solve(i + 1, prev, arr, dp);
//     int take = 0;
//     if (prev == -1 || arr[i] > arr[prev])
//         take = 1 + solve(i + 1, i, arr, dp);
//     return dp[i][prev + 1] = max(take, notTake);
// }
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     vector<vector<int>> dp(n, vector<int>(n + 1, -1));
//     cout << "Length of LIS: " << solve(0, -1, arr, dp);
//     return 0;
// }

//33.optimal game stategy
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<memory.h>
// using namespace std;
// vector<int> a;
// int dp[100][100];
// int solve(int i,int j){
//     if(i==j) return a[i];
//     if(i>j) return 0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int l=a[i]+min(solve(i+2,j),solve(i+1,j-1));
//     int p=a[j]+min(solve(i,j-2),solve(i+1,j-1));
//     return max(l,p);
// }
// int main(){
//     memset(dp,-1,sizeof(dp));
//     int n=4;
//     a={1,2,3,4};
//     cout<<solve(0,n-1);
// }

//34.cut rod into segment 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main() {
//     int n = 7;
//     int x = 5, y = 2, z = 2;
//     vector<int> dp(n + 1, -1);
//     dp[0] = 0;
//     for(int i = 1; i <= n; i++) {
//         if(i >= x && dp[i - x] != -1)
//             dp[i] = max(dp[i], dp[i - x] + 1);
//         if(i >= y && dp[i - y] != -1)
//             dp[i] = max(dp[i], dp[i - y] + 1);
//         if(i >= z && dp[i - z] != -1)
//             dp[i] = max(dp[i], dp[i - z] + 1);
//     }
//     cout << max(0, dp[n]);
//     return 0;
// }

//35.method 2
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int solve(int n, int x, int y, int z, vector<int> &dp) {
//     if(n == 0) return 0;
//     if(n < 0) return -1000000;
//     if(dp[n] != -1) return dp[n];
//     int a = 1 + solve(n - x, x, y, z, dp);
//     int b = 1 + solve(n - y, x, y, z, dp);
//     int c = 1 + solve(n - z, x, y, z, dp);
//     return dp[n] = max({a, b, c});
// }
// int main() {
//     int n = 7;
//     int x = 5, y = 2, z = 2;
//     vector<int> dp(n + 1, -1);
//     cout << max(0, solve(n, x, y, z, dp));
//     return 0;
// }

//36.count dearrangment 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int n = 5;
//     if(n == 1) {
//         cout << 0;
//         return 0;
//     }
//     vector<long long> dp(n + 1);
//     dp[1] = 0;
//     dp[2] = 1;
//     for(int i = 3; i <= n; i++) {
//         dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
//     }
//     cout << dp[n];
//     return 0;
// }

//37.method 2
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 5;
//     if(n == 1) {
//         cout << 0;
//         return 0;
//     }
//     if(n == 2) {
//         cout << 1;
//         return 0;
//     }
//     long long prev2 = 0;
//     long long prev1 = 1;
//     for(int i = 3; i <= n; i++) {
//         long long curr = (i - 1) * (prev1 + prev2);
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     cout << prev1;
//     return 0;
// }

//38.painting fence algo
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int n = 4;
//     int k = 3;
//     if(n == 1) {
//         cout << k;
//         return 0;
//     }
//     vector<long long> dp(n + 1);
//     dp[1] = k;
//     dp[2] = 1LL * k * k;
//     for(int i = 3; i <= n; i++) {
//         dp[i] = 1LL * (k - 1) * (dp[i - 1] + dp[i - 2]);
//     }
//     cout << dp[n];
//     return 0;
// }

//39.method 2
// #include<iostream>
// using namespace std;
// int main() {
//     int n = 4;
//     int k = 3;
//     if(n == 1) {
//         cout << k;
//         return 0;
//     }
//     long long prev2 = k;
//     long long prev1 = 1LL * k * k;
//     for(int i = 3; i <= n; i++) {
//         long long curr = 1LL * (k - 1) * (prev1 + prev2);
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     cout << prev1;
//     return 0;
// }