@class AnimationEngine, CinematicFramingSessionOptions;
@protocol FramingSpaceManager;

@interface RectangleAnimator : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectangle;
    struct { float x; float y; float w; float vx; float vy; float vw; } _currentState;
    AnimationEngine *_xAxisAnimationEngine;
    AnimationEngine *_yAxisAnimationEngine;
    AnimationEngine *_sizeAnimationEngine;
    id<FramingSpaceManager> _framingSpaceManager;
}

@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property (readonly, nonatomic) float xSpeed;
@property (readonly, nonatomic) float ySpeed;
@property (readonly, nonatomic) float sizeSpeed;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })driveAnimationToTarget:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)drivePivotAnimationsToTarget:(struct { float x0; float x1; float x2; float x3; float x4; float x5; })a0 withPivotDescriptions:(struct { float x0; float x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)driveWidthAnimationToTarget:(struct { float x0; float x1; float x2; float x3; float x4; float x5; })a0 withPivotDescriptions:(struct { float x0; float x1; })a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)driveXPivotWithLocation:(float)a0 velocity:(float)a1 pivotDescriptions:(struct { float x0; float x1; })a2 toTargetLocation:(float)a3 targetVelocity:(float)a4 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;
- (void)driveYPivotWithLocation:(float)a0 velocity:(float)a1 pivotDescriptions:(struct { float x0; float x1; })a2 toTargetLocation:(float)a3 targetVelocity:(float)a4 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a5;
- (id)initWithFramingSpaceManager:(id)a0;
- (void)resetToRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
