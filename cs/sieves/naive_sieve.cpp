const int N = 1000000;
/* the const keyword is prefixed
 * to variables whose values do not change
 * during the execution of the program
 */

bool is_prime[N + 1];
is_prime[0] = false;
is_prime[1] = false;
for (int m = 2; m <= N; ++m) {
	is_prime[i] = true;
}
/* We initially assume that every natural number other
 * than 1 is prime,
 */

for (long long m = 2; m <= N; ++m) {
	if (is_prime[m]) {
		cout << m << '\n';
	}
	for (long long j = 2 * m; j <= N; j += m) {
		is_prime[j] = false;
		/* j is of the form k * m, where k > 2
		 * so now we know for sure that j is
		 * not a prime number
		 */
	}
}
