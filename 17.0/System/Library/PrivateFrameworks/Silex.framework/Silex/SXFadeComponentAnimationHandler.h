@interface SXFadeComponentAnimationHandler : SXComponentAnimationHandler

- (void)startAnimation;
- (void)finishAnimation;
- (double)initialAlpha;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)a0;

@end
