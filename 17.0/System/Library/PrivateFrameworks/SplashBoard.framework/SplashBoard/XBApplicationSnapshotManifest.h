@class NSString, XBApplicationSnapshotManifestImpl;
@protocol XBApplicationSnapshotManifestDelegate;

@interface XBApplicationSnapshotManifest : NSObject <XBApplicationSnapshotManifestDelegate, BSDescriptionProviding>

@property (readonly, weak, nonatomic) XBApplicationSnapshotManifestImpl *manifestImpl;
@property (weak, nonatomic) id<XBApplicationSnapshotManifestDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerPath;
@property (readonly, copy, nonatomic) NSString *defaultGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_manifestsByIdentity;
+ (void)handleTrackingStateChange;
+ (id)debugDescription;
+ (void)deleteAllSystemSnapshots;

- (id)_allSnapshotGroups;
- (id)createSnapshotWithGroupID:(id)a0;
- (id)initWithApplicationInfo:(id)a0;
- (id)snapshotsForGroupID:(id)a0;
- (void)dealloc;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 options:(unsigned long long)a2 imageGeneratedHandler:(id /* block */)a3 imageDataSavedHandler:(id /* block */)a4;
- (void)purgeSnapshotsWithProtectedContent;
- (id)snapshotsForGroupIDs:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)deleteSnapshotsForGroupID:(id)a0;
- (void)deleteSnapshots:(id)a0;
- (BOOL)_invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)createVariantForSnapshot:(id)a0 withIdentifier:(id)a1;
- (id)snapshotsForGroupIDs:(id)a0 fetchRequest:(id)a1;
- (BOOL)snapshotsConsideredUnpurgableByAPFS;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)a0;
- (id)snapshotsForGroupIDs:(id)a0 matchingPredicate:(id)a1;
- (void)beginTrackingImageDeletions;
- (id)snapshotsForGroupID:(id)a0 matchingPredicate:(id)a1;
- (void)updateSnapshotsAPFSPurgability:(BOOL)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)archive;
- (void).cxx_destruct;
- (void)saveSnapshot:(id)a0 atPath:(id)a1 withContext:(id)a2;
- (void)deleteSnapshot:(id)a0;
- (id)snapshotsForGroupID:(id)a0 fetchRequest:(id)a1;
- (void)endTrackingImageDeletions;
- (void)deleteAllSnapshots;
- (id)succinctDescription;
- (void)deleteSnapshotsForGroupID:(id)a0 matchingPredicate:(id)a1;
- (void)deleteSnapshotsMatchingPredicate:(id)a0;
- (void)manifest:(id)a0 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)a1;
- (void)deleteSnapshotsForGroupID:(id)a0 predicateBuilder:(id /* block */)a1;
- (void)beginSnapshotAccessTransaction:(id /* block */)a0 completion:(id /* block */)a1;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 imageGeneratedHandler:(id /* block */)a3 imageDataSavedHandler:(id /* block */)a4;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 completion:(id /* block */)a3;
- (void)generateImageForSnapshot:(id)a0 dataProvider:(id)a1 writeToFile:(BOOL)a2 didGenerateImage:(id /* block */)a3 didSaveImage:(id /* block */)a4;
- (id)initWithContainerIdentity:(id)a0 store:(id)a1;

@end
