@class NSString, NSConditionLock, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AMSObservable : NSObject

@property (readonly, nonatomic) unsigned long long behavior;
@property (retain, nonatomic) NSError *failureError;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSMutableArray *queuedResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendMessageQueue;
@property (retain, nonatomic) NSConditionLock *stateLock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;

- (BOOL)sendFailure:(id)a0;
- (id)init;
- (void)unsubscribe:(id)a0;
- (id)initWithObserver:(id)a0;
- (void)unsubscribeAll;
- (id)subscribeWithResultBlock:(id /* block */)a0;
- (BOOL)_isComplete;
- (BOOL)sendResult:(id)a0;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;
- (id)initWithObservers:(id)a0;
- (id)initWithNotification:(id)a0 object:(id)a1;
- (BOOL)sendCompletion;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (BOOL)cancel;
- (id)initWithObservers:(id)a0 behavior:(unsigned long long)a1;
- (id)initWithObserver:(id)a0 behavior:(unsigned long long)a1;

@end
