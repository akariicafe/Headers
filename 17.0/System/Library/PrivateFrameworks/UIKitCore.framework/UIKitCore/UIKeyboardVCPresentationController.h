@interface UIKeyboardVCPresentationController : UIPresentationController

- (BOOL)shouldPresentInFullscreen;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;

@end
