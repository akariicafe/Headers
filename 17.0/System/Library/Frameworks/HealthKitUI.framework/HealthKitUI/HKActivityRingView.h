@class ARUIRingsView, _HKShapeView, ARUIRenderer, HKActivitySummary;

@interface HKActivityRingView : UIView {
    ARUIRingsView *_ringsView;
    ARUIRenderer *_renderer;
    _HKShapeView *_maskView;
}

@property (nonatomic, getter=_ringInsetPercentage, setter=_setRingInsetPercentage:) double ringInsetPercentage;
@property (nonatomic, getter=_emptyRingAlpha, setter=_setEmptyRingAlpha:) double emptyRingAlpha;
@property (nonatomic, getter=_shouldBypassApplicationStateChecking, setter=_setShouldBypassApplicationStateChecking:) BOOL shouldBypassApplicationStateChecking;
@property (retain, nonatomic) HKActivitySummary *activitySummary;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)_snapshotImage;
- (double)_ringDiameter;
- (void)_setActivityRingViewBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderer:(id)a1;
- (void)setActivitySummary:(id)a0 animated:(BOOL)a1;
- (void)_displayIconsForWheelchairUser:(BOOL)a0;
- (void)_setUpAfterInit;
- (void)_setUpRingsView;
- (void)_updateMaskPath;
- (void)_setActivityRingViewBackgroundTransparent:(BOOL)a0;
- (void)_setActivitySummary:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_setRingDiameter:(double)a0 ringInterspacing:(double)a1 ringThickness:(double)a2;
- (void)_updateAndInterpolateRingsViewDiameterForWidth:(double)a0 lowerDirective:(id)a1 higherDirective:(id)a2;
- (void)_updateRingsViewDiameter;
- (void)_updateRingsViewDiameterLegacy;

@end
