@class HDSPSleepWidgetStateMachine, NSString;

@interface HDSPSleepWidgetStateMachineState : HKSPPersistentStateMachineState <HDSPSleepWidgetStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepWidgetStateMachine *stateMachine;
@property (readonly, nonatomic) long long widgetState;
@property (readonly, nonatomic) BOOL reloadsWidgetOnModelChange;
@property (readonly, nonatomic) BOOL reloadsWidgetOnTimeChange;
@property (readonly, nonatomic) BOOL widgetStateHasTimeComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sleepScheduleModelDidChange:(id)a0;
- (void)didEnter;
- (void)updateState;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (void)significantTimeChangeOccurred;
- (id)stateName;
- (BOOL)shouldGoIntoUpcomingState;

@end
