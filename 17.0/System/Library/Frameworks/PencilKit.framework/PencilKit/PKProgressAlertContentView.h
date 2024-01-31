@class _PKAnimatableBorderCornerRadiusView, _PKPathView;

@interface PKProgressAlertContentView : UIView {
    _PKAnimatableBorderCornerRadiusView *_outerRingView;
    _PKPathView *_innerPieView;
}

@property (nonatomic) double progress;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_shapeLayerPathForProgress:(double)a0;

@end
