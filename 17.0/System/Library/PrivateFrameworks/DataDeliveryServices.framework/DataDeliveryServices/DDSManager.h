@class NSMutableDictionary, NSString, DDSMAAutoAssetManager, NSObject;
@protocol DDSManagingDelegate, DDSAssetObserving, DDSManagerDataSource, DDSAssetProviding, DDSAssetTracking, OS_dispatch_queue;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSAssetObservingDelegate, DDSManagingDelegate, DDSRemoteSyncStateDelegate, DDSManaging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<DDSAssetTracking> tracker;
@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly, nonatomic) NSMutableDictionary *remoteSyncStateByAssetType;
@property (readonly, nonatomic) NSMutableDictionary *pendingAssertionsToUpdateByAssetType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<DDSManagerDataSource> dataSource;
@property (readonly, nonatomic) DDSMAAutoAssetManager *autoAssetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<DDSManagingDelegate> delegate;
@property (readonly, copy) NSString *xpcServiceName;

+ (id)errorForDDSAssetDownloadUIErrorCode:(long long)a0;
+ (id)updateCatalogMetadataKeyForAssetType:(id)a0;

- (void)didUpdateCatalogWithAssetType:(id)a0 error:(id)a1;
- (id)initWithProvider:(id)a0 tracker:(id)a1 dataSource:(id)a2 autoAssetManager:(id)a3;
- (void)updateAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (void)didCompleteDownloadForAssertions:(id)a0 error:(id)a1;
- (void)downloadAutoAssetForAssertions:(id)a0;
- (void)removeAssertionWithID:(id)a0;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (void)didEndUpdateCycleWithAssetType:(id)a0 error:(id)a1;
- (id)catalogUpdateDateForAssetType:(id)a0;
- (void)triggerDump;
- (void)didChangeDownloadState:(unsigned long long)a0 forAsset:(id)a1;
- (void)didBeginUpdateCatalog;
- (id)initWithProvider:(id)a0 tracker:(id)a1;
- (void)handleRemovedAssertions:(id)a0;
- (void)handleAddedNewDescriptor:(id)a0 forAssertion:(id)a1;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)fetchAssetUpdateStatusForQuery:(id)a0 callback:(id /* block */)a1;
- (void)createRemoteSyncStateForAssetType:(id)a0;
- (long long)assetUpdateStatusForAssertion:(id)a0;
- (void).cxx_destruct;
- (void)remoteSyncStateRequestsResetForAssetType:(id)a0;
- (void)handleNewAssertions:(id)a0;
- (void)beginUpdateCycleForAssetType:(id)a0 forced:(BOOL)a1 discretionaryDownload:(BOOL)a2;
- (id)initWithProvider:(id)a0 tracker:(id)a1 dataSource:(id)a2;
- (void)didCompleteDownloadForAssertion:(id)a0 error:(id)a1;
- (void)triggerUpdate;
- (void)setCatalogUpdateDate:(id)a0 forAssetType:(id)a1;
- (void)remoteSyncStateRequestsUpdateForAssetType:(id)a0;
- (void)willRetryUpdateCycle;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)deleteV1AssetsIfNecessary;
- (void)didStartUpdateCycleForAssetType:(id)a0;
- (void)remoteSyncStateRequestsRetryForAssetType:(id)a0;
- (void)updateCatalogForAssetType:(id)a0 withCompletion:(id /* block */)a1;

@end
