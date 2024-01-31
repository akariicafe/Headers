@class NSMutableSet, NSHashTable, NSMutableArray;

@interface SBHIconViewContextMenuStateController : NSObject {
    NSHashTable *_iconViews;
    NSMutableSet *_presentedWidgetsBundleIdentifiers;
    NSHashTable *_iconViewsPresentingContextMenues;
    NSHashTable *_iconViewsAnimatingContextMenues;
    NSMutableArray *_pendingIconAnimationCompletionBlocks;
}

@property (class, readonly, nonatomic) SBHIconViewContextMenuStateController *sharedInstance;

- (void)iconViewWillDismissContextMenu:(id)a0;
- (void)noteFolderControllerWillClose:(id)a0;
- (void)iconViewWillPresentContextMenu:(id)a0;
- (void)iconViewWillAnimateContextMenu:(id)a0;
- (void)_firePendingIconAnimationBlocks;
- (id)init;
- (void)registerIconView:(id)a0;
- (BOOL)areAnyIconViewContextMenusShowing;
- (void)containerViewDidScrollHiddenIconViewAway:(id)a0;
- (BOOL)areAnyIconViewContextMenusAnimating;
- (void)earlyTerminateAnyContextMenuAnimations;
- (void).cxx_destruct;
- (void)performAfterContextMenuAnimationsHaveCompleted:(id /* block */)a0;
- (void)unregisterIconView:(id)a0;
- (void)dismissAppIconForceTouchControllers:(id /* block */)a0;
- (void)iconViewDidAnimateContextMenu:(id)a0;

@end
