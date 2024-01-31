@class NSSet, NSString, NSMapTable, PRSServerPosterPath;

@interface PBFPosterSnapshotCoordinator : NSObject <BSCancellable> {
    NSMapTable *_lock_definitionToSnapshotReservationMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) PRSServerPosterPath *path;
@property (readonly, nonatomic) BOOL hasSnapshots;
@property (readonly, copy, nonatomic) NSSet *snapshotURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)_lock_ingestImageAtURL:(id)a0 forDefinition:(id)a1 configuredProperties:(id)a2 context:(id)a3;
- (void)ingestSnapshotsFromCoordinator:(id)a0;
- (id)snapshotReservationForDefinition:(id)a0 configuredProperties:(id)a1 context:(id)a2;
- (id)_lock_snapshotURLs:(BOOL)a0;
- (id)_lock_removeSnapshotsAtURLs:(id)a0 checkIfOwner:(BOOL)a1;
- (void)removeAllSnapshots;
- (void).cxx_destruct;
- (id)snapshotURLForDefinition:(id)a0 configuredProperties:(id)a1 context:(id)a2;
- (void)ingestSnapshotsByDefinition:(id)a0 path:(id)a1 configuredProperties:(id)a2 context:(id)a3;
- (void)cancel;
- (BOOL)snapshotExistsForDefinition:(id)a0 configuredProperties:(id)a1 context:(id)a2;
- (id)removeSnapshotsAtURLs:(id)a0;

@end
