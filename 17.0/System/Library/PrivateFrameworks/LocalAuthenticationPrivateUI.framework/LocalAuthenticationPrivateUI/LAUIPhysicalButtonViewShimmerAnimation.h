@class CAGradientLayer;

@interface LAUIPhysicalButtonViewShimmerAnimation : LAUIPhysicalButtonViewAnimation {
    CAGradientLayer *_shimmerGradient;
}

- (void).cxx_destruct;
- (double)duration;
- (void)beginWithDelay:(double)a0;
- (void)_beginReducedMotionAnimationWithDelay:(double)a0;
- (void)_beginRegularMotionAnimationWithDelay:(double)a0;
- (void)_endShimmerAnimation;
- (BOOL)_isReducedMotionEnabled;
- (void)endImmediately;

@end
