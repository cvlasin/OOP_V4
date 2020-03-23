#pragma once
template <class T>

T summe(T v[], int start, int end, int value = 0)
{
	T add = 0;
	for (int i = start; i <= end; i++)
		add = add + v[i];

	return add + value;
}