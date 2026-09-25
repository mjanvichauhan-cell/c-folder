 #include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void inorderprint(node*root){
     if(root==NULL) return;
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
node* insertbst(node* root,int val){
    if(root==NULL) return new node(val);
    if(val<root->data){
        root->left=insertbst(root->left,val);
    }
    else root->right=insertbst(root->right,val);
    return root;
}
 node* searchinbst(node* root,int key){
    if(root==NULL) return NULL;
    if(root->data==key){
        return root;
    }
    if(root->data>key) return searchinbst(root->left,key);
    return searchinbst(root->right,key);
}
node*constructbstpreorder(int preorder[],int *preorderidx,int key,int min,int max,int n){
    if(*preorderidx>=n){
        return NULL;
    }
    node* root=NULL;
    if(key>min&& key<max){
        root=new node(key);
        *preorderidx=*preorderidx+1;
        if(*preorderidx<n){
            root->left=constructbstpreorder(preorder,preorderidx,preorder[*preorderidx],min,key,n);
        }
        if(*preorderidx<n){
            root->right=constructbstpreorder(preorder,preorderidx,preorder[*preorderidx],key,max,n);
        }
    }
    return root;
}
node* constructBSTPostorder(int postorder[],int* postorderidx,int key,int min,int max,int n) {
    if (*postorderidx < 0) {
        return NULL;
    }
    node* root = NULL;
    if (key > min && key < max) {
        root = new node(key);
        *postorderidx = *postorderidx - 1;
        if (*postorderidx >= 0) {
            root->right = constructBSTPostorder( postorder, postorderidx, postorder[*postorderidx], key, max, n);
        }
        if (*postorderidx >= 0) {
            root->left = constructBSTPostorder( postorder, postorderidx, postorder[*postorderidx], min, key, n );
        }
    }
    return root;
}
bool isValidPreorder(vector<int>& pre) {
    stack<int> st;
    int root = INT_MIN;
    for (int i = 0; i < pre.size(); i++) {
        if (pre[i] < root)
            return 0;
        while (!st.empty() && st.top() < pre[i]) {
            root = st.top();
            st.pop();
        }
        st.push(pre[i]);
    }
    return 1;
}
node* solve(vector<int>& pre,int &i,int bound){
    if(i==pre.size() || pre[i]>bound)
        return NULL;
    node* root=new node(pre[i++]);
    root->left=solve(pre,i,root->data);
    root->right=solve(pre,i,bound);
    return root;
}
node* constructBST(vector<int>& pre){
    int i=0;
    return solve(pre,i,INT_MAX);
}
void postorder(node* root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
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
int main(){
    node * root=NULL;
     vector<int> preorder = {40, 30, 20, 80, 100};
    if (isValidPreorder(preorder))
        cout << "YES";
    else
        cout << "NO";
    inorderprint(root);
}