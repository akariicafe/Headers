@class NSMutableSet, NSMutableArray, NSMutableDictionary;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer

@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray *itemsInFlight;
@property (retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap;
@property (retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap;
@property (retain, nonatomic) NSMutableArray *finishedAssetCollections;
@property (retain, nonatomic) NSMutableSet *assetCollectionsWithAuthorizationError;
@property (nonatomic) BOOL didEncounterNetworkConditionError;
@property (retain, nonatomic) NSMutableDictionary *assetCollectionGUIDToRequestorContext;
@property (weak, nonatomic) id<MSASAssetUploaderDelegate> delegate;

- (void)didFinishGettingAllAssets;
- (void)workQueueStopTrackingItem:(id)a0;
- (void)unregisterAssetCollections:(id)a0;
- (void)workQueueStop;
- (void)workQueueCancelAssetCollections:(id)a0;
- (void)MMCSEngine:(id)a0 didMakeGetProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)MMCSEngine:(id)a0 didCreateRequestorContext:(id)a1 forAssets:(id)a2;
- (void)workQueueUploadNextBatch;
- (void)MMCSEngine:(id)a0 didFinishGettingAsset:(id)a1 path:(id)a2 error:(id)a3;
- (void)workQueueRetryOutstandingActivities;
- (void)MMCSEngine:(id)a0 didFinishPuttingAsset:(id)a1 putReceipt:(id)a2 error:(id)a3;
- (void)unregisterAssetCollections:(id)a0 completionBlock:(id /* block */)a1;
- (id)_pathForPersonID:(id)a0;
- (id)_orphanedAssetCollectionError;
- (void).cxx_destruct;
- (void)MMCSEngine:(id)a0 didMakePutProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)didFinishPuttingAllAssets;
- (void)workQueueCancel;
- (void)registerAssetCollections:(id)a0 completionBlock:(id /* block */)a1;
- (void)_workQueueStop;
- (void)workQueueGoIdle;
- (void)workQueueDidFinishWithItem:(id)a0 error:(id)a1;
- (void)cancelAssetCollections:(id)a0;
- (void)workQueueRegisterAssets:(id)a0 index:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)workQueueShutDownCompletionBlock:(id /* block */)a0;
- (void)workQueueRegisterAssetCollections:(id)a0 index:(unsigned long long)a1 results:(id)a2 completionBlock:(id /* block */)a3;

@end
