@class CLKUIColoringImageView;

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView {
    BOOL _didDrawOnce;
}

@property (retain, nonatomic) CLKUIColoringImageView *fillFractionRing;
@property (nonatomic) float fillFraction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)ringColor;
- (void)_applyForegroundAlpha;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)updateRingWithRingDescription:(id)a0;
- (void)updateRingWithRingDescription:(id)a0 backgroundRingAlpha:(double)a1;

@end
