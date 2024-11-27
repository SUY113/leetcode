#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
	int romanToInt(string s){
		int sum = 0;
		int prevValue = 0;
		unordered_map<char, int> value = {
			{'I', 1}, {'V',5}, {'X',10}, {'L',50},
			{'C', 100}, {'D', 500}, {'M',1000}
		};
		for (char c:s){
		int curentValue = value[c];
		sum+= (curentValue > prevValue) ? (curentValue -2*prevValue) : curentValue;
		prevValue = curentValue;
		}
	return sum;

	}
};

int main()
{
	Solution solution;
	cout << solution.romanToInt("XII")<<endl;
	return 0;
}