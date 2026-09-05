//1.implementing heap
// #include<bits/stdc++.h>
// using namespace std;
// int heap[100];
// int heapsize=0;
// void insert(int val){
//     heapsize++;
//     int index=heapsize;
//     heap[index]=val;
//     while(index>1){
//         int parent=index/2;
//         if(heap[parent]<heap[index]){
//             swap(heap[parent],heap[index]);
//             index=parent;
//         }
//         else break;
//     }
// }
// void deleteRoot(){
//     if(heapsize==0){
//         cout<<"Heap is empty";
//         return;
//     }
//     heap[1]=heap[heapsize];
//     heapsize--;
//     int i=1;
//     while(i<=heapsize){
//         int left=2*i;
//         int right=2*i+1;
//         int largest=i;
//         if(left<=heapsize&&heap[left]>heap[largest]) largest=left;
//         if(right<=heapsize&&heap[right]>heap[largest]) largest=right;
//         if(largest!=i){
//             swap(heap[i],heap[largest]);
//             i=largest;
//         }
//         else break;
//     }
// }
// void print(){
//     for(int i=1;i<=heapsize;i++) cout<<heap[i]<<" ";
// }
// int main(){
//     insert(50);
//     insert(55);
//     insert(53);
//     insert(52);
//     insert(54);
//     print();
//     cout<<endl;
//     deleteRoot();
//     print();
// }

//2.BUILD HEAP 
// #include<bits/stdc++.h>
// using namespace std;
// void heapify(int arr[],int n,int i){
//     int largest=i;
//     int left=2*i;
//     int right=2*i+1;
//     if(left<=n&&arr[left]>arr[largest]) largest=left;
//     if(right<=n&&arr[right]>arr[largest]) largest=right;
//     if(largest!=i){
//         swap(arr[i],arr[largest]);
//         heapify(arr,n,largest);
//     }
// }
// int main(){
//     int arr[]={-1,54,53,55,52,50};
//     int n=5;
//     for(int i=n/2;i>=1;i--){
//         heapify(arr,n,i);
//     }
//     for(int i=1;i<=n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//3.priority queue max heap
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     priority_queue<int> pq;
//     pq.push(4);
//     pq.push(2);
//     pq.push(5);
//     pq.push(1);
//     pq.push(3);
//     cout<<pq.top()<<endl;
//     while(!pq.empty()){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }

//4.min heap
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     priority_queue<int,vector<int>,greater<int>> pq;
//     pq.push(4);
//     pq.push(2);
//     pq.push(5);
//     pq.push(1);
//     pq.push(3);
//     cout<<pq.top()<<endl;
//     while(!pq.empty()){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }

//5.height of heap
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=15;
//     cout<<(int)log2(n);
// }

//6.magician and chocolates 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int A=3;
//     vector<int> B={6,5};
//     priority_queue<int> pq;
//     for(int x:B)
//         pq.push(x);
//     long long ans=0;
//     int mod=1000000007;
//     while(A--){
//         int x=pq.top();
//         pq.pop();
//         ans=(ans+x)%mod;
//         pq.push(x/2);
//     }
//     cout<<ans;
// }

//7.profit maximisation
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int A=4;
//     vector<int> B={2,3};
//     priority_queue<int> pq;
//     for(int x:B)
//         pq.push(x);
//     int profit=0;
//     while(A--){
//         int x=pq.top();
//         pq.pop();
//         profit+=x;
//         if(x>1)
//             pq.push(x-1);
//     }
//     cout<<profit;
// }

//8.kth smallest elemnt
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={7,10,4,3,20,15};
//     int n=6;
//     int k=3;
//     priority_queue<int> pq;
//     for(int i=0;i<k;i++)
//         pq.push(arr[i]);
//     for(int i=k;i<n;i++){
//         if(arr[i]<pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     cout<<pq.top();
// }

//9.kth largest elemnt in a stream 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=6;
//     int k=4;
//     priority_queue<int,vector<int>,greater<int>> pq;
//     for(int i=0;i<n;i++){
//         if(pq.size()<k){
//             pq.push(arr[i]);
//         }
//         else if(arr[i]>pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//         if(pq.size()<k)
//             cout<<-1<<" ";
//         else
//             cout<<pq.top()<<" ";
//     }
// }

//10.sum of elemnt between k1 and k2 smallest elemnt 
// #include<bits/stdc++.h>
// using namespace std;
// int kthSmallest(int arr[],int n,int k){
//     priority_queue<int> pq;
//     for(int i=0;i<k;i++)
//         pq.push(arr[i]);
//     for(int i=k;i<n;i++){
//         if(arr[i]<pq.top()){
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     return pq.top();
// }
// int main(){
//     int arr[]={20,8,22,4,12,10,14};
//     int n=7;
//     int k1=3,k2=6;
//     int first=kthSmallest(arr,n,k1);
//     int second=kthSmallest(arr,n,k2);
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>first&&arr[i]<second)
//             sum+=arr[i];
//     }
//     cout<<sum;
// }

//11.optimal merge pattern
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n=4;
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         minHeap.push(x);
//     }
//     int totalCost = 0;
//     while (minHeap.size() > 1) {
//         int a = minHeap.top(); minHeap.pop();
//         int b = minHeap.top(); minHeap.pop();
//         int merged = a + b;
//         totalCost += merged;
//         minHeap.push(merged);
//     }
//     cout << totalCost << endl;
//     return 0;
// }

//12.merge two binary
// #include<bits/stdc++.h>
// using namespace std;
// void heapify(vector<int>& arr,int n,int i){
//     int largest=i;
//     int left=2*i+1;
//     int right=2*i+2;
//     if(left<n&&arr[left]>arr[largest])
//         largest=left;
//     if(right<n&&arr[right]>arr[largest])
//         largest=right;
//     if(largest!=i){
//         swap(arr[i],arr[largest]);
//         heapify(arr,n,largest);
//     }
// }
// int main(){
//     vector<int> a={10,5,6,2};
//     vector<int> b={12,7,9};
//     vector<int> ans;
//     for(int x:a) ans.push_back(x);
//     for(int x:b) ans.push_back(x);
//     int n=ans.size();
//     for(int i=n/2-1;i>=0;i--)
//         heapify(ans,n,i);
//     for(int x:ans)
//         cout<<x<<" ";
// }

//13.merge k sorted array 
// #include <bits/stdc++.h>
// using namespace std;
// struct Node {
//     int value;
//     int arrIdx;
//     int eleIdx;
// };
// struct Compare {
//     bool operator()(Node const& a, Node const& b) {
//         return a.value > b.value; // min heap
//     }
// };
// int main() {
//     int k=3;
//     vector<vector<int>> arr(k);
//     for (int i = 0; i < k; i++) {
//         int n;
//         cin>>n;
//         arr[i].resize(n);
//         for (int j = 0; j < n; j++) {
//             cin >> arr[i][j];
//         }
//     }
//     priority_queue<Node, vector<Node>, Compare> minHeap;
//     for (int i = 0; i < k; i++) {
//         if (!arr[i].empty()) {
//             minHeap.push({arr[i][0], i, 0});
//         }
//     }
//     vector<int> result;
//     while (!minHeap.empty()) {
//         Node curr = minHeap.top();
//         minHeap.pop();
//         result.push_back(curr.value);
//         int nextIdx = curr.eleIdx + 1;
//         if (nextIdx < arr[curr.arrIdx].size()) {
//             minHeap.push({arr[curr.arrIdx][nextIdx],
//                           curr.arrIdx,
//                           nextIdx});
//         }
//     }
//     for (int x : result) {
//         cout << x << " ";
//     }
//     return 0;
// }

//14.is binary tree heap
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node *left,*right;
//     Node(int x){
//         data=x;
//         left=right=NULL;
//     }
// };
//     int countNodes(Node* root){
//         if(root==NULL)
//             return 0;
//         return 1+countNodes(root->left)+countNodes(root->right);
//     }
//     bool isCBT(Node* root,int index,int total){
//         if(root==NULL)
//             return true;
//         if(index>=total)
//             return false;
//         return isCBT(root->left,2*index+1,total) &&
//                isCBT(root->right,2*index+2,total);
//     }
//     bool isMaxHeap(Node* root){
//         if(root->left==NULL&&root->right==NULL)
//             return true;
//         if(root->right==NULL)
//             return root->data>=root->left->data;
//         bool left=isMaxHeap(root->left);
//         bool right=isMaxHeap(root->right);
//         return left&&right&&
//                root->data>=root->left->data&&
//                root->data>=root->right->data;
//     }
//     bool isHeap(Node* tree) {
//         int total=countNodes(tree);
//         return isCBT(tree,0,total)&&isMaxHeap(tree);
//     }
// int main(){
//     Node* root=new Node(10);
//     root->left=new Node(9);
//     root->right=new Node(8);
//     root->left->left=new Node(7);
//     root->left->right=new Node(6);
//     root->right->left=new Node(5);
//     int total=countNodes(root);
//     if(isCBT(root,0,total)&&isMaxHeap(root))
//         cout<<"Yes";
//     else
//         cout<<"No";
// }

//15.bst to max heap
// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node *left,*right;
//     Node(int x){
//         data=x;
//         left=right=NULL;
//     }
// };
// void inorder(Node* root,vector<int>& v){
//     if(root==NULL)
//         return;
//     inorder(root->left,v);
//     v.push_back(root->data);
//     inorder(root->right,v);
// }
// void postorder(Node* root,vector<int>& v,int &i){
//     if(root==NULL)
//         return;
//     postorder(root->left,v,i);
//     postorder(root->right,v,i);
//     root->data=v[i++];
// }
// void preorder(Node* root){
//     if(root==NULL)
//         return;
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int main(){
//     Node* root=new Node(4);
//     root->left=new Node(2);
//     root->right=new Node(6);
//     root->left->left=new Node(1);
//     root->left->right=new Node(3);
//     root->right->left=new Node(5);
//     root->right->right=new Node(7);
//     vector<int> v;
//     inorder(root,v);
//     int i=0;
//     postorder(root,v,i);
//     preorder(root);
// }

//16.greedy expedi
// #include <bits/stdc++.h>
// using namespace std; 
// int main() {
//     int n=4;
//     vector<pair<int, int>> stations(n);
//     for (int i = 0; i < n; i++) {
//         cin >> stations[i].first >> stations[i].second;
//     }
//    int L=25,P=10;
//      for (int i = 0; i < n; i++) {
//         stations[i].first = L - stations[i].first;
//     }
//     sort(stations.begin(), stations.end());
//     priority_queue<int> maxHeap;
//     int currFuel = P;
//     int prevDist = 0;
//     int i = 0;
//     int stops = 0;
//     while (currFuel < L) {
//         while (i < n && stations[i].first <= currFuel) {
//             maxHeap.push(stations[i].second);
//             i++;
//         }
//         if (maxHeap.empty()) {
//             cout << -1 << endl;
//             return 0;
//         }
//         currFuel += maxHeap.top();
//         maxHeap.pop();
//         stops++;
//     }
//     cout << stops << endl;
//     return 0;
// }

//17.max and min array diff
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     vector<int> A(n), B(n);
//     for (int i = 0; i < n; i++)
//         cin >> A[i];
//     for (int i = 0; i < n; i++)
//         cin >> B[i];
//     sort(A.begin(), A.end());         
//     sort(B.begin(), B.end(), greater<int>()); 
//     long long maxDiff = 0;
//     for (int i = 0; i < n; i++) {
//         maxDiff += abs(A[i] - B[i]);
//     }
//     cout << maxDiff << endl;
//     return 0;
// }

//18.heap sort
// #include <bits/stdc++.h>
// using namespace std;
// void heapify(vector<int>& arr, int n, int i) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;
//     if (left < n && arr[left] > arr[largest])
//         largest = left;
//     if (right < n && arr[right] > arr[largest])
//         largest = right;
//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }
// void heapSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);
//     for (int i = n - 1; i > 0; i--) {
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);
//     }
// }
// int main() {
//     int n=6;
//     vector<int> arr{12,11,5,13,6,7};
//     heapSort(arr);
//     for (int x : arr)
//         cout << x << " ";
//     return 0;
// }

//19.median of running stream
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n=6;
//     priority_queue<int> leftMax; 
//     priority_queue<int, vector<int>, greater<int>> rightMin; 
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         if (leftMax.empty() || x <= leftMax.top())
//             leftMax.push(x);
//         else
//             rightMin.push(x);
//         if (leftMax.size() > rightMin.size() + 1) {
//             rightMin.push(leftMax.top());
//             leftMax.pop();
//         }
//         else if (rightMin.size() > leftMax.size()) {
//             leftMax.push(rightMin.top());
//             rightMin.pop();
//         }
//         if (leftMax.size() == rightMin.size()) {
//             double median = (leftMax.top() + rightMin.top()) / 2.0;
//             cout << median << " ";
//         } else {
//             cout << leftMax.top() << " ";
//         }
//     }
//     return 0;
// }

//20.kth largest sum subarray
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={10,-10,20,-40};
//     int n=4;
//     int k=6;
//     priority_queue<int,vector<int>,greater<int>> pq;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if(pq.size()<k)
//                 pq.push(sum);
//             else if(sum>pq.top()){
//                 pq.pop();
//                 pq.push(sum);
//             }
//         }
//     }
//     cout<<pq.top();
// }

//21. smallest subsequence with sum k
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n=5;
//     vector<int> arr{1,2,3,4,5};
//     int K=11;
//     priority_queue<int> maxHeap;
//     for (int x : arr)
//         maxHeap.push(x);
//     int sum = 0;
//     int count = 0;
//     while (!maxHeap.empty() && sum < K) {
//         sum += maxHeap.top();
//         maxHeap.pop();
//         count++;
//     }
//     if (sum >= K)
//         cout << count << endl;
//     else
//         cout << -1 << endl;
//     return 0;
// }

//22.phone directory problem trie
// #include<bits/stdc++.h>
// using namespace std;
// class Trie{
// public:
//     class node{
//     public:
//         bool end;
//         node* next[26];
//         node(){
//             end=false;
//             for(int i=0;i<26;i++)
//                 next[i]=NULL;
//         }
//     };
//     node* trie;
//     Trie(){
//         trie=new node();
//     }
//     void insert(string word){
//         node* it=trie;
//         for(char ch:word){
//             int idx=ch-'a';
//             if(it->next[idx]==NULL)
//                 it->next[idx]=new node();
//             it=it->next[idx];
//         }
//         it->end=true;
//     }
//     void dfs(node* root,string s,vector<string>& ans){
//         if(root->end)
//             ans.push_back(s);
//         for(int i=0;i<26;i++){
//             if(root->next[i]){
//                 dfs(root->next[i],s+char('a'+i),ans);
//             }
//         }
//     }
//     vector<string> search(string prefix){
//         node* it=trie;
//         for(char ch:prefix){
//             int idx=ch-'a';
//             if(it->next[idx]==NULL)
//                 return {"0"};
//             it=it->next[idx];
//         }
//         vector<string> ans;
//         dfs(it,prefix,ans);
//         return ans;
//     }
// };
// int main(){
//     Trie t;
//     vector<string> contacts={
//         "geeikistest",
//         "geeksforgeeks",
//         "geeksfortest"
//     };
//     for(string s:contacts)
//         t.insert(s);
//     string query="gee";
//     for(int i=1;i<=query.size();i++){
//         string prefix=query.substr(0,i);
//         vector<string> ans=t.search(prefix);
//         for(string x:ans)
//             cout<<x<<" ";
//         cout<<endl;
//     }
// }