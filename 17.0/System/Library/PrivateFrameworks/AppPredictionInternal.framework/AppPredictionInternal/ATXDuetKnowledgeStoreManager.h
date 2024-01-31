@class NSDate, NSObject;
@protocol _DKKnowledgeSaving, OS_dispatch_source, OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ATXDuetKnowledgeStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<_DKKnowledgeQuerying> _store;
    NSDate *_lastUsedDate;
    NSObject<OS_dispatch_source> *_pressureSource;
    unsigned long long _previousPressure;
    NSObject<OS_dispatch_source> *_expirationSource;
    id<_DKKnowledgeSaving> _savingStore;
}

+ (id)sharedInstance;

- (void)_clear;
- (void)saveEventsAsynchronously:(id)a0 responseQueue:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)dealloc;
- (void)runBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_handleMemoryPressure;

@end
