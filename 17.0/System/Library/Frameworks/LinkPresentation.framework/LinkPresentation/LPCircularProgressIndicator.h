@class LPCircularProgressIndicatorStyle, CAShapeLayer;

@interface LPCircularProgressIndicator : UIView {
    LPCircularProgressIndicatorStyle *_style;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_progressLayer;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updatePaths;
- (id)initWithHost:(id)a0 style:(id)a1;

@end
