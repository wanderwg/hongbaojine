#include<iostream>
#include<vector>
using namespace std;
int getValue(vector<int> gifts, int n) {
	int minvalue = gifts[0];
	int maxvalue = gifts[0];
	for (int i = 0; i < n; ++i)
	{
		if (gifts[i] < minvalue)
			minvalue = gifts[i];
		if (gifts[i] > maxvalue)
			maxvalue = gifts[i];
	}
	int range = maxvalue - minvalue + 1;
	vector<int> pCount;
	pCount.resize(range);
	for (int i = 0; i < n; ++i)
	{
		pCount[gifts[i] - minvalue]++;
	}
	int index = 0;
	for (int i = 0; i < range; ++i)
	{
		if (pCount[i] > (n / 2))
		{
			int ret = i + minvalue;
			cout << ret << endl;
		}
	}
	return 0;
}
int main()
{
	vector<int>gifts{ 1,2,3,2,2,2 };
	int ret = getValue(gifts, gifts.size());
	cout << ret << endl;
	return 0;
}