@class SBWorkspaceTransitionRequest;

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {
    SBWorkspaceTransitionRequest *_transitionRequest;
}

@property (readonly, nonatomic) unsigned long long dismissOptions;

+ (BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)a0;
+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)a0;

- (id)initWithTransitionContextProvider:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)_startAnimation;
- (id)animationSettings;
- (void).cxx_destruct;
- (id)initWithTransitionContextProvider:(id)a0 options:(unsigned long long)a1;

@end
