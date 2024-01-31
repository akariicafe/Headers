@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {
    SBApplicationSceneEntity *_applicationSceneEntity;
}

@property (copy, nonatomic) id /* block */ postSceneUpdateHandler;

- (void)_begin;
- (void).cxx_destruct;
- (id)initWithApplicationSceneEntity:(id)a0 transitionRequest:(id)a1;

@end
