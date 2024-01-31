@class UIScrollView, UIViewController, RUIScrollViewWeakLayoutObserver;

@interface RUIScrollableWelcomeController : OBWelcomeController <_UIScrollViewLayoutObserver> {
    RUIScrollViewWeakLayoutObserver *_scrollViewLayoutObserver;
}

@property (retain, nonatomic) UIViewController *contentController;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (nonatomic) BOOL shouldUseCustomButtonTray;
@property (nonatomic) BOOL shouldAdjustScrollViewInsetForKeyboard;
@property (nonatomic) BOOL shouldAdjustButtonTrayForKeyboard;

- (void)_setupScrollView;
- (id)scrollView;
- (void).cxx_destruct;
- (void)_inlineButtonTray;
- (void)_layoutButtonTray;
- (void)_updateHeaderTopOffsetConstraint;

@end
