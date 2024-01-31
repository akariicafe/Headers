@class PETScalarEventTracker, NSObject;
@protocol OS_dispatch_queue;

@interface ATXMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    PETScalarEventTracker *_viewTracker;
    PETScalarEventTracker *_executeTracker;
    PETScalarEventTracker *_errorTracker;
}

+ (id)_sharedInstance;
+ (void)logActionViewForType:(long long)a0 inContext:(long long)a1;
+ (void)logActionExecuteForType:(long long)a0 inContext:(long long)a1;
+ (void)logError:(long long)a0 inContext:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_logActionExecuteForType:(long long)a0 inContext:(long long)a1;
- (void)_logActionViewForType:(long long)a0 inContext:(long long)a1;
- (void)_logError:(long long)a0 inContext:(long long)a1;

@end
