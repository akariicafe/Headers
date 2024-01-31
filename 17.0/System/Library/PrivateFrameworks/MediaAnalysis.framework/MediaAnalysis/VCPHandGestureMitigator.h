@interface VCPHandGestureMitigator : NSObject

@property int rotationInDegrees;
@property float minHandSize;

+ (float)getFaceExtensionRatio;
+ (float)getGestureTypeConsistencyLookBackDuration;
+ (float)getHandMotionLookBackDuration;
+ (float)getMinHandFaceRatio;
+ (float)getMinTiltingAngle;
+ (float)getMinTiltingThumbAngle;
+ (float)getPalmMoveDistanceThreshold;
+ (float)getPalmScaleChangeThreshold;

- (id)init;
- (BOOL)checkHandGestureJitter:(id)a0 forHand:(id)a1;
- (void)adjustGestureForHand:(id)a0 withFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)checkHandGestureGlobalMotion:(id)a0 forHand:(id)a1;
- (BOOL)checkHandGestureTemporalInconsistency:(id)a0 forHand:(id)a1;
- (BOOL)handInMitigationQuadrant:(id)a0 withFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)handPalmFacingCamera:(id)a0 rotationInDegrees:(int)a1 useTips:(BOOL)a2;
- (BOOL)handTouchFace:(id)a0 andFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotationInDegrees:(int)a2;
- (BOOL)handsOverlap:(id)a0 pairedHand:(id)a1;
- (BOOL)handsTooClose:(id)a0 pairedHand:(id)a1;
- (int)mitigate:(id)a0 rightHand:(id)a1 featureProvider:(id)a2 faceRects:(id)a3;
- (int)mitigateHand:(id)a0 handKey:(id)a1 pairedHand:(id)a2 featureProvider:(id)a3 faceRects:(id)a4;
- (BOOL)mitigateWithFingerOpennessForHand:(id)a0;
- (BOOL)mitigateWithFingerTiltingForHand:(id)a0;

@end
