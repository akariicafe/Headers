@class CARSessionStatus, NSArray, NSString, NSMutableSet, NSOperationQueue, NSObject, MPPlayableContentManagerContext;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, OS_dispatch_queue;

@interface MPPlayableContentManager : NSObject <CARSessionObserving> {
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    BOOL _coalescingUpdates;
    BOOL _scheduledSupportedAPIsChange;
    CARSessionStatus *_currentSessionStatus;
}

@property (retain, nonatomic) MPPlayableContentManagerContext *context;
@property (weak, nonatomic) id<MPPlayableContentDataSource> dataSource;
@property (weak, nonatomic) id<MPPlayableContentDelegate> delegate;
@property (copy, nonatomic) NSArray *nowPlayingIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_deviceIsCarplayCapable;
+ (id)sharedContentManager;

- (void)endUpdates;
- (id)init;
- (void)dealloc;
- (void)reloadData;
- (id)_init;
- (void)beginUpdates;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)sessionDidConnect:(id)a0;
- (void)_contentItemChangedNotification:(id)a0;
- (void).cxx_destruct;
- (void)sessionDidDisconnect:(id)a0;
- (BOOL)_areContentLimitsEnforced;
- (void)_browsableContentEndpointChanged:(id)a0;
- (BOOL)_contentItemWasSentToMediaRemote:(id)a0;
- (void)_enqueueArtworkUpdate:(id)a0 size:(struct CGSize { double x0; double x1; })a1 withCompletion:(id /* block */)a2;
- (void)_enqueueArtworkUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)a0 error:(id)a1;
- (void)_limitedUIChanged:(id)a0;
- (void)_markContentItemsAsSentToMediaRemote:(id)a0;
- (BOOL)_musicListsLimited;
- (BOOL)_onQueueContentItemWasSentToMediaRemote:(id)a0;
- (void)_pushContentItemsUpdate;
- (void)_scheduleUpdateSupportedAPIs;
- (void)_setupMediaRemoteEndpoint;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_updateSupportedAPIs;

@end
