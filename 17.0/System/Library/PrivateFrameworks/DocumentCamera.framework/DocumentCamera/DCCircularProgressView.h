@class NSProgress, CAShapeLayer;

@interface DCCircularProgressView : UIView

@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) NSProgress *observedProgress;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (struct CGPath { } *)newPathForProgress:(double)a0;

@end
