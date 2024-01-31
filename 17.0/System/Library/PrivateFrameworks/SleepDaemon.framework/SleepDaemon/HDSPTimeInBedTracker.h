@class HKSPSleepScheduleModel, NSString, HDSPEnvironment;
@protocol NAScheduler, HDSPSleepTrackerDelegate;

@interface HDSPTimeInBedTracker : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepTracker>

@property (readonly, nonatomic) id<NAScheduler> sleepIntervalScheduler;
@property (readonly, nonatomic) BOOL isTimeInBedTrackingEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HDSPSleepTrackerDelegate> delegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)environmentWillBecomeReady:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)computeSleepIntervalsForInterval:(id)a0;
- (id)_createSleepSessionWithEndDate:(id)a0 endReason:(unsigned long long)a1;
- (id)_computeSessionMetadataForInterval:(id)a0;
- (void).cxx_destruct;
- (void)_endSleepSessionWithReason:(unsigned long long)a0;
- (id)processedSessionForSession:(id)a0;
- (id)_computeSleepSessionStartBeforeDate:(id)a0;

@end
