@class NSString, CADisplayLink, UILongPressGestureRecognizer, UITapGestureRecognizer, PKPhysicsWorld, PKPhysicsBody, UIPanGestureRecognizer, NSMutableArray, NSObject;
@protocol OS_dispatch_source, SUUIPhysicalCirclesDelegate, SUUIPhysicalCirclesDataSource;

@interface SUUIPhysicalCirclesView : UIView <PKPhysicsContactDelegate> {
    NSObject<OS_dispatch_source> *_circleLoadStepTimer;
    NSMutableArray *_circleBodies;
    CADisplayLink *_displayLink;
    PKPhysicsBody *_groundBody;
    long long _longPressCircleIndex;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _maximumFrequencyDistance;
    double _minimumFrequencyDistance;
    UIPanGestureRecognizer *_panRecognizer;
    void *_physicsKitFramework;
    PKPhysicsWorld *_physicsWorld;
    NSMutableArray *_repellors;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak, nonatomic) id<SUUIPhysicalCirclesDataSource> dataSource;
@property (weak, nonatomic) id<SUUIPhysicalCirclesDelegate> delegate;
@property (nonatomic) struct SUUIPhysicalCircleConstants { double circleDensity; double circleLinearDamping; double circleMaximumDiameter; double circleMinimumDiameter; double springMaximumFrequency; double springMinimumFrequency; double springDamping; double translationForceMultiplier; } constants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_displayLinkTick:(id)a0;
- (void).cxx_destruct;
- (void)_panGestureAction:(id)a0;
- (void)_startFluctuationForCircleView:(id)a0;
- (void)removeRepellor:(id)a0;
- (BOOL)_addNextMissingSpringJoint;
- (void)_addSpringForCircleBody:(id)a0;
- (void)_calculateFrequencyScaling;
- (void)_cancelStepTimers;
- (id)_circleBodyWithView:(id)a0;
- (long long)_circleIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_initialPositionForCircleIndex:(long long)a0 view:(id)a1;
- (void)_loadCirclesWithStartIndex:(long long)a0 totalCount:(long long)a1;
- (void)_longPressAction:(id)a0;
- (void)_reloadDidFinish;
- (void)_removeCircleBodies:(id)a0;
- (void)_stopFluctuationForCircleView:(id)a0;
- (void)_tapGestureAction:(id)a0;
- (void)addCirclesWithCount:(long long)a0;
- (id)addRepellorWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 bufferSize:(double)a2;
- (id)circleViewAtIndex:(long long)a0;
- (void)removeAllCirclesAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)removeAllRepellors;
- (void)removeCircleAtIndex:(long long)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)removeCirclesInIndexSet:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)removeCirclesInIndexSet:(id)a0 byAnimatingToPoint:(struct CGPoint { double x0; double x1; })a1 delay:(double)a2 completionBlock:(id /* block */)a3;
- (void)setSize:(struct CGSize { double x0; double x1; })a0 forCircleAtIndex:(long long)a1;
- (void)startPhysics;
- (void)stopPhysics;

@end
