#include "sort.hpp"

void swap_int(int* a, int* b) {
	int temp = &b;
	&b = &a;
	&a = temp;
}

void bubble_sort_int(vector<int>* vec_p) {
	vector<int> vec = &vec_p;

	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (vec[i] > vec[j]) {swap_int(vec[i], vec[j]);}
		}
	}
}