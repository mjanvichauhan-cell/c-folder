//1.stacks using array
// #include<iostream>
// using namespace std;
// class stack{
//     int capacity;
//     int *arr;
//     int top;
// public:
// stack(int c){
//     this->capacity=c;
//     arr=new int[c];
//     this->top= -1;
// }
//     void push(int data){
//         if(this->top== this->capacity -1){
//             cout<<"overflow";
//             return ;
//         }
//         this->top++;
//         this->arr[this->top]=data;
//     }
//     int pop(){
//         if(this->top==-1){
//             cout<<"underflow";
//             return INT_MIN;
//         }
//         return arr[this->top--];
//     }
//     int Topfun(){
//         if(this->top==-1){
//             cout<<"underflow";
//             return INT_MIN;
//         }
//         return arr[this->top];
//     }
//     bool isempty(){
//         return this->top == -1;
//     }
//     int size(){
//         return this->top+1;
//     }
//     bool iffull(){
//         return this->top== this->capacity-1;
//     }
// };
// int main(){
//     stack st(3);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.pop();
//     st.pop();
//     cout<<st.Topfun()<<" ";
//     return 0;
// }

//2. stack using queue push efficient
// #include<iostream>
// #include<queue>
// using namespace std;
// class stack{
//     int n;
//     queue<int> q1;
//     queue<int> q2;
// public:
//     stack(){
//         n=0;
//     }
//     void push(int val){
//       q2.push(val);
//       n++;
//       while(!q1.empty()){
//         q2.push(q1.front());
//         q1.pop();
//       }
//       queue<int> temp=q1;
//       q1=q2;
//       q2=temp;
//     }
//     void pop(){
//         q1.pop();
//         n--;
//     }
//     int top(){
//         return q1.front();
//     } 
//     int size(){
//         return n;
//     }
// };
// int main(){
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     cout<<st.top()<<endl;
// }

//3. stack using queue pop efficient 
// #include<iostream>
// #include<queue>
// using namespace std;
// class stack{
//     int n;
//     queue<int> q1;
//     queue<int> q2;
// public:
//     stack(){
//         n=0;
//     }
//     void push(int val){
//       q1.push(val);
//       n++;
//     }
//     void pop(){
//        if(q1.empty()) return ;
//        while(q1.size()!=1){
//           q2.push(q1.front());
//           q1.pop();
//        }
//        q1.pop();
//        n--;
//         queue<int> temp=q1;
//       q1=q2;
//       q2=temp;
//     }
//     int top(){
//        if(q1.empty()) return -1;
//        while(q1.size()!=1){
//              q2.push(q1.front());
//           q1.pop();
//        }
//        int ans=q1.front();
//        q2.push(ans);
//           queue<int> temp=q1;
//       q1=q2;
//       q2=temp;
//       return ans;
//     }  
//     int size(){
//         return n;
//     }
// };
// int main(){
//     stack st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     cout<<st.top()<<endl;
//     st.pop();
//      cout<<st.top()<<endl;
// }

//4.stack using ll
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int data;
//     node* next;
//     node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
// };
// class stack{
//     node *head;
//     int capacity;
//     int currsize;
// public:
//     stack(int c){
//         this->capacity =c;
//         this->currsize=0;
//         head=NULL;
//     }
//     void push(int data){
//         if(this->currsize==this->capacity){
//             cout<<"overflow";
//             return ;
//         }
//         node* newnode=new node(data);
//         newnode->next=this->head;
//         this->head=newnode;
//         this->currsize++; 
//     }
//     int pop(){
//         if(this->head==NULL){
//             cout<<"underflow";
//             return INT_MIN;
//         }
//         node *newhead=this->head->next;
//         this->head->next=NULL;
//         node *toberemoved=this->head;
//         int result=toberemoved->data;
//         delete toberemoved;
//         this->head=newhead;
//         return result;
//     }
//     int gettop(){
//         if(this->head==NULL){
//             cout<<"underflow";
//             return INT_MIN;
//         }
//         return this->head->data;
//     }
//     bool isempty(){
//         return this->head==NULL;
//     }
//     int size(){
//         return this->currsize;
//     }
//     bool iffull(){
//         return this->currsize== this->capacity;
//     }
// };
// int main(){
//     stack st(3);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.pop();
//     cout<<st.gettop()<<" ";
//     return 0;
// }

//5.push ,pop ,top and minimum element 
// #include<iostream>
// #include<stack>
// using namespace std;
// class minstack{
//     stack<long long> st;
//     long long min;
// public:
//     minstack(){
//         this->min=INT_MAX;
//     }
//     void push(int val){
//         if(this->st.empty()){
//             this->min=val;
//             this->st.push(val);
//         }
//         else{
//             this->st.push(val-this->min);
//             if(this->min>val){
//                 this->min=val;
//             }
//         }
//     }
//     void pop(){
//         if(! this->st.empty()){
//             if(this->st.top()>=0){
//                 this->st.pop();
//             }
//             else{
//                 this->min=this->min- (this->st.top());
//             }
//         }
//     }
//     int getmin(){
//         return this->min;
//     }
//     int top(){
//         if(this->st.size()==1){
//             return this->st.top();
//         }
//         else if(this->st.top()<0) return this->min;
//         else return this->min+this->st.top();
//     }
// };
// int main(){
//     minstack s;
//     s.push(5);
//     s.push(2);
//     s.push(4);
//     s.push(1);
//     cout<<s.getmin()<<endl;
//     s.pop();
//     cout<<s.getmin();
//     return 0;
// }

//6.leetcode 155 deign min stack
// #include<bits/stdc++.h>
// using namespace std;
// class minstack{
// stack<pair<int,int>> s;
// public:
//     minstack(){
//     long long min=INT_MAX;
//     }
//         void push(int val){
//             if(s.empty()){
//                s.push({val,val});
//             }
//             else {
//                int minval=min(s.top().second,val);
//                s.push({val,minval});
//             }
//         }
//         void pop(){
//            s.pop();
//         }
//         int top(){
//            return s.top().first;
//         }
//         int getMin(){
//             return s.top().second;
//         }
// };
// int main(){
// minstack s;
// s.push(5);
// s.push(6);
// s.push(3);
// s.push(9);
// s.push(12);
// cout<<s.getMin()<<endl;
// }

//7.copy content of one stack to another
// #include<iostream>
// #include<stack>
// using namespace std;
// stack<int> copystack(stack<int> &input){
//     stack<int> temp;
//     while(! input.empty()){
//         int curr=input.top();
//         input.pop();
//         temp.push(curr);
//     }
//     stack<int> res;
//     while(! temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         res.push(curr);
//     }
//     return res;
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     stack<int> res=copystack(st);
//     while(not res.empty()){
//         int curr=res.top();
//         res.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//8.recursive
// #include<iostream>
// #include<stack>
// using namespace std;
// void f(stack<int> &st, stack<int> &res){
//     if(st.empty()) return;
//     int curr=st.top();
//     st.pop();
//     f(st,res);
//     res.push(curr);
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     stack<int> res;
//     f(st,res);
//     while(not res.empty()){
//         int curr=res.top();
//         res.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//9.insert at bottom
// #include<iostream>
// #include<stack>
// using namespace std;
// void copystack(stack<int> &input,int x){
//     stack<int> temp;
//     while(! input.empty()){
//         int curr=input.top();
//         input.pop();
//         temp.push(curr);
//     }
//     input.push(x);
//     while(! temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         input.push(curr);
//     }
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     copystack(st,100);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//10.recursiom
// #include<iostream>
// #include<stack>
// using namespace std;
// void f( stack<int> &st, int x){
//     if(st.empty()){
//         st.push(x);
//         return ;
//     }
//     int curr=st.top();
//     st.pop();
//     f(st,x);
//     st.push(curr);
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     f(st,100);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//11. insert at index
// #include<iostream>
// #include<stack>
// using namespace std;
// void insertstack(stack<int> &input,int x,int idx){
//     stack<int> temp;
//     int count=0;
//     int n=input.size();
//     while(count<n-idx){
//         count++;
//         int curr=input.top();
//         input.pop();
//         temp.push(curr);
//     }
//     input.push(x);
//     while(! temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         input.push(curr);
//     }
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     insertstack(st,100,2);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//12.remove from bottom
// #include<iostream>
// #include<stack>
// using namespace std;
// void removestack(stack<int> &input){
//     stack<int> temp;
//     while( input.size()!=1){
//         int curr=input.top();
//         input.pop();
//         temp.push(curr);
//     }
//     input.pop();
//     while(! temp.empty()){
//         int curr=temp.top();
//         temp.pop();
//         input.push(curr);
//     }
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     removestack(st);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//13.recursive
// #include<iostream>
// #include<stack>
// using namespace std;
// void f(stack<int> &st){
//     if(st.size()==1){
//         st.pop();
//         return ;
//     }
//     int curr=st.top();
//     st.pop();
//     f(st);
//     st.push(curr);
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     f(st);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//14. remove from index 
// #include<iostream>
// #include<stack>
// using namespace std;
// void removeatindex( stack<int> &st,int x){
//     if(st.empty()){
//         return ;
//     }
//     if(x==0){
//     st.pop();
//     return;
//     }
//     int temp=st.top();
//     st.pop();
//     removeatindex(st,x-1);
//     st.push(temp);
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     int index=2;
//     removeatindex(st,index);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//15. reverse stack in same stack 
// #include<iostream>
// #include<stack>
// using namespace std;
// void reverse(stack<int> &input){
//     stack<int> t1,t2;
//     while( !input.empty()){
//         int curr=input.top();
//         input.pop();
//         t1.push(curr);
//     }
//     while(!t1.empty()){
//         int curr=t1.top();
//         t1.pop();
//         t2.push(curr);
//     }
//     while(!t2.empty()){
//         int curr=t2.top();
//         t2.pop();
//         input.push(curr);
//     }
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     reverse(st);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//16. recursive 
// #include<iostream>
// #include<stack>
// using namespace std;
// void insertatbottom( stack<int> &st,int x){
//     if(st.empty()){
//         st.push(x);
//         return ;
//     }
//      int curr=st.top();
//     st.pop();
//     insertatbottom(st,x);
//     st.push(curr);
// }
// void f(stack<int> &st){
//     if(st.empty()){
//         return ;
//     }
//     int curr=st.top();
//     st.pop();
//     f(st);
//     insertatbottom(st,curr);
// }
// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     f(st);
//     while(not st.empty()){
//         int curr=st.top();
//         st.pop();
//         cout<<curr<<" ";
//     }
//     return 0;
// }

//17.reverse a sentence using stack
// #include<iostream>
// #include<stack>
// using namespace std;
// void reversesent(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word=" ";
//         while(s[i]!=' ' && i<s.length()){
//             word+=s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     cout<<endl;
// }
// int main(){
//     string s="hey ,how are you doing?";
//     reversesent(s);
//     return 0;
// }

//18.min bracket used to make balanced brackets 
// #include<bits/stdc++.h>
// using namespace std;
// bool isMatching(char a,char b){
//     return (a=='('&&b==')') or (a=='['&&b==']') or (a=='{'&&b=='}');
// }
// int minbrackets(string &s){
//     int open=0,close=0;
//     stack<char> st;
//     for(char ch:s){
//         if(ch=='(' or ch=='[' or ch=='{'){
//             st.push(ch);
//         }
//         else{
//             if(!st.empty()&& isMatching(st.top(),ch)){
//                 st.pop();
//             }
//             else st.push(ch);
//         }
//     }
//     return st.size();
// }
// int main(){
//     string s="{[(])}";
//     cout<<minbrackets(s);
//     return 0;
// }

//19. balanced bracket sequence 
// #include<iostream>
// #include<stack>
// using namespace std;
// bool isvalid(string str){
//     stack<char> st;
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         if(ch=='[' or ch=='{' or ch=='(') st.push(ch);
//         else{
//             if(ch==')' and !st.empty() and st.top()=='(') st.pop();
//             else if(ch==']' and !st.empty() and st.top()=='[') st.pop();
//             else if(ch=='}' and !st.empty() and st.top()=='{') st.pop();
//             else return false;
//     }
// }   
//     return st.empty();
// }
// int main(){
//     string str="()(({[]}))";
//     cout<<isvalid(str);
//     return 0;
// }

//20. reduntant paranthese 
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string s="((a+b))";
//     stack<char> st;
//     bool ans=false;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/' or s[i]=='^' ){
//             st.push(s[i]);
//         }
//         else if(s[i]=='(') st.push(s[i]);
//         else if(s[i]==')'){
//             if(st.top()=='(') ans=true;
//              while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/' or st.top()=='^') st.pop();
//              st.pop();
//         }
//     }
//     cout<<ans<<" ";
//     return 0;
// }

//21.next greater element;
// #include<iostream>
// #include<stack>
// #include<vector>
// using namespace std;
// vector<int> nge(vector<int> &arr){
//     int n=arr.size();
//     vector<int> output(n,-1);
//     stack<int> st;
//     st.push(0);
//     for (int i=1;i<n;i++){
//         while(!st.empty() and arr[i]> arr[st.top()]){
//             output[st.top()]=arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(not st.empty()){
//         output[st.top()]=-1;
//         st.pop();
//     }
//     return output;
// }
// int main(){;
//     vector<int> v{1,3,2,16,6};
//     int n=5;
//     vector<int> res=nge(v);
//     for(int i=0;i<n;i++) cout<<res[i]<<" ";
//     return 0;
// }

//22.stock span 
// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> pge(vector<int> &arr){
//     int n=arr.size();
//     reverse(arr.begin(),arr.end());
//     vector<int> output(n,-1);
//     stack<int> st;
//     st.push(0);
//     for (int i=1;i<n;i++){
//         while(!st.empty() and arr[i]> arr[st.top()]){
//             output[st.top()]=n-i-1;
//             st.pop();
//         }
//         st.push(i);
//     }
//     while(not st.empty()){
//         output[st.top()]=-1;
//         st.pop();
//     }
//     reverse(output.begin(),output.end());
//     reverse(arr.begin(),arr.end());
//     return output;
// }
// int main(){;
//     vector<int> v{100,80,60,70,60,75,85};
//     int n=7;
//     vector<int> res=pge(v);
//     for(int i=0;i<n;i++) cout<<i-res[i]<<" ";
//     return 0;
// }

//23.largest rectangle of histogram return  // trapping rainwater
// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int lga(vector<int> &arr){
//     int n=arr.size();
//     stack<int> st;
//     int ans=INT_MIN;
//     st.push(0);
//     for (int i=1;i<n;i++){
//         while(!st.empty() and arr[i]< arr[st.top()]){
//             int ele=arr[st.top()];
//             st.pop();
//             int nsi=i;
//             int psi=(st.empty())?(-1):st.top();
//             ans= max(ans,ele*(nsi-psi-1));
//         }
//         st.push(i);
//     }
//     while(not st.empty()){
//         int ele=arr[st.top()];
//         st.pop();
//             int nsi=n;
//             int psi=(st.empty())?(-1):st.top();
//             ans= max(ans,ele*(nsi-psi-1));
//             st.pop();
//         }
//     return ans;
// }
// int main(){;
//     vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};
//     int res=lga(v);
//     cout<<res<<" ";
//     return 0;
// }

//24. previous smaller elemnts /no on left 
// #include<bits/stdc++.h>
// using namespace std;
// vector<int> previousSmaller(vector<int> &arr){
//     vector<int> ans(arr.size(),0);
//     stack<int> st;
//     for (int i=0;i<arr.size();i++){
//         while(st.size()>0 and arr[i]<=st.top()){
//             st.pop();
//         }
//         if(st.empty()){
//             ans[i]=-1;
//         }
//         else {
//             ans[i]=st.top();
//         }
//         st.push(arr[i]);
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr{3,1,0,8,6};
//     vector<int> res=previousSmaller(arr);
//     for(int val:res){
//         cout<<val<<" ";
//     }
//     return 0;
// }

//25.next smaller elemnt 
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> nextSmaller(vector<int> &arr) {
//     int n = arr.size();
//     vector<int> ans(n, -1);
//     stack<int> st;
//     for (int i = n - 1; i >= 0; i--) {
//         while (!st.empty() && st.top() >= arr[i])
//             st.pop();
//         if (!st.empty())
//             ans[i] = st.top();
//         st.push(arr[i]);
//     }
//     return ans;
// }
// int main() {
//     vector<int> arr = {3, 1, 0, 8, 6};
//     vector<int> ans = nextSmaller(arr);
//     for (int x : ans)
//         cout << x << " ";
// }

//26. evalpostfix
// #include<bits/stdc++.h>
// using namespace std ;
// int calc(int v1,int v2,char op){
//     if(op=='^') return pow(v1,v2);
//     if(op=='*') return v1*v2;
//     if(op=='+') return v1+v2;
//     if(op=='-') return v1-v2;
// }
// int eval(string &str){
//     stack<int> st;
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         if(isdigit(ch)){
//             st.push(ch-'0');
//         }
//         else{
//             int v2=st.top();
//             st.pop();
//             int v1=st.top();
//             st.pop();
//             st.push(calc(v1,v2,ch));
//         }
//     }
//     return st.top();
// }
// int main(){
//     string str="231*+9-";
//     cout<<eval(str);
//     return 0;
// }

//27. evalprefix
// #include<bits/stdc++.h>
// using namespace std ;
// int calc(int v1,int v2,char op){
//     if(op=='^') return pow(v1,v2);
//     if(op=='*') return v1*v2;
//     if(op=='+') return v1+v2;
//     if(op=='-') return v1-v2;
//     return 0;
// }
// int eval(string &str){
//     stack<int> st;
//     for(int i=str.size()-1;i>=0;i--){
//         char ch=str[i];
//         if(isdigit(ch)){
//             st.push(ch-'0');
//         }
//         else{
//             int v2=st.top();
//             st.pop();
//             int v1=st.top();
//             st.pop();
//             st.push(calc(v1,v2,ch));
//         }
//     }
//     return st.top();
// }
// int main(){
//     string str="-9+*132";
//     cout<<eval(str);
//     return 0;
// }

//28.postfix to prefix
// #include<bits/stdc++.h>
// using namespace std ;
// bool isop(char ch){
//     return ch=='+' or ch=='-' or ch=='*' or ch=='^' or ch=='/';
// }
// string eval(string &str){
//     stack<string> st;
//     reverse(str.begin(),str.end());
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         if(isdigit(ch)){
//             st.push(string(1,ch));
//         }
//         else{
//             string v1=st.top();
//             st.pop();
//             string v2=st.top();
//             st.pop();
//             string newexp=v1+v2+ch;
//             st.push(newexp);
//         }
//     }
//     return st.top();
// }
// int main(){
//     string str="*+31-15";
//     cout<<eval(str);
//     return 0;
// }

//29. infix
// #include<bits/stdc++.h>
// using namespace std ;
// int calc(int v1,int v2,char op){
//     if(op=='^') return pow(v1,v2);
//     if(op=='*') return v1*v2;
//     if(op=='+') return v1+v2;
//     if(op=='-') return v1-v2;
//     return v1/v2;
// }
// int precedence(char ch){
//     if(ch=='^') return 3;
//     else if(ch=='*' or ch=='/') return 2;
//     else if(ch=='+' or ch=='-') return 1;
//     else return -1;
// }
// int eval(string &str){
//     stack<int> nums;
//     stack<char> ops;
//     for(int i=0;i<str.size();i++){
//         if(isdigit(str[i])) nums.push(str[i]-'0');
//         else if(str[i]=='(') ops.push('(');
//         else if(str[i]==')')  {
//         while(!ops.empty() && ops.top()!='('){
//             char op=ops.top();
//             ops.pop();
//             int v2=nums.top();
//             nums.pop();
//             int v1=nums.top();
//             nums.pop();
//             nums.push(calc(v1,v2,op));
//         }
//         if(! ops.empty()) ops.pop();
//     }
//     else{
//          while(! ops.empty() && precedence(ops.top())>=precedence(str[i])){
//                 char op=ops.top();
//                 ops.pop();
//                 int v2=nums.top();
//                 nums.pop();
//                 int v1=nums.top();
//                 nums.pop();
//                 nums.push(calc(v1,v2,op));
//             }
//             ops.push(str[i]);
//         }
//     }
//             while(! ops.empty() ){
//                 char op=ops.top();
//                 ops.pop();
//                 int v2=nums.top();
//                 nums.pop();
//                 int v1=nums.top();
//                 nums.pop();
//                 nums.push(calc(v1,v2,op));
//             }
//             return nums.top();
// }
// int main(){
//     string str="1+(2*(3-1))+2";
//     cout<<eval(str);
//     return 0;
// }

//30. infix to postfix
// #include<iostream>
// #include<stack>
// using namespace std;
// int prec(char c){
//     if(c=='^') return 3;
//     else if(c=='*' or c=='/') return 2;
//     else if(c=='+' or c=='-') return 1;
//     else return -1;
// }
// string infixtopostfix(string s){
//     stack<char> st;
//     string res;
//     for(int i=0;i<s.length();i++){
//         if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) res+=s[i];
//         else if(s[i]=='(') st.push(s[i]);
//         else if(s[i]==')') {
//             while(!st.empty() && st.top()!='('){
//                 res+=st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else {
//             while(!st.empty()&&prec(st.top())>prec(s[i])){
//                 res+=st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         res+=st.top();
//         st.pop();
//     }
//     return res;
// }
// int main(){
//     cout<<infixtopostfix("(a-b/c)*(a/k-l)")<<endl;
// }

//31. infix to prefix
// #include<iostream>
// #include<stack>
// #include<algorithm>
// using namespace std;
// int prec(char c){
//     if(c=='^') return 3;
//     else if(c=='*' or c=='/') return 2;
//     else if(c=='+' or c=='-') return 1;
//     else return -1;
// }
// string infixtoprefix(string s){
//     stack<char> st;
//     string res;
//     reverse(s.begin(),s.end());
//     for(int i=0;i<s.length();i++){
//         if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) res+=s[i];
//         else if(s[i]==')') st.push(s[i]);
//         else if(s[i]=='(') {
//             while(!st.empty() && st.top()!=')'){
//                 res+=st.top();
//                 st.pop();
//             }
//             if(!st.empty()){
//                 st.pop();
//             }
//         }
//         else {
//             while(!st.empty()&&prec(st.top())>=prec(s[i])){
//              res+=st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while(!st.empty()){
//         res+=st.top();
//         st.pop();
//     }
//     reverse(res.begin(),res.end());
//     return res;
// }
// int main(){
//     cout<<infixtoprefix("(a-b/c)*(a/k-l)")<<endl;
// }

//32.make array beautiful
// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> makeBeautiful(vector<int> &arr) {
//     vector<int> st;
//     for (int x : arr) {
//         if (st.empty()) {
//             st.push_back(x);
//         }
//         else if ((st.back() >= 0 && x >= 0) || (st.back() < 0 && x < 0)) {
//             st.push_back(x);
//         }
//         else {
//             st.pop_back();
//         }
//     }
//     return st;
// }
// int main() {
//     vector<int> arr = {4, 2, -2, 1};
//     vector<int> ans = makeBeautiful(arr);
//     if (ans.empty()) {
//         cout << "Array is empty";
//     } else {
//         cout << "Beautiful Array: ";
//         for (int x : ans) {
//             cout << x << " ";
//         }
//     }
//     return 0;
// }

//33.string manipulation
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// string stringManipulation(string str) {
//     vector<int> freq(256, 0);
//     for (char ch : str)
//         freq[ch]++;
//     string ans = "";
//     for (char ch : str) {
//         if (freq[ch] > 1) {
//             freq[ch]--;
//         } else {
//             ans += ch;
//         }
//     }
//     return ans;
// }
// int main() {
//     string str = "geeksforgeeks";
//     cout << stringManipulation(str);
//     return 0;
// }

//34.string campare
// #include <iostream>
// #include <stack>
// #include <algorithm>
// #include <string>
// using namespace std;
// string process(string s) {
//     stack<char> st;
//     for (char ch : s) {
//         if (ch == '#') {
//             if (!st.empty())
//                 st.pop();
//         } else {
//             st.push(ch);
//         }
//     }
//     string ans = "";
//     while (!st.empty()) {
//         ans += st.top();
//         st.pop();
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// bool backspaceCompare(string s, string t) {
//     return process(s) == process(t);
// }
// int main() {
//     string s = "ab#c";
//     string t = "ad#c";
//     if (backspaceCompare(s, t))
//         cout << "True";
//     else
//         cout << "False";
//     return 0;
// }

//35.print bracket no
// #include <iostream>
// #include <stack>
// using namespace std;
// void printBracketNumber(string s) {
//     stack<int> st;
//     int num = 1;
//     for (char ch : s) {
//         if (ch == '(') {
//             cout << num << " ";
//             st.push(num);
//             num++;
//         }
//         else if (ch == ')') {
//             cout << st.top() << " ";
//             st.pop();
//         }
//     }
// }
// int main() {
//     string s = "(a+(b*c))+(d/e)";
//     printBracketNumber(s);
//     return 0;
// }

//36.get min at pop
// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<int> st, minSt;
//     int arr[] = {1, 2, 3};
//     int n = 3;
//     for (int i = 0; i < n; i++) {
//         st.push(arr[i]);
//         if (minSt.empty() || arr[i] <= minSt.top())
//             minSt.push(arr[i]);
//     }
//     while (!st.empty()) {
//         int x = st.top();
//         st.pop();
//         if (x == minSt.top())
//             minSt.pop();
//         if (minSt.empty())
//             cout << -1 << " ";
//         else
//             cout << minSt.top() << " ";
//     }
//     return 0;
// }

//37.the celebrity problem
// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
// int celebrity(vector<vector<int>> &M, int n) {
//     stack<int> st;
//     for (int i = 0; i < n; i++)
//         st.push(i);
//     while (st.size() > 1) {
//         int a = st.top();
//         st.pop();
//         int b = st.top();
//         st.pop();
//         if (M[a][b] == 1)
//             st.push(b);
//         else
//             st.push(a);
//     }
//     int c = st.top();
//     for (int i = 0; i < n; i++) {
//         if (i == c)
//             continue;
//         if (M[c][i] == 1 || M[i][c] == 0)
//             return -1;
//     }
//     return c;
// }
// int main() {
//     vector<vector<int>> M = {
//         {0,1,1},
//         {0,0,0},
//         {0,1,0}
//     };
//     cout << celebrity(M, 3);
//     return 0;
// }

//38.max of min every window 
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> maxOfMin(vector<int> arr) {
//     int n = arr.size();
//     vector<int> left(n), right(n);
//     stack<int> st;
//     for (int i = 0; i < n; i++) {
//         while (!st.empty() && arr[st.top()] >= arr[i])
//             st.pop();
//         left[i] = st.empty() ? -1 : st.top();
//         st.push(i);
//     }
//     while (!st.empty()) st.pop();
//     for (int i = n - 1; i >= 0; i--) {
//         while (!st.empty() && arr[st.top()] >= arr[i])
//             st.pop();
//         right[i] = st.empty() ? n : st.top();
//         st.push(i);
//     }
//     vector<int> ans(n + 1, INT_MIN);
//     for (int i = 0; i < n; i++) {
//         int len = right[i] - left[i] - 1;
//         ans[len] = max(ans[len], arr[i]);
//     }
//     for (int i = n - 1; i >= 1; i--)
//         ans[i] = max(ans[i], ans[i + 1]);
//     ans.erase(ans.begin());
//     return ans;
// }
// int main() {
//     vector<int> arr = {10,20,30,50,10,70,30};
//     vector<int> ans = maxOfMin(arr);
//     for(int x : ans)
//         cout << x << " ";
//     return 0;
// }

//39.implement two stack in an array 
// #include <bits/stdc++.h>
// using namespace std;
// class TwoStacks {
//     int *arr;
//     int size;
//     int top1, top2;
// public:
//     TwoStacks(int n) {
//         size = n;
//         arr = new int[n];
//         top1 = -1;
//         top2 = n;
//     }
//     void push1(int x) {
//         if (top1 + 1 == top2)
//             return;
//         arr[++top1] = x;
//     }
//     void push2(int x) {
//         if (top1 + 1 == top2)
//             return;
//         arr[--top2] = x;
//     }
//     int pop1() {
//         if (top1 == -1)
//             return -1;
//         return arr[top1--];
//     }
//     int pop2() {
//         if (top2 == size)
//             return -1;
//         return arr[top2++];
//     }
// };
// int main() {
//     TwoStacks st(10);
//     st.push1(10);
//     st.push1(20);
//     st.push2(50);
//     st.push2(60);
//     cout << st.pop1() << endl;
//     cout << st.pop2() << endl;
// }

//40.n stack in an array 
// #include <bits/stdc++.h>
// using namespace std;
// class NStack {
//     int *arr;
//     int *top;
//     int *next;
//     int n, s;
//     int freeSpot;
// public:
//     NStack(int N, int S) {
//         n = N;
//         s = S;
//         arr = new int[s];
//         top = new int[n];
//         next = new int[s];
//         for (int i = 0; i < n; i++)
//             top[i] = -1;
//         for (int i = 0; i < s - 1; i++)
//             next[i] = i + 1;
//         next[s - 1] = -1;
//         freeSpot = 0;
//     }
//     bool push(int x, int m) {
//         if (freeSpot == -1)
//             return false;
//         int index = freeSpot;
//         freeSpot = next[index];
//         arr[index] = x;
//         next[index] = top[m - 1];
//         top[m - 1] = index;
//         return true;
//     }
//     int pop(int m) {
//         if (top[m - 1] == -1)
//             return -1;
//         int index = top[m - 1];
//         top[m - 1] = next[index];
//         next[index] = freeSpot;
//         freeSpot = index;
//         return arr[index];
//     }
// };
// int main() {
//     NStack st(3, 6);
//     st.push(10,1);
//     st.push(20,1);
//     st.push(30,2);
//     st.push(40,3);
//     cout<<st.pop(1)<<endl;
//     cout<<st.pop(2)<<endl;
//     cout<<st.pop(3)<<endl;
// }

//41.sort a stack
// #include <iostream>
// #include <stack>
// using namespace std;
// void insertSorted(stack<int> &st, int x) {
//     if (st.empty() || st.top() <= x) {
//         st.push(x);
//         return;
//     }
//     int temp = st.top();
//     st.pop();
//     insertSorted(st, x);
//     st.push(temp);
// }
// void sortStack(stack<int> &st) {
//     if (st.empty())
//         return;
//     int temp = st.top();
//     st.pop();
//     sortStack(st);
//     insertSorted(st, temp);
// }
// int main() {
//     stack<int> st;
//     st.push(30);
//     st.push(-5);
//     st.push(18);
//     st.push(14);
//     st.push(-3);
//     sortStack(st);
//     while (!st.empty()) {
//         cout << st.top() << " ";
//         st.pop();
//     }
// }

//42.min cost to make string valid
// #include <bits/stdc++.h>
// using namespace std;
// int findMinCost(string s) {
//     if (s.length() % 2)
//         return -1;
//     stack<char> st;
//     for (char ch : s) {
//         if (ch == '{')
//             st.push(ch);
//         else {
//             if (!st.empty() && st.top() == '{')
//                 st.pop();
//             else
//                 st.push(ch);
//         }
//     }
//     int open = 0, close = 0;
//     while (!st.empty()) {
//         if (st.top() == '{')
//             open++;
//         else
//             close++;
//         st.pop();
//     }
//     return (open + 1) / 2 + (close + 1) / 2;
// }
// int main() {
//     string s = "}}{{";
//     cout << findMinCost(s);
//     return 0;
// }