/*
Consider an array/list of sheep where some sheep may be missing from their place.
We need a function that counts the number of sheep present in the array (true means present).
*/

#include<iostream>
#include <vector>

using namespace std;

int count_sheep(vector<bool> &arr)
{
	int chislo{0};
	for (int i{ 0 }; i < arr.size(); ++i)
	{
		if (arr[i] == true)
			++chislo;
	}
	return chislo;
}



int main()
{
	std::vector<bool> arr{ true, true, true, false,
		true, true, true, true,
		true, false, true, false,
		true, false, false, true,
		true, true, true, true,
		false, false, true, true };
	std::cout<<count_sheep(arr);
}