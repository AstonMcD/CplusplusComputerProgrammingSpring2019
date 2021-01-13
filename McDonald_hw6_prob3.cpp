#include <iostream>
#include <cmath>
using namespace std;
 
 int countRabbit(int nRabbits, int nYears) {
    double population = double(nRabbits);

    for (int i = 1; i <= nYears; i++) {

	population = (population*0.95)+5;

    }

nRabbits = floor(population);
return nRabbits;

}

int main () {
	int RabbitPopulation = countRabbit(15, 50);
cout << "There are " << RabbitPopulation << " rabbits after 50 years." << endl;

return 0;
}
