@class UIColor, CAShapeLayer;

@interface VSCircularProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *indeterminateLayer;
@property (retain, nonatomic) CAShapeLayer *centerLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *progressBackgroundLayer;
@property (nonatomic) double progressWidth;
@property (nonatomic) double indeterminateWidth;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (retain, nonatomic) UIColor *progressFillColor;
@property (retain, nonatomic) UIColor *progressBgColor;
@property (nonatomic) double progress;
@property (nonatomic) double centerSquareWidth;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_startIndeterminateAnimation;
- (void)_addIndeterminateLayer;
- (void)_addProgressLayer;
- (void)_configureProgress:(BOOL)a0;
- (id)_indeterminatePath;
- (id)_progressPath;
- (void)_removeIndeterminateLayer;
- (void)_removeProgressLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressFrame;

@end
