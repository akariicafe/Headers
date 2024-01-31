@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, AEChatKitTransportDelegate;

@interface AEChatKitTransport : AEPackageTransport <AEPhotosAssetPackageFinalizer>

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_packagePreparationGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_urlSidetableIsolationQueue;
@property (readonly, nonatomic) NSMutableDictionary *_alternateURLsByIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_primaryURLsByIdentifier;
@property (weak, nonatomic) id<AEChatKitTransportDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)_workQueue;
- (void)unstagePackagesWithIdentifiers:(id)a0;
- (void)_beginStagingWorkForPackage:(id)a0;
- (id)_chatkitPackageForIdentifer:(id)a0;
- (void)_evictPersistedURLs:(id)a0;
- (void)_evictPersistedURLsForPackageIdentifier:(id)a0 evictFiles:(BOOL)a1;
- (id)_persistedURLsFromURLs:(id)a0 inBaseDirectory:(id)a1 outError:(out id *)a2;
- (id)_preparePackageForCommit:(id)a0 inBaseDirectory:(id)a1 outError:(out id *)a2;
- (void)_stagePackage:(id)a0 initiateStagingWork:(BOOL)a1;
- (void)_unstagePackagesWithIdentifiers:(id)a0 evictFiles:(BOOL)a1;
- (void)_updatePrimaryURLsForPackageIdentifier:(id)a0 urls:(id)a1;
- (void)commitPackage:(id)a0;
- (id)finalizePackage:(id)a0 error:(id *)a1;
- (id)orderedStagedPayloads;
- (void)stagePackage:(id)a0;
- (void)stagePackages:(id)a0;
- (void)stagePersistedPayloads:(id)a0;
- (void)unstagePackageWithIdentifier:(id)a0 andNotify:(BOOL)a1;
- (void)unstagePackagesWithIdentifiers:(id)a0 evictFiles:(BOOL)a1;

@end
