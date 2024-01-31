@class CMAnomalyEvent, NSObject;
@protocol OS_dispatch_queue, CMAnomalyDelegate;

@interface CMAnomalyManager : NSObject {
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
    void *fLocationdConnection;
    CMAnomalyEvent *fLastReceivedEvent;
    CMAnomalyEvent *fLastDispatchedEvent;
    BOOL fRegisteredForNotification;
}

@property (class, readonly, nonatomic, getter=isAnomalyDetectionAvailable) BOOL anomalyDetectionAvailable;

@property (nonatomic) id<CMAnomalyDelegate> delegate;

+ (long long)getAnomalyFeatureEnablingStrategyForUserAge:(id)a0;

- (id)init;
- (void)dealloc;
- (void)ackAnomalyEvent:(id)a0 withResolution:(long long)a1;
- (void)_registerForAnomalyDetection:(BOOL)a0;
- (void)_sendRegistrationForAnomalyEvent:(id)a0;
- (void)resolveAnomalyEvent:(id)a0 withResolution:(long long)a1;
- (void)respondToAnomalyEvent:(id)a0 withResponse:(long long)a1;
- (void)startAnomalyDetection;
- (void)stopAnomalyDetection;
- (void)updateAnomalyEventSOSCallState:(id)a0 withSOSSCallState:(long long)a1;

@end
