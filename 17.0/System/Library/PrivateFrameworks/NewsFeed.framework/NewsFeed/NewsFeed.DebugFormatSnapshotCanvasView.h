@interface NewsFeed.DebugFormatSnapshotCanvasView : UIView <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ toolbarItems;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ _selectedSnapshotView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_rotateGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_translateGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_zoomGesture;
    void /* unknown type, empty encoding */ rotateState;
    void /* unknown type, empty encoding */ translateState;
    void /* unknown type, empty encoding */ zoomState;
    void /* unknown type, empty encoding */ hiddenSlider;
    void /* unknown type, empty encoding */ depthSlider;
    void /* unknown type, empty encoding */ snapshots;
    void /* unknown type, empty encoding */ snapshotTransform;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)doDepthChangedWithSender:(id)a0;
- (void)doHiddenChangedWithSender:(id)a0;
- (void)doPerspectiveWithSender:(id)a0;
- (void)doRotateWithGesture:(id)a0;
- (void)doTranslateWithGesture:(id)a0;
- (void)doZoomWithGesture:(id)a0;

@end
