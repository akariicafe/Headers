@class NSString, UIBezierPath, MTLumaDodgePillView;

@interface SBAppResizeGrabberView : UIView <MTLumaDodgePillBackgroundLuminanceObserver, UIPointerInteractionDelegate> {
    MTLumaDodgePillView *_pillView;
    unsigned long long _corner;
    UIBezierPath *_maskPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (id)initWithCorner:(unsigned long long)a0;
- (id)_resizeGrabberPathForSize:(struct CGSize { double x0; double x1; })a0 curve:(double)a1 lineWidth:(double)a2 rotation:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
