@interface CACElementActionsPresentationManager : CACSimpleContentViewManager <CACElementActionsPresentationViewControllerDelegate>

+ (BOOL)canShowElementActionsForElement:(id)a0;

- (BOOL)isOverlay;
- (void)elementActionsPresentationViewController:(id)a0 hideWithCompletion:(id /* block */)a1;
- (void)showElementActionsForElement:(id)a0 usingPortraitUpRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
