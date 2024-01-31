@class NSLayoutConstraint, _TipMaskView, UIView;

@interface MUFeatureDiscoveryAnnotationView : UIView {
    NSLayoutConstraint *_topLayoutConstraint;
}

@property (retain, nonatomic) _TipMaskView *tipMaskView;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) double arrowOffset;
@property (readonly, nonatomic) UIView *backgroundView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL showBubbleIndicator;
@property (nonatomic) BOOL floatingIndicator;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)arrowHeight;
- (void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 leadingEdge:(BOOL)a3 isVertical:(BOOL)a4;
- (void).cxx_destruct;
- (double)arrowBase;
- (void)layoutSubviews;
- (void)_updateShapeLayerPath;
- (void)_setupSubviews;
- (void)_updateUI;
- (void)_addArrowCurveToPath:(id)a0 direction:(unsigned long long)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3 peakPoint:(struct CGPoint { double x0; double x1; })a4;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
