//1. wap to count a number of digit in a number 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=2345,count=0;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
//     return 0;
// }

//2. to find sum and product of all even number 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=2345,sum=0,even;
//     while(n>0){
//         even=n%10;
//         if(even%2==0){
//           sum+=even;
//         }
//         n=n/10;
//     }
//     cout<<sum;
//     return 0;
// }

//3. to print table
// #include<iostream>
// using namespace std;
// int main(){
//     int n=2;
//     for(int i=1;i<=10;i++){
//         cout<<n<<'X'<<i<<'='<<n*i<<" ";
//     }
//     return 0;
// }

//4. to print fibonacci series 
// #include<iostream>
// using namespace std;
// int main(){
//     int a=0,b=1,c;
//     for(int i=0;i<8;i++){
//         cout<<a;
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

//5.to print leap year
// #include<iostream>
// using namespace std;
// int main(){
//     int year=2004;
//     if(year%4==0 && year%100!=0 || year%400==0){
//         cout<<"leapyear";
//     }
//     return 0;
// }

//6.factorial or sum of n term 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5,fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     cout<<fact;
//     return 0;
// }

//7.greatest of 3 number 
// #include<iostream>
// using namespace std;
// int main(){
//     int a=89,b=54,c=34;
//     if(a>b && a>c) cout<<a;
//     else if(b>a && b>c) cout<<b;
//     else cout<<c;
//     return 0;
// }

//8.to check a prime number or composite 
// #include<iostream> 
// using namespace std;
// int main(){
//     int n=45;
//     for(int i=2;i<n/2;i++){
//         if(n%i==0){
//             cout<<"compsite";
//             return 0;
//         }
//     }
//     cout<<"prime";
//     return 0;
// }

//9.prime or not 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=12;
//     int flag=1;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//             flag=0;
//             break;
//         }
//     }
//     if(flag==1){
//         cout<<"prime";
//     }
//     else if(n==1){
//         cout<<"nor prime nor composite";
//     }
//     else{
//         cout<<"composite";
//     }
//     return 0;
// }

//10.to print prime number from 2 to n
// #include<iostream>
// using namespace std;
// int main(){
//     int n=20;
//     for(int i=2;i<=n;i++){
//       bool prime=true;
//       for(int j=2;j<i;j++){
//         if(i%j==0) {
//             prime=false;
//             break;
//         }
//       }
//     if(prime) 
//         cout<<i<<" ";
//     }
//     return 0;
// }

//11.prime factor of a number n
// #include<iostream>
// using namespace std;
// int main(){
//     int n=20;
//     for(int i=2;i<=n;i++){
//         while(n%i==0){
//             cout<<i<<" ";
//             n=n/i;
//         }
//     }
//     return 0;
// }

//12.to print highest factor 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=12,hcf;
//     for(int i=1;i<=n/2;i++){
//         if(n%i==0);
//         hcf=i;
//     }
//     cout<<hcf;
// }

//13.to find reverse and palindrome 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=123,rev=0,original=n;
//     while(n>0){
//         int ld=n%10;
//         rev=rev*10+ld;
//         n=n/10;
//     }
//     cout<<rev;
//     if(original==rev) cout<<"palindrome"<<endl;
//     else cout<<"not";
//     return 0;
// }

//14.to print factorial part of a number 
// #include<iostream>
// using namespace std;
// int main(){
//     double a=38.19;
//     int b=int(a);
//     double c=a-b;
//     cout<<c;
//     return 0;
// }

//15.armstrong number
// #include<iostream>
// using namespace std;
// int main(){
//     int n=153,original=n,num=0;
//     while(n!=0){
//         int ld=n%10;
//         num+=ld*ld*ld;
//         n=n/10;
//     }
//     if(original==num) cout<<"armstrong";
//     else cout<<"not a armstrong";
//     return 0;
// }

//16.1-2+3-4-5
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=1;i<=6;i++){
//         if(i%2==0){
//             sum-=i;
//         }
//         else sum+=i;
//     }
//     cout<<sum;
//     return 0;
// }

//17.to print ascii and their value 
// #include<iostream>
// using namespace std;
// int main(){
//     char i='A';
//     for(i='A';i<='Z';i++){
//         cout<<i<<'='<<int(i)<<" ";
//     }
//     return 0;
// }

//18.to swap to number using pointer 
// #include<iostream>
// using namespace std;
// int main(){
//     int a=2,b=3,c;
//     int *p=&a,*q=&b;
//     c=*p;
//     *p=*q;
//     *q=c;
//     cout<<a<<" "<<b;
//     return 0;
// }

//19.wap to find sum or product of digit in a number 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=234,digit=0,sum=0;
//     while(n>0){
//        digit=n%10;
//        sum+=digit;
//        n=n/10;
//     }
//     cout<<sum;
//     return 0;
// }

//20.decimal to binary 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5,ans=0,mul=1,rem;
//     while(n>0){
//       rem=n%2;//&
//         n/=2;//>>
//         ans+=rem*mul;
//         mul*=10;
//     }
//     cout<<ans;
//     return 0;
// }

//21.binary to decimal
// #include<iostream>
// using namespace std;
// int main(){
//     int n=101,ans=0,mul=1,rem;
//     while(n>0){
//         rem=n%10;
//         n/=10;
//         ans+=rem*mul;
//         mul*=2;
//     }
//     cout<<ans;
//     return 0;
// }

//22.octal to decimal
// #include<iostream>
// using namespace std;
// int main(){
//     int n=1723,ans=0,mul=1,rem;
//     while(n>0){
//         rem=n%10;
//         n=n/10;
//         ans+=rem*mul;
//         mul*=8;
//     }
//     cout<<ans;
//     return 0;
// }

//23.decimal to ctal
// #include<iostream>
// using namespace std;
// int main(){
//     int n=979,ans=0,mul=1,rem;
//     while(n>0){
//         rem=n%8;
//         n=n/8;
//         ans+=rem*mul;
//         mul*=10;
//     }
//     cout<<ans;
//     return 0;
// }

//24. hexadecimal to decimal 
// #include<iostream>
// #include<vector>
// using namespace std;
// int hexadecimaltodecimal(string n){
//     int ans=0;
//     int x=1;
//     int s=n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i]>='0' && n[i]<='9') ans+=x*(n[i]-'0');
//         else if(n[i]>='A' && n[i]<='F') ans+=x*(n[i]-'A'+10);
//         x*=16;
//     }
//     return ans;
// }
// int main(){
//     cout<<hexadecimaltodecimal("1CF");
//     return 0;
// }

//25. decimal to hexadecimal
// #include<iostream>
// #include<vector>
// using namespace std;
// string decimaltohexadecimal(int n){
//     int x=1;
//     string ans=" ";
//     while(x<=n){
//         x*=16;
//     }
//     x/=16;
//     while(x>0){
//         int ld=n/x;
//         n-=ld*x;
//         x/=16;
//         if(ld<=9) ans=ans+to_string(ld);
//         else{
//             char c='A'+ld-10;
//             ans.push_back(c);
//         }
//     }
//     return ans;
// }
// int main(){
//     cout<<decimaltohexadecimal(463);
//     return 0;
// }

//26. binary addition
// #include <iostream>
// using namespace std;
// int main() {
//   int a=111,b=111;
//     int carry = 0;
//     int result = 0;
//     int place = 1;
//     while (a > 0 || b > 0 || carry > 0) {
//         int bit1 = a % 10;
//         int bit2 = b % 10;
//         int sum = bit1 + bit2 + carry;
//         result = (sum % 2) * place + result;
//         carry = sum / 2;
//         place *= 10;
//         a /= 10;
//         b /= 10;
//     }
//     cout << result;
//     return 0;
// }

//27.method 2 bitwise operator
// #include <iostream>
// using namespace std;
// int addBinary(int a, int b) {
//     while (b != 0) {
//         int sum = a ^ b;
//         int carry = (a & b) << 1;
//         a = sum;
//         b = carry;
//     }
//     return a;
// }
// void printBinary(int n) {
//     if (n == 0)
//         return;
//     printBinary(n / 2);
//     cout << n % 2;
// }
// int main() {
//     int a = 7;   // 111 in binary
//     int b = 7;   // 111 in binary
//     printBinary(addBinary(a, b));
//     return 0;
// }

//28. without using ncr pascal triangle 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<=n;i++){
//         int first=1;
//         for(int j=1;j<=n-i;j++){
//            cout<<" "; 
//         }
//         for(int j=0;j<=i;j++){
//             cout<<first;
//             first=first*(i-j)/(j+1);
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//29.count trailing zero in a factorial
// #include<iostream>
// using namespace std;
// int main(){
//     int num=100;
//     int count=0;
//     while(num>0){
//         count+=num/5;
//         num/=5;
//     }
//     cout<<count;
//     return 0;
// }

//30.modular exponention
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     long long a=2,b=3,m=10;
//        long long result = 1;
//     a = a % m;
//     while (b > 0) {
//         if (b % 2 == 1) {
//             result = (result * a) % m;
//         }
//         a = (a * a) % m;
//         b = b / 2;
//     }
//     cout << result;
//     return 0;
// }