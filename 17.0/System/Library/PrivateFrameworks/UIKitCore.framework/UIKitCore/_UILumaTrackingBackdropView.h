@protocol _UILumaTrackingBackdropViewGroupDelegate, _UILumaTrackingBackdropViewDelegate;

@interface _UILumaTrackingBackdropView : UIView {
    id<_UILumaTrackingBackdropViewGroupDelegate> _groupDelegate;
    unsigned long long _backgroundLuminanceLevel;
}

@property (readonly, weak, nonatomic) id<_UILumaTrackingBackdropViewDelegate> delegate;
@property (nonatomic) struct { double minimum; double maximum; } transitionBoundaries;
@property (readonly, nonatomic) unsigned long long backgroundLuminanceLevel;
@property (nonatomic, getter=isPaused) BOOL paused;

+ (Class)layerClass;

- (void)backdropLayer:(id)a0 didChangeLuma:(double)a1;
- (void).cxx_destruct;
- (id)_backdropLayer;
- (id)initWithTransitionBoundaries:(struct { double x0; double x1; })a0 delegate:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)unpauseAfterSeedingWithLumaLevel:(unsigned long long)a0;

@end
