@class NSMutableSet, NSMapTable;

@interface SBAppClipOverlayCoordinator : NSObject {
    NSMutableSet *_overlayViewControllers;
    NSMapTable *_participantForViewController;
}

- (id)init;
- (void).cxx_destruct;
- (id)_existingOverlayViewControllerForWebClipIdentifier:(id)a0;
- (id)overlayViewControllerForBundleIdentifier:(id)a0 webClipIdentifier:(id)a1 participant:(id)a2;
- (void)participant:(id)a0 didSurrenderViewController:(id)a1;

@end
