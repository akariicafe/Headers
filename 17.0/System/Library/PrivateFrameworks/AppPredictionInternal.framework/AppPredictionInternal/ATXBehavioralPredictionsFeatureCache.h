@class _PASLock;

@interface ATXBehavioralPredictionsFeatureCache : NSObject {
    _PASLock *_lock;
}

- (void)addItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; })a0 forBundleId:(id)a1;
- (id)init;
- (struct ATXPredictionItem { id x0; unsigned long long x1; float x2[817]; float x3; BOOL x4; BOOL x5; })itemForBundleId:(id)a0;
- (void).cxx_destruct;
- (struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; } x2; })itemsForBundleIds:(id)a0;

@end
