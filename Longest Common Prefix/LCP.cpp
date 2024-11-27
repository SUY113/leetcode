#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution{
public:
 void sortNums(){
	vector <string> numbers = {"flower","flow","flight"};
	sort(numbers.begin(), numbers.end());
	cout << "Sorted numbers: ";
	for (size_t i = 0; i <numbers.size(); i++){
		cout << numbers[i] << "";
	}
	cout << endl;
 }
 
 string longestCommonPrefix(vector<string>& strs) {
    string lcp = "";
	sort(strs.begin(), strs.end());
	string first_str = strs[0];
	string last_str = strs[strs.size()-1];
	for(int i =0; i < first_str.size(); i++){
		if(first_str[i] == last_str[i]){
			lcp += first_str[i];
		}else{
			break;
		}
	}
	return lcp;
 }
};



int main(){
	Solution solution;
	vector<string> strs = {"flower","flow","flight"};
    string lcp = solution.longestCommonPrefix(strs);
    cout << "Longest common prefix: " << lcp << endl;
	return 0;
}