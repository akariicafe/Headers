@class GKStateMachine;

@interface GKState : NSObject {
    GKStateMachine *_stateMachine;
}

@property (readonly, weak, nonatomic) GKStateMachine *stateMachine;

+ (id)state;

- (id)init;
- (void).cxx_destruct;
- (void)didEnterWithPreviousState:(id)a0;
- (void)willExitWithNextState:(id)a0;
- (void)updateWithDeltaTime:(double)a0;
- (void)_setStateMachine:(id)a0;
- (BOOL)isValidNextState:(Class)a0;

@end
