//1. euclid algorithm
// #include <bits/stdc++.h>
// using namespace std;
// struct Triplet {
//     int gcd;
//     int x;
//     int y;
// };
// Triplet extended_gcd(int a, int b) {
//     // Base case
//     if (b == 0) {
//         Triplet ans;
//         ans.gcd = a;
//         ans.x = 1;
//         ans.y = 0;
//         return ans;
//     }
//     // Recursive call
//     Triplet smallAns = extended_gcd(b, a % b);
//     Triplet ans;
//     ans.gcd = smallAns.gcd;
//     ans.x = smallAns.y;
//     ans.y = smallAns.x - (a / b) * smallAns.y;
//     return ans;
// }
// int main() {
//     int a = 5, b = 3;
//     Triplet result = extended_gcd(a, b);
//     cout << "GCD = " << result.gcd << endl;
//     cout << "x = " << result.x << endl;
//     cout << "y = " << result.y << endl;
//     cout << "Check: " << a*result.x + b*result.y << endl;
//     return 0;
// }

//2.multiplicative modulo inverse
// #include <bits/stdc++.h>
// using namespace std;
// struct Triplet {
//     long long x;   // coefficient of a
//     long long y;   // coefficient of b
//     long long gcd; // gcd(a,b)
// };
// Triplet extendedEuclid(long long a, long long b) {
//     // Base case
//     if (b == 0) {
//         Triplet ans;
//         ans.x = 1;
//         ans.y = 0;
//         ans.gcd = a;
//         return ans;
//     }
//     Triplet smallAns = extendedEuclid(b, a % b);
//     Triplet ans;
//     ans.gcd = smallAns.gcd;
//     ans.x = smallAns.y;
//     ans.y = smallAns.x - (a / b) * smallAns.y;
//     return ans;
// }
// long long multiplicativeInverse(long long a, long long m) {
//     Triplet ans = extendedEuclid(a, m);
//     return ans.x;
// }
// int main() {
//     long long a = 17, m = 3;
//     long long inv = multiplicativeInverse(a, m);
//     cout<<inv;
//     return 0;
// }

//3.euler totient 
// #include <bits/stdc++.h>
// using namespace std;
// long long phi(long long n) {
//     long long result = n;
//     for (long long i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             while (n % i == 0)
//                 n /= i;
//             result -= result / i;
//         }
//     }
//     if (n > 1) {
//         result -= result / n;
//     }
//     return result;
// }
// int main() {
//     long long n;
//     cin >> n;
//     cout << phi(n);
// }

//4.binary exponention
// #include <bits/stdc++.h>
// using namespace std;
// long long binaryExponentiation(long long a, long long b) {
//     long long result = 1;
//     while (b > 0) {
//         if (b & 1) {          // if b is odd
//             result = result * a;
//         }
//         a = a * a;            // square the base
//         b = b >> 1;           // divide exponent by 2
//     }
//     return result;
// }
// int main() {
//     long long a = 5, b = 6;
//     cout << binaryExponentiation(a, b);
// }

//5.boring spoj
// #include <bits/stdc++.h>
// using namespace std;
// long long powerMod(long long a, long long b, long long mod) {
//     long long res = 1;
//     a %= mod;
//     while (b > 0) {
//         if (b & 1)
//             res = (res * a) % mod;
//         a = (a * a) % mod;
//         b >>= 1;
//     }
//     return res;
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n, p;
//         cin >> n >> p;
//         if (n >= p) {
//             cout << 0 << endl;
//             continue;
//         }
//         long long result = p - 1;  // -1 mod p
//         for (long long i = n + 1; i <= p - 1; i++) {
//             result = (result * powerMod(i, p - 2, p)) % p;
//         }
//         cout << result << endl;
//     }
//     return 0;
// }

//6. matrix exponentiation
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const ll MOD = 1e9+7;
// struct Matrix {
//     ll m[2][2];
// };
// Matrix multiply(Matrix a, Matrix b) {
//     Matrix result;
//     result.m[0][0] = (a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0]) % MOD;
//     result.m[0][1] = (a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1]) % MOD;
//     result.m[1][0] = (a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0]) % MOD;
//     result.m[1][1] = (a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1]) % MOD;
//     return result;
// }
// Matrix power(Matrix base, ll n) {
//     Matrix result;
//     // Identity matrix
//     result.m[0][0] = 1; result.m[0][1] = 0;
//     result.m[1][0] = 0; result.m[1][1] = 1;
//     while(n > 0) {
//         if(n & 1)
//             result = multiply(result, base);
//         base = multiply(base, base);
//         n >>= 1;
//     }
//     return result;
// }
// int main() {
//     ll n;
//     cin >> n;
//     if(n == 0) {
//         cout << 0;
//         return 0;
//     }
//     Matrix fib;
//     fib.m[0][0] = 1; fib.m[0][1] = 1;
//     fib.m[1][0] = 1; fib.m[1][1] = 0;
//     Matrix ans= power(fib, n);
//     cout << ans.m[0][0]<<" "<<ans.m[0][1]<<endl;
//     cout << ans.m[1][0]<<" "<<ans.m[1][1]<<endl;
//     return 0;
// }

//7.string hashing /algorithm
// #include<bits/stdc++.h>
// using namespace std;
// int p=31;
// const int N=1e5+3,m=1e9+7;
// vector<int> powers(N);
// long long calculate_hash(string s){
//     long long hash=0;
//     for(int i=0;i<s.size();i++){
//         hash+=((s[i]-'a'+1)*powers[i])%m;
//     }
//     return hash;
// }
// int main(){
//     vector<string> strings={"aa","ab","aa","b","cc","aa"};
//     // sort(strings.begin(),strings.end());
//     int dist=0;
//     // for(int i=0;i<strings.size();i++){
//     //     if(i==0 or strings[i]!=strings[i-1]){
//     //         dist++;
//     //     }
//     // }
//     // cout<<dist<<" ";
//     //better time comp
//     powers[0]=1;
//     for(int i=1;i<N;i++){
//          powers[i]=(powers[i-1]*p)%m;
//     }
//     vector<long long> hashes;
//     for(auto w:strings){
//         hashes.push_back(calculate_hash(w));
//     }
//     sort(hashes.begin(),hashes.end());
//     for(int i=0;i<hashes.size();i++){
//         if(i==0 or hashes[i]!=hashes[i-1]){
//             dist++;
//         }
//     }
//     cout<<dist<<" ";
//     return 0;
// }

//8.calculate index of the occ of string s in string t
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="na";
//     string t="apna collegena";
//     for(int i=0;i<t.size()-s.size()+1;i++){
//         if(t.substr(i,s.size())==s){
//            cout<<i<<endl;
//         }
//     }
//     return 0;
// }

//9.rabin karp algo
// #include <iostream>
// #include <string>
// using namespace std;
// #define d 256  
// int rabinKarp(string text, string pattern) {
//     int n = text.length();
//     int m = pattern.length();
//     int i, j;
//     int p = 0; 
//     int t = 0;  
//     int h = 1;
//     int q = 101;  
//     for (i = 0; i < m - 1; i++)
//         h = (h * d) % q;
//     for (i = 0; i < m; i++) {
//         p = (d * p + pattern[i]) % q;
//         t = (d * t + text[i]) % q;
//     }
//     for (i = 0; i <= n - m; i++) {
//         // Check hash values
//         if (p == t) {
//             for (j = 0; j < m; j++) {
//                 if (text[i + j] != pattern[j])
//                     break;
//             }
//             if (j == m)
//                 return i;  
//         }
//         if (i < n - m) {
//             t = (d * (t - text[i] * h) + text[i + m]) % q;
//             if (t < 0)
//                 t = t + q;
//         }
//     }
//     return -1;
// }
// int main() {
//     string t = "apna collegena";
//     string s = "na";
//     int index = rabinKarp(t, s);
//     if (index != -1)
//         cout << "Pattern found at index: " << index;
//     else
//         cout << "Pattern not found";
//     return 0;
// }

//10. min sum of consecutive array 
// #include <bits/stdc++.h>
// using namespace std;
// int minSumKConsecutive(vector<int>& arr, int k) {
//     int n = arr.size();
//     if (n < k) return -1;
//     int windowSum = 0;
//     // first window
//     for (int i = 0; i < k; i++)
//         windowSum += arr[i];
//     int minSum = windowSum;
//     // slide window
//     for (int i = k; i < n; i++) {
//         windowSum += arr[i];
//         windowSum -= arr[i - k];
//         minSum = min(minSum, windowSum);
//     }
//     return minSum;
// }
// int main() {
//     vector<int> arr = {-2,10,1,3,2,-1,4,5};
//     int k = 3;
//     cout << "Minimum sum of " << k
//          << " consecutive elements = "
//          << minSumKConsecutive(arr, k);
//     return 0;
// }

//11.greedy coin change 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int amount;
//     cin >> amount;
//     vector<int> coins = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
//     vector<int> used;
//     for (int coin : coins) {
//         while (amount >= coin) {
//             amount -= coin;
//             used.push_back(coin);
//         }
//     }
//     for (int c : used) {
//         cout << c << " ";
//     }
//     cout << endl;
//     cout << "Total coins: " << used.size() << endl;
//     return 0;
// }

//12.active selection problem
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     vector<pair<int, int>> activities(n);
//     for (int i = 0; i < n; i++) {
//         cin >> activities[i].first >> activities[i].second;
//     }
//     sort(activities.begin(), activities.end(),
//          [](pair<int, int>& a, pair<int, int>& b) {
//              return a.second < b.second;
//          });
//     int count = 1;
//     int lastEnd = activities[0].second;
//     cout << "Selected activities:\n";
//     cout << activities[0].first << " " << activities[0].second << endl;
//     for (int i = 1; i < n; i++) {
//         if (activities[i].first >= lastEnd) {
//             count++;
//             lastEnd = activities[i].second;
//             cout << activities[i].first << " " << activities[i].second << endl;
//         }
//     }
//     cout << "Maximum activities: " << count << endl;
//     return 0;
// }

//13.min no of coin indian currency 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int amount;
//     cin >> amount;
//     vector<int> coins = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
//     vector<int> used;
//     for (int coin : coins) {
//         while (amount >= coin) {
//             amount -= coin;
//             used.push_back(coin);
//         }
//     }
//     for (int c : used) {
//         cout << c << " ";
//     }
//     cout << endl;
//     cout << "Total coins: " << used.size() << endl;
//     return 0;
// }

//14.shop in candy store 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> candies(n);
//     for (int i = 0; i < n; i++)
//         cin >> candies[i];
//     sort(candies.begin(), candies.end());
//     int minCost = 0, maxCost = 0;
//     int buy = 0, free = n - 1;
//     while (buy <= free) {
//         minCost += candies[buy];
//         buy++;
//         free -= k;
//     }
//     buy = n - 1;
//     free = 0;
//     while (buy >= free) {
//         maxCost += candies[buy];
//         buy--;
//         free += k;
//     }
//     cout << "Minimum Cost = " << minCost << endl;
//     cout << "Maximum Cost = " << maxCost << endl;
//     return 0;
// }

//15.assign mic hole
// #include <bits/stdc++.h>
// using namespace std;
//     int assignMice(vector<int>& mice, vector<int>& holes) {
//         sort(mice.begin(), mice.end());
//         sort(holes.begin(), holes.end());
//         int ans = 0;
//         for (int i = 0; i < mice.size(); i++) {
//             ans = max(ans, abs(mice[i] - holes[i]));
//         }
//         return ans;
//     }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> mice(n), holes(n);
//     for (int i = 0; i < n; i++)
//         cin >> mice[i];
//     for (int i = 0; i < n; i++)
//         cin >> holes[i];
//     cout <<assignMice(mice, holes);
//     return 0;
// }

//16.min rotation to unlock a circular lock
// #include <bits/stdc++.h>
// using namespace std;
//     int minRotation(string input, string output) {
//         int ans = 0;
//         for (int i = 0; i < input.size(); i++) {
//             int diff = abs(input[i] - output[i]);
//             ans += min(diff, 10 - diff);
//         }
//         return ans;
//     }
// int main() {
//     string input, output;
//     cin >> input >> output;
//     cout << minRotation(input, output);
//     return 0;
// }

//17.n meeting in a room
// #include<bits/stdc++.h>
// using namespace std;
// bool cmp(pair<int,int> &a,pair<int,int> &b){
//     if(a.second==b.second) return a.first<b.first;
//     return a.second<b.second;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> start(n),end(n);
//     for(int i=0;i<n;i++) cin>>start[i];
//     for(int i=0;i<n;i++) cin>>end[i];
//     vector<pair<int,int>> meetings;
//     for(int i=0;i<n;i++) meetings.push_back({start[i],end[i]});
//     sort(meetings.begin(),meetings.end(),cmp);
//     int cnt=1,lastEnd=meetings[0].second;
//     for(int i=1;i<n;i++){
//         if(meetings[i].first>lastEnd){
//             cnt++;
//             lastEnd=meetings[i].second;
//         }
//     }
//     cout<<cnt;
//     return 0;
// }

//18.max meeting in one room
// #include<bits/stdc++.h>
// using namespace std;
// struct Meeting{
//     int start,end,pos;
// };
// bool cmp(Meeting &a,Meeting &b){
//     if(a.end==b.end) return a.pos<b.pos;
//     return a.end<b.end;
// }
// int main(){
//     vector<int> start={1,3,0,5,8,5};
//     vector<int> end={2,4,6,7,9,9};
//     int n=start.size();
//     vector<Meeting> meetings;
//     for(int i=0;i<n;i++)
//         meetings.push_back({start[i],end[i],i+1});
//     sort(meetings.begin(),meetings.end(),cmp);
//     vector<int> ans;
//     ans.push_back(meetings[0].pos);
//     int lastEnd=meetings[0].end;
//     for(int i=1;i<n;i++){
//         if(meetings[i].start>lastEnd){
//             ans.push_back(meetings[i].pos);
//             lastEnd=meetings[i].end;
//         }
//     }
//     for(int x:ans)
//         cout<<x<<" ";
//     return 0;
// }

//19.job sequence problem 
// #include<bits/stdc++.h>
// using namespace std;
// struct Job{
//     int id,deadline,profit;
// };
// bool cmp(Job &a,Job &b){
//     return a.profit>b.profit;
// }
// int main(){
//     vector<Job> jobs={{1,2,100},{2,1,19},{3,2,27},{4,1,25},{5,3,15}};
//     sort(jobs.begin(),jobs.end(),cmp);
//     int maxi=0;
//     for(auto job:jobs)
//         maxi=max(maxi,job.deadline);
//     vector<int> slot(maxi+1,-1);
//     int cnt=0,profit=0;
//     for(auto job:jobs){
//         for(int j=job.deadline;j>0;j--){
//             if(slot[j]==-1){
//                 slot[j]=job.id;
//                 cnt++;
//                 profit+=job.profit;
//                 break;
//             }
//         }
//     }
//     cout<<"Jobs Done = "<<cnt<<endl;
//     cout<<"Maximum Profit = "<<profit;
//     return 0;
// }

//20.fractuonal knapsack 
// #include<bits/stdc++.h>
// using namespace std;
// struct Item{
//     int value,weight;
// };
// bool cmp(Item &a,Item &b){
//     return (double)a.value/a.weight>(double)b.value/b.weight;
// }
// int main(){
//     vector<Item> items={{60,10},{100,20},{120,30}};
//     int W=50;
//     sort(items.begin(),items.end(),cmp);
//     double ans=0;
//     for(auto item:items){
//         if(W>=item.weight){
//             ans+=item.value;
//             W-=item.weight;
//         }
//         else{
//             ans+=(double)item.value/item.weight*W;
//             break;
//         }
//     }
//     cout<<ans;
//     return 0;
// }

//21.huffmsnn encoding
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     char ch;
//     int freq;
//     Node *left,*right;
//     Node(char c,int f){
//         ch=c;
//         freq=f;
//         left=right=NULL;
//     }
// };
// struct cmp{
//     bool operator()(Node *a,Node *b){
//         return a->freq>b->freq;
//     }
// };
// void generate(Node *root,string code){
//     if(!root) return;
//     if(!root->left && !root->right){
//         cout<<root->ch<<" : "<<code<<endl;
//         return;
//     }
//     generate(root->left,code+"0");
//     generate(root->right,code+"1");
// }
// int main(){
//     vector<pair<char,int>> data={{'a',5},{'b',9},{'c',12},{'d',13},{'e',16},{'f',45}};
//     priority_queue<Node*,vector<Node*>,cmp> pq;
//     for(auto x:data)
//         pq.push(new Node(x.first,x.second));
//     while(pq.size()>1){
//         Node *left=pq.top(); pq.pop();
//         Node *right=pq.top(); pq.pop();
//         Node *parent=new Node('$',left->freq+right->freq);
//         parent->left=left;
//         parent->right=right;
//         pq.push(parent);
//     }
//     generate(pq.top(),"");
//     return 0;
// }

//22.reverse word in a string 
//  #include<bits/stdc++.h>
// using namespace std;
//     string reverseWords(string S) {
//         vector<string> words;
//         string temp = "";
//         for (char c : S) {
//                     if (c == '.') {
//                 words.push_back(temp);
//                 temp = "";
//             } else {
//                 temp += c;
//             }
//         }
//         words.push_back(temp);
//         reverse(words.begin(), words.end());
//         string ans = "";
//         for (int i = 0; i < words.size(); i++) {
//             ans += words[i];
//             if (i != words.size() - 1)
//                 ans += '.';
//         }
//         return ans;
//     }
// int main(){
//     string S="i.like.this.program.very.much";
//     cout<<reverseWords(S);
//     return 0;
// }

//23.survive on island 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int S=10,N=16,M=2;
//     if(M>N){
//         cout<<"Not Possible";
//         return 0;
//     }
//     int buyingDays=S-S/7;
//     int totalFood=S*M;
//     int days=(totalFood+N-1)/N;
//     if(days<=buyingDays)
//         cout<<days;
//     else
//         cout<<"Not Possible";
//     return 0;
// }

//24.choclate distribution problem 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={7,3,2,4,9,12,56};
//     int m=3;
//     sort(arr.begin(),arr.end());
//     int ans=INT_MAX;
//     for(int i=0;i<=arr.size()-m;i++)
//         ans=min(ans,arr[i+m-1]-arr[i]);
//     cout<<ans;
//     return 0;
// }

//25.mion cost of ropes
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> ropes={4,3,2,6};
//     priority_queue<int,vector<int>,greater<int>> pq;
//     for(int x:ropes)
//         pq.push(x);
//     int cost=0;
//     while(pq.size()>1){
//         int first=pq.top(); pq.pop();
//         int second=pq.top(); pq.pop();
//         int sum=first+second;
//         cost+=sum;
//         pq.push(sum);
//     }
//     cout<<cost;
//     return 0;
// }