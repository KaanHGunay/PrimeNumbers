#include "Functions.h"

inline bool is_prime(int number, Node* primenumbers) {
	int control = sqrt(number) + 1;
	Node* ctr = primenumbers;

	while (ctr->x < control) {
		if (number % ctr->x != 0) {
			ctr = ctr->next;
		}
		else {
			return false;
		}
	}
	
	return true;
}

int find_prime_at(int number) {
	if (number == 1) return 2;

	LinkedList * ll = new LinkedList(3);
	int start_point = 5, found_primes = 2;

	while (found_primes != number) {
		if (is_prime(start_point, ll->firstNode)) {
			if (ll->lastNode->x < number) {
				ll->add(start_point);
			}
			found_primes++;
		}
		start_point += 2;
	}

	ll->~LinkedList();
	start_point -= 2;

	return start_point;
}

int find_max_prime_up_to(int number) {
	if (number == 3) return 2;
	int control = sqrt(number) + 1;
	int result;

	LinkedList * ll = new LinkedList(3);
	int start_point = 3;

	while (start_point < number) {
		if (is_prime(start_point, ll->firstNode)) {
			result = start_point;
			if (ll->lastNode->x < control) {
				ll->add(start_point);
			};
		}
		start_point += 2;
	}

	ll ->~LinkedList();
	return result;
}

inline bool is_prime_until_nullptr(int number, Node* primenumbers) {
	int control = sqrt(number) + 1;
	Node* ctr = primenumbers;

	while (ctr->next != nullptr) {
		if (number % ctr->x != 0) {
			ctr = ctr->next;
		}
		else {
			return false;
		}
	}
	return true;
}

int find_primes(int number) {
	if (number == 1) return 2;

	LinkedList * ll = new LinkedList(3);
	int start_point = 5, found_primes = 2, control_number;

	while (found_primes != number) {

		control_number = sqrt(start_point) + 1;

		if (ll->lastNode->x < control_number) {
			ll->next_prime();
		}

		if (is_prime_until_nullptr(start_point, ll->firstNode)) {
			found_primes++;
		}
		start_point += 2;
	}

	ll->~LinkedList();
	start_point -= 2;

	return start_point;
}

int find_max_prime_up_to_with_time(int number) {
	if (number == 3) return 2;
	int control = sqrt(number) + 1;
	int result;

	clock_t start;
	double duration;
	LinkedList * ll = new LinkedList(3);
	int start_point = 3;
	int million = 1;

	while (start_point < number) {
		start = clock();
		if (is_prime(start_point, ll->firstNode)) {
			duration = clock() - start;
			result = start_point;

			if (result > (1000000 * million)) {
				std::cout << "Asal Sayi => " << result << "\t" << duration << " miliseconds" << std::endl;
				million++;
			}

			if (ll->lastNode->x < control) {
				ll->add(start_point);
			}
		}
		start_point += 2;
	}

	ll ->~LinkedList();
	return result;
}

int asal_bul(int number) {
	if (number == 3) return 2;

	LinkedList* ll = new LinkedList(3);	
	int control_number = ll->lastNode->x * ll->lastNode->x, result = ll->lastNode->x, minus_number = 2;

	while (control_number < number) {
		if (is_prime_until_nullptr(control_number, ll->firstNode)) {
			ll->next_prime();
			result = control_number;
			control_number = (ll->lastNode->x * ll->lastNode->x) - minus_number;
		}
		else {
			control_number -= minus_number;
		}
	}
	std::cout << ll->lastNode->x << std::endl;
	return result;
}