@class NSString, _UIDatePickerOverlayPresentation;

@interface _UIDatePickerContainerViewController : UIViewController <_UIPassthroughScrollInteractionDelegate>

@property (copy, nonatomic) id /* block */ pendingKeyboardAdjustment;
@property (nonatomic) double keyboardAdjustmentOffset;
@property (readonly, nonatomic) _UIDatePickerOverlayPresentation *presentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)dealloc;
- (id)initWithPresentation:(id)a0;
- (id)keyCommands;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (BOOL)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
- (void)_didReceiveEscapeKey:(id)a0;
- (void)didChangeKeyboardAvoidanceAdjustmentDeferral;
- (void)keyboardFrameWillChange:(id)a0;

@end
