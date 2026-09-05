//1. tries
// #include<iostream>
// #include<vector>
// using namespace std;
// class Trie{
// public:
//     class node{
//     public: 
//         bool end;
//         node* next[26];
//         node(){
//             end=false;
//             for(int i=0;i<26;i++){
//                 next[i]=NULL;
//             }
//         }
//     };
//     node* trie;
//     Trie(){
//         trie=new node();
//     }
//     void insert(string word){
//         int i=0;
//         node* it=trie;
//         while(i<word.size()){
//             if(it->next[word[i]-'a']==NULL) it->next[word[i]-'a']=new node();
//             it=it->next[word[i]-'a'];
//             i++;
//         }
//         it->end=true;
//     }
//     bool search(string word){
//         int i=0;
//         node* it=trie;
//         while(i<word.size()){
//             if(it->next[word[i]-'a']==NULL) return false;
//             it=it->next[word[i]-'a'];
//             i++;
//         }
//     return it->end;
//     }
//     void remove(string word){
//         node* it=trie;
//         for(int i=0;i<word.size();i++){
//             if(it->next[word[i]-'a']==NULL)
//                 return;
//             it=it->next[word[i]-'a'];
//         }
//         it->end=false;
//     }
// string longestPrefix(){
//         string ans="";
//         node* it=trie;
//         while(true){
//             int count=0;
//             int index=-1;
//             for(int i=0;i<26;i++){
//                 if(it->next[i]!=NULL){
//                     count++;
//                     index=i;
//                 }
//             }
//             if(count==1 && it->end==false){
//                 ans.push_back('a'+index);
//                 it=it->next[index];
//             }
//             else
//                 break;
//         }
//         return ans;
//     }
// };
// int main(){
//     Trie *mytrie=new Trie();
//     vector<string> words={"ayush","dassi"};
//     for(auto w:words){
//         mytrie->insert(w);
//     }
//     if(mytrie->search("ayush")) cout<<"found";
//     else cout<<"not found";
//     mytrie->remove("ayush");
//     cout<<mytrie->longestPrefix();
//     return 0;
// }

//2.calcultiong xor
// #include<bits/stdc++.h>
// using namespace std;
// class Trienode{
// public:
//    Trienode *next[2];
//    Trienode(){
//     next[0]=NULL;
//     next[1]=NULL;
//    }
// };
// Trienode* buildtrie(vector<int> &a){
//     Trienode *root=new Trienode();
//     int n=a.size();
//     for(int i=0;i<n;i++){
//         int num=a[i];
//         Trienode* curr=root;
//         for(int i=31;i>=0;i--){
//             int bit=num>>i&1;
//             if(curr->next[bit]==NULL) curr->next[bit]=new Trienode();
//             curr=curr->next[bit];
//         }
//     }
//     return root;
// }
// int helper(Trienode* root,vector<int> &a){
//     int res=0;
//     for(int i=0;i<a.size();i++){
//         int num=a[i];
//         int currmax=0;
//         Trienode* it=root;
//         for(int i=31;i>=0;i--){
//             int bit=((num>>i)& 1)?0:1;
//             if(it->next[bit]){
//                 currmax<<=1;
//                 currmax|=1;
//                 it=it->next[bit];
//             }
//             else{
//                 currmax<<=1;
//                 currmax|=0;
//                 it=it->next[bit xor 1];
//             }
//         }
//         res=max(res,currmax);
//     }
//     return res;
// }
// int main(){
//     vector<int> a={3,10,5,15,2};
//     Trienode* root= buildtrie(a);
//     int ans=helper(root,a);
//     cout<<ans;
//     return 0;
// }

//3. maximum xor subarray
// #include <bits/stdc++.h>
// using namespace std;
// const int INT_SIZE = 31;  
// class Node{
// public:
//     Node* next[2];
//     Node(){
//         next[0] = next[1] = NULL;
//     }
// };
// Node* trie;
// void insert(int num){
//     Node* it = trie;
//     for(int i = INT_SIZE; i >= 0; i--){
//         int currBit = (num >> i) & 1;
//         if(!it->next[currBit]){
//             it->next[currBit] = new Node();
//         }
//         it = it->next[currBit];
//     }
// }
// int query(int num){
//     Node* it = trie;
//     int ans = 0;
//     for(int i = INT_SIZE; i >= 0; i--){
//         int currBit = (num >> i) & 1;
//         int opp = currBit ^ 1; 
//         if(it->next[opp]){
//             ans |= (1 << i);
//             it = it->next[opp];
//         }
//         else{
//             it = it->next[currBit];
//         }
//     }
//     return ans;
// }
// int main(){
//     int n = 4;
//     vector<int> arr = {1,2,6,8};
//     trie = new Node();
//     insert(0);   
//     int prefixXor = 0;
//     int maxXor = 0;
//     for(int i = 0; i < n; i++){
//         prefixXor ^= arr[i];
//         maxXor = max(maxXor, query(prefixXor));
//         insert(prefixXor);
//     }
//     cout << "Maximum XOR Subarray = " << maxXor;
//     return 0;
// }

//4.trie bash
// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     Node* next[2];
//     Node() {
//         next[0] = next[1] = NULL;
//     }
// };
// const int INT_SIZE = 31;
// void insert(Node* root, int num) {
//     Node* cur = root;
//     for(int i = INT_SIZE; i >= 0; i--) {
//         int bit = (num >> i) & 1;
//         if(!cur->next[bit])
//             cur->next[bit] = new Node();
//         cur = cur->next[bit];
//     }
// }
// int query(Node* root, int num) {
//     Node* cur = root;
//     int ans = 0;
//     for(int i = INT_SIZE; i >= 0; i--) {
//         int bit = (num >> i) & 1;
//         int opp = bit ^ 1;
//         if(cur->next[opp]) {
//             ans |= (1 << i);
//             cur = cur->next[opp];
//         } else {
//             cur = cur->next[bit];
//         }
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {1,2,6,8};
//     int n = arr.size();
//     vector<int> leftMax(n), rightMax(n);
//     Node* root = new Node();
//     insert(root, 0);
//     int px = 0, best = 0;
//     for(int i = 0; i < n; i++) {
//         px ^= arr[i];
//         best = max(best, query(root, px));
//         insert(root, px);
//         leftMax[i] = best;
//     }
//     root = new Node();
//     insert(root, 0);
//     px = 0;
//     best = 0;
//     for(int i = n-1; i >= 0; i--) {
//         px ^= arr[i];
//         best = max(best, query(root, px));
//         insert(root, px);
//         rightMax[i] = best;
//     }
//     int ans = 0;
//     for(int i = 0; i < n-1; i++) {
//         ans = max(ans, leftMax[i] + rightMax[i+1]);
//     }
//     cout << "Maximum Value = " << ans;
//     return 0;
// }

//5. trie dic
// #include <bits/stdc++.h>
// using namespace std;
// class TrieNode {
// public:
//     TrieNode* children[26];
//     bool isEnd;
//     TrieNode() {
//         isEnd = false;
//         for(int i = 0; i < 26; i++)
//             children[i] = NULL;
//     }
// };
// class Trie {
//     TrieNode* root;
//     void printAllWords(TrieNode* node, string prefix) {
//         if(node->isEnd)
//             cout << prefix << endl;
//         for(int i = 0; i < 26; i++) {
//             if(node->children[i]) {
//                 char ch = 'a' + i;
//                 printAllWords(node->children[i], prefix + ch);
//             }
//         }
//     }
// public:
//     Trie() {
//         root = new TrieNode();
//     }
//     void insert(string word) {
//         TrieNode* temp = root;
//         for(char ch : word) {
//             int index = ch - 'a';
//             if(temp->children[index] == NULL)
//                 temp->children[index] = new TrieNode();
//             temp = temp->children[index];
//         }
//         temp->isEnd = true;
//     }
//     bool searchPrefix(string word) {
//         TrieNode* temp = root;
//       for(char ch : word) {
//             int index = ch - 'a';
//             if(temp->children[index] == NULL)
//                 return false;
//             temp = temp->children[index];
//         }
//         printAllWords(temp, word);
//         return true;
//     }
// };
// int main() {
//     Trie t;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         string word;
//         cin >> word;
//         t.insert(word);
//     }
//     int q;
//     cin >> q;
//     while(q--) {
//         string searchWord;
//         cin >> searchWord;
//         bool found = t.searchPrefix(searchWord);
//         if(!found) {
//             cout << "No suggestions" << endl;
//             t.insert(searchWord);
//         }
//     }
//     return 0;
// }

//6.snakes and ladders.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int snake,ladd;
//     cin>>ladd;
//     map<int,int> lad;
//     map<int,int> snak;
//     for(int i=0;i<ladd;i++){
//         int u,v;
//         cin>>u>>v;
//         lad[u]=v;
//     }
//     cin>>snake;
//     for(int i=0;i<snake;i++){
//         int u,v;
//         cin>>u>>v;
//         snak[u]=v;
//     }
//     int moves=0;
//     queue<int> q;
//     q.push(1);
//     bool found=false;
//     vector<int> vis(101,0);
//     vis[1]=true;
//     while(!q.empty()and !found){
//         int sz=q.size();
//         while(sz--){
//             int t=q.front();
//             q.pop();
//             for(int die=1;die<=6;die++){
//                 if(t+die==100){
//                     found=true;
//                 }
//                 if(t+die<=100 and lad[t+die] and !vis[lad[t+die]]){
//                     vis[lad[t+die]]=true;
//                     if(lad[t+die]==100){
//                         found=true;
//                     }
//                     q.push(lad[t+die]);
//                 }
//                 else if(t+die<=100 and snak[t+die] and !vis[snak[t+die]]){
//                     vis[snak[t+die]]=true;
//                     if(snak[t+die]==100){
//                         found=true;
//                     }
//                     q.push(snak[t+die]);
//                 }
//                 else if(t+die<=100 and !snak[t+die] and !vis[t+die] and !lad[t+die]){
//                     vis[t+die]=true;
//                     q.push(t+die);
//                 }
//             }
//         }
//         moves++;
//     }
//     if(found) cout<<moves;
//     else cout<<-1;
//     return 0;
// }

//7. surrounded regions 
// #include<bits/stdc++.h>
// using namespace std;
// void change(vector<vector<char>> &A,int x ,int y){
//          A[x][y]='*';
//          int dx[]={0,0,-1,1};
//          int dy[]={1,-1,0,0};
//          for(int i=0;i<4;i++){
//             int cx=x+dx[i];
//             int cy=y+dy[i];
//             if(cx>=0 and cx<A.size() and cy>=0 and cy<A[0].size() and A[cx][cy]=='O'){
//                 change(A,cx,cy);
//             }
//          }
// }
// int main(){
//     int n,m ;
//     cin>>n>>m;
//     vector<vector<char>> a(n,vector<char>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i==0 or i==n-1 or j==0 or j==m-1){
//                 if(a[i][j]=='O')
//                 change(a,i,j);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//            if(a[i][j]=='O'){
//             a[i][j]='X';
//            }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i][j]=='*'){
//             a[i][j]='O';
//            }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//8.sqrt decom
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];
//     int len = sqrtl(n)+1;
//     vector<int> b(len);
//     for(int i = 0; i < n; i++)
//         b[i / len] += arr[i];
//    int q;
//     cin >> q;
//     while(q--) {
//         int l, r;
//         cin >> l >> r;
//         int sum = 0;
//         l--,r--;
//         for(int i=l;i<=r;){
//         if(i%len==0 && i+len-1<=r) {
//             sum += b[i/len];
//             i+=len;
//         }
//         else{
//             sum += arr[i];
//            i++;
//         }
//        }
//     cout<<sum<<" ";
//     }
// return 0;
// }

//9.root mini query 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];
//     int blockSize = sqrtl(n);
//     vector<int> blockMin(blockSize + 1, INT_MAX);
//     for(int i = 0; i < n; i++) {
//         blockMin[i / blockSize] = min(blockMin[i / blockSize], arr[i]);
//     }
//     int q;
//     cin >> q;
//     while(q--) {
//         int l, r;
//         cin >> l >> r;
//         int ans = INT_MAX;
//         while(l <= r && l % blockSize != 0) {
//             ans = min(ans, arr[l]);
//             l++;
//         }
//         while(l + blockSize - 1 <= r) {
//             ans = min(ans, blockMin[l / blockSize]);
//             l += blockSize;
//         }
//         while(l <= r) {
//             ans = min(ans, arr[l]);
//             l++;
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }

//10.mo' algorithm
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// long long arr[MAXN];
// long long answer[MAXN];
// long long currentSum = 0;
// struct Query {
//     int l, r, idx;
// };
// int block;
// bool compare(Query a, Query b) {
//     if (a.l / block != b.l / block)
//         return a.l / block < b.l / block;
//     return a.r < b.r;
// }
// void add(int pos) {
//     currentSum += arr[pos];
// }
// void remove(int pos) {
//     currentSum -= arr[pos];
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         cin >> arr[i];
//     int q;
//     cin >> q;
//     vector<Query> queries(q);
//     for (int i = 0; i < q; i++) {
//         cin >> queries[i].l >> queries[i].r;
//         queries[i].idx = i;
//     }
//     block = sqrtl(n);
//     sort(queries.begin(), queries.end(), compare);
//     int currL = 1, currR = 0;
//     for (auto query : queries) {
//         int L = query.l;
//         int R = query.r;
//         while (currL > L) {
//             currL--;
//             add(currL);
//         }
//         while (currR < R) {
//             currR++;
//             add(currR);
//         }
//         while (currL < L) {
//             remove(currL);
//             currL++;
//         }
//         while (currR > R) {
//             remove(currR);
//             currR--;
//         }
//         answer[query.idx] = currentSum;
//     }
//     for (int i = 0; i < q; i++)
//         cout << answer[i] << "\n";
//     return 0;
// }

//11.d query spoj
// #include <bits/stdc++.h>
// using namespace std;
// const int MAXN = 100005;
// int arr[MAXN];
// int freq[1000005];   
// int answer[MAXN];
// int currentAnswer = 0;
// struct Query {
//     int l, r, idx;
// };
// int block;
// bool compare(Query a, Query b) {
//     if (a.l / block != b.l / block)
//         return a.l / block < b.l / block;
//     return a.r < b.r;
// }
// void add(int pos) {
//     freq[arr[pos]]++;
//     if (freq[arr[pos]] == 1)
//         currentAnswer++;
// }
// void remove(int pos) {
//     freq[arr[pos]]--;
//     if (freq[arr[pos]] == 0)
//         currentAnswer--;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         cin >> arr[i];
//     int q;
//     cin >> q;
//     vector<Query> queries(q);
//     for (int i = 0; i < q; i++) {
//         cin >> queries[i].l >> queries[i].r;
//         queries[i].idx = i;
//     }
//     block = sqrtl(n);
//     sort(queries.begin(), queries.end(), compare);
//     int currL = 1, currR = 0;
//     for (auto query : queries) {
//         int L = query.l;
//         int R = query.r;
//         while (currL > L) {
//             currL--;
//             add(currL);
//         }
//         while (currR < R) {
//             currR++;
//             add(currR);
//         }
//         while (currL < L) {
//             remove(currL);
//             currL++;
//         }
//         while (currR > R) {
//             remove(currR);
//             currR--;
//         }
//         answer[query.idx] = currentAnswer;
//     }
//     for (int i = 0; i < q; i++)
//         cout << answer[i] << "\n";
// }

//12.policy based data structure 
// #include<bits/stdc++.h>
// using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<class T> using oset=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
// int main(){
//     int q;
//     cin>>q;
//     oset<int> s;
//     while(q--){
//         int c;
//         cin>>c;
//         if(c==1) {
//             int t;
//             cin>>t;
//             s.insert(t);
//         }
//         else if(c==2){
//             int t;
//             cin>>t;
//             cout<<*s.find_by_order(t)<<" ";
//         }
//         else{
//             int t;
//             cin>>t;
//             cout<<s.order_of_key(t)<<" ";
//         }
//     }
// }

//13.guide to interactive problems
// #include <iostream>
// using namespace std;
// int main() {
//     int low = 1, high = 1000000;  
//     int mid;
//     int ans=-1;
//     string response;
//     while (low <= high) {
//         mid = low + (high - low) / 2;
//         cout << "? " << mid << endl;
//         cout.flush();   
//         cin >> response;
//         if (response == "correct") {
//             cout << "! " << mid << endl;
//             cout.flush();
//             break;
//         }
//         else if (response == "greater") {
//             low = mid + 1;
//         }
//         else if (response == "less") {
//             high = mid - 1;
//         }
//     }
//     return 0;
// }

//fenwick tree
//14. point update
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// class Fenwick {
//     vector<ll> bit;
//     int n;
// public:
//     Fenwick(int n) {
//         this->n = n;
//         bit.assign(n + 1, 0);
//     }
//     void update(int i, ll val) {
//         while (i <= n) {
//             bit[i] += val;
//             i += (i & -i);
//         }
//     }
//     ll query(int i) {
//         ll sum = 0;
//         while (i > 0) {
//             sum += bit[i];
//             i -= (i & -i);
//         }
//         return sum;
//     }
//     ll rangeQuery(int l, int r) {
//         return query(r) - query(l - 1);
//     }
// };
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n, q;
//     cin >> n >> q;
//     Fenwick ft(n);
//     vector<long long> arr(n);
//     for(int i=1;i<=n;i++){
//         cin>>arr[i];
//         ft.update(i,arr[i]);
//     }
//     while (q--) {
//         int type;
//         cin >> type;
//         if (type == 1) {
//             int index;
//             ll value;
//             cin >> index >> value;
//             ft.update(index,-arr[index]);
//             arr[index]=value;
//             ft.update(index, value);
//         }
//         else {
//             int l, r;
//             cin >> l >> r;
//             cout << ft.rangeQuery(l, r) << "\n";
//         }
//     }
//     return 0;
// }

//15.range update 
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
//     void update(int i, ll val,int bit[],int n) {
//         while (i <= n) {
//             bit[i] += val;
//             i += (i & -i);
//         }
//     }
//     ll query(int i,int bit[],int n) {
//         ll sum = 0;
//         while (i > 0) {
//             sum += bit[i];
//             i -= (i & -i);
//         }
//         return sum;
//     }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin>>n;
//         int bit[n+10]={0};
//         int c;
//         cin>>c;
//             while (c--) {
//                 int l, r;
//                 ll val;
//                 cin >> l >> r >> val;
//                 l++,r++;
//                 update(l, val,bit,n);
//                 update(r + 1, -val,bit,n);
//             }
//             int q;
//             cin>>q;
//             while(q--) {
//                 int w;
//                 cin >>w;
//                 w++;
//                 cout<<query(w,bit,n)<<endl;
//             }
//         }
//     return 0;
//     }

//16.count inversion fenwick tree 
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// class Fenwick {
//     vector<ll> bit;
//     int n;
// public:
//     Fenwick(int n) {
//         this->n = n;
//         bit.assign(n + 1, 0);
//     }
//     void update(int i, ll val) {
//         while (i <= n) {
//             bit[i] += val;
//             i += (i & -i);
//         }
//     }
//     ll query(int i) {
//         ll sum = 0;
//         while (i > 0) {
//             sum += bit[i];
//             i -= (i & -i);
//         }
//         return sum;
//     }
// };
// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];
//     vector<int> temp = arr;
//     sort(temp.begin(), temp.end());
//     for(int i = 0; i < n; i++) {
//         arr[i] = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin() + 1;
//     }
//     Fenwick ft(n);
//     ll inversions = 0;
//     for(int i = n - 1; i >= 0; i--) {
//         inversions += ft.query(arr[i] - 1);
//         ft.update(arr[i], 1);
//     }
//     cout << inversions << endl;
//     return 0;
// }

//17.segment tree
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+2;
// int a[N],tree[4*N];
// void build(int node,int st,int en){
//     if(st==en){
//         tree[node]=a[st];
//         return ;
//     }
//     int mid=(st+en)/2;
//     build(2*node,st,mid);
//     build(2*node+1,mid+1,en);
//     tree[node]=tree[2*node]+tree[2*node+1];
// }


//18.query in segment tree
// int query(int node,int st,int en,int l,int r){
//     if(st>r || en<l){
//         return 0;
//     }
//     if(l<= st && en<=r) return tree[node];
//     int mid=(st+en)/2;
//     int q1=query(2*node,st,mid,l,r);
//     int q2=query(2*node+1,mid+1,en,l,r);
//     return q1+q2;
// }
// int main(){
//     int n=8;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     build(1,0,n-1);
//     // for(int i=1;i<15;i++){
//     //     cout<<tree[i]<<" ";
//     // }
//     while(1){
//         int type;
//         cin>>type;
//         if(type==-1) break;
//         if(type==1) {
//             int l,r;
//             cin>>l>>r;
//             int ans=query(1,0,n-1,l,r);
//             cout<<ans<<endl;
//         }
//     }
//     return 0;
// }

//19.max min
// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e5+2;
// int a[N],tree[4*N];
// void build(int node,int st,int en){
//     if(st==en){
//         tree[node]=a[st];
//         return ;
//     }
//     int mid=(st+en)/2;
//     build(2*node,st,mid);
//     build(2*node+1,mid+1,en);
//     tree[node]=max(tree[2*node],tree[2*node+1]);
// }
// int query(int node,int st,int en,int l,int r){
//     if(st>r || en<l){
//         return INT_MIN;
//     }
//     if(l<= st && en<=r) return tree[node];
//     int mid=(st+en)/2;
//     int q1=query(2*node,st,mid,l,r);
//     int q2=query(2*node+1,mid+1,en,l,r);
//     return max(q1,q2);
// }
// void update(int node,int st,int en,int idx,int val){
//     if(st==en){
//         a[st]=val;
//         tree[node]=val;
//         return ;
//     }
//     int mid=(st+en)/2;
//     if(idx<=mid) update(2*node,st,mid,idx,val);
//     else update(2*node+1,mid+1,en,idx,val);
//     tree[node]=max(tree[2*node],tree[2*node+1]);
// }
// int main(){
//     int n=9;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     build(1,0,n-1);
//     while(1){
//         int type;
//         cin>>type;
//         if(type==-1) break;
//         if(type==1) {
//             int l,r;
//             cin>>l>>r;
//             int ans=query(1,0,n-1,l,r);
//             cout<<ans<<endl;
//         }
//         else if(type==2){
//             int idx,val;
//             cin>>idx>>val;
//             update(1,0,n-1,idx,val);
//             cout<<query(1,0,n-1,0,n-1)<<" ";
//         }
//     }
//     return 0;
// }


//20.no of min on a segment 
// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     int mn;
//     int cnt;
// };
// int n, m;
// vector<Node> seg;
// vector<int> arr;
// Node merge(Node a, Node b) {
//     if (a.mn < b.mn) return a;
//     if (b.mn < a.mn) return b;
//     return {a.mn, a.cnt + b.cnt};
// }
// void build(int idx, int l, int r) {
//     if (l == r) {
//         seg[idx] = {arr[l], 1};
//         return;
//     }
//     int mid = (l + r) / 2;
//     build(2*idx, l, mid);
//     build(2*idx+1, mid+1, r);
//     seg[idx] = merge(seg[2*idx], seg[2*idx+1]);
// }
// void update(int idx, int l, int r, int pos, int val) {
//     if (l == r) {
//         seg[idx] = {val, 1};
//         return;
//     }
//     int mid = (l + r) / 2;
//     if (pos <= mid)
//         update(2*idx, l, mid, pos, val);
//     else
//         update(2*idx+1, mid+1, r, pos, val);
//     seg[idx] = merge(seg[2*idx], seg[2*idx+1]);
// }
// Node query(int idx, int l, int r, int ql, int qr) {
//     if (qr < l || r < ql)
//         return {INT_MAX, 0};
//     if (ql <= l && r <= qr)
//         return seg[idx];
//     int mid = (l + r) / 2;
//     Node left = query(2*idx, l, mid, ql, qr);
//     Node right = query(2*idx+1, mid+1, r, ql, qr);
//     return merge(left, right);
// }
// int main() {
//     cin >> n >> m;
//     arr.resize(n);
//     seg.resize(4*n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     build(1, 0, n-1);
//     while (m--) {
//         int type;
//         cin >> type;
//         if (type == 1) {
//             int pos, val;
//             cin >> pos >> val;
//             update(1, 0, n-1, pos, val);
//         } else {
//             int l, r;
//             cin >> l >> r;
//             Node ans = query(1, 0, n-1, l, r-1);
//             cout << ans.mn << " " << ans.cnt << endl;
//         }
//     }
//      return 0;
// }

//21.segent with max sum
// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     long long sum, pref, suff, ans;
// };
// int n, m;
// vector<Node> seg;
// vector<long long> arr;
// Node merge(Node L, Node R) {
//     Node res;
//     res.sum = L.sum + R.sum;
//     res.pref = max(L.pref, L.sum + R.pref);
//     res.suff = max(R.suff, R.sum + L.suff);
//     res.ans = max({L.ans, R.ans, L.suff + R.pref});
//     return res;
// }
// Node make_node(long long val) {
//     Node res;
//     res.sum = val;
//     res.pref = res.suff = res.ans = max(val, 0LL);
//     return res;
// }
// void build(int idx, int l, int r) {
//     if (l == r) {
//         seg[idx] = make_node(arr[l]);
//         return;
//     }
//     int mid = (l + r) / 2;
//     build(2*idx, l, mid);
//     build(2*idx+1, mid+1, r);
//     seg[idx] = merge(seg[2*idx], seg[2*idx+1]);
// }
// void update(int idx, int l, int r, int pos, long long val) {
//     if (l == r) {
//         seg[idx] = make_node(val);
//         return;
//     }
//     int mid = (l + r) / 2;
//     if (pos <= mid)
//         update(2*idx, l, mid, pos, val);
//     else
//         update(2*idx+1, mid+1, r, pos, val);
//     seg[idx] = merge(seg[2*idx], seg[2*idx+1]);
// }
// int main() {
//     cin >> n >> m;
//     arr.resize(n);
//     seg.resize(4*n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     build(1, 0, n-1);
//      cout << seg[1].ans << endl;
//     while (m--) {
//         int pos;
//         long long val;
//         cin >> pos >> val;
//         update(1, 0, n-1, pos, val);
//         cout << seg[1].ans << endl;
//     }
//     return 0;
// }

//22.kth one 
// #include <bits/stdc++.h>
// using namespace std;
// int n, m;
// vector<int> seg;
// vector<int> arr;
// void build(int idx, int l, int r) {
//     if (l == r) {
//         seg[idx] = arr[l];
//         return;
//     }
//     int mid = (l + r) / 2;
//     build(2*idx, l, mid);
//     build(2*idx+1, mid+1, r);
//     seg[idx] = seg[2*idx] + seg[2*idx+1];
// }
// void update(int idx, int l, int r, int pos) {
//     if (l == r) {
//         arr[pos] ^= 1;      
//         seg[idx] = arr[pos];
//         return;
//     }
//     int mid = (l + r) / 2;
//     if (pos <= mid)
//         update(2*idx, l, mid, pos);
//     else
//         update(2*idx+1, mid+1, r, pos);
//     seg[idx] = seg[2*idx] + seg[2*idx+1];
// }
// int find_kth(int idx, int l, int r, int k) {
//     if (l == r)
//         return l;
//     int mid = (l + r) / 2;
//     if (seg[2*idx] > k)
//         return find_kth(2*idx, l, mid, k);
//     else
//         return find_kth(2*idx+1, mid+1, r, k - seg[2*idx]);
// }
// int main() {
//     cin >> n >> m;
//     arr.resize(n);
//     seg.resize(4*n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     build(1, 0, n-1);
//     while (m--) {
//         int type;
//         cin >> type;
//         if (type == 1) {
//             int i;
//             cin >> i;
//             update(1, 0, n-1, i);
//         } else {
//             int k;
//             cin >> k;
//             cout << find_kth(1, 0, n-1, k) << endl;
//         }
//     }
//     return 0;
// }

//23.first elemt atleast x
// #include <bits/stdc++.h>
// using namespace std;
// int n, m;
// vector<long long> seg;
// vector<long long> arr;
// void build(int idx, int l, int r) {
//     if (l == r) {
//         seg[idx] = arr[l];
//         return;
//     }
//     int mid = (l + r) / 2;
//     build(2*idx, l, mid);
//     build(2*idx+1, mid+1, r);
//     seg[idx] = max(seg[2*idx], seg[2*idx+1]);
// }
// void update(int idx, int l, int r, int pos, long long val) {
//     if (l == r) {
//         seg[idx] = val;
//         return;
//     }
//     int mid = (l + r) / 2;
//     if (pos <= mid)
//         update(2*idx, l, mid, pos, val);
//     else
//         update(2*idx+1, mid+1, r, pos, val);
//     seg[idx] = max(seg[2*idx], seg[2*idx+1]);
// }
// int find_first(int idx, int l, int r, long long x) {
//     if (seg[idx] < x)
//         return -1;   // no such element
//     if (l == r)
//         return l;
//     int mid = (l + r) / 2;
//     if (seg[2*idx] >= x)
//         return find_first(2*idx, l, mid, x);
//     else
//         return find_first(2*idx+1, mid+1, r, x);
// }
// int main() {
//     cin >> n >> m;
//     arr.resize(n);
//     seg.resize(4*n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     build(1, 0, n-1);
//     while (m--) {
//         int type;
//         cin >> type;
//         if (type == 1) {
//             int i;
//             long long v;
//             cin >> i >> v;
//             update(1, 0, n-1, i, v);
//         }
//         else {
//             long long x;
//             cin >> x;
//             cout << find_first(1, 0, n-1, x) << endl;
//         }
//     }
// return 0;
// }

//24.nested segment 
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 200005;
// int n;
// int a[2*N];
// int first_pos[N], second_pos[N];
// int seg[8*N];
// void update(int node, int l, int r, int pos) {
//     if (l == r) {
//         seg[node] = 1;
//         return;
//     }
//     int mid = (l + r) / 2;
//     if (pos <= mid)
//         update(2*node, l, mid, pos);
//     else
//         update(2*node+1, mid+1, r, pos);
//     seg[node] = seg[2*node] + seg[2*node+1];
// }
// int query(int node, int l, int r, int ql, int qr) {
//     if (qr < l || r < ql) return 0;
//     if (ql <= l && r <= qr) return seg[node];
//     int mid = (l + r) / 2;
//     return query(2*node, l, mid, ql, qr) +
//            query(2*node+1, mid+1, r, ql, qr);
// }
// int main() {
//     cin >> n;
//     for (int i = 1; i <= 2*n; i++) {
//         cin >> a[i];
//         if (!first_pos[a[i]])
//             first_pos[a[i]] = i;
//         else
//             second_pos[a[i]] = i;
//     }
//     vector<int> ans(n+1);
//     vector<int> order(n);
//     iota(order.begin(), order.end(), 1);
//     sort(order.begin(), order.end(), [&](int x, int y){
//         return first_pos[x] > first_pos[y];
//     });
//     for (int x : order) {
//         ans[x] = query(1, 1, 2*n, first_pos[x], second_pos[x]);
//         update(1, 1, 2*n, second_pos[x]);
//     }
//     for (int i = 1; i <= n; i++)
//         cout << ans[i] << " ";
//     return 0;
// }

//25.intersecting segment 
// #include <iostream>
// #include <vector>
// using namespace std;
// struct SegmentTree {
//     int n;
//     vector<int> tree;
//     SegmentTree(int size) {
//         n = 1;
//         while (n < size) n *= 2;
//         tree.assign(2 * n, 0);
//     }
//     void update(int i, int val) {
//         i += n;
//         tree[i] = val; // Set the leaf
//         while (i > 1) {
//             i /= 2;
//             tree[i] = tree[2 * i] + tree[2 * i + 1]; 
//         }
//     }
//     int query(int l, int r) {
//         int res = 0;
//         for (l += n, r += n; l < r; l /= 2, r /= 2) {
//             if (l & 1) res += tree[l++];
//             if (r & 1) res += tree[--r];
//         }
//         return res;
//     }
// };
// vector<int> solve(int n, const vector<int>& a) {
//     vector<int> pos(n + 1, -1);
//     vector<int> results(n + 1, 0);
//     SegmentTree st(2 * n);
//     for (int i = 0; i < 2 * n; i++) {
//         int x = a[i];
//         if (pos[x] == -1) {
//             pos[x] = i;
//             st.update(i, 1);
//         } else {
//             st.update(pos[x], 0);
//             results[x] = st.query(pos[x], i);
//         }
//     }
//     return results;
// }
// int main() {
//     int n;
//     cin >> n;
//     vector<int> a(2 * n);
//     for (int &x : a) cin >> x;
//     auto res1 = solve(n, a);
//     vector<int> a_rev = a;
//     for(int i = 0; i < n; i++) swap(a_rev[i], a_rev[2*n-1-i]);
//     auto res2 = solve(n, a_rev);
//     for (int i = 1; i <= n; i++) {
//         cout << res1[i] + res2[i] << (i == n ? "" : " ");
//     }
//     return 0;
// }