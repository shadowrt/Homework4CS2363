// john goulden
// occc spring 2019
// c++
// recursion demos

#include <iostream>
#include <ctime>
using namespace std;

unsigned __int64 fac_loop(int n) {
	unsigned __int64 result = 1;

	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
	}

	return result;
}

unsigned __int64 fac_rec(int n) {
	unsigned __int64 result = 1;
	if (n > 0) {
		result = n * fac_rec(n - 1);
	}
	return result;
}

unsigned __int64 fib_loop(int n) {
	unsigned __int64 result = 1;

	if (n >= 3) {
		unsigned __int64 a = 1;
		unsigned __int64 b = 1;
		for (int i = 3; i <= n; i++) {
			result = a + b;
			a = b;
			b = result;
		}
	}

	return result;
}

unsigned __int64 fib_rec(int n) {
	unsigned __int64 result = 1;
	if (n > 2) {
		result = fib_rec(n - 1) + fib_rec(n - 2);
	}
	return result;
}

void doTest(int number) {
	clock_t start, stop;
	start = clock();
	cout << "fib loop(" << number << ") = " << fib_loop(number) << "  ";
	stop = clock();
	double elapsedTime = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Time required: about " << elapsedTime << " seconds" << endl;
}

void doRec(int number) {
	clock_t start, stop;
	start = clock();
	cout << "fib rec(" << number << ") = " << fib_rec(number) << "  ";
	stop = clock();
	double elapsedTime = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Time required: about " << elapsedTime << " seconds" << endl;
}
 
int main() {

	int n;
	//cout << "Please enter an integer: ";
	//cin >> n;

	//doTest (n);
	
	doTest(10);
	doTest(50);
	doTest(90);

	doRec(30);
	for (int count = 35; count <= 50; count++) {
		doRec(count);
	}
	



	/*
	clock_t start, stop;
	start = clock(); 
	cout << "fib loop(" << n << ") = " << fib_loop(n) << "  ";
	stop = clock();
	double elapsedTime = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Time required: about " << elapsedTime << " seconds" << endl;
	*/

	//clock_t start, stop;

	/*
	start = clock();
	cout << "fib rec(" << n << ") = " << fib_rec(n) << "  ";
	stop = clock();
	elapsedTime =(double) (stop - start) / CLOCKS_PER_SEC;
	cout << "Time required: about " << elapsedTime << " seconds" << endl;
	*/

	return 0;
}