#include <iostream> 
#include <ctime>
#include <limits>
#include "Functions.h"

using namespace std;

int main() {
	
	clock_t start;
	double duration;
	int prime_number = numeric_limits<int>::max();

	start = clock();
	int sonuc = find_max_prime_up_to(prime_number);
	duration = clock() - start;

	cout << "Asal Sayi => " << sonuc << "\t" << duration << " miliseconds" << endl;

	return 0;
}
