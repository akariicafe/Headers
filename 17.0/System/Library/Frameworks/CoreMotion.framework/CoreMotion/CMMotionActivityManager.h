@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject {
    void *fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    id /* block */ fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (long long)authorizationStatus;
+ (BOOL)isActivityAvailable;
+ (BOOL)isActivityLiteAvailable;
+ (void)paginateDatesIntoDatesFrom:(id)a0 datesTo:(id)a1 start:(id)a2 end:(id)a3 intervalLength:(double)a4;

- (id)init;
- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 onQueue:(id)a1 withHandler:(id /* block */)a2;
- (void)dealloc;
- (void)stopPeriodicActivityUpdates;
- (void)stopActivityUpdates;
- (BOOL)isActivity:(id)a0 sustainedForAttribute:(long long)a1;
- (void)queryActivityStartingFromDate:(id)a0 toDate:(id)a1 toQueue:(id)a2 withHandler:(id /* block */)a3;
- (void)stopActivityLiteUpdates;
- (void)queryActivityWithAttribute:(long long)a0 fromDate:(id)a1 toDate:(id)a2 toQueue:(id)a3 withHandler:(id /* block */)a4;
- (BOOL)isTimeFromActivity:(id)a0 toActivity:(id)a1 withinLimitForAttribute:(long long)a2;
- (void)startActivityLiteUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startPeriodicActivityUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startActivityUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;

@end
