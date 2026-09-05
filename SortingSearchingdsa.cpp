//1. linear search for an elements 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,};
//     int n=sizeof(arr)/4;
//     int x=4;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         if (arr[i]==x){
//             flag=true;
//             break;
//         }
//     }
//     if (flag==true){
//         cout<<"exists";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }

//2.recursion
// #include<iostream>
// using namespace std;
// bool linearSearch(int arr[], int n, int i, int key){
//     if(i == n) return false;
//     if(arr[i] == key) return true;
//     return linearSearch(arr, n, i+1, key);
// }
// int main(){
//     int arr[] = {3, 8, 2, 5, 9};
//     int n = 5;
//     int key = 5;
//     cout << linearSearch(arr, n, 0, key);
// }

//3.bineary search //2d array row=mid/m col=mid%m
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={2,5,8,9,12,16};
//     int n=sizeof(arr)/4;
//     int low = 0, high = n - 1,key=8;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] == key) {
//             cout<< mid;
//             return 0;
//         }
//         else if (arr[mid] < key) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     return 0;
// }

//4. search if array is in inc order in 2d array column and row inc order
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3]={1,2,3,4,5,6};
//     int n=2,m=3,tar=6;
//     bool found=false;
//     int r=0,c=m-1;
//     while(r<m && c>=0){
//         if(arr[r][c]==tar){
//             found =true;
//         }
//         arr[r][c]>tar? c--:r++;
//     }
//     if(found==true ) cout<<"found";
//     else cout<<"not found";
//     return 0;
// }

//5.search in 2d array 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][2]={1,2,3,4,5,6};
//     int n=3;
//     int x=4;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<2;j++){
//         if (arr[i][j]==x){
//             flag=true;
//             cout<<i<<" "<<j<<" ";
//             break;
//         }
//         }
//     }
//     if (flag==true){
//         cout<<"exists";
//     }
//     else{
//         cout<<"not found";
//     }
//     return 0;
// }

//6.bubble sort 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,8,4,3,7,0};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n-1;i++){
//         bool flag=true;
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                swap(arr[j],arr[j+1]);
//                flag=false;}
//        }
//     if(flag==true) break;}
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//7.recursion
// #include<iostream>
// using namespace std;
// void bubbleSort(int arr[], int n){
//     if(n == 1) return;
//     for(int i = 0; i < n-1; i++){
//         if(arr[i] > arr[i+1])
//             swap(arr[i], arr[i+1]);
//     }
//     bubbleSort(arr, n-1);
// }
// int main(){
//     int arr[] = {5, 1, 4, 2, 8};
//     int n = 5;
//     bubbleSort(arr, n);
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

//8.selection sort 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,8,4,3,7,0};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n-1;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min]>arr[j]){
//                min=j;
//              }
//         }
//         swap(arr[min],arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//9.recursion
// #include<iostream>
// using namespace std;
// int findMinIndex(int arr[], int i, int j){
//     if(i == j) return i;
//     int k = findMinIndex(arr, i+1, j);
//     return (arr[i] < arr[k]) ? i : k;
// }
// void selectionSort(int arr[], int n, int index = 0){
//     if(index == n) return;
//     int minIndex = findMinIndex(arr, index, n-1);
//     swap(arr[index], arr[minIndex]);
//     selectionSort(arr, n, index+1);
// }
// int main(){
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = 5;
//     selectionSort(arr, n);
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

//10. insertion sort 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,8,4,3,7,0};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<n;i++){
//         int j=i;
//         while(j>=1 && arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//             j--;
//         }  
// }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//11.recursion
// #include<iostream>
// using namespace std;
// void insertionSort(int arr[], int n){
//     if(n <= 1) return;
//     insertionSort(arr, n-1);
//     int last = arr[n-1];
//     int j = n-2;
//     while(j >= 0 && arr[j] > last){
//         arr[j+1] = arr[j];
//         j--;
//     }
//     arr[j+1] = last;
// }
// int main(){
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = 5;
//     insertionSort(arr, n);
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

//12.mergesort
// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(int arr[],int l,int mid,int r){
//     int an=mid-l+1;
//     int bn=r-mid;
//     vector<int> a(an),b(bn);
//     for(int i=0;i<an;i++) a[i]=arr[l+i];
//     for(int j=0;j<bn;j++) b[j]=arr[mid+1+j];
//     int i=0,j=0,k=l;
//     while(i<an && j<bn){
//         if(a[i]<b[j]){
//             arr[k++]=a[i++];
//         }
//         else arr[k++]=b[j++];
//     }
//     while(i<an) arr[k++]=a[i++];
//     while(j<bn) arr[k++]=b[j++];
// }
// void mergesort(int arr[],int l,int r){
//     if(l>=r) return ;
//     int mid=(l+r)/2;
//     mergesort(arr,l,mid);
//     mergesort(arr,mid+1,r);
//     merge(arr,l,mid,r);
// }
// int main(){
//     int arr[]={10,19,6,9,3,35,78,32};
//     int n=8;
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//13.quick sort
// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(int arr[],int f,int l){
//     int pivot=arr[l];
//     int i=f-1;
//     int j=f;
//     for(int j=f;j<l;j++) {
//         if(arr[j]<pivot){
//            i++;
//            swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[l]);
//     return i+1;
// }
// void quicksort(int arr[],int f,int l){
//     if(f>=l) return ;
//     int pi =partition(arr,f,l);
//     quicksort(arr,f,pi-1);
//     quicksort(arr,pi+1,l);
// }
// int main(){
//     int arr[]={10,19,6,9,3,35,78,32};
//     int n=8;
//     quicksort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//14.countsort
// #include<iostream>
// #include<vector>
// using namespace std;
// void countsort(vector<int> &v){
//     int n=v.size();
//     int maxele=INT_MIN;
//     for(int i=0;i<n;i++) maxele=max(v[i],maxele); //max ele 
//     vector<int> freq(maxele+1,0);
//     for(int i=0;i<n;i++) freq[v[i]]++;// freq array
//     for(int i=1;i<=maxele;i++) freq[i]+=freq[i-1];//cum freq
//     vector<int> ans(n);
//     for(int i=n-1;i>=0;i--) ans[--freq[v[i]]]=v[i];//sorted array
//     for(int i=0;i<n;i++) v[i]=ans[i];//copy ans to original array
// }
// int main(){
//     vector<int> arr{10,19,6,9,3,35,78,32};
//     countsort(arr);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//15.radixsort
// #include<iostream>
// #include<vector>
// using namespace std;
// void countsort(vector<int> &v,int pos){
//     int n=v.size();
//     vector<int> freq(10,0);
//     for(int i=0;i<n;i++){
//         int digit=(v[i]/pos)%10;
//         freq[digit]++;
//     }// freq array
//     for(int i=1;i<10;i++) freq[i]+=freq[i-1];//cum freq
//     vector<int> ans(n);
//     for(int i=n-1;i>=0;i--){
//         int digit=(v[i]/pos)%10;
//             ans[--freq[digit]]=v[i];}//sorted array
//     for(int i=0;i<n;i++) v[i]=ans[i];//copy ans to original array
// }
// void radixsort(vector<int> &v){
//     int maxele=INT_MIN;
//     for(auto x:v){
//         maxele=max(x,maxele);
//     }
//     for(int pos=1;maxele/pos>0;pos*=10){
//         countsort(v,pos);
//     }
// }
// int main(){
//     vector<int> arr{10,19,6,9,3,35,78,32};
//     radixsort(arr);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//16.bucket sort
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void bucketsort(float arr[],int n){
//     vector<vector<float>> bucket(n,vector<float>());
//     float maxele=arr[0];
//     float minele=arr[0];
//     for(int i=0;i<n;i++){
//         maxele=max(maxele,arr[i]);
//         minele=min(minele,arr[i]);
//     }
//     float range=(maxele-minele)/n;
//     if(range==0) return;
//     for(int i=0;i<n;i++){//insert element 
//         int idx=(arr[i]-minele)/range;
//         float diff=(arr[i]-minele)/range-idx;
//         if(diff==0 && arr[i]!=minele){
//             bucket[idx-1].push_back(arr[i]);
//         }
//         else  bucket[idx].push_back(arr[i]);
//     }
//     for(int i=0;i<n;i++){//sorting 
//         if(!bucket[i].empty()){
//         sort(bucket[i].begin(),bucket[i].end());
//         }
//     }
//     int k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<bucket[i].size();j++){
//             arr[k++]=bucket[i][j];
//         }
//     }  
// }
// int main(){
//     float arr[]={10,19,6,9,12,35,78,32};
//     int n=8;
//     bucketsort(arr,n);
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//17.method 2
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void bucketsort(float arr[],int n){
//     vector<vector<float>> bucket(n,vector<float>());
//     for(int i=0;i<n;i++){//insert element 
//         int idx=arr[i]*n;
//         if(idx>=n) idx=n-1;
//         bucket[idx].push_back(arr[i]);
//     }
//     for(int i=0;i<n;i++){//sorting 
//         sort(bucket[i].begin(),bucket[i].end());
//     }
//     int k=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<bucket[i].size();j++){
//             arr[k++]=bucket[i][j];
//         }
//     }  
// }
// int main(){
//     float arr[]={0.10,0.19,0.6,0.9,0.12,0.35,0.78,0.32};
//     int n=8;
//     bucketsort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//18. dnf sort
// #include<iostream>
// #include<vector>
// using namespace std;
// void dnfsort(int arr[],int n){
//     int low=0;
//     int mid=0;
//     int h=n-1;
//     while(mid<=h){
//         if(arr[mid]==0){
//             swap(arr[low],arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1){
//             mid++;
//         }
//         else {
//             swap(arr[mid],arr[h]);
//             h--;
//         }
//     }
// }
// int main(){
// int arr[]={1,0,2,1,2,0,0,1,0,2,1};
//     dnfsort(arr,11);
//     for(int i=0;i<11;i++) cout<<arr[i]<<" ";
//     return 0;
// }

//19. wave sort
// #include<iostream>
// #include<vector>
// using namespace std;
// void wavesort(int arr[],int n){
//     for(int i=1;i<n;i+=2){
//         if(arr[i]>arr[i-1]){
//             swap(arr[i],arr[i-1]);
//         }
//         if(arr[i]>arr[i+1]&&i<=n-2){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// int main(){
//     int arr[]={1,3,4,7,5,6,2};
//     wavesort(arr,7);
//     for(int i=0;i<7;i++) cout<<arr[i]<<" ";
//     return 0;
// }

//20. count inversionn optimal
// #include<iostream>
// #include<vector>
// using namespace std;
// long long merge(int arr[],int l,int mid,int r){
//     long long inv=0;
//     int an=mid-l+1;
//     int bn=r-mid;
//     vector<int> a(an),b(bn);
//     for(int i=0;i<an;i++) a[i]=arr[l+i];
//     for(int j=0;j<bn;j++) b[j]=arr[mid+1+j];
//     int i=0,j=0,k=l;
//     while(i<an && j<bn){
//         if(a[i]<=b[j]){
//             arr[k++]=a[i++];
//         }
//         else {
//             arr[k++]=b[j++];
//             inv+= an-i;
//     }
//     }
//     while(i<an) arr[k++]=a[i++];
//     while(j<bn) arr[k++]=b[j++];
//     return inv;
// }
// long long mergesort(int arr[],int l,int r){
//     long long inv=0;
//     if(l<r){
//     int mid=(l+r)/2;
//     inv+=mergesort(arr,l,mid);
//     inv+=mergesort(arr,mid+1,r);
//     inv+=merge(arr,l,mid,r);}
//     return inv;
// }
// int main(){
//     int n=8;
//     int arr[]={3,5,6,9,1,2,7,8};
//     cout<<mergesort(arr,0,n-1);
//     return 0;
// }

//21. brute force
// #include<iostream>
// using namespace std;
// int countinv(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j])
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int arr[]={3,5,6,9,1,2,7,8};
//     cout<<countinv(arr,8);
// }

//22.kth smallest element using quick sort 
// #include<iostream>
// #include<vector>
// using namespace std;
// int partition(int arr[], int l, int r){
//     int pivot = arr[r];
//     int i = l - 1;
//     for(int j = l; j < r; j++){
//         if(arr[j] <= pivot){
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i+1], arr[r]);
//     return i+1;
// }
// int quicksort(int arr[], int l, int r, int k){
//     if(l <= r){
//         int pos = partition(arr, l, r);
//         if(pos - l == k - 1)
//             return arr[pos];
//         else if(pos - l > k - 1)
//             return quicksort(arr, l, pos - 1, k);
//         else
//             return quicksort(arr, pos + 1, r, k - (pos - l + 1));
//     }
//     return INT_MAX;
// }
// int main(){
//     int arr[]={10,19,6,9,3,35,78,32};
//     int n=8;
//     int k=3;
//     int ans=quicksort(arr,0,n-1,k);
//     cout<<ans;
//     return 0;
// }

//23.kth smaleest element 
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5]={1,2,5,4,3};
//     int n=sizeof(arr)/4;
//     int k=2;
//     // Sorting the array (Bubble Sort)
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     cout<< k<<arr[k - 1];
//     return 0;
// }

//24.array of fruits lexo order arrange selection sort
// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;
// void selectionsort(char fruit[][60],int n){
//     for(int i=0;i<n-1;i++){
//         int minidx=i;
//         for(int j=i+1;j<n;j++){
//             if(strcmp(fruit[minidx],fruit[j])>0){
//                 minidx=j;
//             }
//         }
//         if(i!=minidx) {
//             swap(fruit[i],fruit[minidx]);
//             }
//     }
//     return ;
// }
// int main(){
//     char fruit[][60]={"kiwi","apple","pomeogrante","banana","dragon fruit"};
//     int n=5;
//     selectionsort(fruit,n);
//     for(int i=0;i<n;i++){
//         cout<<fruit[i]<<" ";
//     }
//     return 0;
// }

//25.form smallest and second smallest no that sum is mini
// #include <iostream>
// using namespace std;
// // function to sort array
// void sort(int a[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (a[i] > a[j]) {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }
// int main() {
//     int n=5;
//     int a[n]={6,2,8,4,5};
//     sort(a, n);
//     int num1 = 0, num2 = 0;
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0)
//             num1 = num1 * 10 + a[i];
//         else
//             num2 = num2 * 10 + a[i];
//     }
//     cout<<num1<<endl;
//     cout<<num2<<endl;
//     cout<<num1+num2<<endl;
//     return 0;
// }

//26. mountain array
// #include<iostream>
// #include<vector>
// using namespace std;
// int binearysearch(vector<int> &v){
//     int  lo=1;
//     int n=v.size();
//     int hi=n-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(mid==0){
//             if(v[mid]>v[mid+1]) return 0;
//             else return 1;
//         }
//         else if(mid==n-1){
//             if(v[mid]>v[mid-1]) return n-1;
//             else return n-2;
//         }
//         else {
//             if(v[mid]>v[mid+1] && v[mid]>v[mid-1]) return mid;
//             else if(v[mid]>v[mid-1]) lo=mid+1;
//             else hi=mid-1;
//             }
//         }
//     return -1;
// }
// int main(){
//     vector<int> v{2,10,17,15,13,10,9};
//     cout<<binearysearch(v);
//     return 0;
// }

//27.page allocation problem//painter parition problem
// #include<iostream>
// #include<vector>
// using namespace std;
// bool candischoco(vector<int> &arr,int mid,int s){
//     int n=arr.size();
//     int studentsreqd=1;
//     int currsum=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>mid){
//             return false;
//         }
//         if(currsum+arr[i]>mid){
//             studentsreqd++;
//             currsum=arr[i];
//             if(studentsreqd>s) return false;
//         }
//         else currsum+=arr[i];
//     }
//     return true;
// }
// int binearysearch(vector<int> &v,int s){
//     int  lo=v[0];
//     int n=v.size();
//     int hi=0;
//     for(int i=0;i<n;i++) hi+=v[i];
//     int ans=-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(candischoco(v,mid,s)) {
//             ans=mid;
//             hi=mid-1;
//         }
//         else lo=mid+1;
//     }
//     return ans;
// }
// int main(){
//     vector<int> v{10,20,30,40};
//     int s=2;
//     cout<<binearysearch(v,s);
//     return 0;
// }

//28.ship package 
// #include<iostream>
// #include<vector>
// using namespace std;
// bool canShip(vector<int>& w, int days, int cap){
//     int d = 1, load = 0;
//     for(int x : w){
//         if(x > cap) return false;
//         if(load + x > cap){
//             d++;
//             load = x;
//             if(d > days) return false;
//         } else {
//             load += x;
//         }
//     }
//     return true;
// }
// int shipWithinDays(vector<int>& w, int days){
//     int lo = 0, hi = 0;
//     for(int x : w){
//         lo = max(lo, x);
//         hi += x;
//     }
//     int ans = hi;
//     while(lo <= hi){
//         int mid = lo + (hi - lo)/2;
//         if(canShip(w, days, mid)){
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> w = {1,2,3,4,5,6,7,8,9,10};
//     int days = 5;
//     cout << shipWithinDays(w, days);
// }

//29.apinter partiton 
// #include<iostream>
// #include<vector>
// using namespace std;
// bool canPaint(vector<int>& boards, int painters, int cap){
//     int p = 1, sum = 0;
//     for(int x : boards){
//         if(x > cap) return false;
//         if(sum + x > cap){
//             p++;
//             sum = x;
//             if(p > painters) return false;
//         } else {
//             sum += x;
//         }
//     }
//     return true;
// }
// int painterPartition(vector<int>& boards, int painters){
//     int lo = 0, hi = 0;
//     for(int x : boards){
//         lo = max(lo, x);
//         hi += x;
//     }
//     int ans = hi;
//     while(lo <= hi){
//         int mid = lo + (hi - lo)/2;
//         if(canPaint(boards, painters, mid)){
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> boards = {10,20,30,40};
//     int painters = 2;
//     cout << painterPartition(boards, painters);
// }

//30.chocolate distribution
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int chocolateDiff(vector<int>& arr, int m){
//     sort(arr.begin(), arr.end());
//     int n = arr.size();
//     int ans = INT_MAX;
//     for(int i = 0; i + m - 1 < n; i++){
//         ans = min(ans, arr[i + m - 1] - arr[i]);
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr = {7,3,2,4,9,12,56};
//     int m = 3;
//     cout << chocolateDiff(arr, m);
// }

//31.koko eating banana 
// #include<iostream>
// #include<vector>
// #include<cmath>
// using namespace std;
// bool canEat(vector<int>& piles, int h, int k){
//     long long hours = 0;
//     for(int x : piles){
//         hours += (x + k - 1) / k;
//     }
//     return hours <= h;
// }
// int minEatingSpeed(vector<int>& piles, int h){
//     int lo = 1, hi = 0;
//     for(int x : piles) hi = max(hi, x);
//     int ans = hi;
//     while(lo <= hi){
//         int mid = lo + (hi - lo)/2;
//         if(canEat(piles, h, mid)){
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> piles = {3,6,7,11};
//     int h = 8;
//     cout << minEatingSpeed(piles, h);
// }

//32.aggressive cow
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool canPlace(vector<int>& stalls, int cows, int dist){
//     int count = 1;
//     int last = stalls[0];
//     for(int i = 1; i < stalls.size(); i++){
//         if(stalls[i] - last >= dist){
//             count++;
//             last = stalls[i];
//             if(count == cows) return true;
//         }
//     }
//     return false;
// }
// int aggressiveCows(vector<int>& stalls, int cows){
//     sort(stalls.begin(), stalls.end());
//     int lo = 1, hi = stalls.back() - stalls.front();
//     int ans = 0;
//     while(lo <= hi){
//         int mid = lo + (hi - lo)/2;
//         if(canPlace(stalls, cows, mid)){
//             ans = mid;
//             lo = mid + 1;
//         } else {
//             hi = mid - 1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> stalls = {1,2,8,4,9};
//     int cows = 3;
//     cout << aggressiveCows(stalls, cows);
// }

//33.race track problem of kids m mini distance must be large /aggressive cow
// #include<iostream>
// #include<vector>
// using namespace std;
// bool canplacestudents(vector<int> &arr,int s,int mid){
//     int n=arr.size();
//     int studentsreqd=1;
//     int lastplaced=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]-lastplaced>=mid){
//             studentsreqd++;
//             lastplaced=arr[i];
//             if(studentsreqd==s) return true;
//         }
//     }
//     return false;
// }
// int binearysearch(vector<int> &v,int s){
//     int lo=1;
//     int n=v.size();
//     int hi=v[n-1]-v[0];
//     int ans=-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(canplacestudents(v,s,mid)) {
//             ans=mid;
//             lo=mid+1;
//         }
//         else hi=mid-1;
//     }
//     return ans;
// }
// int main(){
//     vector<int> v{2,9,10,10,13,17};
//     int s=3;
//     cout<<binearysearch(v,s);
//     return 0;
// }

//34.ques on bineary find ist occurence of x in sorted array 
// #include<iostream>
// #include<vector>
// using namespace std;
// int binearysearch(vector<int> &v,int tar){
//     int  lo=0;
//     int hi=v.size()-1;
//     int ans= -1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(v[mid]==tar) {ans=mid;
//         hi=mid-1;}
//         else if (v[mid]<tar) lo=mid+1;
//         else hi=mid-1;
//     }
//     return ans;
// }
// int main(){
//     vector<int> v{2,5,5,6,6,6,7,12,20};
//     int tar=7;
//     cout<<binearysearch(v,tar);
//     return 0;
//     }

//35. recursiive bineary 
// #include<iostream>
// #include<vector>
// using namespace std;
// int binearysearchrec(vector<int> &v,int tar,int lo ,int hi){
//     if(lo>hi) return -1;
//         int mid=lo+(hi-lo)/2;
//         if(v[mid]==tar) return mid;
//         if (v[mid]<tar) return binearysearchrec(v, tar,mid+1 , hi);
//         else return binearysearchrec(v, tar,lo,mid-1);
//  }
// int main(){
//     vector<int> v{2,3,5,17,23,30,34};
//     int tar=17;
//     cout<<binearysearchrec(v,tar,0,v.size()-1);
//     return 0;
// }

//36.given a binarystring and an integer k return the max no of consecutive 1 in the string if u can flip at most k 0
//substring with max one also change k zero to 1
// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// int longestones(string str, int k){  //int longestones(vector<int> str, int k)
//     int st=0,end=0,zeroc=0,maxl=0;
//     for(;end<str.length();end++){           //for(;end<str.size();end++){
//         if(str[end]=='0'){                  //if(str[end]==0){
//             zeroc++;
//         }
//        while(zeroc > k){
//     if(str[st] == '0'){
//         zeroc--;
//     }
//     st++;
// }
//         maxl=max(maxl,end-st+1);
//     }
//     return maxl;
// }
// int main(){
//     string str="0001110100";     // vector<int> str{0,0,0,1,1,0,1,0,1,1};
//     int k=2;
//     cout<<longestones(str,k);
//     return 0;
// }

//37.4 sum
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//     vector<vector<int>> ans;
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     for(int i = 0; i < n; i++) {
//         if(i > 0 && nums[i] == nums[i-1]) continue;
//         for(int j = i + 1; j < n; j++) {
//             if(j > i + 1 && nums[j] == nums[j-1]) continue;
//             long long newTarget = (long long)target - nums[i] - nums[j];
//             int l = j + 1, r = n - 1;
//             while(l < r) {
//                 long long sum = nums[l] + nums[r];
//                 if(sum == newTarget) {
//                     ans.push_back({nums[i], nums[j], nums[l], nums[r]});
//                     while(l < r && nums[l] == nums[l+1]) l++;
//                     while(l < r && nums[r] == nums[r-1]) r--;
//                     l++;
//                     r--;
//                 }
//                 else if(sum < newTarget) {
//                     l++;
//                 }
//                 else {
//                     r--;
//                 }
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//      vector<int> nums = {1, 0, -1, 0, -2, 2};
//     int target = 0;
//     vector<vector<int>> result = fourSum(nums, target);
//     for(auto &v : result) {
//         for(int x : v) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
int secondlargestelement(vector<int> &nums){
    int n=nums.size();
    int maxnum=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(nums[i]>maxnum){
            smax=maxnum;
            maxnum=nums[i];
        }
        if(smax<nums[i] && maxnum!=nums[i] ){
           smax=nums[i];
    }
}
    return (maxnum==INT_MIN)?-1:smax;
}
int main(){
    vector<int> a={3,4,6,1};
    cout<<secondlargestelement(a);
    return 0;
}
