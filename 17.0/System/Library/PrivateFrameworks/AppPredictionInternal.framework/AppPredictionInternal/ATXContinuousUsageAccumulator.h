@class NSArray, NSMutableArray, BPSPublisher;

@interface ATXContinuousUsageAccumulator : NSObject {
    NSMutableArray *_appInFocusStartingEvents;
    NSMutableArray *_continuousUsageAccumulator;
    BPSPublisher *_appLaunchPublisher;
}

@property (readonly, copy, nonatomic) NSArray *continuousUseSessions;

- (id)init;
- (void).cxx_destruct;
- (id)eventWithBundleID:(id)a0 launchReason:(id)a1 startTime:(id)a2 endTime:(id)a3 duration:(double)a4;
- (id)initWithAppLaunchPublisher:(id)a0;
- (void)recordAppLaunchEndEvent:(id)a0;
- (void)recordAppLaunchStartEvent:(id)a0;
- (BOOL)successfullyAccumulatedContinuousUseEvents;

@end
