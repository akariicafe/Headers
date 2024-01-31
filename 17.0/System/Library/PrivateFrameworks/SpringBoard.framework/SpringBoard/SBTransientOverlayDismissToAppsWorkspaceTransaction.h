@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction

+ (BOOL)isValidForTransitionRequest:(id)a0;

- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_sendActivationResultWithError:(id)a0;
- (void)_begin;
- (BOOL)canInterruptForTransitionRequest:(id)a0;

@end
