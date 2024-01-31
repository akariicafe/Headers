@class NSString, NSURL, BSAtomicFlag, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PRUISPosterSnapshotFilesystemCache : NSObject <PRUISPosterSnapshotCache> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NSCache *_cacheLock_URLToSnapshotBundleCache;
    NSURL *_cacheURLInternalDirectory;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_fileSystemQueue;
    BSAtomicFlag *_invalidationFlag;
}

@property (readonly, nonatomic) NSURL *cacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultCacheLocationURL;
+ (id)_determineProviderFromSnapshotURL:(id)a0;
+ (id)_snapshotURLForPosterPath:(id)a0 relativeTo:(id)a1;
+ (id)_snapshotURLForPosterPath:(id)a0 snapshotDefinitionIdentifier:(id)a1 interfaceOrientation:(long long)a2 hardwareIdentifier:(id)a3 userInterfaceStyle:(long long)a4 relativeTo:(id)a5;
+ (id)incomingCallSnapshotCache;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)cleanup;
- (void)invalidate;
- (void).cxx_destruct;
- (id)latestSnapshotBundleForRequest:(id)a0 error:(out id *)a1;
- (BOOL)cacheSnapshotBundle:(id)a0 forRequest:(id)a1;
- (void)_cacheLock_cleanupPostersBefore:(id)a0;
- (void)_prepareSnapshotCache;
- (BOOL)cacheSnapshotBundle:(id)a0 forRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)checkCacheIsReachable:(out id *)a0;
- (void)discardSnapshotsForPosters:(id)a0;
- (void)discardSnapshotsForPostersMatchingPredicate:(id)a0;
- (id)latestSnapshotBundleForPoster:(id)a0 snapshotDefinition:(id)a1 interfaceOrientation:(long long)a2 userInterfaceStyle:(long long)a3 hardwareIdentifier:(id)a4 error:(out id *)a5;

@end
