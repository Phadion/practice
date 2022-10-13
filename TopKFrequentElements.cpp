#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k)
{
 vector<int> returnVector;
 unordered_map<int,int> map;
 for (int num:nums)
 {
  map[num]++;
 }

 for (auto it=map.begin();it!=map.end();it++)
 {
  cout << it->first << ":" << it->second << endl;
 }
 cout << endl;


 priority_queue<pair<int,int>> pq;
 for (auto it=map.begin();it!=map.end();it++)
 {
  //push pair into priority queue
  pq.push(make_pair(it->second,it->first));
  /*
  if (pq.size()>(int)map.size()-k)
  {
   returnVector.push_back(pq.top().second);
   pq.pop();
  }
  */
 }

 for (size_t i=0;i<k;i++)
 {
  returnVector.push_back(pq.top().second);
  pq.pop();
 }

 return returnVector;
}

int main()
{
 vector<int> nums={1,1,1,2,2,3};
 int k=2;

 vector<int> result=topKFrequent(nums,k);

 for (int i: result)
 {
  cout << i << ",";
 }
 cout << endl;

 return 0;
}