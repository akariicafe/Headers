@class UIViewController, NSLayoutConstraint;

@interface MUFixedHeightAwareViewController : UIViewController {
    NSLayoutConstraint *_heightConstraint;
    UIViewController *_childVC;
}

- (id)initWithViewController:(id)a0;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_setupChildVC;

@end
