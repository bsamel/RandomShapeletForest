#include "Split.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct RandomTree *RandomTree;

RandomTree createRandomTree(TimeSerieArray time_serie_samples, int l, int u, int r);

Shapelet sampleShapelet(TimeSerieArray time_serie_samples, int l, int u);

Split bestSplit(TimeSerieArray time_serie_samples, TimeSerieArray shapelet_candidates);

void distribute(Split split, TimeSerieArray left, TimeSerieArray right, DistanceMap distance_map); 
 
int randomUniformIndex(int min, int max);

int mostProbableLabel(TimeSerieArray array);

int maxInt(int *array, int size);

double gain(DistanceMap distance_map, int split_index);
double gap(DistanceMap distance_map, int split_index);
double entropy(double *label_counter, int size);

double *findBestThreshold(DistanceMap distance_map);