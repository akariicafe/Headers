@class CMMotionActivityManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MotionStateRelay : NSObject {
    int deviceOrientationStateToken;
    NSObject<OS_dispatch_queue> *_alarmQueue;
    BOOL _isMoving;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_alarmOperationQueue;
}

@property (nonatomic) int deviceOrientation;
@property (readonly, nonatomic) unsigned int currentMotion;
@property (readonly, nonatomic) BOOL isStationary;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversOfCurrentMotion;
+ (BOOL)automaticallyNotifiesObserversOfIsStationary;

- (id)motionStateString:(unsigned int)a0;
- (id)init;
- (void)dealloc;
- (void)unsubscribe;
- (void)startMotionMonitoring;
- (void)transitionToState:(unsigned int)a0;
- (void)stopActivityUpdates;
- (void)initializeEngine;
- (void)destroyEngine;
- (void)stopMotionMonitoring;
- (void)subscribe;
- (void).cxx_destruct;
- (id)deviceOrientationString:(int)a0;
- (BOOL)isMoving;
- (void)startActivityUpdates;

@end
