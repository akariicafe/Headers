@class SBApplicationSceneEntity;

@interface SBPIPSceneContentSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity *_applicationSceneEntity;
}

- (void)_didComplete;
- (void)_begin;
- (void).cxx_destruct;
- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1;

@end
