#include "MA.h"

int main(int argc, char **argv){
	int N = 1;
	double pc = 0.9;
	double pm = 0.01;
	double finalTime = 25 * 60;
	unsigned long l = 1;
//      l = time(NULL);
	srand(l);

	string file = "Instances/public/family_data.csv";

	SantaWorkshop SW(file);
	//MA ma(N, pc, pm, finalTime, TTP);
	//ma.run();
	//
	  Individual indiv(SW);
          indiv.iterated_local_search();
	  //SW.load_example("Instances/public/submission_672254.0276683343.csv", indiv.x_var);
	  double p = indiv.calculateFitness(indiv.x_var);
	  printf("%lf", p);
  	  cout << p << endl;
//  	  indiv.iterated_local_search();
//	  p = indiv.calculateFitness(indiv.x_var);
       

	  return 0;
}
