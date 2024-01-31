@class NSDate;

@interface MTSleepModeStateMachineUserRequestedOffState : MTSleepModeStateMachineOffState

@property (retain, nonatomic) NSDate *keepOffUntilDate;

- (void)updateState:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToState:(id)a0;
- (void)didEnterWithPreviousState:(id)a0;
- (id)initWithKeepOffUntilDate:(id)a0 stateMachine:(id)a1;

@end
