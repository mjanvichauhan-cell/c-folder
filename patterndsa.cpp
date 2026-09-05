//1.to print square/rectangle pattern 
// 1 1 1 1  1 2 3 4  1 2 3 4      * * * *  A A A A  A B C D  A B C D
// 2 2 2 2  1 2 3 4  5 6 7 8      * * * *  B B B B  A B C D  E F G H
// 3 3 3 3  1 2 3 4  9 10 11 12   * * * *  C C C C  A B C D  I J K L 
// 4 4 4 4  1 2 3 4  13 14 15 16  * * * *  D D D D  A B C D  M N O P
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<char(a+64)<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//2. to print triangle pattern 
//1        1        1         *        A        A        A 
//2 2      1 2      2 3       * *      B B      A B      B C
//3 3 3    1 2 3    4 5 6     * * *    C C C    A B C    D E F
//4 4 4 4  1 2 3 4  7 8 9 10  * * * *  D D D D  A B C D  G H I J
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int a=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//3.to print inverted triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int m=4;
//     for(int i=m;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//4.to print tilted square 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){ //for inverted use i to 1
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//5. to print triangle pattern using number and alphabets together
// #include<iostream>
// using namespace std;
// int main(){
// int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2==0) cout<<j;
//             else cout<<(char)(j+64);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//6.to print 0 1 triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int m=4;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=i;j++){
//             if((i+j)%2==0) cout<<0;
//             else cout<<1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//7.to print plus using *
// #include<iostream>
// using namespace std;
// int main(){
//     int m=5,mid=m/2+1;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=m;j++){
//            if(i==mid||j==mid) cout<<"*";
//            else cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//8.to print cross
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i==j) || (i+j == n+1)){
//                 cout<<"* "; 
//         }   
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//9. to print triangle and reverse in pyramid 
//    1
//   121
//  12321
// 1234321
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//                 cout<<" "; 
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for(int j=i-1;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//10.to print to triangle inverted 
//1234567
//123 567
//12   67
//1     7
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3,a=1;
//     int nsp=1;
//     int nst=n;
//     for(int i=1;i<=2*n+1;i++){
//         cout<<i;
//     }
//     cout<<endl;
//     for(int i=1;i<=n;i++){
//        int a=1;
//         for(int j=1;j<=nst;j++){
//                 cout<<a; 
//                 a++;
//         }
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//             a++;
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<a;
//             a++;
//         }
//         nsp+=2;
//         nst--;
//         cout<<endl;
//     }
//     return 0;
// }

//11.to print triangle decreasing 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,a=1;
//     int nsp=0;
//     int nst=n;
//     for(int i=1;i<=n;i++){
//        for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//             a++;
//         }
//         nsp++;
//         nst--;
//         cout<<endl;
//     }
// }

//12.to print hollow square 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3,m=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(i==1 || i==n || j==1 || j==m){
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//13.butter fly pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int m=4,nsp=2*(m-1),nst=1;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         nsp-=2;
//         nst++;
//         cout<<endl;
//     }
//     nsp=0,nst=m;
//     for(int i=1;i<=m;i++){ 
//         for(int j=1;j<=nst;j++){
//                 cout<<"*"; 
//         }
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         nsp+=2;
//         nst--;
//         cout<<endl;
//     }
//     return 0;
// }

//14.zig ziag pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=9;j++){
//             if((i+j)%4==0||(i==2&&j%4==0)) cout<<"*";
//             else cout<<" ";
//         }
//         cout<<endl;;
//     }
//     return 0;
// } 

//15.hollow diamond in a rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int m=4,nsp=0,nst=m;
//     for(int i=1;i<=m;i++){// for different pattern use a inside for loop 
//         for(int j=1;j<=nst;j++){
//                 cout<<"*"; 
//         }
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         nsp+=2;
//         nst--;
//         cout<<endl;
//     }
//     nsp=2*(m-1),nst=1;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         nsp-=2;
//         nst++;
//         cout<<endl;
//     }   
//     return 0;
// }

//16.print hollow tilted square 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){ //for inverted use i to 1
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//            if(i==1||j==1||i==n||j==n) cout<<"*";
//            else cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//17. print hollow butterfly pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int m=4,nsp=2*(m-1),nst=1;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=nst;j++){
//             if(j==1||j==nst) cout<<"*";
//             else cout<<" ";
//         }
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             if(j==1||j==nst) cout<<"*";
//             else cout<<" ";           
//         }
//         nsp-=2;
//         nst++;
//         cout<<endl;
//     }
//     nsp=0,nst=m;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=nst;j++){
//             if(j==1||j==nst) cout<<"*";
//             else cout<<" ";
//         }
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             if(j==1||j==nst) cout<<"*";
//             else cout<<" ";
//         }
//         nsp+=2;
//         nst--;
//         cout<<endl;
//     }
//     return 0;
// }

//18.hollow diamond pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,nsp=n-1,nst=1,j;
//     for(int i=1;i<=2*n-1;i++){//outer loops
//         for(int j=1;j<=nsp;j++){ //spaces 
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             if(j==1||j==nst) cout<<"*";
//             else cout<<" ";     
//         }
//         if (i<n){
//             nsp--;
//             nst+=2; }
//         else{
//             nsp++;
//             nst-=2;
//         }  
//         cout<<endl;
//     }
//     return 0;
// }

//19.to print backward triangle
// #include<iostream> 
// using namespace std;
// int main(){
//     int n=4;
//     int nsp=n-1,nst=1;
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=nsp;i++){
//             cout<<" ";
//         }
//         for(int i=1;i<=nst;i++){
//             cout<<'*';
//         }
//         cout<<endl;
//         nsp--;
//         nst++;
//     }
//     return 0;
// }

//20.method 2
// #include<iostream>
// using namespace std;
//     int main(){
//     int n=6;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if((i+j)>=n+1){
//                 cout<<'*';
//             }
//             else{
//                 cout<<" ";
//             }    
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//21. to print pyramid of number alphabets and * flyod method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     int a=1;
//     for(int i=1;i<=n;i++){//outer loops
//         for(int j=1;j<=n-i;j++){ //spaces 
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<a;
//             a++;
//         }    
//         cout<<endl;
//     }
//     return 0;
// }

//22. method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,nsp=n-1,nst=1;
//     for(int i=1;i<=n;i++){//outer loops
//         for(int j=1;j<=nsp;j++){ //spaces 
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<"*";
//         }
//         nsp--;
//         nst+=2;   
//         cout<<endl;
//     }
//     return 0;
// }

//23.  to print star number alphabet rhombus method 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,nsp=n-1,nst=1; // upper half 
//     for(int i=1;i<=n;i++){//outer loops
//         for(int j=1;j<=nsp;j++){ //spaces 
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<'*';
//         }
//         nsp--;
//         nst+=2;   
//         cout<<endl;
//     }
//     nsp=1,nst=2*n-3;//lower half 
//     for(int i=1;i<=n-1;i++){//outer loops
//         for(int j=1;j<=nsp;j++){ //spaces 
//           cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<'*';
//         }
//         nsp++;
//         nst-=2;   
//         cout<<endl;
//     }
//     return 0;
// }

//24. method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4,nsp=n-1,nst=1;
//     int a=1;
//     for(int i=1;i<=2*n-1;i++){//outer loops
//         for(int j=1;j<=nsp;j++){ //spaces 
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++){
//             cout<<i;
//             a++;          
//         }
//         if (i<n){
//             nsp--;
//             nst+=2; }
//         else{
//             nsp++;
//             nst-=2;
//         }  
//         cout<<endl;
//     }
//     return 0;
// }

//25.different pattern rhombus 
// #include <iostream>
// using namespace std;
// int main() {
//     int n=3, nsp=n-1,nst=1;
//     for (int i = 1; i <=n; i++) {
//         for (int j=1; j<=nsp;j++) {
//             cout<<" ";
//         }
//         for (int j = 1; j <=nst; j++) {
//             cout<<j;
//         }
//         nsp--;
//         nst+=2;
//         cout<<endl;
//     }
//     nsp=1,nst=2*n-3;
//     for (int i=n-1; i >=1; i--) {
//         for (int j=1; j<=nsp; j++) {
//            cout<<" ";
//         }
//         for (int j = 1; j <=nst; j++) {
//             cout<<j;
//         }
//         nsp++;
//         nst-=2;
//         cout<<endl;
//     }
//     return 0;
// }

//26.print a number pattern in continous manner 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             cout<<j;
//         }
//         for(int j=1;j<=(i-1);j++){
//             cout<<j;
//         }
//     cout<<endl;
//     }
//     return 0;
// }

//27.method 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//            cout<<(i+j)%6+1;
//         }
//     cout<<endl;
//     }
//     return 0;
// }

//28.method 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=1;i<=n;i++){
//         int num=i;
//         for(int j=1;j<=n;j++){
//             cout<<num;
//             num++;
//             if(num>n){
//                 num=1;
//             }
//         }
//     cout<<endl;
//     }
//     return 0;
// }

//29.to print inverted pyramid 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5,nsp=0,nst=2*n-1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=nst;j++ ){
//             cout<<"*";
//         }
//         cout<<endl;
//         nst-=2;
//         nsp++;
//     }
//     return 0;
// }

//30.concrete wall pattern 
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=2*n-1;i++){
//         for(int j=1;j<=2*n-1;j++){
//             int val=min(min(i,j),min(2*n-i,2*n-j));
//             cout<<n-val+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
