@class HDSPSleepScheduleStateCoordinatorDelayedWakeUpState, NSString, HDSPSleepScheduleStateCoordinatorBedtimeState, HKSPSleepScheduleModel, HDSPSleepScheduleStateCoordinatorDisabledState, HDSPSleepScheduleStateCoordinatorWindDownState, HKSPSleepScheduleOccurrence, NSDate, HDSPSleepScheduleStateCoordinatorInitialState, HDSPSleepScheduleStateCoordinatorWakeUpState;
@protocol HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, NAScheduler, HDSPSleepScheduleStateCoordinatorStateMachineDelegate;

@interface HDSPSleepScheduleStateCoordinatorStateMachine : HKSPPersistentStateMachine <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPSleepScheduleStateCoordinatorStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDisabledState *disabledState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWakeUpState *wakeUpState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorBedtimeState *bedtimeState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWindDownState *windDownState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDelayedWakeUpState *delayedWakeUpState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorInitialState *initialState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) NSDate *currentDate;

- (void)timeZoneChange;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 context:(id)a2;
- (void)wakeUpConfirmed;
- (void)wakeTimeReached;
- (void)windDownReached;
- (void)significantTimeChange;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (unsigned long long)loggingCategory;
- (void)scheduleModelChanged:(id)a0;
- (void).cxx_destruct;
- (void)bedtimeReached;
- (void)snoozeFireDateShouldBeReset;

@end
