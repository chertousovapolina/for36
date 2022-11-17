// дз чертоусова for36
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, k, sum = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		sum += pow(i, k);
	}
	cout << sum;




}

