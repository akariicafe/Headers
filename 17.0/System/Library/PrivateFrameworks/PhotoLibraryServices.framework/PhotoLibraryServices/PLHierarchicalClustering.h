@interface PLHierarchicalClustering : PLDataClustering

@property (nonatomic) double threshold;
@property (nonatomic) unsigned long long k;
@property (nonatomic) unsigned long long linkage;
@property (nonatomic) BOOL usesSortedDataRelativeDistanceCache;
@property (nonatomic) BOOL reportsProgressInDistancesMatrixCalculation;

- (id)init;
- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (unsigned long long)_clustroidIndexForClusters:(unsigned long long *)a0 numberOfObjects:(unsigned long long)a1 distances:(double **)a2 relativeDistanceCache:(double *)a3;
- (double *)_createRelativeDistanceCacheForDataset:(id)a0;

@end
