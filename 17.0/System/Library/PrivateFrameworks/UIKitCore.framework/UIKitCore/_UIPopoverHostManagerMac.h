@class NSString;

@interface _UIPopoverHostManagerMac : NSObject <_UIPopoverHostManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createPopoverWithConfiguration:(id)a0;
- (void)closePopoverWithIdentifier:(id)a0 configuration:(id)a1;
- (void)detachPopoverWithIdentifier:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 withCompletionCallback:(id /* block */)a2;
- (id)popoverSceneForPopoverWithIdentifier:(id)a0;
- (BOOL)shouldOccludeDuringPresentationForPopoverWithIdentifier:(id)a0;
- (void)updatePopoverWithIdentifier:(id)a0 configuration:(id)a1;
- (void)updateSupportsDetach:(BOOL)a0 forPopoverWithIdentifier:(id)a1;
- (void)updateUserInterfaceStyle:(long long)a0 forPopoverWithIdentifier:(id)a1;
- (BOOL)useDefaultPreferredAnimationControllerForDismissalWithPopoverWithIdentifier:(id)a0;
- (BOOL)useDefaultPreferredAnimationControllerForPresentationWithPopoverWithIdentifier:(id)a0;
- (BOOL)useDefaultPresentationViewForPopoverWithIdentifier:(id)a0;

@end
