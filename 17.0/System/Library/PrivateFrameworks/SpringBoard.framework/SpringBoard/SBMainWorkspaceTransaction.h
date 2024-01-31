@class SBMainWorkspaceTransitionRequest;

@interface SBMainWorkspaceTransaction : SBWorkspaceTransaction

@property (readonly, nonatomic) SBMainWorkspaceTransitionRequest *transitionRequest;

- (void)_didComplete;
- (id)initWithTransitionRequest:(id)a0;

@end
