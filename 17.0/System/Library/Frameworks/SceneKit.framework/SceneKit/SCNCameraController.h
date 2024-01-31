@class SCNNode, NSTimer;
@protocol SCNCameraControllerDelegate;

@interface SCNCameraController : NSObject {
    struct { void /* unknown type, empty encoding */ angles; void /* unknown type, empty encoding */ initialAbsoluteAngles; struct { void /* unknown type, empty encoding */ columns[4]; } initialTransformWorld; struct { void /* unknown type, empty encoding */ vector; } initialOrientationWorld; } _orientationState;
    struct { void /* unknown type, empty encoding */ start; void /* unknown type, empty encoding */ current; void /* unknown type, empty encoding */ last; } _inputLocation;
    struct { void /* unknown type, empty encoding */ localArcballAdjustement; void /* unknown type, empty encoding */ sphereLocationStart; void /* unknown type, empty encoding */ sphereLocationCurrent; } _arcball;
    struct { BOOL inertiaEnabled; BOOL inertiaRunning; double lastSimulationTime; float friction; float rotationSensitivity; float translationSensitivity; void /* unknown type, empty encoding */ velocity; NSTimer *timer; } _inertia;
    void /* unknown type, empty encoding */ _up;
    void /* unknown type, empty encoding */ _target;
    void /* unknown type, empty encoding */ _minimumAngles;
    void /* unknown type, empty encoding */ _maximumAngles;
    BOOL _handlingInteraction;
    BOOL _drivenBydefaultNavigationCameraController;
}

@property (nonatomic) BOOL drivenByDefaultNavigationCameraController;
@property (nonatomic) void /* unknown type, empty encoding */ simdUp;
@property (nonatomic) void /* unknown type, empty encoding */ simdTarget;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } up;
@property (nonatomic) float verticalMaximumAngle;
@property (nonatomic) float horizontalMaximumAngle;
@property (nonatomic) id<SCNCameraControllerDelegate> delegate;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) long long interactionMode;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } target;
@property (nonatomic) BOOL automaticTarget;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } worldUp;
@property (nonatomic) BOOL inertiaEnabled;
@property (nonatomic) float inertiaFriction;
@property (readonly, nonatomic, getter=isInertiaRunning) BOOL inertiaRunning;
@property (nonatomic) float minimumVerticalAngle;
@property (nonatomic) float maximumVerticalAngle;
@property (nonatomic) float minimumHorizontalAngle;
@property (nonatomic) float maximumHorizontalAngle;

- (id)init;
- (void)dealloc;
- (void)_endDraggingWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateRotation;
- (void)_translateInCameraSpaceByX:(float)a0 Y:(float)a1 Z:(float)a2;
- (void)dollyBy:(float)a0 onScreenPoint:(struct CGPoint { double x0; double x1; })a1 viewport:(struct CGSize { double x0; double x1; })a2;
- (void)_capOrientationAnglesToMaximum;
- (struct { })_convertRotationFromWorldToPointOfView:(struct { })a0;
- (void /* unknown type, empty encoding */)_directionForScreenPoint:(struct CGPoint { double x0; double x1; })a0 viewport:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_isLocationValid:(struct CGPoint { double x0; double x1; })a0 inViewport:(struct CGSize { double x0; double x1; })a1;
- (void /* unknown type, empty encoding */)_mapToSphere:(struct CGPoint { double x0; double x1; })a0 inViewport:(struct CGSize { double x0; double x1; })a1;
- (struct { })_orientationForMode;
- (void /* unknown type, empty encoding */)_orthographicViewSpaceTranslationForZoomAtScreenPoint:(SEL)a0 scaleDelta:(float)a1 viewport:(struct CGSize { double x0; double x1; })a2;
- (void)_resetOrientationState;
- (void)_rotateByX:(float)a0 Y:(float)a1;
- (void)_setInertiaRunning:(BOOL)a0;
- (void /* unknown type, empty encoding */)_targetRelativeToPointOfViewParent;
- (void)_updateArcballOrientation;
- (void)_updateInertiaAtTime:(double)a0;
- (void)beginInteraction:(struct CGPoint { double x0; double x1; })a0 withViewport:(struct CGSize { double x0; double x1; })a1;
- (void)clearRoll;
- (void)continueInteraction:(struct CGPoint { double x0; double x1; })a0 withViewport:(struct CGSize { double x0; double x1; })a1 sensitivity:(double)a2;
- (void)dollyToTarget:(float)a0;
- (void)endInteraction:(struct CGPoint { double x0; double x1; })a0 withViewport:(struct CGSize { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (void)frameNodes:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })lookAtWith:(id)a0 target:(SEL)a1;
- (void)rollAroundTarget:(float)a0;
- (void)rollBy:(float)a0 aroundScreenPoint:(struct CGPoint { double x0; double x1; })a1 viewport:(struct CGSize { double x0; double x1; })a2;
- (void)rollCameraSpaceBy:(float)a0 withPoint:(struct CGPoint { double x0; double x1; })a1 viewport:(struct CGSize { double x0; double x1; })a2;
- (void)rotateByX:(float)a0 Y:(float)a1;
- (void)setPointOfView:(id)a0 updateUpTransform:(BOOL)a1;
- (void)stopInertia;
- (void)translateInCameraSpaceByX:(float)a0 Y:(float)a1 Z:(float)a2;
- (void)translateInScreenSpaceTo:(struct CGPoint { double x0; double x1; })a0 viewport:(struct CGSize { double x0; double x1; })a1;
- (struct { })unrolledWorldOrientation:(out float *)a0;
- (void)updateInertiaAtTime:(double)a0;
- (BOOL)useOrbitInteractionMode;

@end
