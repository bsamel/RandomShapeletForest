#include "RandomForest.h"
#include "RandomTree.h"
#include "TimeSerie.h"

struct RandomForest{
    RandomTree *trees;
    int size;
}; 

// D contains the time series from the datasets and the corresponding class labels
RandomForest createRandomForest(TimeSerieArray D, int t, int l, int u, int r){
	RandomForest random_forest = malloc(sizeof(*random_forest));
	random_forest->size = 0;
	random_forest->trees = malloc(sizeof(*random_forest->trees) * t);

	while(random_forest->size < t){
		TimeSerieArray time_serie_samples = sampleTimeSerie(D); //contains samples and associated class labels
		RandomTree random_tree = createRandomTree(time_serie_samples, l, u, r);
		addTree(random_forest, random_tree);
	}
	return random_forest;
}

TimeSerieArray sampleTimeSerie(TimeSerieArray D){

}

void addTree(RandomForest forest, RandomTree tree){
	random_forest->trees[random_forest->size++] = tree;
}

