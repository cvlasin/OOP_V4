#pragma once
#include <vector>
#include <algorithm>
using namespace std;

template <class Lambda>

Lambda summe(Lambda v[], int start, int end, Lambda value = 0)
{
	vector <Lambda> v_local;
	for (int i = start; i <= end; i++)
		v_local.push_back(v[i]);

	for_each(v_local.begin(), v_local.end(), [&value](Lambda X) {value += X; });

	return value;
}