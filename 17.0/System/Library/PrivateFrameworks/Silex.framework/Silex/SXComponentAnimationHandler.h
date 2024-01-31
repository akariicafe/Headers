@class SXComponentView, SXComponentAnimation;

@interface SXComponentAnimationHandler : NSObject

@property (readonly, nonatomic) SXComponentView *component;
@property (readonly, nonatomic) SXComponentAnimation *animation;
@property (nonatomic) long long state;
@property (readonly, nonatomic) double factor;

- (void)startAnimation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)finishAnimation;
- (BOOL)animationShouldRepeat;
- (id)componentViewToAnimate;
- (double)factorForVisibileBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAbsoluteComponentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithComponent:(id)a0 withAnimation:(id)a1;
- (void)prepareAnimation;
- (double)screenHeightStartOffset;
- (BOOL)shouldFinishAtEndOfScrollView;
- (void)updateAnimationWithFactor:(double)a0;

@end
