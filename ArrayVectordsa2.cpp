//1. wap to store data in  a 2d matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5][2]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<5;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]<<" ";
//        }
//         cout<<endl;;
//     }
//     return 0;
// }

//2. print sum and prodcut of 2d array 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5][2]={1,2,3,4,5,6,7,8,9,10};
//     int sum=0;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<2;j++){
//            sum=sum+arr[i][j];
//        }
//     }  
//     cout<<sum;
//     return 0;
// }

//3. max and min in 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5][2]={1,2,3,4,10,6,7,8,9,6};
//     int mx=INT_MIN;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<2;j++){
//           if(mx<arr[i][j]){
//             mx=arr[i][j];
//           }
//        }
//     }  
//     cout<<mx;
//     return 0;
// }

//4.to add two matrix
// #include <iostream>
// using namespace std;
// int main() {
//     int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int b[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int sum[4][3];
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 3; j++) {
//             sum[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout<<sum[i][j]<<" ";
//         }
//         cout<<endl;
//     }   
//     return 0;
// }

// 5.to add two matrix without using extra array
// #include <iostream>
// using namespace std;
// int main() {
//     int a[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int b[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 3; j++) {
//             a[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }   
//     return 0;
// }

//6.to print sum from l1,r1 to l2,r2
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int l1=1,l2=2,r1=0,r2=1,sum=0;
//     for (int i = l1; i <= l2; i++) {
//         for (int j = r1; j <= r2; j++) {
//             sum += arr[i][j];
//         }
//     }
//     cout<<sum;
//     return 0;
// }

//7.method 2
// #include<iostream>
// #include<vector>
// using namespace std;
// int rectanglesum(vector<vector<int>> &v ,int l1,int r1, int l2,int r2){
//     int sum=0;
//     for(int i=0;i<v.size();i++){
//         for(int j=1;j<v[i].size();j++){
//             v[i][j]+=v[i][j-1];
//         }
//     }
//     for(int i=l1;i<=l2;i++){
//         if(r1!=0){
//             sum+=(v[i][r2]-v[i][r1-1]);
//         }
//         else{sum+=v[i][r2];}
//         }
//     return sum;}
// int main(){
//     int l1=1,r1=1,l2=2,r2=2;
//     vector<vector<int>> ans={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<rectanglesum(ans,l1,r1,l2,r2);
//     return 0;
// }

//8.method 3
// #include<iostream>
// #include<vector>
// using namespace std;
// void rectanglesum(vector<vector<int>> &v ,int l1,int r1, int l2,int r2){
//     int sum=0;
//     for(int i=0;i<v.size();i++){
//         for(int j=1;j<v[i].size();j++){
//             v[i][j]+=v[i][j-1];
//         }
//     }
//     for(int i=1;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             v[i][j]+=v[i-1][j];
//         }
//     }
//     int topsum=0,leftsum=0,topleftsum=0;
//     if(l1!=0) topsum=v[l1-1][r2];
//     if(r1!=0)leftsum=v[l2][r1-1];
//     if(l1!=0 && r1!=0) topleftsum=v[l1-1][r1-1];
//     sum=v[l2][r2]-topsum-leftsum+topleftsum;
//     cout<< sum;}
// int main(){
//     int l1=1,r1=1,l2=2,r2=2;
//     vector<vector<int>> ans={{1,2,3},{4,5,6},{7,8,9}};
//     rectanglesum(ans,l1,r1,l2,r2);
//     return 0;
// }

//9.multiplication
// #include <iostream>
// using namespace std;
// int main() {
//     int a[2][3]={1,2,3,4,1,1};
//     int b[3][3]={1,2,3,4,1,2,3,4,1};
//     int res[2][3];
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             res[i][j]=0;
//              for(int k=0;k<3;k++){
//             res[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout<<res[i][j]<<" ";
//         }
//         cout<<endl;;
//     }   
//     return 0;
// }

//10.transpose of n*m storing in another arr
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3]={1,2,3,4,5,6};
//     int brr[3][2];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             brr[i][j]=arr[j][i]; // we can store it in another matrix 
//        }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//         cout<<brr[i][j]<<" ";
//     }
//         cout<<endl;
//     }
//     return 0;
// }

//11.method 2 transpose of a 2 d matrix 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5][2]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<5;j++){
//             cout<<arr[j][i]<<" "; // we can store it in another matrix 
//        }
//         cout<<endl;
//     }
//     return 0;
// }

//12. without using an extra array only for square matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][2]={1,2,3,4};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<i;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//        }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//13. to reverse an array 2d square coloum wise 
// #include<iostream>
// using namespace std;
// int main(){   
//     int arr[4][3]={1,2,3,6,5,4,7,8,9,12,10,11};
//     int n=sizeof(arr)/4;
//     for(int j=0;j<3;j++){
//         int i=0,k=3; // k=row-1 i=column
//         while(i<k){
//             int temp=arr[i][j];
//             arr[i][j]=arr[k][j];
//             arr[k][j]=temp;
//             i++;
//             k--;
//     }}
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//         cout<<endl;;
//     }
//     return 0;
// }

//14.reverse row wise
// #include<iostream>
// using namespace std;
// int main(){   
//     int arr[4][3]={1,2,3,6,5,4,7,8,9,12,10,11};
//     int n=sizeof(arr)/4;
//     for(int i=0;i<4;i++){
//         int j=0,k=2; // k=column-1 i=row
//         while(j<k){
//             int temp=arr[i][j];
//             arr[i][j]=arr[i][k];
//             arr[i][k]=temp;
//             j++;
//             k--;
//     }}
//     for(int i=0;i<4;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//         cout<<endl;;
//     }
//     return 0;
// }

//15. to roate 90 cloclwise 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//        }
//     }
//     for(int i=0;i<3;i++){
//         int j=0,k=2;
//         while(j<k){
//             int temp=arr[i][j];
//             arr[i][j]=arr[i][k];
//             arr[i][k]=temp;
//             j++;
//             k--;
//     }}
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//         cout<<endl;
//     }
//     return 0;
// }

//16.to rotate 90 anticlockwise
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//        }
//     }
//     for(int j=0;j<3;j++){          
//     int i=0,k=2;
//     while(i<k){
//         int temp=arr[i][j];
//         arr[i][j]=arr[k][j];
//         arr[k][j]=temp;
//         i++;
//         k--;
// }}
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//         cout<<endl;
//     }
//     return 0;
// }

//17.to rotate 180 clockwise
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int j=0;j<3;j++){          
//     int i=0,k=2;
//     while(i<k){
//         int temp=arr[i][j];
//         arr[i][j]=arr[k][j];
//         arr[k][j]=temp;
//         i++;
//         k--;
// }}
//     for(int i=0;i<3;i++){
//         int j=0,k=2;
//         while(j<k){
//             int temp=arr[i][j];
//             arr[i][j]=arr[i][k];
//             arr[i][k]=temp;
//             j++;
//             k--;
//     }}
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//         cout<<endl;
//     }
//     return 0;
// } 

//18.to rotate k times
//90 clock=270 anticlock 180 clock=180anticlock and 270 clock=90anticlock also k=k%4;
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int p=3;
//     p=p%4;
//     while(p--){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//        }
//     }
//     for(int i=0;i<3;i++){
//         int j=0,k=2;
//         while(j<k){
//             int temp=arr[i][j];
//             arr[i][j]=arr[i][k];
//             arr[i][k]=temp;
//             j++;
//             k--;
//     }}
// }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//         cout<<arr[i][j]<<" ";
//     }
//         cout<<endl;
//     }
//     return 0;
// }

//19.to rotate 90 n*m anticlock
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int brr[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             brr[i][j]=arr[j][i]; // we can store it in another matrix 
//        }
//     }
//     for(int j=0;j<4;j++){          
//         int i=0,k=2; //k=row-1
//         while(i<k){
//             int temp=brr[i][j];
//             brr[i][j]=brr[k][j];
//             brr[k][j]=temp;
//             i++;
//             k--;
//     }}
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//         cout<<brr[i][j]<<" ";
//     }
//         cout<<endl;
//     }
//     return 0;
// }

//20.to rotate 90 clock n*m
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int brr[3][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             brr[i][j]=arr[j][i]; // we can store it in another matrix 
//        }
//     }
//      for(int i=0;i<3;i++){ // clockwise row wise reverse 
//         int j=0,k=3;
//         while(j<k){
//             int temp=brr[i][j];
//             brr[i][j]=brr[i][k];
//             brr[i][k]=temp;
//             j++;
//             k--;
//     }}
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//         cout<<brr[i][j]<<" ";
//     }
//         cout<<endl;
//     }
//     return 0;
// }

//21. max one in a row not sorted 
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[4][3]={1,1,0,0,1,0,1,1,0,0,1,1};
//     int maxcount=0,maxidx=-1;
//     for (int i = 0; i< 4; i++) {
//         int count=0;
//             for (int j= 0; j < 3; j++) {
//                  if(arr[i][j]==1) count++;
//             if(maxcount<count){// use equal to get last row
//                 maxcount=count;
//                 maxidx=i;
//             }
//         }
//     }  
//     cout<<maxcount<<" "<<maxidx;
//     return 0;
// }

//22.find row with maximum 1 method 1 
// #include<iostream>
// #include<vector>
// using namespace std ;
// int maxonesrow(vector<vector<int>> &v){
//     int maxone=INT_MIN;
//     int maxonerow=-1;
//     int col=v[0].size();
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v[i].size();j++){
//             if(v[i][j]==1){
//                 int noofones=col-1;
//                 if(noofones>maxone){
//                     maxone=noofones;
//                     maxonerow=i;
//                 }
//                 break;
//             }
//         }
//     }
//     return maxonerow;
// }
// int main(){
//     vector<vector<int>> ans={{0,1,1,1},{0,0,0,1},{0,0,0,1}};
//     int res=maxonesrow(ans);
//     cout<<res;
//     return 0;
// }

//23.method 2
//#include<iostream>
// #include<vector>
// using namespace std ;
// int leftonesrow(vector<vector<int>> &v){
//     int leftmaxone=-1;
//     int maxonerow=-1;
//     int col=v[0].size()-1;
//     while(col>=0 && v[0][col]==1){
//         leftmaxone=col;
//         maxonerow=0;
//         col--;
//     }
//     for(int i=1;i<v.size();i++) {
//         while(col>=0 && v[i][col]==1){
//             leftmaxone=col;
//             col--;
//             maxonerow=i;
//        }
//         }   
//     return maxonerow;
// }
// int main(){
//     vector<vector<int>> ans={{0,0,0,1},{0,1,1,1},{0,0,0,1}};
//     int res=leftonesrow(ans);
//     cout<<res;
//     return 0;
// }

//24.max one in a column
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[4][3]={1,1,0,0,1,0,1,1,0,0,1,1};
//     int maxcount=0,maxidx=-1;
//     for (int j = 0; j < 3; j++) {
//         int count=0;
//             for (int i= 0; i < 4; i++) {
//                  if(arr[i][j]==1) count++;
//             if(maxcount<count){
//                 maxcount=count;
//                 maxidx=j;}}}
//             cout<<maxcount<<" "<<maxidx;
//     return 0;
// }

//25..wave print row and reverse '
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for (int i = 0; i < 4; i++) {
//         if(i%2==0){
//             for (int j = 0; j < 3; j++) {
//                 cout<<arr[i][j]<<" ";    // for row wise in reverse condition change i%2!=0;
//             }
//             cout<<endl;
//         }
//         else{
//             for (int j =2; j>= 0; j--) {
//             cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

//26.wave print column wise 
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
//     for (int j = 0; j < 3; j++) {
//         if(j%2==0){
//             for (int i= 0; i< 4; i++) {
//                 cout<<arr[i][j]<<" ";    
//             }
//             cout<<endl;
//         }
//         else{
//             for (int i=3; i>= 0; i--) {
//             cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }

//27.return row with max sum 
// #include <iostream>
// using namespace std;
// int main() {
//     int maxSum=0, rowIndex = 0;
//     int A[3][3]={1,2,3,4,5,67,8,9};
//     for (int i = 0;i < 3; i++) { 
//         int rowSum = 0;      
//         for (int j = 0; j < 3; j++) {
//             rowSum += A[i][j];
//         }
//         if (i == 0 || rowSum > maxSum) {
//             maxSum = rowSum;
//             rowIndex = i;
//         }
//     }
//     cout<<rowIndex<<" "<<maxSum;
//     return 0;
// }

//28.column with max sum
// #include <iostream>
// using namespace std;
// int main() {
//     int maxSum=0, rowIndex = 0;
//     int A[4][3]={1,2,3,4,5,67,8,9,10,11,12,13};
//     for (int j= 0;j < 3; j++) { 
//         int colSum = 0;      
//         for (int i = 0; i < 4; i++) {
//             colSum += A[i][j];
//         }
//         if (j == 0 || colSum > maxSum) {
//             maxSum = colSum;
//             rowIndex = j;
//         }
//     }
//     cout<<rowIndex<<" "<<maxSum;
//     return 0;
// }

//29.spiral printing
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// void spiralorder(vector<vector<int>> &a){
//     int n=3,m=5,minr=0,maxr=a[0].size()-1,minc=0,maxc=a.size()-1,tne=n*m,count=0;
//     while(count<tne){
//         for(int j=minc;j<=maxc;j++){
//             cout<<a[minr][j]<<" ";
//             count++;
//         }
//         minr++;
//         if(count>=tne) break;
//         for(int i=minr;i<=maxr;i++){
//             cout<<a[i][maxc]<<" ";
//             count++;
//         }
//         maxc--;
//         if(count>=tne) break;
//         for(int j=maxc;j>=minc;j--){
//             cout<<a[maxr][j]<<" ";
//             count++;
//         }
//         maxr--;
//         if(count>=tne) break;
//         for(int i=maxr;i>=minr;i--){
//             cout<<a[i][minc]<<" ";
//             count++;
//         }
//         minc++;
//         if(count>=tne) break;
//    }  
// }
// int main(){
//     vector<vector<int>> ans={{1,2,3},{5,6,7},{9,10,11}};
//     spiralorder(ans);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//30.N2 Spiral order 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// void spiralorder(vector<vector<int>> &a,int n){
//     int top=0,right=a[0].size()-1,left=0,bottom=a.size()-1;
//     int num=1;//  n2
//     while (num<=n*n) {//top <= bottom && left <= right
//         for (int i = left; i <= right; i++)
//             a[top][i] = num++;//num--
//         top++;
//         for (int i = top; i <= bottom; i++)
//             a[i][right] = num++;//num--
//         right--;
//         for (int i = right; i >= left; i--)
//             a[bottom][i] = num++;//num--
//         bottom--;
//         for (int i = bottom; i >= top; i--)
//             a[i][left] = num++;//num--
//         left++;
//     }
//     }   
// int main(){
//     int n=3;
//     vector<vector<int>> ans(n,vector<int>(n));
//     spiralorder(ans,n);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//31.reverse order
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std ;
// void spiralorder(vector<vector<int>> &a,int n){
//     int top=0,right=a[0].size()-1,left=0,bottom=a.size()-1;
//     int num=n*n;//  n2
//     while (num>=1) {//top <= bottom && left <= right
//         for (int i = left; i <= right; i++)
//             a[top][i] = num--;
//         top++;
//         for (int i = top; i <= bottom; i++)
//             a[i][right] = num--;
//         right--;
//         for (int i = right; i >= left; i--)
//             a[bottom][i] = num--;
//         bottom--;
//         for (int i = bottom; i >= top; i--)
//             a[i][left] = num--;
//         left++;
//     }
//     }   
// int main(){
//     int n=3;
//     vector<vector<int>> ans(n,vector<int>(n));
//     spiralorder(ans,n);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//32.pascal triangle in an array 
// #include<iostream>
// #include<vector>
// using namespace std ;
// vector<vector<int>> pascaltriangle(int n){
//     vector<vector<int>> pascal(n);
//     for(int i=0;i<n;i++){
//         pascal[i].resize(i+1);
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i) pascal[i][j]=1;
//             else pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
//         }
//     }
//     return pascal;
// }
// int main(){
//     vector<vector<int>> ans;
//     int n=4;
//     ans= pascaltriangle(n);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//         cout<<ans[i][j]<<" ";}
//         cout<<endl;
//     }
// }
