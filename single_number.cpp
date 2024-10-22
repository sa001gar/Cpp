#include <iostream>
#include <vector>
using namespace std;
int singleNum(vector <int>&nums);
int main(void)
{
vector<int>nums={2,3,5,3,2};
cout<<"Single Number : "<<singleNum(nums)<<endl;

return 0;

}

int singleNum(vector <int> &nums)
{
	int result=0;

	for(int val:nums){
	result^=val;
	}

	return result;
}
