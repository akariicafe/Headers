@interface AXWatchRemoteScreenUI.AXTwiceCompanionWatchView : UIView {
    void /* unknown type, empty encoding */ isCrownOrientationOnRightSide;
    void /* unknown type, empty encoding */ leftPadding;
    void /* unknown type, empty encoding */ leftConstraint;
    void /* unknown type, empty encoding */ rightPadding;
    void /* unknown type, empty encoding */ rightContraint;
    void /* unknown type, empty encoding */ watchChromeView;
    void /* unknown type, empty encoding */ watchCrownButtonTopConstraint;
    void /* unknown type, empty encoding */ watchCrownButtonHorizontalConstraint;
    void /* unknown type, empty encoding */ watchCrownButton;
    void /* unknown type, empty encoding */ swipeUpCrownGesture;
    void /* unknown type, empty encoding */ swipeDownCrownGesture;
    void /* unknown type, empty encoding */ watchSideButtonTopConstraint;
    void /* unknown type, empty encoding */ watchSideButtonHorizontalConstraint;
    void /* unknown type, empty encoding */ watchSideButton;
    void /* unknown type, empty encoding */ watchRendererViewLeftConstraint;
    void /* unknown type, empty encoding */ watchRendererViewRightConstraint;
    void /* unknown type, empty encoding */ watchRendererView;
    void /* unknown type, empty encoding */ mirroringLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_watchDeviceSpinner;
    void /* unknown type, empty encoding */ hasStingSupport;
    void /* unknown type, empty encoding */ watchStingButtonTopConstraint;
    void /* unknown type, empty encoding */ watchStingButtonHorizontalConstraint;
    void /* unknown type, empty encoding */ watchStingButton;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)digitalCrownSwipeUpWithGesture:(id)a0;
- (BOOL)tripleDigitalCrownButtonTapped:(id)a0;
- (BOOL)doubleDigitalCrownButtonTapped:(id)a0;
- (BOOL)digitalCrownAXLongPressed:(id)a0;
- (BOOL)digitalCrownButtonScrollDown:(id)a0;
- (BOOL)digitalCrownButtonScrollUp:(id)a0;
- (void)digitalCrownButtonTappedWithSender:(id)a0;
- (BOOL)digitalCrownDirectTouch:(id)a0;
- (void)digitalCrownLongPressedWithGesture:(id)a0;
- (void)digitalCrownSwipeDownWithGesture:(id)a0;
- (void)doubleCrownButtonTappedWithSender:(id)a0;
- (void)handleLongPressGestureWithGesture:(id)a0 endBlock:(id /* block */)a1;
- (BOOL)sideButtonAXLongPressed:(id)a0;
- (void)sideButtonLongPressedWithGesture:(id)a0;
- (void)sideButtonTappedWithSender:(id)a0;
- (BOOL)stingButtonAXKeycord:(id)a0;
- (BOOL)stingButtonAXLongPressed:(id)a0;
- (void)stingButtonLongPressedWithGesture:(id)a0;
- (void)stingButtonTappedWithSender:(id)a0;
- (void)tripleCrownButtonTappedWithSender:(id)a0;

@end
