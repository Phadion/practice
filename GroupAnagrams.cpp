#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<string>> groupAnaGrams(vector<string>& strs)
{
 vector<vector<string>> returnVector;
 unordered_map<string,vector<string>> m;

 for (size_t i=0;i<strs.size();i++)
 {
  string s(strs[i]);
  sort(s.begin(),s.end());
  m[s].push_back(strs[i]);
 }

 unordered_map<string,vector<string>>::iterator next(m.begin());
 unordered_map<string,vector<string>>::iterator last(m.end());
 while (next!=last)
 {
  returnVector.push_back(next->second);
  ++next;
 }
 return returnVector;
}

int main ()
{
 vector <string> strs={"eat","tea","tan","ate","nat","bat"};
 vector <vector<string>> v = groupAnaGrams(strs);

 vector <vector<string>>::iterator next(v.begin());
 vector <vector<string>>::iterator last(v.end());
 while (next!=last)
 {
  for (string s : *next)
  {
   cout << s << " "; 
  }
  cout << endl;
  ++next;
 }


 return 0;
}