#include <iostream>
using namespace std;
class Solution {
public:
	bool isPalindrome(int x){
		if(x<0 || (x%10 == 0 && x!=0)){
			return false;
		}
		int revertNums = 0;
		while (x > revertNums){
			revertNums = revertNums *10 + x%10;
			x/=10;
		}
	return x == revertNums || x == revertNums /10;
	}
};

int main(){
	Solution solution;
	cout <<solution.isPalindrome(121)<<endl;
	return 0;
}