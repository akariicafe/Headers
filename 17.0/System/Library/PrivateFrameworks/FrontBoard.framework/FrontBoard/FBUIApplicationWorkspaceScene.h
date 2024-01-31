@class NSMutableSet, NSMutableArray;

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet *_allWatchdogs;
    NSMutableArray *_watchdogStack;
    BOOL _sentSceneCreate;
}

- (void).cxx_destruct;
- (void)_workspaceQueue_invalidate;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned char)a0 transitionContext:(id)a1;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)a0;
- (id)initWithWorkspace:(id)a0 host:(id)a1 settings:(id)a2 clientSettings:(id)a3 fromRemnant:(BOOL)a4;

@end
