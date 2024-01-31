@interface _UIFormSheetPresentationController : _UISheetPresentationController {
    BOOL _layoutStateShouldAvoidKeyboard;
    double _keyboardYOrigin;
}

+ (long long)_initialMode;

- (void)dismissalTransitionWillBegin;
- (BOOL)_shouldHideBottomCorner;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (void)_changeLayoutModeToAvoidKeyboard:(BOOL)a0 withOrigin:(double)a1;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (BOOL)shouldSubscribeToKeyboardNotifications;
- (void)_keyboardWillShow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)_defaultPresentationStyleForTraitCollection:(id)a0;
- (void)presentationTransitionWillBegin;
- (void)_keyboardWillHide:(id)a0;

@end
