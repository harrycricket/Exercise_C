//display prime divisors only once

void integer_n(int n) {
	
	int i = 2;
	int p = 1;
	
	while (n > 1) {
		if (n % i == 0) {
			if (p != i)
			{
				printf("%d, ", i);
				p = i;
			}
			n /= i;
		} else {
			i++;
		}
	}
} 

int main () {
	integer_n(300);
	return 0;
}
