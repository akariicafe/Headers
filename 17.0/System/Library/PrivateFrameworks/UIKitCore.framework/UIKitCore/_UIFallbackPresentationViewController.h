@class _UIFallbackPresentationWindow, UIWindow;

@interface _UIFallbackPresentationViewController : UIApplicationRotationFollowingController {
    _UIFallbackPresentationWindow *_presentationWindow;
}

@property (nonatomic) BOOL hasPreservedKeyboardInputViews;
@property (nonatomic) BOOL hasDismissCompletionHandler;
@property (retain, nonatomic) UIWindow *rotationDecider;
@property (copy, nonatomic) id /* block */ presentationPreparationBlock;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_dismissViewControllerWithTransition:(int)a0 from:(id)a1 completion:(id /* block */)a2;
- (void)_preparePresentationControllerForPresenting:(id)a0;
- (void)_presentViewController:(id)a0 sendingView:(id)a1 animated:(BOOL)a2;
- (void)_preserveInputViewsAnimated:(BOOL)a0;
- (void)_restoreInputViewsAnimated:(BOOL)a0;

@end
