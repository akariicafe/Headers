@class NSString, SBUIAnimationController;
@protocol BSInvalidatable;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {
    SBUIAnimationController *_animation;
    id<BSInvalidatable> _displayLayoutTransitionAssertion;
    id<BSInvalidatable> _eventBufferingAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (void)_willBegin;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (id)initWithTransitionRequest:(id)a0;
- (void).cxx_destruct;
- (void)_logForInterruptAttemptReason:(id)a0;
- (void)_willInterruptWithReason:(id)a0;
- (void)animationControllerDidFinishAnimation:(id)a0;
- (void)_performStandardPresentationAnimated:(BOOL)a0;

@end
