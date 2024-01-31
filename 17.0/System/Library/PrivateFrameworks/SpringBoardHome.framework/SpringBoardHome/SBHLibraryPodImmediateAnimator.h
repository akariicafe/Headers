@class SBFolderController, UIView;

@interface SBHLibraryPodImmediateAnimator : SBIconAnimator {
    SBFolderController *_innerFolderController;
    UIView *_searchBar;
    BOOL _animationComplete;
}

- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)cleanup;
- (void).cxx_destruct;
- (void)_setAnimationFraction:(double)a0;
- (void)_configureForFraction:(double)a0;
- (id)initWithAnimationContainer:(id)a0 innerFolderController:(id)a1 searchBar:(id)a2;

@end
