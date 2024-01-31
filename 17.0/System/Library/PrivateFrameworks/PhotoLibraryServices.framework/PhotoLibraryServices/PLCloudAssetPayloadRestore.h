@class NSMutableArray, NSMutableDictionary;
@protocol PLCloudAssetPayloadRestoreDelegate;

@interface PLCloudAssetPayloadRestore : NSObject {
    id<PLCloudAssetPayloadRestoreDelegate> _delegate;
    NSMutableArray *_batchToRestore;
    NSMutableDictionary *_payloadsForUnresolvedCloudIdentifiers;
}

@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) unsigned long long totalRestored;
@property (readonly, nonatomic) unsigned long long totalSkipped;

+ (id)relationshipKeyPathsForPrefetching;
+ (id)assetForPayload:(id)a0 inManagedObjectContext:(id)a1;
+ (id)assetsForAssetIdentifiersWithPayloads:(id)a0 inManagedObjectContext:(id)a1;

- (void).cxx_destruct;
- (void)addPayload:(id)a0;
- (void)_insertBatchOfUnresolvedCloudIdentifiers;
- (void)_insertBatchToRestore;
- (void)_insertPayload:(id)a0 forAsset:(id)a1 skipMessage:(id)a2;
- (id)_resolveCloudIdentifiersToLocalIdentifiers;
- (id)initWithDelegate:(id)a0 batchSize:(unsigned long long)a1;
- (void)insertRemainingPayloads;

@end
