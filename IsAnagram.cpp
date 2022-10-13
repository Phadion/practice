#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//probably can use map as well
bool isAnagram(string s,string t)
{
 string s1(s);
 string s2(t);

 sort(s1.begin(),s1.end());
 sort(s2.begin(),s2.end());

 return(s1.compare(s2)==0);

}

int main ()
{
 string s1("abc");
 string s2("def");
 if (isAnagram(s1,s2))
  cout<<"it's an anagram"<<endl;
 else
  cout<<"it's not an anagram"<<endl;

 return 0;
}