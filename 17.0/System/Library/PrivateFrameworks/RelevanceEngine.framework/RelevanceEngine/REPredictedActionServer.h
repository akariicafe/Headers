@class REObserverStore, NSArray, REUpNextScheduler, NSXPCConnection, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface REPredictedActionServer : NSObject {
    NSXPCConnection *_connection;
    REUpNextScheduler *_scheduler;
    NSArray *_predictions;
    NSArray *_counts;
    NSDate *_firstPerformedDate;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _fetchingData;
    NSDate *_lastFetchedDate;
    NSMutableArray *_fetchCompletionBlocks;
    REObserverStore *_observers;
}

+ (id)sharedInstance;

- (void)_notifyObservers;
- (void)_invalidateConnection;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_clearConnection;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_accessOrEnqueueDataRequest:(id /* block */)a0 error:(id /* block */)a1;
- (void)_finishProcessingData;
- (void)_queue_fetchPredicitions;
- (void)_queue_setupConnection;
- (void)_requestPredictions:(id)a0;
- (void)fetchFirstPerformedActionDate:(id /* block */)a0;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)a0 actionIdentifier:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchPredictedActions:(id /* block */)a0;

@end
