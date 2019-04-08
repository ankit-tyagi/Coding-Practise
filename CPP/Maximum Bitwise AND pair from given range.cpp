#include <bits/stdc++.h> 
using namespace std; 
/*
int maxAND(int L, int R) 
{ 
	int maximum = L & R; 

	for (int i = L; i < R; i++) 
		for (int j = i + 1; j <= R; j++) 
			maximum = max(maximum, (i & j)); 

	return maximum; 
} */

int maxAND(int L, int R) 
{ 
 
	if (L == R) 
		return L; 
	else if ((R - L) == 1) 
		return (R & L); 
	else { 
		if (((R - 1) & R) > ((R - 2) & (R - 1))) 
			return ((R - 1) & R); 
		else
			return ((R - 2) & (R - 1)); 
	} 
} 


int main() 
{ 
	int L = 1, R = 512; 
	cout << maxAND(L, R); 

	return 0; 
} 
