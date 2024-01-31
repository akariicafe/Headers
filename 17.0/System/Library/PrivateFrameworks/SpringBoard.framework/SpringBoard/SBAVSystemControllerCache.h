@class NSHashTable, NSString, NSArray, AVOutputContext, NSMutableDictionary, NSDictionary, BSAtomicSignal, NSObject, NSNotificationCenter;
@protocol OS_dispatch_queue, SBAVSystemControllerDataProviding, OS_dispatch_workloop;

@interface SBAVSystemControllerCache : NSObject {
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSNotificationCenter *_notificationCenter;
    id /* block */ _dataProviderInitializer;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    AVOutputContext *_queue_outputContext;
    id<SBAVSystemControllerDataProviding> _queue_dataProvider;
    NSMutableDictionary *_notificationToHandlerMap;
    NSMutableDictionary *_notificationToBackgroundQueryCancellationSignalMap;
    BOOL _queue_initialized;
    BSAtomicSignal *_queue_serverDeathSignal;
    BOOL _queue_fullyMuted;
    BOOL _queue_ringerMuted;
    BOOL _queue_audioSessionPlaying;
    BOOL _queue_airplayDisplayActive;
    NSString *_queue_activeCategoryName;
    NSString *_queue_activeAudioRoute;
    NSDictionary *_queue_activeAudioRouteInfo;
    NSArray *_queue_pickableRoutes;
    NSArray *_queue_activeOutputDevices;
    BOOL _outputContextSupportsMultipleOutputDevices;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *avscOperationsWorkloop;
@property (readonly, nonatomic, getter=isFullyMuted) BOOL fullyMuted;
@property (readonly, nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property (readonly, nonatomic, getter=isAudioSessionPlaying) BOOL audioSessionPlaying;
@property (readonly, nonatomic, getter=isAirplayDisplayActive) BOOL airplayDisplayActive;
@property (readonly, copy, nonatomic) NSString *activeCategoryName;
@property (readonly, copy, nonatomic) NSString *activeAudioRoute;
@property (readonly, copy, nonatomic) NSDictionary *activeAudioRouteInfo;
@property (readonly, copy, nonatomic) NSArray *pickableRoutes;
@property (readonly, copy, nonatomic) NSArray *activeOutputDevices;

+ (id)sharedInstance;

- (void)_queue_finishRebuildingCacheWithDataProvider:(id)a0 serverDeathSignal:(id)a1;
- (id)init;
- (id)activeOutputDevices;
- (void)dealloc;
- (void)_queue_updateActiveOutputDevicesFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)initWithCallOutQueue:(id)a0 notificationCenter:(id)a1 dataProviderInitializer:(id /* block */)a2;
- (id)_queryActiveOutputDevicesFromContext:(id)a0;
- (void)_queue_signalBackgroundQueryCancellationForNotification:(id)a0;
- (id)_backgroundQueryQueue_rebuildDataProvider;
- (id)activeCategoryName;
- (id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)a0;
- (id)activeAudioRoute;
- (void)_serverDied:(id)a0;
- (void)fetchPickableRoutesWithCompletion:(id /* block */)a0;
- (id)activeAudioRouteInfo;
- (void).cxx_destruct;
- (void)_queue_updateAudioSessionPlayingFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_updatePickableRoutesFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_updateActiveCategoryNameFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_rebuildCache;
- (id)pickableRoutes;
- (void)_receiveUpdatedValueFromNotification:(id)a0;
- (void)_queue_updateActiveAudioRouteFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)addObserver:(id)a0;
- (void)_queue_notifyObserversWithBlock:(id /* block */)a0;
- (void)_queue_updateFullyMutedFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_updateAirplayDisplayActiveFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_updateRingerMutedFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;

@end
