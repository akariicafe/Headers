@class NSNumber;

@interface PLAdjustmentVirtualResource : PLVirtualResource

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (copy, nonatomic) NSNumber *cachedDataLength;

- (void).cxx_destruct;
- (long long)dataLength;
- (long long)estimatedDataLength;
- (id)adjustmentDictionary;
- (id)initWithAdjustmentFilePath:(id)a0 forAsset:(id)a1;

@end
