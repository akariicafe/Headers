@class UIScrollView, BSSimpleAssertion, UIInputViewSetNotificationInfo;

@interface UIScrollToDismissSupport : UIKeyboardMotionSupport <UIScrollViewIntersectionDelegate> {
    UIScrollView *_scrollViewForTransition;
    BOOL _scrollViewShowsHorizontalScrollIndicator;
    BOOL _scrollViewTransitionFinishing;
    BSSimpleAssertion *_interfaceAutorotationDisabledAssertion;
    struct CGPoint { double x; double y; } _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
}

- (void)finishScrollViewTransition;
- (void)updateScrollViewContentInsetBottom:(double)a0;
- (id)cancelNotificationsForMode:(unsigned long long)a0;
- (void)scrollView:(id)a0 didFinishPanGesture:(id)a1;
- (void)_updateKeyboardLayoutGuideForScrollTransitionWithSize:(struct CGSize { double x0; double x1; })a0 hostFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (void)hideScrollViewHorizontalScrollIndicator:(BOOL)a0;
- (void)finishScrollViewTransitionForController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })addPaddingToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)completeKeyboardDismiss:(unsigned long long)a0 withDuration:(double)a1;
- (void).cxx_destruct;
- (void)completedPlacementFrom:(id)a0 to:(id)a1 forController:(id)a2;
- (id)_infoForMatchMove;
- (void)setInterfaceAutorotationDisabled:(BOOL)a0 forController:(id)a1;
- (void)scrollView:(id)a0 didPanWithGesture:(id)a1;

@end
