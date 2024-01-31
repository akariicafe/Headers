@class CUStateMachine, HMDHierarchicalStateMachineState, NSString, NSObject, CUStateEvent;
@protocol OS_dispatch_queue;

@interface HMDHierarchicalStateMachine : HMFObject <HMFLogging>

@property (retain, nonatomic) CUStateMachine *cuStateMachine;
@property (readonly, nonatomic) BOOL allowSelfStateTransitions;
@property (retain, nonatomic) CUStateEvent *eventCausingStateTransition;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak) HMDHierarchicalStateMachineState *currentHSMState;
@property (retain, nonatomic) HMDHierarchicalStateMachineState *initialState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)transitionToState:(id)a0;
- (id)initialState;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setStates:(id)a0;
- (void)dispatchEvent:(id)a0 userInfo:(id)a1;
- (id)stateWithName:(id)a0;
- (void)transitionToState:(id)a0 withEvent:(id)a1;
- (void)setInitialState:(id)a0;
- (void)dispatchEvent:(id)a0;
- (void)getCurrentHSMStateWithCompletionHandler:(id /* block */)a0;
- (id)initWithQueue:(id)a0 allowSelfStateTransitions:(BOOL)a1;
- (void)setHSMInternalCurrentState:(id)a0;

@end
