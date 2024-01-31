@class NSString, CPUIThrottle, CARObserverHashTable, CPUINowPlayingSnapshot, MPRequestResponseController;

@interface CPUINowPlayingManager : NSObject <MPRequestResponseControllerDelegate>

@property (retain, nonatomic) MPRequestResponseController *requestController;
@property (retain, nonatomic) CARObserverHashTable *stateObservers;
@property (retain, nonatomic) CPUIThrottle *metadataThrottle;
@property (copy, nonatomic) NSString *lastContentItemIdentifier;
@property (copy, nonatomic) NSString *lastContentItemTitle;
@property (nonatomic) unsigned long long throttleBehavior;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) CPUINowPlayingSnapshot *snapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void)_setupRequestController;
- (void)addNowPlayingObserver:(id)a0;
- (void)performCommandRequest:(id)a0 completion:(id /* block */)a1;
- (void)removeNowPlayingObserver:(id)a0;

@end
