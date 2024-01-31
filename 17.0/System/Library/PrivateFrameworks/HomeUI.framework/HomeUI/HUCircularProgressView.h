@class UIColor, CAShapeLayer;

@interface HUCircularProgressView : UIView

@property (nonatomic) double startAngle;
@property (nonatomic) double endAngle;
@property (retain, nonatomic) CAShapeLayer *progressShapeLayer;
@property (retain, nonatomic) CAShapeLayer *baseLayer;
@property (nonatomic) double fromValue;
@property (nonatomic) BOOL progressFillCounterClockwise;
@property (nonatomic) double baseLayerStrokeLineWidth;
@property (retain, nonatomic) UIColor *baseLayerStrokeLineColor;
@property (nonatomic) double progressLayerStrokeLineWidth;
@property (retain, nonatomic) UIColor *progressLayerStrokeLineColor;
@property (nonatomic) unsigned long long lineCapStyle;
@property (nonatomic) unsigned long long progressBarFillDirection;
@property (nonatomic) BOOL removeProgressBarOnCompletion;
@property (nonatomic) double avatarDiameter;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithRadius:(double)a0;
- (id)_lineCapStyle;
- (id)_progressBarFillDirection;
- (id)initWithRadius:(double)a0 startAngle:(double)a1 endAngle:(double)a2 progress:(double)a3;
- (void)updateProgressBy:(double)a0 animationDuration:(float)a1;
- (void)updateProgressTo:(double)a0 animationDuration:(float)a1;

@end
