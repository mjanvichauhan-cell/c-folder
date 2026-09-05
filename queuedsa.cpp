//1.queue using ll implementation 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
//     node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };
// class queue{
//     node* head;
//     node* tail;
//     int size;
// public:
//     queue(){
//         this->head =NULL;
//         this->tail=NULL;
//         this->size=0;
//     }
//     void enqueue(int data){
//         node* newnode= new node(data);
//         if(this ->head==NULL){
//            this->head = this->tail=newnode;
//         }
//         else{
//             this->tail->next=newnode;
//             this->tail=newnode;
//         }
//         this->size++;
//     }
//     void dequeue(){
//         if(this->head==NULL){
//             return;
//         }
//         else {
//             node* oldhead=this->head;
//         node* newhead=this->head->next;
//         this->head=newhead;
//         if(this->head==NULL) this->tail=NULL;
//         oldhead->next=NULL;
//         delete oldhead;
//         this->size--;
//         }
//     }
//     int getsize(){
//         return this->size;
//     }
//     bool isempty(){
//         return this->head==NULL;
//     }
//     int front(){
//         if(this->head ==NULL) return -1;
//         return this->head->data;
//     }
// };
// int main(){
//     queue qu;
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.dequeue();
//     qu.enqueue(40);
//     while(! qu.isempty()){
//         cout<<qu.front()<<" ";
//         qu.dequeue();
//     }
//     return 0;
// }

//2.queue using array 
// #include<iostream>
// #include<vector>
// using namespace std;
// class queue{
//     int front,back;
//     vector<int> v;
// public:
//     queue(){
//         this->back=-1;
//         this->front=-1;
//     }
//     void enqueue(int data){
//         this->v.push_back(data);
//         this->back++;
//         if(this->back==0) this->front=0;
//     }
//     void dequeue(){
//         if(this ->front==this->back){
//             this->back=-1;
//             this->front=-1;
//             this->v.clear();
//         }
//         else{
//             this->front++;
//         }
//     }
//     bool isempty(){
//         return this->front==-1;
//     }
//     int getfront(){
//         if(this->front==-1) return -1;
//         return v[this->front];
//     }
// };
// int main(){
//     queue qu;
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.dequeue();
//     qu.enqueue(40);
//     while(! qu.isempty()){
//         cout<<qu.getfront()<<" ";
//         qu.dequeue();
//     }
//     return 0;
// }

//3.reverse queue
// #include<iostream>
// #include<stack>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int> qu;
//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     stack<int> st;
//     while(! qu.empty()){
//         st.push(qu.front());
//         qu.pop();
//     }
//     while(! st.empty()){
//         qu.push(st.top());
//         st.pop();
//     }
//     while(! qu.empty()){
//         cout<< qu.front()<<" ";
//         qu.pop();
//     }
//     return 0;
// }

//4.reverse 1st k element of queue
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;
// void reverseFirstK(queue<int> &q, int k) {
//     if (q.empty() || k <= 0 || k > q.size())
//         return;
//     stack<int> st;
//     for (int i = 0; i < k; i++) {
//         st.push(q.front());
//         q.pop();
//     }
//     while (!st.empty()) {
//         q.push(st.top());
//         st.pop();
//     }
//     int remaining = q.size() - k;
//     while (remaining--) {
//         q.push(q.front());
//         q.pop();
//     }
// }
// int main() {
//     queue<int> q;
//     for (int i = 1; i <= 10; i++)
//         q.push(i);
//     int k = 5;
//     reverseFirstK(q, k);
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     return 0;
// }

//5. queue using stack 
// #include<iostream>
// #include<stack>
// using namespace std;
// class queue{
//     stack<int> st;
// public:
//     queue(){}
//     void push(int x){
//         this->st.push(x);
//     }
//     void pop(){
//         if(this->st.empty()) return;
//         stack<int> temp;
//         while(this->st.size()>1){
//             temp.push(st.top());
//             st.pop();
//         }
//         this-> st.pop();
//         while(!temp.empty()){
//             this->st.push(temp.top());
//             temp.pop();
//         }
//     }
//     bool empty(){
//         return this->st.empty();
//     }
//     int front(){
//         if(this->st.empty()) return-1;
//         stack<int> temp;
//         while(this->st.size()>1){
//             temp.push(st.top());
//             st.pop();
//         }
//         int res=this->st.top();
//         while(!temp.empty()){
//             this->st.push(temp.top());
//             temp.pop();
//         }
//         return res;
//     }
// };
// int main(){
//     queue qu;
//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.pop();
//     while(! qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }
//     return 0;
// }

//6.efficient pop func
// #include<iostream>
// #include<stack>
// using namespace std;
// class queue{
//     stack<int> st;
// public:
//     queue(){}
//     void push(int x){
//         stack<int> temp;
//         while(!this->st.empty()){
//             temp.push(this->st.top());
//             this->st.pop();
//         }
//         this-> st.push(x);
//         while(!temp.empty()){
//             this->st.push(temp.top());
//             temp.pop();
//         }
//     }
//     void pop(){
//         if(this->st.empty()) return ;
//         this-> st.pop();
//     }
//     bool empty(){
//         return this->st.empty();
//     }
//     int front(){
//         if(this->st.empty()) return-1;
//         return this->st.top();
//     }
// };
// int main(){
//     queue qu;
//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.pop();
//     while(! qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }
//     return 0;
// }

//7.circular quweue 
// #include<iostream>
// #include<vector>
// using namespace std;
// class queue{
//     int front,back;
//     vector<int> v;
//     int cs;
//     int ts;
// public:
//     queue(int n){
//         v.resize(n);
//         this->ts=n;
//         this->back=n-1;
//         this->front=0;
//         this->cs=0;
//     }
//     void enqueue(int data){
//         if(isfull()) return ;
//         this->back=(this->back+1)%this->ts;
//         this->v[this->back]=data;
//         this->cs++;
//     }
//     void dequeue(){
//         if(isempty()) return;
//         this->front =(this->front +1)%this->cs;
//         this->cs--;
//     }
//     bool isempty(){
//         return this->cs==0;
//     }
//     int getfront(){
//         if(this->front==-1) return -1;
//         return v[this->front];
//     }
//     bool isfull(){
//         return this->cs==this->ts;
//     }
// };
// int main(){
//     queue qu(4);
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.dequeue();
//     qu.enqueue(40);
//     while(! qu.isempty()){
//         cout<<qu.getfront()<<" ";
//         qu.dequeue();
//     }
//     return 0;
// }

//deque
// #include <iostream>
// using namespace std;
// class Deque{
//     int *arr;
//     int size;
//     int front;
//     int rear;
// public:
//     Deque(int n){
//         size=n;
//         arr=new int[size];
//         front=-1;
//         rear=-1;
//     }
//     void pushFront(int x){
//         if((front==0&&rear==size-1)||(front==rear+1)){
//             cout<<"Deque Overflow\n";
//             return;
//         }
//         if(front==-1)
//             front=rear=0;
//         else if(front==0)
//             front=size-1;
//         else
//             front--;
//         arr[front]=x;
//     }
//     void pushRear(int x){
//         if((front==0&&rear==size-1)||(front==rear+1)){
//             cout<<"Deque Overflow\n";
//             return;
//         }
//         if(front==-1)
//             front=rear=0;
//         else if(rear==size-1)
//             rear=0;
//         else
//             rear++;
//         arr[rear]=x;
//     }
//     void popFront(){
//         if(front==-1){
//             cout<<"Deque Underflow\n";
//             return;
//         }
//         if(front==rear)
//             front=rear=-1;
//         else if(front==size-1)
//             front=0;
//         else
//             front++;
//     }
//     void popRear(){
//         if(front==-1){
//             cout<<"Deque Underflow\n";
//             return;
//         }
//         if(front==rear)
//             front=rear=-1;
//         else if(rear==0)
//             rear=size-1;
//         else
//             rear--;
//     }
//     int getFront(){
//         if(front==-1)
//             return -1;
//         return arr[front];
//     }
//     int getRear(){
//         if(rear==-1)
//             return -1;
//         return arr[rear];
//     }
//     bool empty(){
//         return front==-1;
//     }
// };
// int main(){
//     Deque dq(5);
//     dq.pushRear(10);
//     dq.pushRear(20);
//     dq.pushFront(5);
//     dq.pushFront(1);
//     cout<<"Front: "<<dq.getFront()<<endl;
//     cout<<"Rear: "<<dq.getRear()<<endl;
//     dq.popFront();
//     cout<<"Front after pop: "<<dq.getFront()<<endl;
//     dq.popRear();
//     cout<<"Rear after pop: "<<dq.getRear()<<endl;
//     return 0;
// }

//8.stack using deque
// #include <iostream>
// #include <deque>
// using namespace std;
// class Stack {
//     deque<int> dq;
// public:
//     void push(int x) {
//         dq.push_back(x);
//     }
//     void pop() {
//         if (dq.empty()) {
//             cout << "Stack Underflow\n";
//             return;
//         }
//         dq.pop_back();
//     }
//     int top() {
//         if (dq.empty()) {
//             cout << "Stack is Empty\n";
//             return -1;
//         }
//         return dq.back();
//     }
//     bool empty() {
//         return dq.empty();
//     }
//     int size() {
//         return dq.size();
//     }
// };
// int main() {
//     Stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     cout << st.top() << endl;
//     st.pop();
//     cout << st.top() << endl;
//     return 0;
// }

//9.queue using deque
// #include <iostream>
// #include <deque>
// using namespace std;
// class Queue {
//     deque<int> dq;
// public:
//     void push(int x) {
//         dq.push_back(x);
//     }
//     void pop() {
//         if (dq.empty()) {
//             cout << "Queue Underflow\n";
//             return;
//         }
//         dq.pop_front();
//     }
//     int front() {
//         if (dq.empty()) {
//             cout << "Queue is Empty\n";
//             return -1;
//         }
//         return dq.front();
//     }
//     bool empty() {
//         return dq.empty();
//     }
//     int size() {
//         return dq.size();
//     }
// };
// int main() {
//     Queue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     cout << q.front() << endl;
//     q.pop();
//     cout << q.front() << endl;
//     return 0;
// }

//10.return max sliding window which contain the max element in each row
//slind window of size k moving right by one pos
// #include<iostream>
// #include<vector>
// #include<queue>
// #include<stack>
// using namespace std;
// vector<int> maxwindow(vector<int> &arr,int k){
//     deque<int> dq;
//     vector<int> res;
//     for(int i=0;i<k;i++){
//         while(! dq.empty() && arr[dq.back()]< arr[i]){
//             dq.pop_back();
//         }
//         dq.push_back(i);
//     }
//     res.push_back(arr[dq.front()]);
//     for(int i=k;i<arr.size();i++){
//         int curr=arr[i];
//         if(dq.front()== (i-k)) dq.pop_front();
//         while(! dq.empty() and arr[dq.back()]  < arr[i]){
//             dq.pop_back();
//         }
//         dq.push_back(i);
//         res.push_back(arr[dq.front()]);
//     }
//     return res;
// }
// int main(){
//     int n=8;
//     int k=3;
//     vector<int> arr{1,3,-1,-3,5,3,6,7};
//     vector<int> res=maxwindow(arr,k);
//     for(int x:res) cout<<x<<" ";
//     return 0;
// }

//11.1st -ve integer in every window of size k
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// vector<int> firstNegative(vector<int>& arr, int k) {
//     int n = arr.size();
//     vector<int> ans;
//     queue<int> q; 
//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0)
//             q.push(i);
//         if (i < k - 1)
//             continue;
//         while (!q.empty() && q.front() <= i - k)
//             q.pop();
//         if (q.empty())
//             ans.push_back(0);
//         else
//             ans.push_back(arr[q.front()]);
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {-8, 2, 3, -6, 10, -1, 5, -2};
//     int k = 3;
//     vector<int> ans = firstNegative(arr, k);
//     for (int x : ans)
//         cout << x << " ";
//     return 0;
// }

//12.1st non repeating chr in stream of chr
// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;
// string firstNonRepeating(string A) {
//     vector<int> freq(26, 0);
//     queue<char> q;
//     string ans = "";
//     for (char ch : A) {
//         freq[ch - 'a']++;
//         q.push(ch);
//         while (!q.empty() && freq[q.front() - 'a'] > 1)
//             q.pop();
//         if (q.empty())
//             ans += '#';
//         else
//             ans += q.front();
//     }
//     return ans;
// }
// int main() {
//     string s = "aabc";
//     cout << firstNonRepeating(s);
//     return 0;
// }

//13.no of subarray having sum less than k
// #include <iostream>
// #include <vector>
// using namespace std;
// int countSubarrays(vector<int>& arr, int k) {
//     int n = arr.size();
//     int left = 0;
//     int sum = 0;
//     int ans = 0;
//     for (int right = 0; right < n; right++) {
//         sum += arr[right];
//         while (sum >= k) {
//             sum -= arr[left];
//             left++;
//         }
//         ans += (right - left + 1);
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {1, 2, 3};
//     int k = 5;
//     cout << countSubarrays(arr, k);
//     return 0;
// }

//14.petrol pump problem
// #include <iostream>
// #include <vector>
// using namespace std;
//     int tour(vector<int>& petrol, vector<int>& distance) {
//         int n = petrol.size();
//         int start = 0;
//         int balance = 0;
//         int deficit = 0;
//         for (int i = 0; i < n; i++) {
//             balance += petrol[i] - distance[i];
//             if (balance < 0) {
//                 start = i + 1;
//                 deficit += balance;
//                 balance = 0;
//             }
//         }
//         if (balance + deficit >= 0)
//             return start;
//         return -1;
//     }
// int main() {
//     vector<int> petrol = {4, 6, 7, 4};
//     vector<int> distance = {6, 5, 3, 5};
//     cout << tour(petrol, distance);
//     return 0;
// }

//15.k queue in single array 
// #include <iostream>
// using namespace std;
// class kQueue {
//     int *arr;
//     int *front;
//     int *rear;
//     int *next;
//     int n;
//     int k;
//     int freeSpot;
// public:
//     kQueue(int n, int k) {
//         this->n = n;
//         this->k = k;
//         arr = new int[n];
//         front = new int[k];
//         rear = new int[k];
//         next = new int[n];
//         for (int i = 0; i < k; i++) {
//             front[i] = -1;
//             rear[i] = -1;
//         }
//         for (int i = 0; i < n - 1; i++) {
//             next[i] = i + 1;
//         }
//         next[n - 1] = -1;
//         freeSpot = 0;
//     }
//     void enqueue(int data, int qn) {
//         if (freeSpot == -1) {
//             cout << "No Space\n";
//             return;
//         }
//         int index = freeSpot;
//         freeSpot = next[index];
//         if (front[qn - 1] == -1) {
//             front[qn - 1] = index;
//         }
//         else {
//             next[rear[qn - 1]] = index;
//         }
//         next[index] = -1;
//         rear[qn - 1] = index;
//         arr[index] = data;
//     }
//     int dequeue(int qn) {
//         if (front[qn - 1] == -1) {
//             return -1;
//         }
//         int index = front[qn - 1];
//         front[qn - 1] = next[index];
//         if (front[qn - 1] == -1) {
//             rear[qn - 1] = -1;
//         }
//         next[index] = freeSpot;
//         freeSpot = index;
//         return arr[index];
//     }
// };
// int main() {
//     kQueue q(10, 3);
//     q.enqueue(10,1);
//     q.enqueue(20,1);
//     q.enqueue(30,2);
//     q.enqueue(40,3);
//     cout << q.dequeue(1) << endl;
//     cout << q.dequeue(2) << endl;
//     cout << q.dequeue(3) << endl;
//     return 0;
// }

// 16.sum of min and max element of all subarray of size k
// #include <iostream>
// #include <vector>
// #include <deque>
// using namespace std;
// int sumMinMax(vector<int>& arr, int k) {
//     deque<int> maxdq;
//     deque<int> mindq;
//     int ans = 0;
//     int n = arr.size();
//     for (int i = 0; i < n; i++) {
//         while (!maxdq.empty() && arr[maxdq.back()] <= arr[i])
//             maxdq.pop_back();
//         while (!mindq.empty() && arr[mindq.back()] >= arr[i])
//             mindq.pop_back();
//         maxdq.push_back(i);
//         mindq.push_back(i);
//         if (maxdq.front() <= i - k)
//             maxdq.pop_front();
//         if (mindq.front() <= i - k)
//             mindq.pop_front();
//         if (i >= k - 1) {
//             ans += arr[maxdq.front()] + arr[mindq.front()];
//         }
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {2, 5, -1, 7, -3, -1, -2};
//     int k = 4;
//     cout << sumMinMax(arr, k);
//     return 0;
// }