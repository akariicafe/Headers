@interface BSUIBackdropView : _UIBackdropView {
    double _transitionProgress;
    double _initialScale;
    double _finalScale;
}

@property (nonatomic) double scaleForNoBlur;
@property (nonatomic) double rasterizationScale;

- (void)transitionComplete;
- (void)applySettings:(id)a0;
- (void)transitionIncrementallyToSettings:(id)a0 weighting:(double)a1;

@end
