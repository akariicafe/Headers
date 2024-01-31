@class NSHashTable, NSString, NSURL, NSUUID, BSAtomicFlag, NSCountedSet, NSObject, NSMapTable;
@protocol PRPosterExtensionProvider, OS_dispatch_queue, PRUISPosterSnapshotCache;

@interface PRUISPosterSnapshotController : NSObject <PRPosterExtensionProviderObserver, BSInvalidatable> {
    BSAtomicFlag *_invalidationFlag;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_receivedExtensionsUpdate;
    NSMapTable *_lock_providerToSnapshotterMap;
    NSMapTable *_lock_snapshotIdentifierToSnapshotRequestMap;
    NSHashTable *_lock_activeAssertions;
    NSCountedSet *_lock_keepActiveAssertionReasons;
    id /* block */ _extensionBuilder;
    NSString *_expectedRole;
    NSUUID *_instanceIdentifier;
    id<PRPosterExtensionProvider> _lock_extensionSource;
    NSObject<OS_dispatch_queue> *_completionBlockQueue;
}

@property (readonly, nonatomic) id<PRUISPosterSnapshotCache> cache;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSURL *cacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIncomingCallSnapshotController;
+ (unsigned long long)defaultRequestOutput;

- (void)dealloc;
- (void)invalidate;
- (id)initWithCacheURL:(id)a0;
- (void).cxx_destruct;
- (id)acquireKeepActiveAssertionForReason:(id)a0;
- (void)executeSnapshotRequest:(id)a0 completion:(id /* block */)a1;
- (id)latestSnapshotBundleForRequest:(id)a0 error:(out id *)a1;
- (void)posterExtensionProvider:(id)a0 foundExtensions:(id)a1;
- (void)_invalidateAssertionReason:(id)a0;
- (void)_lock_assertionsWereUpdated;
- (void)_snapshotRequestDidFinishWithResult:(id)a0 definition:(id)a1 error:(id)a2 request:(id)a3 completion:(id /* block */)a4;
- (void)cleanupSnapshotCache;
- (void)discardSnapshotsForPosters:(id)a0;
- (id)initWithExtensionProviderBuilder:(id /* block */)a0 cache:(id)a1;
- (id)initWithExtensionProviderBuilder:(id /* block */)a0 cacheURL:(id)a1;

@end
