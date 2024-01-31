@class NSString, SRUIFStateMachine, NSSet, SRUIFSiriSessionStateSignpostLogger;
@protocol SRUIFSiriSessionStateHandlerDelegate;

@interface SRUIFSiriSessionStateHandler : NSObject <SRUIFStateMachineDelegate> {
    SRUIFStateMachine *_stateMachine;
    NSSet *_siriSessionPassthroughEvents;
    SRUIFSiriSessionStateSignpostLogger *_signpostLogger;
}

@property (weak, nonatomic) id<SRUIFSiriSessionStateHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)state;
- (void)performTransitionForEvent:(long long)a0;
- (void).cxx_destruct;
- (id)_stateMachine;
- (id)initWithDelegate:(id)a0;
- (void)performTransitionForEvent:(long long)a0 eventTimeStamp:(double)a1;
- (id)stateMachine:(id)a0 descriptionForEvent:(long long)a1;
- (void)stateMachine:(id)a0 didTransitionFromState:(long long)a1 forEvent:(long long)a2;
- (void)stateMachine:(id)a0 didTransitionFromState:(long long)a1 forEvent:(long long)a2 eventTimeStamp:(double)a3;
- (void)_reportTransitionFromState:(long long)a0 toState:(long long)a1 forEvent:(long long)a2 machAbsoluteTime:(double)a3;

@end
