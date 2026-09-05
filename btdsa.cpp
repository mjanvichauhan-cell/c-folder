//1.avl tree
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;
//     int height;
//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//         height=1;
//     }
// };
// int getHeight(Node* root){
//     if(root==NULL)
//         return 0;
//     return root->height;
// }
// int getBalance(Node* root){
//     if(root==NULL)
//         return 0;
//     return getHeight(root->left)-getHeight(root->right);
// }
// Node* rightRotate(Node* y){
//     Node* x=y->left;
//     Node* T2=x->right;
//     x->right=y;
//     y->left=T2;
//     y->height=max(getHeight(y->left),getHeight(y->right))+1;
//     x->height=max(getHeight(x->left),getHeight(x->right))+1;
//     return x;
// }
// Node* leftRotate(Node* x){
//     Node* y=x->right;
//     Node* T2=y->left;
//     y->left=x;
//     x->right=T2;
//     x->height=max(getHeight(x->left),getHeight(x->right))+1;
//     y->height=max(getHeight(y->left),getHeight(y->right))+1;
//     return y;
// }
// Node* insert(Node* root,int key){
//     if(root==NULL)
//         return new Node(key);
//     if(key<root->data)
//         root->left=insert(root->left,key);
//     else if(key>root->data)
//         root->right=insert(root->right,key);
//     else
//         return root;
//     root->height=max(getHeight(root->left),getHeight(root->right))+1;
//     int balance=getBalance(root);
//     if(balance>1 && key<root->left->data)
//         return rightRotate(root);
//     if(balance<-1 && key>root->right->data)
//         return leftRotate(root);
//     if(balance>1 && key>root->left->data){
//         root->left=leftRotate(root->left);
//         return rightRotate(root);
//     }
//     if(balance<-1 && key<root->right->data){
//         root->right=rightRotate(root->right);
//         return leftRotate(root);
//     }
//     return root;
// }
// Node* minValueNode(Node* root){
//     Node* curr=root;
//     while(curr->left!=NULL)
//         curr=curr->left;
//     return curr;
// }
// Node* deleteNode(Node* root,int key){
//     if(root==NULL)
//         return root;
//     if(key<root->data)
//         root->left=deleteNode(root->left,key);
//     else if(key>root->data)
//         root->right=deleteNode(root->right,key);
//     else{
//         if(root->left==NULL || root->right==NULL){
//             Node* temp=root->left?root->left:root->right;
//             if(temp==NULL){
//                 temp=root;
//                 root=NULL;
//             }
//             else{
//                 *root=*temp;
//             }
//             delete temp;
//         }
//         else{
//             Node* temp=minValueNode(root->right);
//             root->data=temp->data;
//             root->right=deleteNode(root->right,temp->data);
//         }
//     }
//     if(root==NULL)
//         return root;
//     root->height=max(getHeight(root->left),getHeight(root->right))+1;
//     int balance=getBalance(root);
//     if(balance>1 && getBalance(root->left)>=0)
//         return rightRotate(root);
//     if(balance>1 && getBalance(root->left)<0){
//         root->left=leftRotate(root->left);
//         return rightRotate(root);
//     }
//     if(balance<-1 && getBalance(root->right)<=0)
//         return leftRotate(root);
//     if(balance<-1 && getBalance(root->right)>0){
//         root->right=rightRotate(root->right);
//         return leftRotate(root);
//     }
//     return root;
// }
// void inorder(Node* root){
//     if(root==NULL)
//         return;
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
// int main(){
//     Node* root=NULL;
//     vector<int> arr={10,20,30,40,50,25};
//     for(int x:arr)
//         root=insert(root,x);
//     inorder(root);
// }

//2.binary trees
// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// node* createTree(){
//     int data;
//     cin>>data;
//     if(data==-1)
//         return NULL;
//     node* root=new node(data);
//     root->left=createTree();
//     root->right=createTree();
//     return root;
// }
// //to construct tree using preorder inorder
// int search(int inorder[],int start,int end ,int curr){
//     for(int i=start;i<=end;i++){
//         if(inorder[i]==curr){
//             return i;
//         }
//     }
//     return -1;
// }
// node* buildtree(int preorder[],int inorder[],int start,int end){
//     static int idx=0;
//     if(start>end) return NULL;
//     int curr=preorder[idx++];
//     node* Node=new node(curr);
//     if(start==end) return Node;
//     int pos=search(inorder,start,end,curr);
//     Node->left=buildtree(preorder,inorder,start,pos-1);
//     Node->right=buildtree(preorder,inorder,pos+1,end);
//     return Node;
// }
// //to construct tree using postorder inorder
// node* buildtree1(int postorder[],int inorder[],int start,int end){
//     static int idx=4;
//     if(start>end) return NULL;
//     int curr=postorder[idx--];
//     node* Node=new node(curr);
//     if(start==end) return Node;
//     int pos=search(inorder,start,end,curr);
//     Node->right=buildtree1(postorder,inorder,pos+1,end);
//     Node->left=buildtree1(postorder,inorder,start,pos-1);
//     return Node;
// }
// //preorder
// void preorderprint(node* root){
//     if(root==NULL) return;
//     cout<<root->data<<" ";
//     preorderprint(root->left);
//     preorderprint(root->right);
// }
// //preorder iterative
// void preorder(node* root){
//     if(root==NULL)
//         return;
//     stack<node*> st;
//     st.push(root);
//     while(!st.empty()){
//         node* temp=st.top();
//         st.pop();
//         cout<<temp->data<<" ";
//         if(temp->right)
//             st.push(temp->right);
//         if(temp->left)
//             st.push(temp->left);
//     }
// }
// //morris preorder
// void morrisPreorder(node* root){
//     node* curr=root;
//     while(curr){
//         if(curr->left==NULL){
//             cout<<curr->data<<" ";
//             curr=curr->right;
//         }
//         else{
//             node* pred=curr->left;
//             while(pred->right!=NULL && pred->right!=curr)
//                 pred=pred->right;
//             if(pred->right==NULL){
//                 cout<<curr->data<<" ";
//                 pred->right=curr;
//                 curr=curr->left;
//             }
//             else{
//                 pred->right=NULL;
//                 curr=curr->right;
//             }
//         }
//     }
// }
// //inorder
// void inorderprint(struct node*root){
//      if(root==NULL) return;
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);
// }
// //inorder iterative
// void inorder(node* root){
//     stack<node*> st;
//     node* curr=root;
//     while(curr!=NULL || !st.empty()){
//         while(curr!=NULL){
//             st.push(curr);
//             curr=curr->left;
//         }
//         curr=st.top();
//         st.pop();
//         cout<<curr->data<<" ";
//         curr=curr->right;
//     }
// }
// //morris inorder
// void morrisInorder(node* root){
//     node* curr=root;
//     while(curr){
//         if(curr->left==NULL){
//             cout<<curr->data<<" ";
//             curr=curr->right;
//         }
//         else{
//             node* pred=curr->left;
//             while(pred->right!=NULL && pred->right!=curr)
//                 pred=pred->right;
//             if(pred->right==NULL){
//                 pred->right=curr;
//                 curr=curr->left;
//             }
//             else{
//                 pred->right=NULL;
//                 cout<<curr->data<<" ";
//                 curr=curr->right;
//             }
//         }
//     }
// }
// //postorder
// void postorderprint(struct node*root){
//      if(root==NULL) return;
//     postorderprint(root->left);
//     postorderprint(root->right);
//     cout<<root->data<<" ";
// }
// //postorder iterative
// void postorder(node* root){
//     if(root==NULL)
//         return;
//     stack<node*> s1,s2;
//     s1.push(root);
//     while(!s1.empty()){
//         node* temp=s1.top();
//         s1.pop();
//         s2.push(temp);
//         if(temp->left)
//             s1.push(temp->left);
//         if(temp->right)
//             s1.push(temp->right);
//     }
//     while(!s2.empty()){
//         cout<<s2.top()->data<<" ";
//         s2.pop();
//     }
// }
// //morris postorder
// void reversePrint(node* start){
//     vector<int> temp;
//     node* curr=start;
//     while(curr){
//         temp.push_back(curr->data);
//         curr=curr->right;
//     }
//     reverse(temp.begin(),temp.end());
//     for(int x:temp)
//         cout<<x<<" ";
// }
// void morrisPostorder(node* root){
//     if(root==NULL)
//         return;
//     node* dummy=new node(-1);
//     dummy->left=root;
//     node* curr=dummy;
//     while(curr){
//         if(curr->left==NULL){
//             curr=curr->right;
//         }
//         else{
//             node* pred=curr->left;
//             while(pred->right!=NULL && pred->right!=curr)
//                 pred=pred->right;
//             if(pred->right==NULL){
//                 pred->right=curr;
//                 curr=curr->left;
//             }
//             else{
//                 pred->right=NULL;
//                 reversePrint(curr->left);
//                 curr=curr->right;
//             }
//         }
//     }
// }
// //level order
// void levelorder(struct node*root){
//     if(root==NULL) return;
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     while(!q.empty()){
//         node* Node=q.front();
//         q.pop();
//         if(Node!=NULL){
//             cout<<Node->data<<" ";
//             if(Node->left){
//                 q.push(Node->left);
//             }
//              if(Node->right){
//                 q.push(Node->right);
//             }
//         }
//         else if(!q.empty()) q.push(NULL);
//     }
// }
// //vertical traversal
// void verticalTraversal(node* root){
//     if(root==NULL)
//         return;
//     map<int,vector<int>> mp;
//     queue<pair<node*,int>> q;
//     q.push({root,0});
//     while(!q.empty()){
//         node* temp=q.front().first;
//         int hd=q.front().second;
//         q.pop();
//         mp[hd].push_back(temp->data);
//         if(temp->left)
//             q.push({temp->left,hd-1});
//         if(temp->right)
//             q.push({temp->right,hd+1});
//     }
//     for(auto x:mp){
//         for(int val:x.second)
//             cout<<val<<" ";
//     }
// }
// //diagnal traversal
// void diagonalTraversal(node* root){
//     if(root==NULL)
//         return;
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         node* temp=q.front();
//         q.pop();
//         while(temp){
//             cout<<temp->data<<" ";
//             if(temp->left)
//                 q.push(temp->left);
//             temp=temp->right;
//         }
//     }
// }
// //boundary traversal
// bool isLeaf(node* root){
//     return root->left==NULL && root->right==NULL;
// }
// void leftBoundary(node* root){
//     node* curr=root->left;
//     while(curr){
//         if(!isLeaf(curr))
//             cout<<curr->data<<" ";
//         if(curr->left)
//             curr=curr->left;
//         else
//             curr=curr->right;
//     }
// }
// void leafNodes(node* root){
//     if(root==NULL)
//         return;
//     if(isLeaf(root)){
//         cout<<root->data<<" ";
//         return;
//     }
//     leafNodes(root->left);
//     leafNodes(root->right);
// }
// void rightBoundary(node* root){
//     vector<int> ans;
//     node* curr=root->right;
//     while(curr){
//         if(!isLeaf(curr))
//             ans.push_back(curr->data);
//         if(curr->right)
//             curr=curr->right;
//         else
//             curr=curr->left;
//     }
//     reverse(ans.begin(),ans.end());
//     for(int x:ans)
//         cout<<x<<" ";
// }
// void boundaryTraversal(node* root){
//     if(root==NULL)
//         return;
//     cout<<root->data<<" ";
//     leftBoundary(root);
//     leafNodes(root);
//     rightBoundary(root);
// }
// //k the level
// void kthlevel(node* root,int k){
//     if(root==NULL) return ;
//     if(k==1){
//          cout<<root->data<<" ";
//     }
//     kthlevel(root->left,k-1);
//     kthlevel(root->right,k-1);
// }
// //count no of nodes
// int countnodes(node* root){
//     if(root==NULL)return 0;
//     return countnodes(root->left)+countnodes(root->right)+1;
// }
// //count leaf in bt
// int countLeaf(node* root){
//     if(root==NULL)
//         return 0;
//     if(root->left==NULL && root->right==NULL)
//         return 1;
//     return countLeaf(root->left)+countLeaf(root->right);
// }
// //count non leaf node in bt
// int countNonLeaf(node* root){
//     if(root==NULL)
//         return 0;
//     if(root->left==NULL && root->right==NULL)
//         return 0;
//     return 1+countNonLeaf(root->left)+countNonLeaf(root->right);
// }
// //largest value in each level
// void largestEachLevel(node* root){
//     if(root==NULL)
//         return;
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         int n=q.size();
//         int maxi=INT_MIN;
//         while(n--){
//             node* temp=q.front();
//             q.pop();
//             maxi=max(maxi,temp->data);
//             if(temp->left)
//                 q.push(temp->left);
//             if(temp->right)
//                 q.push(temp->right);
//         }
//         cout<<maxi<<" ";
//     }
// }
// //sum of nodes
// int sum(node* root){
//     if(root==NULL)
//         return 0;
//     return root->data + sum(root->left) + sum(root->right);
// }
// //print sum of k nodes
// int sumatk(node* root,int k){
//     if(root==NULL) return -1;
//     queue<node*> q;
//     q.push(root);
//     q.push(NULL);
//     int level=0;
//     int sum=0;
//     while(!q.empty()){
//         node* node=q.front();
//         q.pop();
//         if(node!=NULL){
//             if(level==k){
//                 sum+=node->data;
//             }
//             if(node->left) q.push(node->left);
//              if(node->right) q.push(node->right);      
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//             level++;
//         }
//     }
//     return sum;
// }
// //height of bt
// int heightofbt(node* root){
//     if(root==NULL) return 0;
//     int lh=heightofbt(root->left);
//     int rh=heightofbt(root->right);
//     return max(lh,rh)+1;
// }
// // diameter of bt
// int diameterofbt(node* root){
//     if(root==NULL)return 0;
//     int lheight=heightofbt(root->left);
//     int rheight=heightofbt(root->right);
//     int currdia= lheight+rheight+1;
//     int ldia=diameterofbt(root->left);
//     int rdia=diameterofbt(root->right);
//     return max(currdia,max(ldia,rdia));
// }
// //diameter recursive 
// int diameterofbt1(node* root,int* h){
//    int lh=0,rh=0;
//     if(root==NULL){
//         *h=0;
//         return 0;
//         }
//     int ldia=diameterofbt1(root->left,&lh);
//     int rdia=diameterofbt1(root->right,&rh);
//     int currdia= lh+rh+1;
//     *h=max(lh,rh)+1;
//     return max(currdia,max(ldia,rdia));
// }
// //right view
// void rightview(node*root){
//     if(root==NULL)return ;
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         int n=q.size();
//         for(int i=0;i<n;i++){
//             node*  curr=q.front();
//             q.pop();
//             if(i==n-1){
//                 cout<<curr->data;
//             }
//            if(curr->left!=NULL) 
//            q.push(curr->left);
//            if(curr->right!=NULL) 
//            q.push(curr->right);
//         }
//     }
// }
// //left view
// void leftview(node*root){
//     if(root==NULL)return ;
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         int n=q.size();
//         for(int i=1;i<=n;i++){
//             node*  curr=q.front();
//             q.pop();
//             if(i==1){
//                 cout<<curr->data;
//             }
//            if(curr->left!=NULL) 
//            q.push(curr->left);
//            if(curr->right!=NULL) 
//            q.push(curr->right);
//         }
//     }
// }
// //top view
// void topView(node* root){
//     if(root==NULL)
//         return;
//     map<int,int> mp;
//     queue<pair<node*,int>> q;
//     q.push({root,0});
//     while(!q.empty()){
//         node* temp=q.front().first;
//         int hd=q.front().second;
//         q.pop();
//         if(mp.find(hd)==mp.end())
//             mp[hd]=temp->data;
//         if(temp->left)
//             q.push({temp->left,hd-1});
//         if(temp->right)
//             q.push({temp->right,hd+1});
//     }
//     for(auto x:mp)
//         cout<<x.second<<" ";
// }
// //top view 2
// void topView2(node* root){
//     if(root==NULL) return;
//     queue<node*> q;
//     q.push(root);
//     while(!q.empty()){
//         node* curr=q.front();
//         q.pop();
//         cout<<curr->data;
//       if(curr->left!=NULL){
//         q.push(curr->left);
//       }
//       if(curr->right!=NULL){
//         q.push(curr->right);
//       }
//    }
// }
// //bottom view
// void bottomView(node* root){
//     if(root==NULL)
//         return;
//     map<int,int> mp;
//     queue<pair<node*,int>> q;
//     q.push({root,0});
//     while(!q.empty()){
//         node* temp=q.front().first;
//         int hd=q.front().second;
//         q.pop();
//         mp[hd]=temp->data;
//         if(temp->left)
//             q.push({temp->left,hd-1});
//         if(temp->right)
//             q.push({temp->right,hd+1});
//     }
//     for(auto x:mp)
//         cout<<x.second<<" ";
// }
// //flatten a binary tree in ll
// void flatten(node *root){
//     if(root==NULL or (root->left==NULL && root->right==NULL)) return;
//     if(root->left!=NULL){
//         flatten(root->left);
//         node* temp=root->right;
//         root->right=root->left;
//         root->left=NULL;
//         node* t=root->right;
//         while(t->right!=NULL){
//             t=t->right;
//         }
//         t->right=temp;
//     }
//     flatten(root->right);
// }
// int main(){
//     //traversal
//     struct node* root=new node(6);
//     root->left=new node(9);
//     root->right = new node(3);
//     root->left->left=new node(1);
//     root->left->right=new node(4);
//     root->right->right=new node(13);
//     root->right->left=new node(11);
//     levelorder(root);
//     preorderprint(root);
//     inorderprint(root);
//     postorderprint(root);
//     morrisInorder(root);
//     morrisPostorder(root);
//     morrisPreorder(root);
//     verticalTraversal(root);
//     diagonalTraversal(root);
//     boundaryTraversal(root);
//     //build tree
//     int preorder[]={1,2,4,3,5};
//     int inorder[]={4,2,1,5,3};
//     int postorder[]={4,2,1,5,3};
//     node*root=buildtree(preorder,inorder,0,4);
//     node*root=buildtree(postorder,inorder,0,4);
//     inorderprint(root);
//     cout<<sumatk(root,2); //sum at k
//     cout<<countnodes(root); //count nodes
//     cout<<sum(root); //sum of bt
//     cout<<heightofbt(root); //height of bt 
//     cout<<countLeaf(root); //leaf with no child
//     cout<<countNonLeaf(root); //nodes with child
//     largestEachLevel(root); //largest value 
//     //diameter of bt 
//     cout<<diameterofbt(root);
//     int h=0;
//     cout<<diameterofbt1(root,&h);
//     //view
//     rightview(root);
//     leftview(root);
//     bottomView(root);
//     topView(root);
//     kthlevel(root,2);
//     //flatten root
//     flatten(root);
//     while(root){
//         cout<<root->data<<" ";
//         root=root->right;
//     }
// }

//3.ques 
// #include<bits/stdc++.h>
// using namespace std;
// struct node{
//     int data;
//     struct node* left;
//     struct node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void inorderprint(struct node*root){
//      if(root==NULL) return;
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);
// }
// // bst identical
// bool isidentical(node* root1,node* root2){
//     if(root1==NULL && root2==NULL) return true;
//     else if(root1 ==NULL or root2==NULL){
//         return false;
//     }
//     else{
//         bool cond1=root1->data==root2->data;
//         bool cond2=isidentical(root1->left,root2->left);
//         bool cond3=isidentical(root1->right,root2->right);
//         if(cond1 && cond2 && cond3) return true;
//         return false;
//     }
// }
// //balanced heigh 
// int heightofbt(node* root){
//     if(root==NULL) return 0;
//     int lh=heightofbt(root->left);
//     int rh=heightofbt(root->right);
//     return max(lh,rh)+1;
// }
// bool isbalanced(node* root){
//     if(root==NULL)  return true;
//     if(isbalanced(root->left)==false){
//         return false;
//     }
//     if(isbalanced(root->right)==false){
//         return false;
//     }
//     int lh=heightofbt(root->left);
//     int rh=heightofbt(root->right);
//     if(abs(lh-rh)<=1) return true;
//     else{
//         return false;
//     }
// }
// //.recursive
// bool isbalanced1(node* root,int *h){
//     if(root==NULL)  return true;
//     int lh=0,rh=0;
//     if(isbalanced1(root->left,&lh)==false){
//         return false;
//     }
//     if(isbalanced1(root->right,&rh)==false){
//         return false;
//     }
//     *h=max(lh,rh)+1;
//     if(abs(lh-rh)<=1) return true;
//     else{
//         return false ;
//     }
// }
// //mirror tree
// void mirror(node* root){
//     if(root==NULL)
//         return;
//     swap(root->left,root->right);
//     mirror(root->left);
//     mirror(root->right);
// }
// //two node are cousin
// int level(node* root,int key,int lev){
//     if(root==NULL)
//         return -1;
//     if(root->data==key)
//         return lev;
//     int left=level(root->left,key,lev+1);
//     if(left!=-1)
//         return left;
//     return level(root->right,key,lev+1);
// }
// bool sameParent(node* root,int a,int b){
//     if(root==NULL)
//         return false;
//     if(root->left && root->right){
//         if((root->left->data==a && root->right->data==b) ||
//            (root->left->data==b && root->right->data==a))
//             return true;
//     }
//     return sameParent(root->left,a,b) ||
//            sameParent(root->right,a,b);
// }
// bool isCousin(node* root,int a,int b){
//     if(root==NULL)
//         return false;
//     return level(root,a,0)==level(root,b,0) &&
//            !sameParent(root,a,b);
// }
// //Maximum Path Sum Between Two Special Nodes
// int solve(node* root,int &ans){
//     if(root==NULL)
//         return INT_MIN;
//     if(root->left==NULL && root->right==NULL)
//         return root->data;
//     int left=solve(root->left,ans);
//     int right=solve(root->right,ans);
//     if(root->left && root->right){
//         ans=max(ans,left+right+root->data);
//         return max(left,right)+root->data;
//     }
//     if(root->left)
//         return left+root->data;
//     return right+root->data;
// }
// int maxPathSum(node* root){
//     int ans=INT_MIN;
//     solve(root,ans);
//     return ans;
// }
// //max path sum bt
// int maxpathsumutil(node *root,int &ans){ 
//     if(root==NULL) return 0; 
//     int left=maxpathsumutil(root->left,ans);
//     int right=maxpathsumutil(root->right,ans); 
//     int nodemax=max(max(root->data,root->data+left+right),max(root->data+left,root->data+right)); 
//     ans=max(ans,nodemax);
//     return root->data+max(left,right);
// }
// // lowest common ancestor
// bool getpath(node* root,int key,vector<int> &path){
//     if(root==NULL) return false;
//     path.push_back(root->data);
//     if(root->data==key){
//         return true;
//     }
//     if(getpath(root->left,key,path) or getpath(root->right,key,path)) return true;
//     path.pop_back();
//     return false;
// }
// int LCA(node* root,int n1,int n2){
//     vector<int> path1,path2;
//     if(!getpath(root,n1,path1) or !getpath(root,n2,path2)){
//         return -1;
//     }
//     int pc;
//     for(pc=0;pc<path1.size()&&path2.size();pc++){
//         if(path1[pc]!=path2[pc]) break;
//     }
//     return path1[pc-1];
// }

// //lca2
// node* LCA1(node* root, int p, int q) {
//     if (root == NULL)
//         return NULL;
//     if (root->data == p || root->data == q)
//         return root;
//     node* leftLCA = LCA1(root->left, p, q);
//     node* rightLCA = LCA1(root->right, p, q);
//     if (leftLCA && rightLCA)
//         return root;
//     return (leftLCA != NULL) ? leftLCA : rightLCA;
// }
// // shortest distance between node
// int finddistance(node *root,int k,int d){
//     if(root==NULL) return -1;
//     if(root->data==k){
//         return d;
//     }
//     int left=finddistance(root->left,k,d+1);
//     if(left!=-1) return left;
//     return finddistance(root->right,k,d+1);
// }
// int distancebtnodes(node* root,int n1,int n2){
//     node* lCA=LCA1(root,n1,n2);
//     int d1=finddistance(lCA,n1,0);
//     int d2=finddistance(lCA,n2,0);
//     return d1+d2;
// }
// // print nodes at diatance k
// void printsubtreenodes(node* root,int k){
//     if(root==NULL or k<0) return ;
//     if(k==0){
//         cout<<root->data;
//         return ;
//     }
//     printsubtreenodes(root->left,k-1);
//     printsubtreenodes(root->right,k-1);
// }
// int printnodeatk(node* root,node* target,int k){
//     if(root==NULL) return -1;
//     if(root==target){
//         printsubtreenodes(root,k);
//         return 0;
//     }
//     int dl=printnodeatk(root->left,target,k);
//     if(dl!=-1){
//         if(dl+1==k){
//             cout<<root->data;
//         }
//         else printsubtreenodes(root->right,k-dl-2);
//         return 1+dl;
//     }
//     int dr=printnodeatk(root->right,target,k);
//     if(dr!=-1){
//         if(dl+1==k){
//             cout<<root->data;
//         }
//         else printsubtreenodes(root->left,k-dr-2);
//         return 1+dr;
//     }
//     return -1;
// }
// //Burning Tree
// void createParent(node* root,map<node*,node*>& parent,node*& target,int start){
//     if(root==NULL)
//         return;
//     if(root->data==start)
//         target=root;
//     if(root->left){
//         parent[root->left]=root;
//         createParent(root->left,parent,target,start);
//     }
//     if(root->right){
//         parent[root->right]=root;
//         createParent(root->right,parent,target,start);
//     }
// }
// int burnTree(node* root,int start){
//     map<node*,node*> parent;
//     node* target=NULL;
//     createParent(root,parent,target,start);
//     queue<node*> q;
//     map<node*,bool> visited;
//     q.push(target);
//     visited[target]=true;
//     int time=0;
//     while(!q.empty()){
//         int size=q.size();
//         bool flag=false;
//         while(size--){
//             node* curr=q.front();
//             q.pop();
//             if(curr->left && !visited[curr->left]){
//                 flag=true;
//                 visited[curr->left]=true;
//                 q.push(curr->left);
//             }
//             if(curr->right && !visited[curr->right]){
//                 flag=true;
//                 visited[curr->right]=true;
//                 q.push(curr->right);
//             }
//             if(parent[curr] && !visited[parent[curr]]){
//                 flag=true;
//                 visited[parent[curr]]=true;
//                 q.push(parent[curr]);
//             }
//         }
//         if(flag)
//             time++;
//     }
//     return time;
// }
// //zig zag traversal
// void zigzagtraversal(node*root){
//     if(root==NULL) return ;
//     stack<node*> currlevel;
//     stack<node*> nextlevel;
//     bool lefttoright=true;
//     currlevel.push(root);
//     while(!currlevel.empty()){
//         node*temp=currlevel.top();
//         currlevel.pop();
//         if(temp){
//             cout<<temp->data;
//         }
//         if(lefttoright){
//             if(temp->left){
//                 nextlevel.push(temp->left);
//             }
//             if(temp->right){
//                 nextlevel.push(temp->right);
//             }
//         }
//         else{
//             if(temp->right){
//                 nextlevel.push(temp->right);
//             }
//             if(temp->left){
//                 nextlevel.push(temp->left);
//             }
//         }
//         if(currlevel.empty()){
//             lefttoright=!lefttoright;
//             swap(currlevel,nextlevel);
//         }
//     }
// }
// //transform to sum tree
// int sumTree(node* root){
//     if(root==NULL) return 0;
//     int oldval=root->data;
// int ls=sumTree(root->left);
// int rs=sumTree(root->right);
// root->data=ls+rs;
// return root->data+oldval;
// }
// // sum replace 
// void sumreplace(node* root){
//     if(root==NULL)   return;
//     sumreplace(root->left);
//     sumreplace(root->right);
//     if(root->left!=NULL){
//         root->data+=root->left->data;
//     }
//     if(root->right!=NULL){
//         root->data+=root->right->data;
//     }
// }
// //sum of longest bloodline
// int sum(node* root,int &maxLen){
//     if(root==NULL)
//         return 0;
//     int left=sum(root->left,maxLen);
//     int right=sum(root->right,maxLen);
//     return root->data+max(left,right);
// }
// int sumOfLongRootToLeafPath(node* root){
//     if(root==NULL)
//         return 0;
//     int maxlen=0;
//     return solve(root,maxlen);
// }
// //k sum path
// void solve(node* root,int k,int &count,vector<int>& path){
//     if(root==NULL)
//         return;
//     path.push_back(root->data);
//     solve(root->left,k,count,path);
//     solve(root->right,k,count,path);
//     int sum=0;
//     for(int i=path.size()-1;i>=0;i--){
//         sum+=path[i];
//         if(sum==k)
//             count++;
//     }
//     path.pop_back();
// }
// int kSumPaths(node* root,int k){
//     vector<int> path;
//     int count=0;
//     solve(root,k,count,path);
//     return count;
// }
// //kth ancestor of node
// bool kthAncestor(node* root,int &k,int node){
//     if(root==NULL)
//         return false;
//     if(root->data==node)
//         return true;
//     bool left=kthAncestor(root->left,k,node);
//     bool right=kthAncestor(root->right,k,node);
//     if(left || right){
//         k--;
//         if(k==0){
//             cout<<root->data;
//             k=-1;
//         }
//         return true;
//     }
//     return false;
// }
// //max sum of non adjacent 
// pair<int,int> solve(node* root){
//     if(root==NULL)
//         return {0,0};
//     pair<int,int> left=solve(root->left);
//     pair<int,int> right=solve(root->right);
//     int include=root->data+left.second+right.second;
//     int exclude=max(left.first,left.second)+
//                 max(right.first,right.second);
//     return {include,exclude};
// }
// int maxSumNonAdjacent(node* root){
//     pair<int,int> ans=solve(root);
//     return max(ans.first,ans.second);
// }
// int main(){
//     struct node* root=new node(6);
//     root->left=new node(9);
//     root->right = new node(3);
//     root->left->left=new node(1);
//     root->left->right=new node(4);
//     root->right->right=new node(13);
//     root->right->left=new node(11);
//     //balanced height 
//     int h=0;
//     if(isbalanced1(root,&h)) cout<<"balanced";
//     else cout<<"unbalanced";
//     cout<<distancebtnodes(root,4,13);//distance betwwen nodes
//     printnodeatk(root,root->left,1);
//     cout<<sumTree(root);
//     sumreplace(root);
//     inorderprint(root);
//     zigzagtraversal(root);
//     //identical 
//     node* root1=new node(6);
//     root1->left=new node(9);
//     root1->right=new node(3);
//     root1->left->left=new node(1);
//     root1->left->right=new node(4);
//     node* root2=new node(6);
//     root2->left=new node(9);
//     root2->right=new node(3);
//     root2->left->left=new node(1);
//     root2->left->right=new node(4);
//     if(isidentical(root1,root2))
//         cout<<"Identical";
//     else
//         cout<<"Not Identical";
//     //mirror 
//     mirror(root);
//     inorderprint(root);
//     //iscousin
//     if(isCousin(root,1,11))
//         cout<<"Cousin";
//     else
//         cout<<"Not Cousin";
//     //burn tree
//     int time=burnTree(root,9);
//     cout<<time;
//     //max path sum
//     cout<<maxPathSum(root);
//     //max path u til
//     int ans=INT_MIN;
//     maxpathsumutil(root,ans);
//     cout<<ans;
//     //lca
//     int lcaa=LCA(root,6,7);
//     if(lcaa==-1) cout<<"not exist";
//     else cout<<lcaa;
//     cout<<sumOfLongRootToLeafPath(root);
// }

