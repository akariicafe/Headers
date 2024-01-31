@class UIColor;

@interface _UICircleProgressLayer : CALayer {
    double _oneFullRotation;
}

@property (nonatomic) long long progressStartPoint;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) BOOL showProgressTray;
@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)initWithLayer:(id)a0;

@end
