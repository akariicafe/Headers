@class NSSet, ASVRubberBand;
@protocol ASVTouch, ASVTwoFingerGestureDelegate;

@interface ASVTwoFingerGesture : ASVGesture

@property (retain, nonatomic) ASVRubberBand *rubberBand;
@property (nonatomic) float scaleOvershoot;
@property (nonatomic) float scaleFactor;
@property (retain, nonatomic) id<ASVTouch> firstTouch;
@property (retain, nonatomic) id<ASVTouch> secondTouch;
@property (nonatomic) void /* unknown type, empty encoding */ initialFirstTouchLocation;
@property (nonatomic) void /* unknown type, empty encoding */ initialSecondTouchLocation;
@property (nonatomic) void /* unknown type, empty encoding */ initialMidPoint;
@property (nonatomic) BOOL panThresholdPassed;
@property (nonatomic) BOOL rotationThresholdPassed;
@property (nonatomic) BOOL levitationThresholdPassed;
@property (nonatomic) float initialFingerAngle;
@property (nonatomic) float lastFingerAngle;
@property (nonatomic) BOOL scaleThresholdPassed;
@property (nonatomic) float initialDistanceBetweenFingers;
@property (nonatomic) float baseDistanceBetweenFingers;
@property (nonatomic) float assetBaseScale;
@property (nonatomic) float lastAssetScale;
@property (nonatomic) float minScale;
@property (nonatomic) float maxScale;
@property (retain, nonatomic) NSSet *snapScalesSet;
@property (weak, nonatomic) id<ASVTwoFingerGestureDelegate> delegate;

- (void).cxx_destruct;
- (void)finishGesture;
- (id)initWithFirstTouch:(id)a0 secondTouch:(id)a1 dataSource:(id)a2 delegate:(id)a3;
- (BOOL)scaleIsWithinSnapRange:(float)a0 snapTarget:(float)a1;
- (void)updateGesture;
- (void)updatePanWithFirstTouchLocation:(id)a0 secondTouchLocation:(SEL)a1 midPoint:(void /* unknown type, empty encoding */)a2;
- (void)updateRotationWithSpan:(SEL)a0;
- (void)updateRubberBand;
- (void)updateScalingWithSpan:(SEL)a0;

@end
