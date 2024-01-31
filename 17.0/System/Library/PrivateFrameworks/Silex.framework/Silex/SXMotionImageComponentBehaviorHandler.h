@class NSString, UIInterpolatingMotionEffect, UIView;

@interface SXMotionImageComponentBehaviorHandler : SXComponentBehaviorHandler <SXViewportChangeListener>

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIView *motionContentView;
@property (nonatomic) unsigned long long viewHierarchyIndex;
@property (retain, nonatomic) UIInterpolatingMotionEffect *xMotionEffect;
@property (retain, nonatomic) UIInterpolatingMotionEffect *yMotionEffect;
@property (nonatomic) double amplitude;
@property (nonatomic) BOOL windowed;
@property (nonatomic) BOOL horizontal;
@property (nonatomic) BOOL vertical;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)destroyMotionDetection;
- (void)destroyWithBehaviorController:(id)a0;
- (id)initWithComponentView:(id)a0 withBehavior:(id)a1;
- (void)setupMotionDetection;
- (void)setupWithBehaviorController:(id)a0;
- (void)updateEdgeAntialiasingForViewport:(id)a0;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;

@end
