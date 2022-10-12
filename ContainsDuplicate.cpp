#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums)
{
 if (nums.size()<=1)
  return false;
 else
 {
  map<int,int> int_map;
  for (size_t i=0;i<nums.size();i++)
  {
   if (int_map.find(nums[i])==int_map.end())
    int_map[nums[i]]=1;
   else
    return true;
  }
 }
 return false;
}

//can implement using std::set if size of set is not equal to size of nums then containis duplicate

int main()
{
 vector<int> v={1,2,3,4,1};
 if (containsDuplicate(v))
  cout<<"contains duplicate!"<<endl;
 else
  cout<<"does not contain duplicate!"<<endl;

 return 0;
}