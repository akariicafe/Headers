@class _PASLock, NSMutableDictionary, NSOperationQueue, CMMotionActivityManager, CMMotionActivity;

@interface ATXMotionManagerWrapper : NSObject {
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
    NSMutableDictionary *_delegatesMonitoringForMotionType;
    CMMotionActivity *_mostRecentActivity;
    _PASLock *_currentMotion;
}

+ (id)sharedInstance;
+ (BOOL)hasMotionActivity;

- (void)updateCurrentActivity:(id)a0;
- (id)init;
- (id)_fetchMotionActivities;
- (id)getCurrentActivity;
- (void).cxx_destruct;
- (void)stopUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (void)startUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (id /* block */)_motionActivityHandler;

@end
