// 1.size of a string 
// #include<iostream>
// using namespace std;
// int main(){
//     char str[]="india";
//     int size=0,i=0;
//     while(str[i]!='\0'){
//     size++;
//     i++;
// }
// cout<<size;
// return 0;
// }

//2.to find reverse and palindrome of a string 
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char str[50]="racecar";
//     int size=0,i=0;
//     while(str[i]!='\0'){
//     size++;
//     i++;
// }
//     char str1[50];
//     strcpy(str1,str);
//     for(int i=0,j=size-1;i<=j;i++,j--){
//         char temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//     }
//     puts(str);
//     if(strcmp(str1,str)==0){
//         cout<<"palindrome";
//     }
//     else {
//         cout<<"no";
//     }
//     return 0;
// }

//3.reverse word in string 2
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//     void reverseWords(vector<char>& s) {
//         reverse(s.begin(), s.end());
//         int start = 0;
//         for (int end = 0; end <= s.size(); end++) {
//             if (end == s.size() || s[end] == ' ') {
//                 reverse(s.begin() + start, s.begin() + end);
//                 start = end + 1;
//             }
//         }
//     }
// int main() {
//     vector<char> s = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
//     reverseWords(s);
//     for (char c : s)
//         cout << c;
//     return 0;
// }

//4.to add an element in a string 
// #include<iostream>
// using namespace std;
// int main(){
//     char str[10]="india";
//    cout<<str;
//     for(int i=6;i>=2;i--){
//         str[i+1]=str[i];
//     }
//     str[3]='k';
//     cout<<str;
//     return 0;
// }

//5. to find no of alphabets and digits and special chr etc 
// #include<iostream>
// using namespace std;
// void count(char a[]){
//     int b=0,d=0;
//     for(int i=0;a[i]!='\0';i++){
//         if(isalpha(a[i])) b++;
//         if(isdigit(a[i])) d++;
//         }   
//    cout<<b<<d;
//     }
// int main(){
//     char a[]="hi 1234, welcome ";
//     count(a);
//     return 0;
// }

//6.convert string in lower and upper case
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string str = "HEllo";
//     for (int i = 0; i < str.size(); i++) {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] -= 32;
//         else if (str[i] >= 'A' && str[i] <= 'Z')
//             str[i] += 32;
//     }
//     cout << str;
//     return 0;
// }

//7.form the  biggest no from num string 
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="89757910";
//     sort(s.begin(),s.end(),greater<int>());
//     cout<<s<<endl;
// }

//8.to count freq of most recurring ele
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="abaccdabca";
//     int fre[26];
//     for(int i=0;i<26;i++){
//         fre[i]=0;
//     }
//     for(int i=0;i<s.size();i++){
//         fre[s[i]-'a']++;
//     }
//     char ans ='a';
//     int maxf=0;
//     for(int i=0;i<26;i++){
//         if(fre[i]>=maxf){
//             maxf=fre[i];
//             ans=i+'a';
//         }
//     }
//     cout<<maxf<<" "<<ans;
//     return 0;
// }

//9.max occ chr method 2
// #include <iostream>
// #include <string>
// using namespace std;
// char getMaxOccurringChar(string str) {
//     int freq[256] = {0};
//     for (char ch : str) {
//         freq[ch]++;
//     }
//     char ans = str[0];
//     int maxi = freq[str[0]];
//     for (char ch : str) {
//         if (freq[ch] > maxi) {
//             maxi = freq[ch];
//             ans = ch;
//         }
//     }
//     return ans;
// }
// int main() {
//     string str = "testsample";
//     cout << getMaxOccurringChar(str);
//     return 0;
// }

//10. permutation
// #include<iostream>
// #include<vector>
// using namespace std;
// void permutation(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch=s[i];
//         string ros=s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);
//     }
// }
// int main(){
//     permutation("abc"," ");
//     return 0;
// }

//11. move x to end of a string
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// string moveallx(string s){
//     if(s.length()==0) return " " ;
//     char ch=s[0];
//     string ans=moveallx(s.substr(1));
//     if(ch=='x'){
//         return ans+ch;
//     }
//     return ch+ans;
// }
// int main(){
// cout<<moveallx("bxnjkgxghjsgxx");
//     return 0;
// }

//12. remove duplicate
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// string removedup(string s){
//     if(s.length()==0) return " " ;
//     char ch=s[0];
//     string ans=removedup(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return ch+ans;
// }
// int main(){
// cout<<removedup("bgghghklmnn");
//     return 0;
// }

//13.remove all occ of a substring
// #include <iostream>
// #include <string>
// using namespace std;
// string removeOccurrences(string s, string part) {
//     while(s.length()>0 && s.find(part)<s.length()){
//      s.erase(s.find(part),part.length());}
//     return s;
// }
// int main() {
//     string s = "daabcbaabcbc";
//     string part = "abc";
//     cout << removeOccurrences(s, part);
//     return 0;
// }

//14. replace pi
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void replacepi(string s){
//     if(s.length()==0) return  ;
//     if(s[0]=='p' && s[1]=='i'){
//         cout<<"3.14";
//         replacepi(s.substr(2));
//     }
//     else{
//         cout<<s[0];
//         replacepi(s.substr(1));
//     } 
// }
// int main(){
// replacepi("jlkpihdpipirs");
//     return 0;
// }

//15.replace spaces 
// #include <iostream>
// #include <string>
// using namespace std;
// string replaceSpaces(string &str) {
//     string ans = "";
//     for (int i = 0; i < str.length(); i++) {
//         if (str[i] == ' ') {
//             ans += "@40";
//         }
//         else {
//             ans += str[i];
//         }
//     }
//     return ans;
// }
// int main() {
//     string str = "Coding Ninjas Is Good";
//     cout << replaceSpaces(str);
//     return 0;
// }

//16. sub seq with ascii
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void subseq(string s,string ans){
//      if(s.length()==0) {
//         cout<<ans<<endl;
//         return  ;}
//         char ch=s[0];
//         int code=ch;
//         string ros=s.substr(1);
//         subseq(ros,ans);
//         subseq(ros,ans+ch);
//         subseq(ros,ans+to_string(code));
// }
// int main(){
// subseq("AB"," ");
//     return 0;
// }

//17. longest substring without repeating chr
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int main(){
//     string s="pwwkew";
//     vector<int> dict(256,-1);
//     int maxlne=0,st=-1;
//     for(int i=0;i<s.size();i++){
//         if(dict[s[i]]>st){
//             st=dict[s[i]];}
//             dict[s[i]]=i;
//             maxlne=max(maxlne,i-st);
//     }
//     cout<<maxlne;
//     return 0;
// }

//18.concatenate two string without using built in function
// #include<iostream>
// using namespace std;
// int main(){
//     char s1[10]="apple",s2[10]="tree",s3[20];
//     int j=0;
//     for(int i=0;s1[i]!='\0';i++){
//         s3[j]=s1[i];
//         j++;
//     }
//     for(int i=0;s2[i]!='\0';i++){
//         s3[j]=s2[i];
//         j++;
//     }
//     s3[j]='\0';
//    cout<<s3;
//     return 0;
// }

//19. to find chr is present in a string or not
// #include <iostream>
// using namespace std;
// int isPresent(char str[], char ch) {
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == ch) {
//             return 1;   // character found
//         }
//     }
//     return 0;           // character not found
// }
// int main() {
//     char str[100]="apple";
//     char ch='e';
//     if (isPresent(str, ch))
//        cout<<"yes";
//     else
//        cout<<"no";
//     return 0;
// }

//20.to count vowels 
// #include <iostream>
// using namespace std;
// void countVowels(char str[]) {
//     int a=0, e=0, i=0, o=0, u=0;
//     for (int k = 0; str[k] != '\0'; k++) {
//         switch (str[k]) {
//             case 'a': case 'A': a++; break;
//             case 'e': case 'E': e++; break;
//             case 'i': case 'I': i++; break;
//             case 'o': case 'O': o++; break;
//             case 'u': case 'U': u++; break;
//         }
//     }
//    cout<<a<<e<<i<<o<<u;
// }
// int main() {
//     char str[100]="akdkjhjgk";
//     countVowels(str);
//     return 0;
// }

//21.to return a sliced string n to m 
// #include <iostream>
// using namespace std;
// void slice(char str[], char result[], int n, int m) {
//     int i, j = 0;
//     for (i = n; i <= m && str[i] != '\0'; i++) {
//         result[j] = str[i];
//         j++;
//     }
//     result[j] = '\0';
// }
// int main() {
//     char str[100]="ajkdsdgf", sliced[100];
//     int n=2, m=3;
//     slice(str, sliced, n, m);
//     cout<<sliced;
//     return 0;
// }

//22.chr is upperrcase or not 
// #include <iostream>
// using namespace std;
// int main() {
//     char ch='a';
//     if (ch >= 'A' && ch <= 'Z') {
//         cout<<" yes";
//     } else {
//         cout<<"no";
//     }
//     return 0;
// }

//23.encoded string s=3[b2[ca]] ans bcacabcacabcaca
// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// string decode(string s){
//     string anslength="";
//     for(int i=0;i<s.length();i++){
//         if(s[i]!=']') {
//             anslength.push_back(s[i]);      
//     }
//         else{
//             string str="";
//             while(!anslength.empty() && anslength.back()!='['){
//                 str.push_back(anslength.back());
//                 anslength.pop_back();            
//             }
//             reverse(str.begin(),str.end());
//             anslength.pop_back();
//             string num="";
//             while(!anslength.empty() && (anslength.back()>='0'&&anslength.back()<='9')){
//                 num.push_back(anslength.back());
//                 anslength.pop_back();
//             }
//             reverse(num.begin(),num.end());
//             int  int_num=stoi(num);
//             while(int_num){
//                 anslength+=str;
//                 int_num--;
//             }
//         }
//     }
//     return anslength;
// }
// int main(){
//     string str="3[b2[ca]]";
//     cout<<decode(str);
//     return 0;
// }

//24.2-9 all possible letter combination ]
// #include<iostream>
// #include<vector>
// using namespace std;
//void f(string &s,int i,string result, vector<string> &li,vector<string> &v){
// if(i==s.size()){
// li.push_back(result);
// return;
// }
// int digit=s[i]-'0';
// if(digit<=1){
// f(s,i+1,result,li,v);
// return ;
// }
// for(int j=0;j<v[digit].size();j++){
// f(s,i+1,result+v[digit][j],li,v);
// }
// return;
// }
// int main(){
//     vector<string> res(10);
//     res={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//     string str="23";
//     vector<string> li;
//     f(str,0," ",li,res);
//     for(int i=0;i<li.size();i++){
//         cout<<li[i]<<" ";
//     }
//     return 0;
// }

//25.sort an strings 
// #include<iostream>
// #include<vector>
// using namespace std;
// string f(string str){
//     vector<int> freq(26,0);
//     for(int i=0;i<str.length();i++){
//         int index=str[i]-'a';
//         freq[index]++;
//     }
//     int j=0;
//     for(int i=0;i<26;i++){
//         while(freq[i]--){
//             str[j++]=i+'a';
//         }
//     }
//     return str;
// }
// int main(){
//     vector<string> res;
//     string str="bac";
//     cout<<f(str);
//     return 0;
// }

//26.anagram yes or no
// #include<iostream>
// #include<vector>
// using namespace std;
// bool isanagram(string s1,string s2){
//     vector<int> freq(26,0);
//     if(s1.length()!=s2.length()) return false ;
//     for(int i=0;i<s1.length();i++){
//         freq[s2[i]-'a']--;
//         freq[s1[i]-'a']++;
//     }
//     for(int i=0;i<26;i++){
//         if(freq[i]!=0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     string str1="cba";
//     string str="bac";
//     if(isanagram(str1,str)) cout<<"yes";
//     else cout<< "not";
//     return 0;
// }

//27.isomorphic mapping 
// #include<iostream>
// #include<vector>
// using namespace std;
// bool isomorphic(string s1,string s2){
//     vector<int> v1(128,-1);
//     vector<int> v2(128,-1);
//     if(s1.size()!=s2.size()) return false ;
//     for(int i=0;i<s1.size();i++){
//         if(v1[s1[i]]!=v2[s2[i]]) return false;
//         v1[s1[i]]=v2[s2[i]]=i;
//     }
//     return true;
// }
// int main(){
//     string str1="egg";
//     string str="add";
//     if(isomorphic(str1,str)) cout<<"yes";
//     else cout<< "not";
//     return 0;
// }

//28. remove occurence of a from string 
// #include<iostream>
// using namespace std;
// string f(string &s,int idx,int n){
//     if(idx==n) return " ";
//     string curr=" ";
//     curr+=s[idx];
//     return ((s[idx]=='a')?" ":curr)+f(s,idx+1,n);
// }
// int main(){
//     int n=5;
//     string s="abacx";
//     cout<<f(s,0,n);
//     return 0;
// }

//29.longest common prefix sum method 1
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// string prefix(vector<string> &str){
//     sort(str.begin(),str.end());
//     string s1=str[0];
//     int i=0;
//     string s2=str[str.size()-1];
//     int j=0;
//     string ans=" ";
//     while(i<s1.size()&&j<s2.size()){
//         if(s1[i]==s2[j]){
//             ans+=s1[i];
//             i++;
//             j++;
//         }
//         else break;
//     }
//     return ans;
// }
// int main(){
//     vector<string> str{"flower","fleur","fly"};
//     cout<<prefix(str)<<endl;
//     return 0;
// }

//30. method2 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// string prefix(vector<string> &str){
//     string s1=str[0];
//     int anslength=s1.size();
//     for(int i=1;i<str.size();i++){
//         int j=0;
//         while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]) {
//             j++;}
//             anslength=min(anslength,j);
//     }
//     string ans=s1.substr(0,anslength);
//     return ans;
// }
// int main(){
//     vector<string> str{"flower","fleur","fly"};
//     cout<<prefix(str);
//     return 0;
// }

//31.kmp algo
// #include<iostream>
// #include<vector>
// using namespace std;
//     int lps(string s) {
//         int n = s.length();
//         vector<int> lps(n, 0);
//         int len = 0;
//         int i = 1;
//         while (i < n) {
//             if (s[i] == s[len]) {
//                 len++;
//                 lps[i] = len;
//                 i++;
//             }
//             else {
//                 if (len != 0) {
//                     len = lps[len - 1];
//                 }
//                 else {
//                     lps[i] = 0;
//                     i++;
//                 }
//             }
//         }
//         return lps[n - 1];
//     }
// int main(){
//     string s="abab";
//     cout << "Length of Longest Prefix which is also Suffix: " << lps(s);
//     return 0;
// }

//32. subarray palindromic concate
// #include<iostream>
// #include<string>
// #include<vector>
// #include<math.h>
// using namespace std;
// bool ispalindrome(int n){
//     int temp=n,number=0;
//     while(temp>0){
//         number=number*10+temp%10;
//         temp=temp/10;
//     }
//     if(number==n) return true;
//     return false;
// }
// int findpalindrome(vector<int> arr,int k){
//     int num=0;
//     for(int i=0;i<k;i++){
//         num=num*10+arr[i];
//     }
//     if(ispalindrome(num)) return 0;
//     for(int j=k;j<arr.size();j++){
//         num=(num%(int)pow(10,k-1))*10 +arr[j];
//         if(ispalindrome(num)){
//             return j-k+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr{2,3,5,1,1,5};
//     int k=4;
//     int ans=findpalindrome(arr,k);
//     if(ans==-1) cout<<"not exist";
//     else {
//         for(int i=ans;i<ans+k;i++){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//33.check string rotated by 2 places 
// #include <iostream>
// using namespace std;
// bool isRotated(string s1, string s2) {
//     if (s1.length() != s2.length())
//         return false;
//     int n = s1.length();
//     if (n <= 2)
//         return s1 == s2;
//     string left = s1.substr(2) + s1.substr(0, 2);
//     string right = s1.substr(n - 2) + s1.substr(0, n - 2);
//     return (left == s2 || right == s2);
// }
// int main() {
//     string s1 = "amazon";
//     string s2 = "azonam";
//     cout << isRotated(s1, s2);
//     return 0;
// }

//34.smallest distinct window
// #include <iostream>
// #include <unordered_map>
// #include <unordered_set>
// using namespace std;
// int smallestWindow(string str) {
//     unordered_set<char> st;
//     for(char ch : str)
//         st.insert(ch);
//     int distinct = st.size();
//     unordered_map<char, int> mp;
//     int i = 0;
//     int ans = str.length();
//     for(int j = 0; j < str.length(); j++) {
//         mp[str[j]]++;
//         while(mp.size() == distinct) {
//             ans = min(ans, j - i + 1);
//             mp[str[i]]--;
//             if(mp[str[i]] == 0)
//                 mp.erase(str[i]);
//             i++;
//         }
//     }
//     return ans;
// }
// int main() {
//    string str="abccbacbd";
//     cout << smallestWindow(str);
//     return 0;
// }

//35.factorial of a large number
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<int> factorial(int n) {
//     vector<int> ans;
//     ans.push_back(1);
//     for (int i = 2; i <= n; i++) {
//         int carry = 0;
//         for (int j = 0; j < ans.size(); j++) {
//             int product = ans[j] * i + carry;
//             ans[j] = product % 10;
//             carry = product / 10;
//         }
//         while (carry) {
//             ans.push_back(carry % 10);
//             carry /= 10;
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int main() {
//     int n=8;
//     vector<int> result = factorial(n);
//     for (int digit : result) {
//         cout << digit;
//     }
//     cout << endl;
//     return 0;
// }

//36.substring che to added in front to make palindome
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int minChar(string &s) {
//     string rev = s;
//     reverse(rev.begin(), rev.end());
//     string temp = s + "$" + rev;
//     int n = temp.size();
//     vector<int> lps(n, 0);
//     int len = 0;
//     for (int i = 1; i < n;) {
//         if (temp[i] == temp[len]) {
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else {
//             if (len != 0)
//                 len = lps[len - 1];
//             else {
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
//     return s.length() - lps[n - 1];
// }
// int main() {
//     string s="AACECAAA";
//     cout<< minChar(s);
//     return 0;
// }

//37.circular string matching
// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
//     vector<int> buildLPS(string pat) {
//         vector<int> lps(pat.size(), 0);
//         int len = 0;
//         for (int i = 1; i < pat.size();) {
//             if (pat[i] == pat[len]) {
//                 lps[i++] = ++len;
//             }
//             else {
//                 if (len != 0)
//                     len = lps[len - 1];
//                 else
//                     lps[i++] = 0;
//             }
//         }
//         return lps;
//     }
//     bool KMP(string txt, string pat) {
//         vector<int> lps = buildLPS(pat);
//         int i = 0, j = 0;
//         while (i < txt.size()) {
//             if (txt[i] == pat[j]) {
//                 i++;
//                 j++;
//             }
//             if (j == pat.size())
//                 return true;
//             else if (i < txt.size() && txt[i] != pat[j]) {
//                 if (j != 0)
//                     j = lps[j - 1];
//                 else
//                     i++;
//             }
//         }
//         return false;
//     }
//     bool rotateString(string s, string goal) {
//         if (s.size() != goal.size())
//             return false;
//         return KMP(s + s, goal);
//     }
// int main(){
//     string s="abcde";
//     string goal="cdeab";
//     if (rotateString(s, goal))
//     cout << "True";
// else
//     cout << "False";
//     return 0;
// }

//6 16 24 26 27 
#include<iostream>
#include<vector>
using namespace std;
bool issafe(int row, int col, vector<string>&board,int n){
      for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q')
            return false;
    }
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q')
            return false;
    }
    return true;
}
void solve(int row,int n, vector<string>& board, vector<vector<string>>&ans){
    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int col=0;col<n;col++){
        if(issafe(row,col,board, n)){
            board[row][col]='Q';
            solve(row+1,n,board,ans);
            board[row][col]='.';
        }
    }
 }
vector<vector<string>> solveNQueens(int n){
    vector<vector<string>> ans;
    vector<string> board(n,string(n,'.'));
    solve(0,n,board,ans);
    return ans;
}
  int main() {
    int n = 4;
    vector<vector<string>> ans = solveNQueens(n);
    for (auto &board : ans) {
        for (auto &row : board)
            cout << row << endl;
        cout << endl;
    }
    return 0;
}