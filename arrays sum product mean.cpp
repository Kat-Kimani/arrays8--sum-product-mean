//Compute the Sum, Product and Mean of elements in array

#include<iostream>
using namespace std;
int main() {

	int nums[10] = {10,20,30,40,50,60,70,80,90,100 };
	int sum = 0;
	int product = 1;
	int mean = sum / 10;

	for (int i = 0; i < 10; i++) {

		sum = sum + nums[i];
		product = product * nums[i];
		mean = sum / 10;
	}

	cout << "The Sum of Array Elements is:  " << sum << endl;
	cout << "The Product of Array Elements is:  " << product << endl;
	cout << "The Mean of Array Elements is:  " << sum / 10 << endl;
	return 0;
}
