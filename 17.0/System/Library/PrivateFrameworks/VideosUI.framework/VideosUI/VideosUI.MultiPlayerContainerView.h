@interface VideosUI.MultiPlayerContainerView : UIView {
    void /* unknown type, empty encoding */ controlFadeTimer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controlsView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_volumeIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dimmingView;
    void /* unknown type, empty encoding */ isDimmed;
    void /* unknown type, empty encoding */ isPlayerInset;
    void /* unknown type, empty encoding */ snapshotView;
    void /* unknown type, empty encoding */ onSelect;
    void /* unknown type, empty encoding */ closeHandler;
    void /* unknown type, empty encoding */ fullscreenHandler;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ volumeObserver;
    void /* unknown type, empty encoding */ statusObserver;
    void /* unknown type, empty encoding */ isReadyForDisplayObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_singlePressGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hoverGestureRecognizer;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)onHoverWithGesture:(id)a0;
- (void)singlePressWithGesture:(id)a0;

@end
