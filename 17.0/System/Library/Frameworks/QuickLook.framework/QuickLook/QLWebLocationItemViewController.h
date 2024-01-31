@class NSLayoutConstraint, WKWebView, UIView;

@interface QLWebLocationItemViewController : QLItemViewController {
    WKWebView *_webView;
    id /* block */ _loadingHandler;
    UIView *_locationViewContainer;
    UIView *_locationView;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

- (void)dealloc;
- (void)loadView;
- (id)scrollView;
- (id)accessoryView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)canSwipeToDismiss;
- (void)previewIsAppearingWithProgress:(double)a0;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canEnterFullScreen;
- (BOOL)canPinchToDismiss;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewDidAppear:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (void)_updateConstraintConstants:(BOOL)a0;

@end
