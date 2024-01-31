@class UIView, SBFullscreenZoomView;

@interface SBClippedZoomView : SBZoomView {
    SBFullscreenZoomView *_fullscreenZoomViewToClip;
    UIView *_clippingView;
}

- (void).cxx_destruct;
- (id)initWithClippingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fullscreenZoomView:(id)a1;

@end
