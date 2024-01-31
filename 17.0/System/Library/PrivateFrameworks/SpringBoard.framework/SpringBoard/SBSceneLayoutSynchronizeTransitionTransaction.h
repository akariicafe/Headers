@class NSString;

@interface SBSceneLayoutSynchronizeTransitionTransaction : BSTransaction {
    NSString *_debugName;
}

- (BOOL)_canBeInterrupted;
- (id)init;
- (id)_graphNodeDebugName;
- (id)initWithDebugName:(id)a0;
- (void).cxx_destruct;
- (void)synchronize;

@end
