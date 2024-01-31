@class NSString, NSDictionary, CHSChronoServicesConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface CHSWidgetRelevanceService : NSObject <CHSChronoServiceClient, BSInvalidatable> {
    CHSChronoServicesConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_queue_entries;
    NSHashTable *_queue_observers;
    id<BSInvalidatable> _queue_assertion;
    BOOL _queue_invalidated;
}

@property (readonly, nonatomic) NSDictionary *cachedRelevanceEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_notifyObservers;
- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (void)widgetRelevanceEntriesDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_queue_notifyObservers;
- (void)_queue_subscribe;
- (void)_queue_unsubscribe;
- (void)_syncOnInternalQueue;

@end
