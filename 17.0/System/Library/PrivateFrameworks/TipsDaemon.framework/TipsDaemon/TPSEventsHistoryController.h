@class NSMutableDictionary, NSDictionary, TPSTipStatusController, NSObject;
@protocol OS_dispatch_queue;

@interface TPSEventsHistoryController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (retain, nonatomic) NSMutableDictionary *contextualEventIdentifierToContextualEventMap;
@property (copy, nonatomic) NSDictionary *contextualEventsForIdentifiers;

+ (void)removeEventHistoryCache;

- (id)initWithTipStatusController:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)updateCacheData;
- (void)removeCacheData;
- (void)removeObserverIdentifiers:(id)a0;
- (id)contextualEventsForIdentifiers:(id)a0;
- (void)_addEvents:(id)a0 contentIdentifier:(id)a1 eventSinceDate:(id)a2 minObservationCount:(unsigned long long)a3;
- (id)_contextualEventForIdentifier:(id)a0;
- (void)_persistUserInfo:(id)a0 forObserverIdentifiers:(id)a1;
- (void)_setContextualEvent:(id)a0 forIdentifier:(id)a1;
- (void)addEventsFromTriggerEvents:(id)a0 desiredOutcomeEvents:(id)a1 contentIdentifier:(id)a2 eventSinceDate:(id)a3;
- (id)allContextualEvents;
- (id)contextualEventsBySourceMap;
- (void)processEventProviderQueryResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeObserverIdentifiers:(id)a0 fromEventIdentifiers:(id)a1;
- (void)restartTrackingForEventIdentifiers:(id)a0 date:(id)a1;

@end
