@class RadiosPreferences, SRUIFStateMachine, NSString;
@protocol AFUINetworkAvailabilityStateMachineDelegate;

@interface AFUINetworkAvailabilityStateMachine : NSObject <SRUIFStateMachineDelegate, RadiosPreferencesDelegate>

@property (weak, nonatomic) id<AFUINetworkAvailabilityStateMachineDelegate> delegate;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property (retain, nonatomic) SRUIFStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)airplaneModeChanged;
- (long long)_state;
- (void).cxx_destruct;
- (id)_stateMachine;
- (id)initWithDelegate:(id)a0;
- (void)_performTransitionForEvent:(long long)a0;
- (void)_siriNetworkAvailabilityDidChange:(unsigned long long)a0;
- (void)siriNetworkAvailabilityDidChange;
- (id)stateMachine:(id)a0 descriptionForEvent:(long long)a1;
- (void)stateMachine:(id)a0 didTransitionFromState:(long long)a1 forEvent:(long long)a2;

@end
