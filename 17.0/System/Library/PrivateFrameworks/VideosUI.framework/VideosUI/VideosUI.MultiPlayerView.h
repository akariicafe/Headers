@interface VideosUI.MultiPlayerView : UIView {
    void /* unknown type, empty encoding */ playerLayout;
    void /* unknown type, empty encoding */ _mode;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ didSelectPlayerViewController;
    void /* unknown type, empty encoding */ didPinchPlayerViewController;
    void /* unknown type, empty encoding */ distribution;
    void /* unknown type, empty encoding */ layoutEngine;
    void /* unknown type, empty encoding */ _focusedPlayerViewController;
    void /* unknown type, empty encoding */ animatingViews;
    void /* unknown type, empty encoding */ debounceTimer;
    void /* unknown type, empty encoding */ animationDebounceSubject;
    void /* unknown type, empty encoding */ initialPinchFrame;
    void /* unknown type, empty encoding */ scaleRange;
    void /* unknown type, empty encoding */ gestureView;
    void /* unknown type, empty encoding */ gestureInitialLocation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGesture;
    void /* unknown type, empty encoding */ maxPanVelocity;
    void /* unknown type, empty encoding */ patternGenerator;
    void /* unknown type, empty encoding */ containerViews;
    void /* unknown type, empty encoding */ shouldMaximizeScreenUsage;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)onPanGesture:(id)a0;
- (void)viewPinchedWithGesture:(id)a0;

@end
