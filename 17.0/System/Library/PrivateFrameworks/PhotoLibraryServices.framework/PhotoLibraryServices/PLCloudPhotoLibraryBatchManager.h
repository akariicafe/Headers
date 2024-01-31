@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (id)init;
- (void)reset;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (long long)currentBatchCount;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (BOOL)isAboveMaximumResourceBudget;
- (id)drainBatches;

@end
