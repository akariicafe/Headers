@interface SBRotateScenesWorkspaceTransaction : SBAppToAppWorkspaceTransaction

- (unsigned long long)_concurrentOverlayDismissalOptions;
- (BOOL)_shouldResignActiveForAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;

@end
