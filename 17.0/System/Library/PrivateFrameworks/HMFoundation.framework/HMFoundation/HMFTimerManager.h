@class HMFTimer, NSString, HMFTimerManagerTimerContext, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMFTimerManagerDelegate, HMFTimerManagerDataSource;

@interface HMFTimerManager : NSObject <HMFTimerDelegate, HMFTimerManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _options;
    HMFTimer *_nextTimer;
    HMFTimerManagerTimerContext *_nextTimerContext;
    id<HMFTimerManagerDataSource> _dataSource;
    NSMutableArray *_sortedTimerContexts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMFTimerManagerDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (id)startTimerWithTimeInterval:(double)a0 andReplaceObject:(id)a1;
- (void)_addTimerContext:(id)a0;
- (void)_refreshNextTimerIfNeededWithTimeInterval:(double)a0;
- (id)_removeExpiredTimerContextsAndRefreshNextTimer;
- (void)_removeTimerContext:(id)a0;
- (void)_removeTimerContextsWithMatchingObject:(id)a0;
- (BOOL)_suspendTimerManagerIfEmpty;
- (void)cancelTimerForContext:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 dataSource:(id)a1;
- (void)notifyDidFireForTimerContexts:(id)a0 shouldDispatch:(BOOL)a1;
- (void)refreshTimerManager;
- (void)refreshTimerManagerWithShouldDispatchNotifications:(BOOL)a0;
- (id)startTimerWithTimeInterval:(double)a0 object:(id)a1;
- (id)startTimerWithTimeInterval:(double)a0 object:(id)a1 shouldReplace:(BOOL)a2;

@end
