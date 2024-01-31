@class NSProgress;

@interface PLOPTICSClustering : PLDataDensityClustering {
    NSProgress *_progress;
}

- (id)performWithDataset:(id)a0 progressBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)preprocessData:(id)a0;
- (id)extractRootClusters:(id)a0 inOriginalDataset:(id)a1 inProgressBlock:(id /* block */)a2;
- (id)extractSubClusters:(id)a0 inDataset:(id)a1 parentIndex:(long long)a2 inProgressBlock:(id /* block */)a3;
- (id)orderedDatasetByReachabilityDistance:(id)a0;
- (id)prepareOrderedDatasetIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inDataset:(id)a1;
- (void)updateNeighbors:(id)a0 forIndex:(unsigned long long)a1;
- (long long)updateReachibilityDistance:(id)a0 forIndex:(unsigned long long)a1;

@end
