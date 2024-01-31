@class UIColor;

@interface SFCircleProgressView : UIView

@property (nonatomic) long long progressStartPoint;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) BOOL usesRoundedLineCap;
@property (nonatomic) BOOL showProgressTray;
@property (nonatomic) double progress;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)animateProgressCompletedWithCompletion:(id /* block */)a0;
- (double)progressPresentationValue;
- (void)setProgress:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setProgress:(double)a0 animated:(BOOL)a1 forced:(BOOL)a2 completion:(id /* block */)a3;

@end
