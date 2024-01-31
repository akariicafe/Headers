@interface PLKMeansClustering : PLDataClustering

@property (nonatomic) unsigned long long k;

- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (double *)_dataArray:(id)a0 featureCount:(unsigned int)a1 useKeypaths:(BOOL)a2;
- (id)_performWithDataset:(id)a0 numericData:(id)a1 progressBlock:(id /* block */)a2;
- (id)performWithDataset:(id)a0 numericData:(id)a1 progressBlock:(id /* block */)a2;

@end
