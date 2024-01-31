@class NSString, FCCacheCoordinator, FCAssetStore;
@protocol NDAnalyticsEnvelopeStoreObserver;

@interface NDAnalyticsEnvelopeStore : NSObject <FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore>

@property (retain, nonatomic) FCAssetStore *assetStore;
@property (retain, nonatomic) FCCacheCoordinator *cacheCoordinator;
@property (weak, nonatomic) id<NDAnalyticsEnvelopeStoreObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)enableFlushing;
- (void)copyEnvelopes:(id)a0;
- (void)_deleteEnvelopesForKeysFromStore:(id)a0;
- (void)_reportEnvelopesToNewsAutomationIfNeeded:(id)a0;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (void).cxx_destruct;
- (id)allEntriesWithHoldToken:(id *)a0;
- (id)envelopesForEntries:(id)a0;
- (void)deleteEnvelopesForEntries:(id)a0;
- (id)sizesOfEnvelopesWithEntries:(id)a0;
- (id)initWithStoreDirectoryFileURL:(id)a0;

@end
