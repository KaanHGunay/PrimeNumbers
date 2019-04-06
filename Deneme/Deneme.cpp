#include <iostream> 
#include <ctime>
#include <limits>
#include "Functions.h"

using namespace std;

int main() {
	
	clock_t start;
	double duration;
	int prime_number = 160000000;

	start = clock();
	int sonuc = asal_bul(prime_number);
	duration = clock() - start;

	cout << "Asal Sayi => " << sonuc << "\t" << duration << " miliseconds" << endl;

	return 0;
}
