@class TUAnimationPointFunction, TUAnimationSizeFunction, CAMediaTimingFunction;

@interface TUAnimationRectFunction : NSObject

@property (retain, nonatomic) TUAnimationPointFunction *originFunction;
@property (retain, nonatomic) TUAnimationSizeFunction *sizeFunction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startValue;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endValue;
@property (nonatomic) double speed;

- (void).cxx_destruct;
- (void)_reloadFunctions;
- (id)initWithTimingFunction:(id)a0 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 speed:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })solveForTime:(double)a0;

@end
