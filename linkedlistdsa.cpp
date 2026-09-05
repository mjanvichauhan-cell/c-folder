//1.implement ll
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// int main(){
//     node *n=new node(1);
//     cout<<n->val<<" "<<n->next<<endl;
//     return 0;
// }

//2.ll operation
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// class ll{
//     node*head;
// public:
//    ll(){
//     head=NULL;
//    }
//     void insertathead(node* &head,int val){
//         node* newnode=new node(val);
//         newnode->next=head;
//         head=newnode;
//     }
//     void insertattail(node* &head,int val){
//         node* newnode=new node(val);
//         node* temp=head;
//          while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=newnode;
//     }
//     void insertatposition(node* &head,int val,int pos){
//         if(pos==0){
//             insertathead(head,val);
//             return;
//         }
//         node* newnode= new node(val);
//         node* temp=head;
//         int currpos=0;
//         while(currpos!=pos-1){
//             temp=temp->next;
//             currpos++;
//         }
//         newnode->next=temp->next;
//         temp->next=newnode;
//     }
//     void display(node* head){
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
//     void updateatposition(node* &head,int k,int val){
//         node* temp=head;
//         int currpos=0;
//         while(currpos!=k){
//             temp=temp->next;
//             currpos++;
//         }
//         temp->val=val;
//     }
//     void deleteathead(node* &head){
//         if(head!=NULL){
//         node* temp=head;
//         head=head->next;
//         free(temp);
//         }
//     }
//     void deleteattail(node* &head){
//         node* secondlast=head;
//         while(secondlast->next->next!=NULL){
//             secondlast=secondlast->next;
//         }
//         node* temp=secondlast->next;
//         secondlast->next=NULL;
//         free(temp);
//     }
//     void deleteNode(node* curr) {
//     if (curr == NULL || curr->next == NULL) {
//         return;   // without using head
//     }
//     node* temp = curr->next;
//     curr->val = temp->val;
//     curr->next = temp->next;
//     delete temp;
//     }
//     void deleteatposition(node* &head,int pos){
//         if(pos==0){
//             deleteathead(head);
//             return;
//         }
//         int currpos=0;
//         node* prev=head;
//         while(currpos!=pos-1){
//             prev=prev->next;
//             currpos++;
//         }
//         node* temp=prev->next;
//         prev->next=prev->next->next;
//         free(temp);
//     }
//     void deletefromlast(node* &head,int k){
//         node* ptr1=head;
//         node* ptr2=head;
//         int count=k;
//         while(count--){
//             ptr2=ptr2->next;
//         }
//         if(ptr2==NULL){
//             node* temp=head;
//             head=head->next;
//             free(temp);
//             return ;
//         }
//         while(ptr2->next!=NULL){
//             ptr1=ptr1->next;
//             ptr2=ptr2->next;
//         }
//         node* temp=ptr1->next;
//         ptr1->next=ptr1->next->next;
//         free(temp);
//     }
//      void deleteatalternatenodes(node* &head){
//         node* currnode=head;
//         while(currnode!=NULL && currnode->next!=NULL){
//             node* temp=currnode->next;
//             currnode->next=currnode->next->next;
//             free(temp);
//             currnode=currnode->next;
//         }
//     }
//     void deleteEveryKNode(node* &head,int k) {
//         if (head == NULL || k <= 0)
//             return;
//         if (k == 1) {
//             while (head) {
//                 node* temp = head;
//                 head = head->next;
//                 delete temp;
//             }
//             return;
//         }
//         node* curr = head;
//         node* prev = NULL;
//         int count = 1;
//         while (curr) {
//             if (count % k == 0) {
//                 prev->next = curr->next;
//                 node* temp = curr;
//                 curr = curr->next;
//                 delete temp;
//             } else {
//                 prev = curr;
//                 curr = curr->next;
//             }
//             count++;
//         }
//     }
// };
// int main(){
//     ll list;
//     node* head=NULL;
//     list.insertathead(head,2);
//     list.insertattail(head,1);
//     list.insertattail(head,8);
//     list.insertattail(head,9);
//     list.insertattail(head,5);
//     //without using head 
//     node* curr = head->next;
//     list.deleteNode(curr);
//     list.insertatposition(head,4,1);
//     list.updateatposition(head,3,6);
//     list.deleteathead(head);
//     list.deleteattail(head);
//     list.deleteatposition(head,1);
//     list.deletefromlast(head,3);
//     list.deleteatalternatenodes(head);
//     list.deleteEveryKNode(head,2);
//     list.display(head);
//     return 0;
// }

//3. reverse print 
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// class ll{
// public:
//    node*head;
//    ll(){
//     head=NULL;
//    }
//     void insertattail(int value){
//     node* newnode=new node(value);
//     if(head==NULL){
//         head=newnode;
//         return ;
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//      temp=temp->next;
//    }
//    temp->next=newnode;
//    }
//    void display(node* head){
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
//     void reverseprint(node* &head){
//         if(head==NULL) return ;
//         reverseprint(head->next);
//         cout<<head->val<<" ";
//     }
//     node* reversell(node* &head){
//         node* prevptr=NULL;
//         node* currptr=head;
//         while(currptr!=NULL){
//             node* nextptr=currptr->next;
//             currptr->next=prevptr;
//             prevptr=currptr;
//             currptr=nextptr;
//         }
//         node* newhead=prevptr;
//         return newhead;
//     }
//     node* reverserecursion(node* &head){
//         if(head==NULL or head->next==NULL) return head;
//         node* newhead=reverserecursion(head->next);
//         head->next->next=head;
//         head->next=NULL;
//         return newhead;
//     }
//     node* reversekll(node* &head,int k){
//         node* prevptr=NULL;
//         node* currptr=head;
//         int counter=0;
//         while(currptr!=NULL && counter< k){
//             node* nextptr=currptr->next;
//             currptr->next=prevptr;
//             prevptr=currptr;
//             currptr=nextptr;
//             counter++;
//         }
//         if(currptr!=NULL){
//         node* newhead=reversekll(currptr,k);
//         head->next=newhead;
//         }
//         return prevptr;
//     }
// };
// int main(){
//     ll list;
//     list.insertattail(1);
//     list.insertattail(2);
//     list.insertattail(3);
//     list.insertattail(4);
//     list.insertattail(5);
//     //reverse print
//     list.reverseprint(list.head);
//     //reverse with pointer 
//     list.head=list.reversell(list.head);
//     //recursion
//     list.head=list.reverserecursion(list.head);
//     //reveerse k item
//     list.head=list.reversekll(list.head,3);
//     list.display(list.head);//we can remove parameter too no change in output
//     return 0;
// }
 
//4.ques
// #include<iostream>
// #include<vector>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// class ll{
// public:
//    node*head;
//    ll(){
//     head=NULL;
//    }
//     void insertattail(int value){
//     node* newnode=new node(value);
//     if(head==NULL){
//         head=newnode;
//         return ;
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//      temp=temp->next;
//    }
//    temp->next=newnode;
//    }
//    void display(node* head){
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     } 
//     //find middle element
//     node* middleele(node* &head){
//     node* slow=head;
//     node* fast=head;
//     while(fast!=NULL&& fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     return slow;
//     }
//     //rotate by k steps 
//     node* rotate(int k){
//         int n=0;
//         node* tail=head;
//         while(tail->next){
//             n++;
//             tail=tail->next;
//         }
//         n++;
//         k=k%n;
//         if(k==0) return head;
//         tail->next=head;
//         node *temp=head;
//         for(int i=1;i<n-k;i++){
//             temp=temp->next;
//         }
//         node* newhead=temp->next;
//         temp->next=NULL;
//         return newhead;
//      }
//     //palindrome
//     bool ispalindrome(){
//         node* slow=head;
//         node* fast=head;
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         node* curr=slow->next;
//         node* prev=slow;
//         slow->next=NULL;
//         while(curr){
//             node* nextnode=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextnode;
//         }
//         node* head1=head;
//         node* head2=prev;
//         while(head2){
//             if(head1->val!=head2->val){
//                 return false;
//             }
//             head1=head1->next;
//             head2=head2->next;
//         }
//         return true;
//     }
//     //swap two adjacent element 
//     node* swapadjacent(node* &head ){
//          if(head==NULL || head->next==NULL){
//             return head;
//          }
//         node* snode=head->next;
//         head->next=swapadjacent(snode->next);
//         snode->next=head;
//         return snode;
//     }
//     //check equal 
//     bool checkequal(node* &head1,node* &head2){
//         node* ptr1=head1;
//         node* ptr2=head2;
//         while(ptr1!=NULL && ptr2!=NULL){
//             if(ptr1->val!=ptr2->val){
//                 return false;
//             }
//             ptr1=ptr1->next;
//             ptr2=ptr2->next;
//         }
//         return ptr1==NULL && ptr2==NULL;
//     }
//     //return address of intersect linked list element 
//     int getlength(node*head){
//         node* temp=head;
//         int length=0;
//         while(temp!=NULL){
//             length++;
//             temp=temp->next;
//         }
//         return length;
//     }
//     node* moveheadbyk(node* &head,int k){
//         node* ptr=head;
//         while(k--){
//             ptr=ptr->next;
//         }
//         return ptr;
//     }
//     node* getintersection(node* &head1,node* &head2){
//         node* ptr1;
//         node* ptr2;
//         int l1=getlength(head1);
//         int l2=getlength(head2);
//         if(l1>l2){
//             int k=l1-l2;
//             ptr1=moveheadbyk(head1,k);
//             ptr2=head2;
//         }
//         else{
//             int k=l2-l1;
//             ptr1=head1;
//             ptr2=moveheadbyk(head2,k);
//         }
//         while(ptr1){
//             if(ptr1==ptr2){
//                 return ptr1;
//             }
//             ptr1=ptr1->next;
//             ptr2=ptr2->next;
//         }
//         return NULL;
//     } 
//     //group together odd index and even idx
//     node* oddevenll(){
//         if(!head) return head;
//         node* evenhead=head->next;
//         node* oddptr=head;
//         node* evenptr=evenhead;
//         while(evenptr&& evenptr->next){
//             oddptr->next=oddptr->next->next;
//             evenptr->next=evenptr->next->next;
//             oddptr=oddptr->next;
//             evenptr=evenptr->next;
//         }
//         oddptr->next=evenhead;
//         return head;
//     }
//     //rearrange 1st and last together and soon 
//     node* reorderll(){
//         node* slow=head;
//         node*fast=head;
//         while(fast && fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         node* curr=slow->next;
//         slow->next=NULL;
//         node* prev=slow;
//         while(curr){
//             node* nextptr=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=nextptr;
//         }
//         node* ptr1=head;
//         node* ptr2=prev;
//         while(ptr1!=ptr2){
//             node* temp=ptr1->next;
//             ptr1->next=ptr2;
//             ptr1=ptr2;
//             ptr2=temp;
//         }
//         return head;
//     }
//     //remove duplicate sorted 
//     void removeduplicate(node* &head){
//         node* currnode=head;
//         while(currnode){
//         while(currnode->next && currnode->val==currnode->next->val){
//             node* temp=currnode->next;
//             currnode->next=currnode->next->next;
//             free(temp);
//         }
//             currnode=currnode->next;
//         }
//     }
//     //merge two sorted ll
//     node* mergell(node* &head1,node* &head2){
//         node* dummyheadnode=new node(-1);
//         node* ptr1=head1;
//         node* ptr2=head2;
//         node* ptr3=dummyheadnode;
//         while(ptr1&& ptr2){
//             if(ptr1->val<ptr2->val){
//                 ptr3->next=ptr1;
//                 ptr1=ptr1->next;
//             }
//             else{
//                 ptr3->next=ptr2;
//                 ptr2=ptr2->next;
//             }
//             ptr3=ptr3->next;
//         }
//         if(ptr1){
//             ptr3->next=ptr1;
//         }
//         else ptr3->next=ptr2;
//         return dummyheadnode->next;
//     }
//     //merge k ll
//      node* mergekll(vector<node*> &lists){
//         if(lists.size()==0) return NULL;
//         while(lists.size()>1){
//             node* mergehead=mergell(lists[0],lists[1]);
//             lists.push_back(mergehead);
//             lists.erase(lists.begin());
//             lists.erase(lists.begin());
//         }
//         return lists[0];
//      }
//     //merge recursion
//     node* mergerec(node* &head1,node* &head2){
//     if(head1==NULL) return head2;
//     if(head2==NULL) return head1;
//     node* result;
//     if(head1->val< head2->val){
//           result=head1;
//           result->next=mergerec(head1->next,head2);
//     }
//     else{
//         result=head2;
//         result->next=mergerec(head1,head2->next);
//     }
//     return result;
// }
// };
// int main(){
//     ll list;
//     list.insertattail(1);
//     list.insertattail(2);
//     list.insertattail(3);
//     list.insertattail(4);
//     list.insertattail(5);
//     ll list1;
//     list1.insertattail(6);
//     list1.insertattail(7);
//     list1.insertattail(7);
//     list1.insertattail(8);
//     list1.insertattail(9);
//     ll list2;
//     list2.insertattail(3);
//     list2.insertattail(7);
//     list2.insertattail(12);
//     list2.insertattail(15);
//     list2.insertattail(23);
//     //middle element 
//     node* middlenode=list.middleele(list.head); 
//     cout<<middlenode->val;
//     //rotate 
//     list.head=list.rotate(3);
//     //palindrome 
//     cout<<list.ispalindrome();
//     //swap adjacent 
//     list.head=list.swapadjacent(list.head);
//     //check equal
//     cout<<list.checkequal(list.head,list1.head);
//     //node intersection 
//     list1.head->next->next=list.head->next->next->next;
//     node*intersection=list.getintersection(list.head,list1.head);
//     if(intersection){
//         cout<<intersection->val;
//     }
//     else cout<<"-1"<<endl;
//     //odd even 
//     list.head=list.oddevenll();
//     //reorderll
//     list.head=list.reorderll();
//     //remove duplicate 
//     list.removeduplicate(list.head);
//     list.display(list.head);
//     //merge k ll
//     vector<node*> lists;
//     lists.push_back(list.head);
//     lists.push_back(list1.head);
//     lists.push_back(list2.head);
//     ll list3;
//     list3.head=list3.mergekll(lists);
//     //merge ll
//     list3.head=list3.mergell(list.head,list1.head); 
//     //merge rec
//     list3.head=list3.mergerec(list.head,list1.head);
//     list3.display(list3.head);
//     return 0;
// }

//5.ques
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// class ll{
// public:
//    node*head;
//    ll(){
//     head=NULL;
//    }
//     void insertattail(int value){
//     node* newnode=new node(value);
//     if(head==NULL){
//         head=newnode;
//         return ;
//     }
//     node* temp=head;
//     while(temp->next!=NULL){
//      temp=temp->next;
//    }
//    temp->next=newnode;
//    }
//    void display(node* &head){
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }   
//     //search in ll
//     bool search(int key){
//         node* temp=head;
//         while(temp!=NULL){
//             if(temp->val==key){
//                 return true;
//             }
//             temp=temp->next;
//         }
//         return false;
//     }
//     //cyclemaking
//     void cyclemaking(int pos){
//         node* temp=head;
//         node* cyclenode=nullptr;
//         while(temp->next!=nullptr){
//             if(temp->val==pos){
//                  cyclenode=temp;
//             }
//             temp=temp->next;
//         }
//         temp->next=cyclenode;
//     }
//     //sort 0 1 2
//     void sort012(node* &head) {
//     int cnt0 = 0, cnt1 = 0, cnt2 = 0;
//     node* temp = head;
//     while (temp) {
//         if (temp->val == 0)
//             cnt0++;
//         else if (temp->val == 1)
//             cnt1++;
//         else
//             cnt2++;
//         temp = temp->next;
//     }
//     temp = head;
//     while (cnt0--) {
//         temp->val = 0;
//         temp = temp->next;
//     }
//     while (cnt1--) {
//         temp->val = 1;
//         temp = temp->next;
//     }
//     while (cnt2--) {
//         temp->val = 2;
//         temp = temp->next;
//     }
// }
//     //remove dupliacte in unsorted 
//     void removeDuplicates() {
//     unordered_set<int> st;
//     node* curr = head;
//     node* prev = NULL;
//     while (curr != NULL) {
//         if (st.count(curr->val)) {
//             prev->next = curr->next;
//             node* temp = curr;
//             curr = curr->next;
//             delete temp;
//         } else {
//             st.insert(curr->val);
//             prev = curr;
//             curr = curr->next;
//         }
//     }
// }
// };
// int main(){
//     ll list;
//     list.insertattail(1);
//     list.insertattail(0);
//     list.insertattail(5);
//     list.insertattail(4);
//     list.insertattail(5);
//     list.insertattail(6);
//     //search
//     // cout<<list.search(3)<<endl;
//     //sort 
//     list.sort012(list.head);
//     //cycle making
//     list.cyclemaking(2);
//     //reverse in k group
//     list.head=list.reverseK(list.head, 3);
//     //unsorted 
//     list.removeDuplicates();
//     list.display(list.head);
//     return 0;
// }

//6.flatten ll
// #include <iostream>
// using namespace std;
// class Node {
// public:
//     int data;
//     Node* next;
//     Node* bottom;
//     Node(int x) {
//         data = x;
//         next = NULL;
//         bottom = NULL;
//     }
// };
// Node* merge(Node* a, Node* b) {
//     if (a == NULL)
//         return b;
//     if (b == NULL)
//         return a;
//     Node* result;
//     if (a->data < b->data) {
//         result = a;
//         result->bottom = merge(a->bottom, b);
//     } else {
//         result = b;
//         result->bottom = merge(a, b->bottom);
//     }
//     result->next = NULL;
//     return result;
// }
// Node* flatten(Node* root) {
//     if (root == NULL || root->next == NULL)
//         return root;
//     root->next = flatten(root->next);
//     root = merge(root, root->next);
//     return root;
// }
// void print(Node* head) {
//     while (head) {
//         cout << head->data << " ";
//         head = head->bottom;
//     }
//     cout << endl;
// }
// int main() {
//     Node* head = new Node(5);
//     head->bottom = new Node(7);
//     head->bottom->bottom = new Node(8);
//     head->bottom->bottom->bottom = new Node(30);
//     head->next = new Node(10);
//     head->next->bottom = new Node(20);
//     head->next->next = new Node(19);
//     head->next->next->bottom = new Node(22);
//     head->next->next->bottom->bottom = new Node(50);
//     head->next->next->next = new Node(28);
//     head->next->next->next->bottom = new Node(35);
//     head->next->next->next->bottom->bottom = new Node(40);
//     head->next->next->next->bottom->bottom->bottom = new Node(45);
//     head = flatten(head);
//     print(head);
//     return 0;
// }

//7.circular ll
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node*next;
//     node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// class cll{
// public:
//     node*head;
//     cll(){
//         head=NULL;
//     }
//     void insertathead(node* &head,int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//         head=newnode;
//         newnode->next=head;
//         return; }
//         node*tail=head;
//         while(tail->next!=head){
//             tail=tail->next;
//         }
//         tail->next=newnode;
//         newnode->next=head;
//         head=newnode;
//     }
//     void insertattail(node* &head,int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//            head=newnode;
//            newnode->next=head;
//            return;
//         }
//         node*tail=head;
//          while(tail->next!=head){
//             tail=tail->next;
//         }
//         tail->next=newnode;
//         newnode->next=head;
//     }
//     void insertatposition(node* &head,int val,int pos){
//         node* newnode= new node(val);
//          if(head==NULL){
//            head=newnode;
//            newnode->next=newnode;
//            return;
//         }
//         if(pos==0){
//             node* temp=head;
//             while(temp->next!=head){
//                 temp=temp->next;
//             }
//             newnode->next=head;
//             temp->next=newnode;
//             head=newnode;
//             return ;
//         }   
//         node* curr=head;
//         int currpos=0;
//         while(currpos<pos-1&& curr->next!=head){
//             curr=curr->next;
//             currpos++;
//         }
//         newnode->next=curr->next;
//         curr->next=newnode;
//     }
//     void display(node* head){
//         node* temp=head;
//         do{
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         while(temp!=head);
//         cout<<endl;
//     }
//     void updateatposition(node* &head,int k,int val){
//         if(head==NULL) return ;
//         node* temp=head;
//         int currpos=0;
//         do{
//             if(currpos==k){
//                 temp->val=val;
//                 return; 
//             }
//             temp=temp->next;
//             currpos++;
//         }while(temp!=head);
//     }
//     void deleteathead(node* &head){
//         if(head==NULL){
//             return;
//         }
//         node* temp=head;
//         node* tail=head;
//         while(tail->next!=head){
//             tail=tail->next;
//         }
//         head=head->next;
//         tail->next=head;
//         free(temp);
//     }
//     void deleteattail(node* &head){
//         if(head==NULL) return ;
//         node* tail=head;
//         while(tail->next->next!=head){
//             tail=tail->next;
//         }
//         node* temp=tail->next;
//         tail->next=head;
//         free(temp);
//     }
//     void deleteatposition(node* &head,int pos){
//         if(head==NULL){
//             return;
//         }
//         if(pos==1){
//             if(head->next==head){
//             delete head;
//             head=NULL;
//             return;
//         }
//         node* temp=head;
//         node* last=head;
//         while(last->next!=head){
//             last=last->next;
//         }
//         last->next=head->next;
//         head=head->next;
//         delete temp;
//         return;
//     }
//         node* curr=head;
//         for(int i=0;i<pos-1;i++){
//             curr=curr->next;
//             if(curr->next==head) return;
//         }
//         node* del=curr->next;
//         curr->next=del->next;
//         free(del);
//     }
//     void printcircular(){//circular fashion print 
//         node* temp=head;
//         for(int i=0;i<15;i++){
//             cout<<temp->val<<"->";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     //to detect the cycle
//     bool detectcycle(){
//         if(!head) return false;
//         node* slow=head;
//         node*fast=head;
//         while(fast&&fast->next){
//             slow=slow->next;
//             fast=fast->next->next;
//             if(slow==fast) {
//                 cout<<slow->val<<endl;
//                 return true;}
//         }
//         return false;
//     }
//     //to remove a cycle
//     void removecycle(){
//         node* slow=head;
//         node*fast=head;
//         do{
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         while(slow!=fast);
//         fast=head;
//         while(slow->next!=fast->next){
//              slow=slow->next;
//              fast=fast->next;
//         }
//         slow->next=NULL;
// }
//     //length of loop
//     int lengthOfLoop() {
//     if (head == NULL)
//         return 0;
//     node* slow = head;
//     node* fast = head;
//     while (fast && fast->next) {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (slow == fast) {
//             int count = 1;
//             fast = fast->next;
//             while (slow != fast) {
//                 count++;
//                 fast = fast->next;
//             }
//             return count;
//         }
//     }
//     return 0;
// }
// };
// int main(){
//     cll list;
//     list.insertathead(list.head,1);
//     list.insertathead(list.head,2);
//     list.insertattail(list.head,3);
//     list.insertattail(list.head,4);
//     list.insertattail(list.head,5);
//     list.insertatposition(list.head,9,3);
//     list.updateatposition(list.head,4,8);
//     list.deleteatposition(list.head,3);
//     list.display(list.head);
//     list.head->next->next->next->next->next = list.head->next->next->next;
//     cout << list.lengthOfLoop();
//     cout<<list.detectcycle()<<endl;
//     list.removecycle();
//     cout<<list.detectcycle()<<endl;
//     return 0;
// }

//8.doubly linked list
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node*prev;
//     node*next;
//     node(int data){
//         val=data;
//         next=NULL;
//         prev=NULL;
//     }
// };
// class dll{
// public:
//     node*head;
//     node*tail;
//     dll(){
//         head=NULL;
//         tail=NULL;
//     }
//     void insertathead(node* &head,int val){
//         node* newnode=new node(val);
//         if(head==NULL){
//         head=newnode;
//         tail=newnode;
//         return; }
//         newnode->next=head;
//         head->prev=newnode;
//         head=newnode;
//         return;
//     }
//     void insertattail(node* &head,int val){
//         node* newnode=new node(val);
//         if(tail==NULL){
//            head=newnode;
//            tail=newnode;
//            return;
//         }
//         tail->next=newnode;
//         newnode->prev=tail;
//         tail=newnode;
//         return;
//     }
//     void insertatposition(node* &head,int val,int k){
//         node* temp=head;
//         int count=0;
//         while(count<k-1){
//             temp=temp->next;
//             count++;
//         }
//         node* newnode= new node(val);
//         newnode->next=temp->next;
//         temp->next=newnode;
//         newnode->prev=temp;
//         newnode->next->prev=newnode;
//         return;
//     }
//     void display(node* head){
//         node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<"<->";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }
//     void updateatposition(node* &head,int k,int val){
//         if(head==NULL) return ;
//         node* temp=head;
//         int currpos=0;
//         while(temp!=NULL && currpos<k-1){
//             temp=temp->next;
//             currpos++;
//         }
//         temp->val=val;
//     }
//     void deleteathead(node* &head){
//         if(head==NULL){
//             return;
//         }
//         node* temp=head;
//         head=head->next;
//         if(head==NULL){
//             tail=NULL;
//         }
//         else{
//             head->prev=NULL;
//         }
//         free(temp);
//     }
//     void deleteattail(node* &head){
//         if(head==NULL) return ;
//         node* temp=tail;
//         tail=tail->prev;
//         if(tail==NULL) head=NULL;
//         else tail->next=NULL;
//         free(temp);
//     }
//     void deleteatposition(node* &head,int k){
//         if(head==NULL) return ;
//         node* temp=head;
//         int currpos=0;
//         while(currpos<k-1){
//              temp=temp->next;
//              currpos++;
//         }
//         temp->prev->next=temp->next;
//         temp->next->prev=temp->prev;
//         free(temp);
//     }
//     //reverse
//      void reversedll(node* &head,node* &tail){
//         node* currptr=head;
//         while(currptr){
//             node* nextptr=currptr->next;
//             currptr->next=currptr->prev;
//             currptr->prev=nextptr;
//             currptr=nextptr;
//         }
//         node* newhead=tail;
//         tail=head;
//         head=newhead;
//     }
//     //palindrome
//     bool ispalindrome(node* &head, node* &tail){
//         while(head!=tail && tail!=head->prev){
//             if(head->val!=tail->val) return false;
//         head=head->next;
//         tail=tail->prev;
//         }
//         return true;
//     }
//     //dlt value have same neighbour traverse right to left
//     void dltsameneigh(node* &head,node* &tail){
//         node* currptr=tail->prev;
//         while(currptr!=head){
//             node* prevptr=currptr->prev;
//             node* nextptr=currptr->next;
//             if(prevptr->val==nextptr->val){
//                 prevptr->next=nextptr;
//                 nextptr->prev=prevptr;
//                 free(currptr);
//             }
//             currptr=prevptr;
//         }
//     }
//     //local maxima and local minima distance
//     bool iscritical(node* &currnode){
//         if(currnode->prev->val<currnode->val&& currnode->next->val<currnode->val){
//               return true;
//         }
//         if(currnode->prev->val>currnode->val&& currnode->next->val>currnode->val){
//               return true;
//         }
//         return false;
//     }
//     vector<int> distancebetween(node* &head,node* &tail){
//         vector<int> ans(2,INT_MAX);
//         int fcp=-1,lcp=-1;
//         node*currnode=tail->prev;
//         if(currnode==NULL){
//             ans[0]=ans[1]=-1;
//             return ans;
//         }
//         int cp=0;
//         while(currnode->prev!=NULL){
//             if(iscritical(currnode)){
//             if(fcp==-1){
//                 fcp=lcp=cp;
//             }
//             else{
//                 ans[0]=min(ans[0],cp-lcp);
//                 ans[1]=cp-fcp;
//                 lcp=cp;
//             }
//             }
//             cp++;
//             currnode=currnode->prev;
//         }
//         if(ans[0]==INT_MAX){
//             ans[0]=ans[1]=-1;
//         }
//         return ans;
//     }
//     //target sum in dll 
//     vector<int> pairsum(node* &head,node* &tail,int x){
//         vector<int> ans(2,-1);
//         while(head!=tail){
//             int sum=head->val+tail->val;
//             if(sum==x){
//                 ans[0]=head->val;
//                 ans[1]=tail->val;
//                 return ans;
//             }
//             if(sum>x){
//                 tail=tail->prev;
//             }
//             else head=head->next;
//         }
//         return ans;
//     }
// };
// int main(){
//     dll list;
//     list.insertattail(list.head,1);
//     list.insertattail(list.head,5);
//     list.insertattail(list.head,2);
//     list.insertattail(list.head,5);
//     list.insertattail(list.head,1);
//     //rverse 
//     list.reversedll(list.head,list.tail);
//     //palindrome
//     cout<<list.ispalindrome(list.head,list.tail)<<endl;
//     //same neigh
//     list.dltsameneigh(list.head,list.tail);
//     //distance
//     vector<int> ans=list.distancebetween(list.head,list.tail);
//     //targetsum
//     vector<int> ans=list.pairsum(list.head,list.tail,8);
//     cout<<ans[0]<<" "<<ans[1]<<endl;
//     list.display(list.head);
//     return 0;
// }