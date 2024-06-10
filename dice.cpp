//1 - programa  pergunta qual tipo de dado vc quer (d6, d8, d10, d12, d18, d18)
//2 - programa pergunta quantos dados vc quer jogar
//3 - programa mostra o resultado dos dados
//4 - programa pergunta se que ir de novo -> se sim repete passo 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int type;
	unsigned seed = time(0);

	srand(seed);

	cin >> type;
	if (type == 12) {
		cout << 1 + rand() % 12 << endl;
	}
}