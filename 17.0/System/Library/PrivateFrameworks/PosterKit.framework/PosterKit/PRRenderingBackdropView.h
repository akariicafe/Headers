@class CASpringAnimation, CADisplayLink;

@interface PRRenderingBackdropView : PRRenderingView {
    CADisplayLink *_displayLink;
    double _backlightProgressFromValue;
    double _backlightProgressAnimationStartTimestamp;
    CASpringAnimation *_backlightProgressSpringAnimation;
}

@property (nonatomic) double targetBacklightProgress;
@property (readonly, nonatomic) double backlightProgress;
@property (readonly, nonatomic) double linearBacklightProgress;

- (void)_displayLinkFired:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTargetBacklightProgress:(double)a0 animated:(BOOL)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0 scene:(id)a1;

@end
