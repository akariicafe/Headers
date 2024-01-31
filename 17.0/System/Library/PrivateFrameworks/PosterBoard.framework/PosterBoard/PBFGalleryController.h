@class NSDate, NSString, NSURL, _PBFGalleryEnqueuedPushToProactiveRequest, _PBFGalleryEnqueuedRefreshGalleryRequest, BSAtomicFlag, NSDictionary, NSHashTable, ATXFaceGalleryConfiguration, NSFileManager;
@protocol PBFRuntimeAssertionProviding, PBFGalleryProviding;

@interface PBFGalleryController : NSObject <BSInvalidatable, PBFDataComponentRefreshStateProviding> {
    NSFileManager *_fileManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BSAtomicFlag *_invalidationFlag;
    ATXFaceGalleryConfiguration *_stateLock_lastUsefulGalleryConfiguration;
    NSDate *_stateLock_lastUsefulGalleryConfigurationPersistDate;
    NSDictionary *_stateLock_lastSentPosterDescriptorsForExtensionBundleIdentifier;
    _PBFGalleryEnqueuedPushToProactiveRequest *_stateLock_enqueuedPushToProactive;
    _PBFGalleryEnqueuedPushToProactiveRequest *_stateLock_activePushToProactive;
    _PBFGalleryEnqueuedPushToProactiveRequest *_stateLock_lastSuccessfulPushToProactive;
    _PBFGalleryEnqueuedRefreshGalleryRequest *_stateLock_activeRefreshGalleryRequest;
    NSHashTable *_stateLock_observers;
    unsigned long long _stateLock_proactiveInfractionCount;
    NSDate *_stateLock_timestampOfLastGalleryPushRequestFromProactive;
}

@property (readonly, nonatomic) unsigned long long currentProactiveInfractionCount;
@property (nonatomic) double minimumIntervalBetweenProactivePush;
@property (nonatomic) double maximumIntervalBetweenProactivePush;
@property (readonly, copy, nonatomic) NSURL *galleryCacheURL;
@property (readonly, weak, nonatomic) id<PBFGalleryProviding> galleryProvider;
@property (readonly, weak, nonatomic) id<PBFRuntimeAssertionProviding> runtimeAssertionProvider;
@property (readonly, nonatomic) ATXFaceGalleryConfiguration *currentGalleryConfiguration;
@property (readonly, nonatomic) NSDate *lastUpdateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)invalidate;
- (void)updateGallery:(id)a0 completion:(id /* block */)a1;
- (void)enqueueGalleryConfigurationUpdateWithOptions:(unsigned long long)a0 powerLogReason:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)determineRefreshStateWithContext:(id)a0;
- (void)addObserver:(id)a0;
- (void)_pushFaceGalleryConfigurationUpdate:(id)a0 options:(unsigned long long)a1 fetchError:(id)a2 sessionId:(id)a3 completion:(id /* block */)a4;
- (void)_stateLock_enqueueGalleryConfigurationUpdateWithOptions:(unsigned long long)a0 powerLogReason:(long long)a1 sessionId:(id)a2 completion:(id /* block */)a3;
- (void)_stateLock_enqueuePushUpdatedPosterDescriptors:(id)a0 reason:(id)a1 force:(BOOL)a2 sessionId:(id)a3 completion:(id /* block */)a4;
- (BOOL)_stateLock_executeEnqueuedPushToProactive:(id)a0;
- (void)_stateLock_flushProactiveUpdateQueue;
- (BOOL)_stateLock_isGalleryStale;
- (void)_stateLock_loadPersistedGalleryConfigurationWithLastUpdateDate:(out id *)a0 error:(out id *)a1;
- (void)_stateLock_notifyGalleryControllerDidUpdateCurrentGalleryConfiguration:(id)a0;
- (void)_stateLock_notifyGalleryControllerWillUpdateGalleryConfiguration;
- (BOOL)_stateLock_persistGalleryConfiguration:(id)a0 lastUpdateDate:(out id *)a1 sessionId:(id)a2 error:(out id *)a3;
- (id)galleryProviderWithError:(out id *)a0;
- (id)initWithGalleryCacheURL:(id)a0 galleryProvider:(id)a1 runtimeAssertionProvider:(id)a2;
- (id)initWithGalleryCacheURL:(id)a0 runtimeAssertionProvider:(id)a1;
- (void)pushUpdatedPosterDescriptors:(id)a0 reason:(id)a1 force:(BOOL)a2 completion:(id /* block */)a3;
- (id)runtimeAssertionProviderWithError:(out id *)a0;

@end
