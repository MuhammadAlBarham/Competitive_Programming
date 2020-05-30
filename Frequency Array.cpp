// Frequency Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
// vector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<string.h>
using namespace std;

int freq[26];

int main() {
	// your code goes here
	int n;
	cin >> n;
	char f[100005];
	for (int i = 0;i < n;i++) {
		cin >> f[i];
	}

	for (int i = 0; i < strlen(f);i++) {
		freq[f[i] - 97]++;
	}

	bool check = true;
	for (int i = 0; i < strlen(f);i++) {
		if (freq[i] >= 2) check = false;
	}

	if (!check) printf("Yes");
	else printf("No");




	return 0;
}
