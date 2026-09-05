//1.find common elements in two vector nd return sum 
// #include<iostream>
// #include<set>
// #include<vector>
// using namespace std;
// int main(){
//     int n=3,m=4;
//     vector<int> v1{1,2,3};
//     vector<int> v2{1,3,4,2};
//     int anssum=0;
//     set<int> s1;
//     for(auto ele:v1){
//         s1.insert(ele);
//     }
//     for(auto ele:v2){
//         if(s1.find(ele)!=s1.end()){
//             anssum+=ele;
//         } 
//     }
//     cout<<anssum<<" ";
//     return 0;
// }

//2.check alphabetes are english
// #include<iostream>
// #include<set>
// #include<vector>
// #include<algorithm>
// using namespace std;
// bool checkalpha(string s){
//     if(s.length()<26){
//         return false;
//     }
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     set<char> alphabets;
//     for(auto ch:s){
//         alphabets.insert(ch);
//     }
//     return(alphabets.size()==26);
// }
// int main(){
//     string ch="abcdefg$";
//     if(checkalpha(ch)){
//         cout<<"yes";
//     }
//     else cout<<"no";
//     return 0;
// }

//3.print second smallest integer
// #include<iostream>
// #include<set>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v1{1,2,3};
//     set<int> s1;
//     for(auto ele:v1){
//         s1.insert(ele);
//     }
//     auto itr=s1.begin();
//     itr++;
//     cout<<"secondsmallest"<<*itr;
//     return 0;
// }

//4.ques n=2,p=1,q=-1 combination a student cna score marks
// #include<iostream>
// #include<unordered_set>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n=2,p=1,q=-1;
//     unordered_set<int> s;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             int corr=i;
//             int incorr=j;
//             int unattended=n-i-j;
//             if(unattended>=0){
//                 int score=corr*p+incorr*q;
//                 s.insert(score);
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     for(auto score:s) cout<<score<<" "<<endl;
//     cout<<s.size()<<endl;
//     return 0;
// }

//5.hashmap
// #include<iostream>
// #include<vector>
// #include<list>
// #include<algorithm>
// using namespace std;
// class hashing{
//     vector<list<int>> hashtable;
//     int buckets;
// public:
//     hashing(int size){
//         buckets=size;
//         hashtable.resize(size);
//     }
//     int hashvalue(int key){
//         return key%buckets;
//     }
//     void add(int key){
//         int idx=hashvalue(key);
//         hashtable[idx].push_back(key);
//     }
//     list<int> :: iterator search(int key){
//         int idx=hashvalue(key);
//         return find(hashtable[idx].begin(),hashtable[idx].end(),key);
//     }
//     void deletekey(int key){
//         int idx=hashvalue(key);
//         if(search(key)!=hashtable[idx].end()){
//         hashtable[idx].erase(search(key));
//         cout<<key<<"deleted";
//         }
//         else{
//             cout<<"key is not present inside the hash table";
//         }
//     }
// };
// int main(){
//     hashing h(10);
//     h.add(5);
//     h.add(9);
//     h.add(3);
//   6  h.deletekey(3);
//     return 0;
// }

//6. sum of repetitive elements 
// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;
// int main(){
//     vector<int> input{1,2,2,3,4,4,4,5};
//     map<int,int> m;
//     for(int i=0;i<input.size();i++){
//         m[input[i]]++;
//     }
//     int sum=0;
//     for(auto ele:m){
//         if(ele.second>1){
//             sum+=ele.first;
//         }
//     }
//     cout<<sum;
//     return 0;
// }

//7.can we make a string equal  by moving string
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// bool canmakeequal(vector<string> &v){
//     unordered_map<char,char> m;
//     for(auto str:v){
//         for(char c:str){
//             m[c]++;
//         }
//     }
//     int n=v.size();
//     for(auto ele:m){
//         if(ele.second%n!=0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     vector<string> input{"collegeee","coll","collegge"};
//     cout<<(canmakeequal(input)?"yes":"no")<< endl;
//     return 0;
// }

//8.same chr and no order different 
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// bool checkanagram(string s1, string s2){
//     unordered_map<char,int> m;
//     if(s1.length()!=s2.length()) return false;
//         for(char c1:s1){
//             m[c1]++;
//         }
//         for(char c2:s2){
//            if(m.find(c2)==m.end()){
//             return false;
//            }
//            else{
//             m[c2]--;
//            }
//         }
//     for(auto ele:m){
//         if(ele.second!=0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     string s1="triangle",s2="integral";
//     cout<<(checkanagram(s1,s2)?"yes":"no")<< endl;
//     return 0;
// }

//9.isomorphic
// #include<iostream>
// #include<vector>
// #include<string>
// #include<unordered_map>
// using namespace std;
// bool checkmapping( string s1, string s2){
//     unordered_map<char,char> m;
//     for(int i=0;i<s1.length();i++){
//             if(m.find(s1[i])!=m.end()){
//                 if(m[s1[i]]!=s2[i]){
//                     return false;
//                 }
//                 else {
//                     m[s1[i]]=s2[i];
//                 }
//             }
//         }
//         return true;
// }
// bool checkisomorphic(string s1, string s2){
//     if(s1.length()!=s2.length()) return false;
//     bool s1s2=checkmapping(s1,s2);
//     bool s2s1=checkmapping(s2,s1);
//     return s1s2 && s2s1;
// }
// int main(){
//     string s1="triangle",s2="integral";
//     cout<<(checkisomorphic(s1,s2)?"yes":"no")<< endl;
//     return 0;
// }

//10.target sum using mapping 
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// vector<int> targetsumpair(vector<int>&v,int targetsum){
//     unordered_map<int,int> m;
//     vector<int> ans(2,-1);
//     for(int i=0;i<v.size();i++){
//         if(m.find(targetsum-v[i])!=m.end()){
//             ans[0]=m[targetsum-v[i]];
//             ans[1]=i;
//         }
//         else{
//             m[v[i]]=i;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> input{1,2,2,3,4,4,4,5};
//     int targetsum=7;
//     vector<int> ans=targetsumpair(input,targetsum);
//     cout<<ans[0]<<","<<ans[1]<<endl;
//     return 0;
// }

//11. longest subarray sum equal to 0
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int targetsumpair(vector<int>&v){
//     unordered_map<int,int> m;
//     int prefixsum=0,maxlen=INT_MIN;
//     for(int i=0;i<v.size();i++){
//         prefixsum+=v[i];
//         if(prefixsum==0){
//             maxlen++;
//         }
//         if(m.find(prefixsum)!=m.end()){
//             maxlen=max(maxlen,i-m[prefixsum]);
//         }
//         else{
//             m[prefixsum]=i;
//         }o
//     }
//     return maxlen;
// }
// int main(){
//     vector<int> input{1,5,2,-5,-2,4,4,5};
//     int ans=targetsumpair(input);
//     cout<<ans;
//     return 0;
// }

//12. topk most frequent elemt 
// #include <bits/stdc++.h>
// using namespace std;
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> topKFrequent(vector<int>& nums, int k) {
//     unordered_map<int, int> freq;
//     for (int num : nums) {
//         freq[num]++;
//     }
//     vector<vector<int>> buckets(nums.size() + 1);
//     for (auto& it : freq) {
//         buckets[it.second].push_back(it.first);
//     }
//     vector<int> result;
//     for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
//         for (int num : buckets[i]) {
//             result.push_back(num);
//             if (result.size() == k) break;
//         }
//     }
//     return result;
// }
// int main() {
//     int n=6,k=2;
//     vector<int> nums{1,2,2,2,3,1};
//     vector<int> ans = topKFrequent(nums, k);
//     for (int x : ans) {
//         cout << x << " ";
//     }
//     return 0;
// }

//13. number of subarray with sum zero
// #include <bits/stdc++.h>
// using namespace std;
// int countZeroSumSubarrays(vector<int>& arr) {
//     unordered_map<int, int> mp; // prefixSum -> frequency
//     int prefixSum = 0;
//     int count = 0;
//     mp[0] = 1; // important: handles subarrays starting from index 0
//     for (int x : arr) {
//         prefixSum += x;
//         if (mp.find(prefixSum) != mp.end()) {
//             count += mp[prefixSum];
//         }
//         mp[prefixSum]++;
//     }
//     return count;
// }
// int main() {
//     vector<int> arr = {1, -1, 2, -2, 3, -3};
//     cout << "Number of subarrays with sum 0 = "
//          << countZeroSumSubarrays(arr);
//     return 0;
// }

//14. freq count
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> arr = {1, 2, 2, 3, 1, 4, 2};
//     unordered_map<int, int> freq;
//     for (int x : arr) {
//         freq[x]++;   // increment count
//     }
//     // print frequencies
//     for (auto &p : freq) {
//         cout << p.first << " -> " << p.second << endl;
//     }
//     return 0;
// }