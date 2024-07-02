#include<iostream>
#include<unordered_map>
using namespace std;
void countCharacters(unordered_map<char,int>&m,string str){
  for(int i=0;i<str.length();i++){
    char ch = str[i];
    m[ch]++;
  }
}
int main()
{
  string str = "MadhurSolanki";
  unordered_map<char,int>m;
  countCharacters(m,str);

  for(auto i: m){
    cout<<i.first<<" -> "<<i.second<<endl; 
  }
}