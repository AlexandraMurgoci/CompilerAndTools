
struct inputWord {
	string word;
	int index;
	int generatedNumber;
};
int recurence(int seed)
{
	int m = (int)pow(2, 31) - 1;
	int a = 16807;
	long long int aux = (long long int)a * (long long int)seed;
	return aux % m;
}

int encrypt(int value)
{
	int N = 77;
	int e = 7;
	int aux = value;
	for (int i = 0; i < e - 1; ++i)
		aux = ((long int)aux * (long int)value) % N;
	return aux;
}