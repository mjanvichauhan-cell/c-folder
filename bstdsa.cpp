//1.bst 
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
// void preorderprint(node* root){
//     if(root==NULL) return;
//     cout<<root->data<<" ";
//     preorderprint(root->left);
//     preorderprint(root->right);
// }
// void inorderprint(struct node*root){
//      if(root==NULL) return;
//     inorderprint(root->left);
//     cout<<root->data<<" ";
//     inorderprint(root->right);
// }
// //110.insert bst checking
// node* insertbst(node* root,int val){
//     if(root==NULL) return new node(val);
//     if(val<root->data){
//         root->left=insertbst(root->left,val);
//     }
//     else root->right=insertbst(root->right,val);
//     return root;
// }
// //search 
// node* searchinbst(node* root,int key){
//     if(root==NULL) return NULL;
//     if(root->data==key){
//         return root;
//     }
//     if(root->data>key) return searchinbst(root->left,key);
//     return searchinbst(root->right,key);
// }
// // delete in bst
// node* inordersucc(node*root){
//     node* curr=root;
//     while(curr && curr->left!=NULL){
//         curr=curr->left;
//     }
//     return curr;
// }
// node* deleteinbst(node* root,int key){
//     if(root==NULL) return NULL;
//     if(key<root->data) root->left=deleteinbst(root->left,key);
//     else if(key>root->data) root->right=deleteinbst(root->right,key);
//     else{
//         if(root->left==NULL) {
//             node* temp=root->right;
//             free(root);
//             return temp;
//         }
//         else if(root->right==NULL){
//             node* temp=root->left;
//             free(root);
//             return temp;
//         }
//         node* temp=inordersucc(root->right);
//         root->data=temp->data;
//         root->right=deleteinbst(root->right,temp->data);
//     }
//     return root;
// }
// //construct bst from preorder
// node*constructbstpreorder(int preorder[],int *preorderidx,int key,int min,int max,int n){
//     if(*preorderidx>=n){
//         return NULL;
//     }
//     node* root=NULL;
//     if(key>min&& key<max){
//         root=new node(key);
//         *preorderidx=*preorderidx+1;
//         if(*preorderidx<n){
//             root->left=constructbstpreorder(preorder,preorderidx,preorder[*preorderidx],min,key,n);
//         }
//         if(*preorderidx<n){
//             root->right=constructbstpreorder(preorder,preorderidx,preorder[*preorderidx],key,max,n);
//         }
//     }
//     return root;
// }
// //construct bst from postorder 
// node* postorder1(vector<int>& post,int &i,int bound){
//     if(i<0 || post[i]<bound)
//         return NULL;
//     node* root=new node(post[i--]);
//     root->right=postorder1(post,i,root->data);
//     root->left=postorder1(post,i,bound);
//     return root;
// }
// node* postorderToBST(vector<int>& postorder){
//     int i=postorder.size()-1;
//     return postorder1(postorder,i,INT_MIN);
// }
// //preorder and bst
// bool isValidPreorder(vector<int>& pre) {
//     stack<int> st;
//     int root = INT_MIN;
//     for (int i = 0; i < pre.size(); i++) {
//         if (pre[i] < root)
//             return 0;
//         while (!st.empty() && st.top() < pre[i]) {
//             root = st.top();
//             st.pop();
//         }
//         st.push(pre[i]);
//     }
//     return 1;
// }
// //preorder to postorder
// node* solve(vector<int>& pre,int &i,int bound){
//     if(i==pre.size() || pre[i]>bound)
//         return NULL;
//     node* root=new node(pre[i++]);
//     root->left=solve(pre,i,root->data);
//     root->right=solve(pre,i,bound);
//     return root;
// }
// node* constructBST(vector<int>& pre){
//     int i=0;
//     return solve(pre,i,INT_MAX);
// }
// void postorder(node* root){
//     if(root==NULL)
//         return;
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
// // valid bst
// bool isbst(node*root,node*min=NULL,node*max=NULL){
//     if(root==NULL) return true;
//      if(min!=NULL && root->data<=min->data){
//         return false;
//      }
//      if(max!=NULL && root->data>=max->data){
//         return false;
//      }
//      bool left=isbst(root->left,min,root);
//      bool right=isbst(root->right,root,max);
//      return left && right;
// }
// //balancedbst from sorted array 
// node* sortedarraytobst(int arr[],int st,int end){
//     if(st>end) return NULL;
//     int mid=(st+end)/2;
//     node* root=new node(arr[mid]);
//     root->left=sortedarraytobst(arr,st,mid-1);
//     root->right=sortedarraytobst(arr,mid+1,end);
//     return root;
// }
// //catalan number
// int catalan(int n){
//     if(n<=1) return 1;
//     int res=0;
//     for(int i=0;i<=n-1;i++){
//         res+=catalan(i)*catalan(n-i-1);
//     }
//     return res;
// }
// //catalan bst
// vector<node*> constructcatalan(int st,int end){
//     vector<node*> trees;
//     if(st>end) {
//         trees.push_back(NULL);
//         return trees;
//     }
//     for(int i=st;i<=end;i++){
//         vector<node*> lefttrees=constructcatalan(st,i-1);
//         vector<node*> righttrees=constructcatalan(i+1,end);
//         for(int j=0;j<lefttrees.size();j++){
//             node* left=lefttrees[j];
//             for(int k=0;k<righttrees.size();k++){
//                  node* right=righttrees[k];
//                  node* Node=new node(i);
//                  Node->left=left;
//                  Node->right=right;
//                  trees.push_back(Node);
//             }
//         }
//     }
//     return trees;
// }
// // largest bst in bt
// struct Info{
//     int size;
//     int max;
//     int min;
//     int ans;
//     bool isbst;
// };
// Info largestbstinbt(node* root){
//     if(root==NULL) return {0,INT_MIN,INT_MAX,0,true};
//     if(root->left==NULL && root->right==NULL) return {1,root->data,root->data,1 ,true};
//     Info leftInfo=largestbstinbt(root->left);
//     Info rightInfo=largestbstinbt(root->right);
//     Info curr;
//     curr.size=(1+leftInfo.size+ rightInfo.size);
//     if(leftInfo.isbst && rightInfo.isbst && leftInfo.max < root->data && rightInfo.min >root->data){
//         curr.min=min(leftInfo.min,min(rightInfo.min,root->data));
//         curr.max=max(rightInfo.max,max(leftInfo.max,root->data));
//         curr.ans=curr.size;
//         curr.isbst=true;
//         return curr;
//     }
//     curr.ans=max(leftInfo.ans,rightInfo.ans);
//     curr.isbst=false;
//     return curr;
// }
// // recover bst
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void calcpointers(node* root,node** first,node** mid,node** last,node** prev){
//     if(root==NULL) return ;
//     calcpointers(root->left,first,mid,last,prev);
//     if(*prev && root->data<(*prev)->data){
//         if(!*first) {
//             *first=*prev;
//             *mid=root;
//         }
//         else{
//             *last=root;
//         }
//     }
//     *prev=root;
//     calcpointers(root->right,first,mid,last,prev);
// }
// void restorebst(node* root){
//     node* first,*mid,*last,*prev;
//     first=NULL,mid=NULL,last=NULL,prev=NULL;
//     calcpointers(root,&first,&mid,&last,&prev);
//     if(first && last){
//         swap(&(first->data),&(last->data));
//     }
//     else if(first && mid){
//         swap(&(first->data),&(mid->data));
//     }
// }
// //leetcode 235 lca
// node* lowestCommonAncestor(node* root, node* p, node* q) {
//     if (root == NULL)
//         return NULL;
//     if (p->data < root->data && q->data < root->data)
//         return lowestCommonAncestor(root->left, p, q);
//     if (p->data > root->data && q->data > root->data)
//         return lowestCommonAncestor(root->right, p, q);
//     return root;
// }
// //merge bst
// void inorder(node* root, vector<int>& v){
//     if(root == NULL) return;
//     inorder(root->left, v);
//     v.push_back(root-> data);
//     inorder(root->right, v);
// }
// node* buildBSTFromSorted(vector<int> arr, int st, int end) {
//     if (st > end) {
//         return NULL;
//     }
//     int mid = (st + end) / 2;
//     node* root = new node(arr[mid]);
//     root->left = buildBSTFromSorted(arr, st, mid - 1);
//     root->right = buildBSTFromSorted(arr, mid + 1, end);
//     return root;
// }
// node* merge2BST(node* root1, node* root2) {
//     vector<int> arr1, arr2;
//     inorder(root1, arr1);
//     inorder(root2, arr2);
//     vector<int> temp;
//     int i = 0, j = 0;
//     while (i < arr1.size() && j < arr2.size()) {
//         if (arr1[i] < arr2[j]) {
//             temp.push_back(arr1[i++]);
//         } else {
//             temp.push_back(arr2[j++]);
//         }
//     }
//     while (i < arr1.size()) {
//         temp.push_back(arr1[i++]);
//     }
//     while (j < arr2.size()) {
//         temp.push_back(arr2[j++]);
//     }
//     return buildBSTFromSorted(temp, 0, temp.size() - 1); 
// }
// //99.bst inorder predecessor successor
// node* rightMostInLeftSubtree(node* root) {
//     node* ans = NULL;
//     while (root != NULL) {
//         ans = root;
//         root = root->right;
//     }
//     return ans;
// }
// node* leftMostInRightSubtree(node* root) {
//     node* ans = NULL;
//     while (root != NULL) {
//         ans = root;
//         root = root->left;
//     }
//     return ans;
// }
// vector<int> getPredSucc(node* root, int key) {
//     node* curr = root;
//     node* pred = NULL;
//     node* succ = NULL;
//     while (curr != NULL) {
//         if (key < curr-> data) {
//             succ = curr;
//             curr = curr->left;
//         } 
//         else if (key > curr-> data) {
//             pred = curr;
//             curr = curr->right;
//         } 
//         else {
//             if (curr->left != NULL) {
//                 pred = rightMostInLeftSubtree(curr->left);
//             }          
//             if (curr->right != NULL) {
//                 succ = leftMostInRightSubtree(curr->right);
//             }
//             break;
//         }
//     }
//     int pVal = (pred != NULL) ? pred-> data : -1;
//     int sVal = (succ != NULL) ? succ-> data : -1;
//     return {pVal, sVal};
// }
// int main(){
//     node*root=NULL;
//     //insert
//     root=insertbst(root,5);
//     insertbst(root,1);
//     insertbst(root,3);
//     insertbst(root,4);
//     insertbst(root,2);
//     insertbst(root,7);
//     //search
//     if(searchinbst(root,5)==NULL) cout<<"keydoest exist";
//     else cout<<"exist";
//     //dlt
//     root=deleteinbst(root,2);
//     //valid preorder
//     vector<int> preorder = {40, 30, 35, 80, 100};
//     if (isValidPreorder(preorder))
//         cout << "YES";
//     else
//         cout << "NO";
//     //preorder to postorder
//     node* root=constructBST(preorder);
//     postorder(root);
//     //valid bst
//     if(isbst(root,NULL,NULL)) cout<<"valid";
//     else cout<<" not valid";
//     int arr[]={10,20,30,40,50};
//     node* root1=sortedarraytobst(arr,0,4);
//     preorderprint(root1);
//     //catalan no
//     for(int i=0;i<10;i++){
//         cout<<catalan(i)<<" ";
//     }
//     //construct catalan 
//     vector<node*> totaltrees=constructcatalan(1,3);
//     for(int i=0;i<totaltrees.size();i++){
//         cout<<i+1<<":";
//         preorderprint(totaltrees[i]);
//     }
//     cout<<largestbstinbt(root).ans;
//     restorebst(root);
//     inorderprint(root);
//     //merge bst
//     node*root1=NULL;
//     root1=insertbst(root1,5);
//     insertbst(root1,1);
//     insertbst(root1,9);
//     insertbst(root1,4);
//     insertbst(root1,8);
//     insertbst(root1,10);
//     node* merged = merge2BST(root, root1);
//     vector<int> result;
//     inorder(merged,result);
//     for(int x : result)
//         cout << x << " ";
//     //pred succ
//      int key = 20;
//     vector<int> ans = getPredSucc(root, key);
//     if(ans[0] == -1)
//         cout << "No Predecessor\n";
//     else
//         cout << "Predecessor: " << ans[0] << endl;
//     if(ans[1] == -1)
//         cout << "No Successor\n";
//     else
//         cout << "Successor: " << ans[1] << endl;
// }

//2.ques
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
// void printRange(node* root, int low, int high) {
//     if (root == NULL)
//         return;
//     if (root->data > low)
//         printRange(root->left, low, high);
//     if (root->data >= low && root->data <= high)
//         cout << root->data << " ";
//     if (root->data < high)
//         printRange(root->right, low, high);
// }
// //dead end
// bool solve(node* root, int mn, int mx) {
//     if (root == NULL)
//         return false;
//     if (mn == mx)
//         return true;
//     return solve(root->left, mn, root->data - 1) ||
//            solve(root->right, root->data + 1, mx);
// }
// bool isDeadEnd(node* root) {
//     return solve(root, 1, INT_MAX);
// }
// void inorder(node* root, vector<int>& v) {
//     if (root == NULL)
//         return;
//     inorder(root->left, v);
//     v.push_back(root->data);
//     inorder(root->right, v);
// }
// vector<int> findCommon(node* root1, node* root2) {
//     vector<int> v1, v2, ans;
//     inorder(root1, v1);
//     inorder(root2, v2);
//     int i = 0, j = 0;
//     while (i < v1.size() && j < v2.size()) {
//         if (v1[i] == v2[j]) {
//             ans.push_back(v1[i]);
//             i++;
//             j++;
//         }
//         else if (v1[i] < v2[j])
//             i++;
//         else
//             j++;
//     }
//     return ans;
// }
// //max distance bwteen two node 
// int distanceFromRoot(node* root, int x){
//     if(root->data == x)
//         return 0;
//     if(x < root->data)
//         return 1 + distanceFromRoot(root->left, x);
//     return 1 + distanceFromRoot(root->right, x);
// }
// node* LCA(node* root, int a, int b){
//     if(root == NULL)
//         return NULL;
//     if(a < root->data && b < root->data)
//         return LCA(root->left, a, b);
//     if(a > root->data && b > root->data)
//         return LCA(root->right, a, b);
//     return root;
// }
// int distanceBetweenNodes(node* root, int a, int b){
//     node* lca = LCA(root, a, b);
//     return distanceFromRoot(lca, a) +
//            distanceFromRoot(lca, b);
// }
// //sum of k smallest elemnt 
// void solve1(node* root, int &k, int &sum){
//     if(root == NULL || k == 0)
//         return;
//     solve1(root->left, k, sum);
//     if(k > 0){
//         sum += root->data;
//         k--;
//     }
//     solve1(root->right, k, sum);
// }
// int sumOfKSmallest(node* root, int k){
//     int sum = 0;
//     solve1(root, k, sum);
//     return sum;
// }
// //kth largest elemn in bst 
// void solve2(node* root, int &k, int &ans){
//     if(root == NULL || k == 0)
//         return;
//     solve2(root->right, k, ans);
//     k--;
//     if(k == 0){
//         ans = root->data;
//         return;
//     }
//     solve2(root->left, k, ans);
// }
// int kthLargest(node* root, int k){
//     int ans = -1;
//     solve2(root, k, ans);
//     return ans;
// }
// //array to bst
// node* solve4(vector<int>& arr, int s, int e){
//     if(s > e)
//         return NULL;
//     int mid = s + (e - s) / 2;
//     node* root = new node(arr[mid]);
//     root->left = solve4(arr, s, mid - 1);
//     root->right = solve4(arr, mid + 1, e);
//     return root;
// }
// node* sortedArrayToBST(vector<int>& arr){
//     return solve4(arr, 0, arr.size() - 1);
// }
// //flatten
// void inorder(node* root, vector<node*>& v){
//     if(root == NULL)
//         return;
//     inorder(root->left, v);
//     v.push_back(root);
//     inorder(root->right, v);
// }
// node* flatten(node* root){
//     if(root == NULL)
//         return NULL;
//     vector<node*> v;
//     inorder(root, v);
//     for(int i = 0; i < v.size() - 1; i++){
//         v[i]->left = NULL;
//         v[i]->right = v[i + 1];
//     }
//     v.back()->left = NULL;
//     v.back()->right = NULL;
//     return v[0];
// }
// void printList(node* head){
//     while(head){
//         cout << head->data << " ";
//         head = head->right;
//     }
// }
// int main() {
//     node* root = new node(8);
//     root->left = new node(5);
//     root->right = new node(10);
//     root->left->left = new node(3);
//     root->left->right = new node(6);
//     root->right->right = new node(11);
//     ///flatten
//     node* head = flatten(root);
//     printList(head);
//     //sorted array to bst
//     vector<int> arr = {1,2,3,4,5,6,7};
//     node* root = sortedArrayToBST(arr);
//     cout<<"Kth Largest = "<<kthLargest(root,2);
//     int k = 5;
//     cout << sumOfKSmallest(root, k);
//     cout<<distanceBetweenNodes(root,5,10);
//     //bst in range
//     int low = 5, high = 10;
//     printRange(root, low, high);
//     //dead end
//      if (isDeadEnd(root))
//         cout << "YES";
//     else
//         cout << "NO";
//     //common node
//      node* root2 = new node(10);
//     root2->left = new node(7);
//     root2->right = new node(20);
//     root2->left->left = new node(4);
//     root2->left->right = new node(9);
//     vector<int> ans = findCommon(root, root2);
//     for (int x : ans)
//         cout << x << " ";  
// }

//3.fixing two node of bst
// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// void inorder(node* root, node* &first, node* &middle,
//              node* &last, node* &prev) {
//     if (root == NULL)
//         return;
//     inorder(root->left, first, middle, last, prev);
//     if (prev && root->data < prev->data) {
//         if (first == NULL) {
//             first = prev;
//             middle = root;
//         } else {
//             last = root;
//         }
//     }
//     prev = root;
//     inorder(root->right, first, middle, last, prev);
// }
// void restoreBST(node* root) {
//     node* first = NULL;
//     node* middle = NULL;
//     node* last = NULL;
//     node* prev = NULL;
//     inorder(root, first, middle, last, prev);
//     if (first && last)
//         swap(first->data, last->data);
//     else if (first && middle)
//         swap(first->data, middle->data);
// }
// void inorderPrint(node* root) {
//     if (root == NULL)
//         return;
//     inorderPrint(root->left);
//     cout << root->data << " ";
//     inorderPrint(root->right);
// }
// int main() {
//     node* root = new node(6);
//     root->left = new node(10);
//     root->right = new node(2);
//     root->left->left = new node(1);
//     root->left->right = new node(3);
//     root->right->left = new node(7);
//     root->right->right = new node(12);
//     restoreBST(root);
//     inorderPrint(root);
//     return 0;
// }

//4.sorted ll to bst
// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* next;
//     node(int val){
//         data = val;
//         next = NULL;
//     }
// };
// struct TreeNode{
//     int data;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// TreeNode* solve(node* head){
//     if(head == NULL)
//         return NULL;
//     if(head->next == NULL)
//         return new TreeNode(head->data);
//     node* slow = head;
//     node* fast = head;
//     node* prev = NULL;
//     while(fast && fast->next){
//         prev = slow;
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     prev->next = NULL;
//     TreeNode* root = new TreeNode(slow->data);
//     root->left = solve(head);
//     root->right = solve(slow->next);
//     return root;
// }
// TreeNode* sortedListToBST(node* head){
//     return solve(head);
// }
// void preorder(TreeNode* root){
//     if(root == NULL)
//         return;
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int main(){
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);
//     head->next->next->next = new node(4);
//     head->next->next->next->next = new node(5);
//     head->next->next->next->next->next = new node(6);
//     head->next->next->next->next->next->next = new node(7);
//     TreeNode* root = sortedListToBST(head);
//     preorder(root);
//     return 0;
// }