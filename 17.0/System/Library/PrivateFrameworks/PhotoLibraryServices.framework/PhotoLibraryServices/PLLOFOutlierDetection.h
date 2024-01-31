@interface PLLOFOutlierDetection : NSObject

@property (nonatomic) unsigned long long k;
@property (nonatomic) BOOL filterZeroDistanceDataset;

- (id)init;
- (void)freeDistancesMatrix:(double **)a0 forDataset:(id)a1;
- (double **)createDistancesMatrixForDataset:(id)a0 distanceBlock:(id /* block */)a1;
- (id)createKNNMatrixWithDistanceMatrix:(double **)a0 size:(unsigned long long)a1;
- (id)filteredObjectsWithDataset:(id)a0 distanceBlock:(id /* block */)a1;
- (id)lofScoresWithDataset:(id)a0 distanceBlock:(id /* block */)a1;

@end
