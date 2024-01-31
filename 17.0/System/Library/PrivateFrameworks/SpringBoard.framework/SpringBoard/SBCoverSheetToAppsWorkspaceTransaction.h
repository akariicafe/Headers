@class SBDismissOverlaysAnimationController, SBAutoPIPWorkspaceTransaction, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBDismissOverlaysAnimationController *_dismissOverlaysAnimationController;
    SBTransientOverlayDismissAllWorkspaceTransaction *_transientOverlayTransaction;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
}

@property (nonatomic) BOOL preservesBanners;

- (void)_didComplete;
- (void)_begin;
- (void)_dismissOverlaysIfNeeded;
- (void)dealloc;
- (unsigned long long)_dismissOverlaysOptions;
- (id)initWithTransitionRequest:(id)a0;
- (void)_autoPIPIfNeeded;
- (void).cxx_destruct;

@end
