@class CALayer;

@interface PULayerAnimationGroup : PUTimedAnimationGroup {
    BOOL _areTrackedAnimationsPaused;
}

@property (readonly, nonatomic) CALayer *referenceLayer;

- (id)init;
- (id)initWithReferenceLayer:(id)a0;
- (void).cxx_destruct;
- (void)updateAnimations;
- (double)currentTime;

@end
