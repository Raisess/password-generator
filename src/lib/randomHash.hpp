#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <caracs.hpp>

using namespace std;

char** randomHash(int len, bool symbolsBool, bool debug) {
	char* hash_[len];
	int   randomNumber;

	srand(time(NULL));

	if (debug) {
		cout << "debug: "   << debug       << "\n";
		cout << "symbols: " << symbolsBool << "\n";
		cout << "hash: ";
	}

	for (int i = 0; i < len; i++) {
		randomNumber = rand() % 26;

		if (!symbolsBool) {
			hash_[i] = caracs[randomNumber];
		} /*else {	
			char r = caracs[randomNumber] || numbers[randomNumber];
			hash_[i] = r || symbols[randomNumber];
		}*/

		if (debug) {
			cout << hash_[i];
		}
	}

	if (debug) {
		cout << "\n";
		cout << "p_hash: "  << hash_       << "\n";
	}

	return hash_;
}

