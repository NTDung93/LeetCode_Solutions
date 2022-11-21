//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> result(2);
//        unordered_map<int, int> map;
//        
//        if(nums.size() <= 1) return result;
//        
//        for(int i=0; i<nums.size(); i++){
//            if(map.find(target - nums[i]) != map.end()){
//            	// != means that (target - nums[i]) matches a key value before the map ends.
//            	// == means that (target - nums[i]) do not match any keys, and let the map ends.
//                result[0] = i;
//                result[1] = map[target - nums[i]];
//            }else{
//                map[nums[i]] = i;
//            }
//        }
//        
//        return result;
//    }
//};



#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include <unordered_map> 

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
	vector<int> result(2);
	unordered_map<int, int> map;
	
	if(nums.size()<2) return result;
	
	for(int i=0; i<nums.size(); i++){
		if(map.find(target - nums[i]) != map.end()){
			result[1] = i;
			result[0] = map[target - nums[i]];
		}else{
			map[nums[i]] = i;
		}
	}
	return result;
}


int main(){
	int n;
	cout<<"Enter the size of vector: ";
	cin>>n;
	cout<<"Enter "<<n<<" elements of vector: ";
	vector<int> nums;
	for(int i=0; i<n; i++){
		int x; 
		cin>>x;
		nums.push_back(x);
	}
	
	int target;
	cout<<"Enter the target number: ";
	cin>>target;
	
//	for(int a : nums){
//		cout<<a<<" ";
//	}

//	Another way to display the elements of vector
 
//	for(int i=0; i<nums.size(); i++){
//		cout<<nums[i];
//		if(i == nums.size()-1) break;
//		cout<<", ";
//	}
	
	vector<int> finalResult = twoSum(nums, target);
	for(int x : finalResult){
		cout<<x<<" ";
	}
	return 0;
}


































