@class NSString, HMDHierarchicalStateMachine;

@interface HMDHierarchicalStateMachineState : CUState <HMFLogging>

@property (weak, nonatomic) HMDHierarchicalStateMachine *hsm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 parent:(id)a1;
- (long long)handleEvent:(id)a0;
- (long long)_internalEventHandler:(id)a0;
- (void)_registerForEventHandler;
- (void)handleEnterEvent:(id)a0;
- (void)handleExitEvent:(id)a0;
- (void)onInitialTransition:(id)a0;

@end
