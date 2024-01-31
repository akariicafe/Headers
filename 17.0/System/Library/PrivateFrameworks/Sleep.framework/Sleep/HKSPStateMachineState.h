@class NSString, HKSPStateMachine;

@interface HKSPStateMachineState : NSObject <HKSPStateMachineEventHandler, NSCopying>

@property (weak, nonatomic) HKSPStateMachine *stateMachine;
@property (readonly, nonatomic) BOOL isCurrentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didExit;
- (void)didEnter;
- (id)succinctDescriptionBuilder;
- (void)updateState;
- (void)_updateState;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)stateName;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stateIdentifier;
- (id)initWithStateMachine:(id)a0;
- (void)_didEnter;
- (void)_didExit;
- (BOOL)_willEnter;
- (void)_willExit;
- (id)equalsBuilderWithObject:(id)a0;
- (void)willEnter;
- (void)willExit;

@end
