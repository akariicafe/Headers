@interface PLTimeSpanClustering : PLDataClustering

@property (nonatomic) unsigned long long averageNumberOfObjects;
@property (nonatomic) double minimumSpan;

- (id)init;
- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)a0 inDataset:(id)a1;

@end
